// Fill out your copyright notice in the Description page of Project Settings.


#include "SimpleVoxelChuck.h"
#include "DistanceFieldAtlas.h"
#include "SimpleVoxelActor.h"
#include "Materials/MaterialInstanceDynamic.h"

// Sets default values
ASimpleVoxelChuck::ASimpleVoxelChuck()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	SetRootComponent(CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent")));

	VoxelMesh = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("VoxelMesh"));
	VoxelMesh->SetupAttachment(RootComponent);

	FluidMesh = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("FluidMesh"));
	FluidMesh->SetupAttachment(RootComponent);

	VoxelMesh->bUseAsyncCooking = true;
	FluidMesh->bUseAsyncCooking = true;

	VoxelTask = new FAsyncTask<VoxelRenderDataTaskAD>(this);
	FluidTask = new FAsyncTask<FluidRenderDataTaskAD>(this);

	
}

void ASimpleVoxelChuck::PostActorCreated()
{
	if (!this->GetOwner())
	{
		return;
	}

	ASimpleVoxelActor* CacheSVA = Cast<ASimpleVoxelActor>(this->GetOwner());

	if (!CacheSVA)
	{
		return;
	}

	SetupVoxelChuck(CacheSVA->VoxelMaterial, CacheSVA->LiquidMaterial, CacheSVA->SpawningChuckLocation, CacheSVA->MaxVoxelPerChuckAmount, CacheSVA);
	
	CacheSVA->ActiveChuckList.Add(ChuckKey, this);

	if (!CacheSVA->HasChuckInitialized(ChuckKey))
	{
		FChuckData CacheData;

		CacheData.VoxelData.AddUninitialized(CacheSVA->CacheMaxVoxelIndex);
		CacheData.FluidData.AddUninitialized(CacheSVA->CacheMaxVoxelIndex);

		for (int32 i = 0; i < CacheSVA->CacheMaxVoxelIndex; i++)
		{
			CacheData.VoxelData[i] = FVoxelData(CacheSVA->IndexToGlobal(i, ChuckKey));
			CacheData.FluidData[i] = FFluidData(CacheSVA->IndexToGlobal(i, ChuckKey));
		}

		CacheSVA->ChuckData.Add(ChuckKey, CacheData);

		CacheSVA->InitializeChuck(ChuckKey, this);

		///Add Near Fluid To Update List///
		FIntVector MVPC = CacheSVA->MaxVoxelPerChuckAmount;

		TArray<FIntVector> StartPos = {
			FIntVector(0,0,MVPC.Z),
			FIntVector(0),
			FIntVector(0,MVPC.Y,0),
			FIntVector(0),
			FIntVector(MVPC.X,0,0),
			FIntVector(0),
		};

		TArray<FIntVector> EndPos = {
			MVPC,
			FIntVector(MVPC.X,MVPC.Y,0),
			MVPC,
			FIntVector(MVPC.X,0,MVPC.Z),
			MVPC,
			FIntVector(0,MVPC.Y,MVPC.Z),
		};

		TArray<FIntVector> ChuckPos = { FIntVector(0,0,-1),FIntVector(0,0,1),FIntVector(0,-1,0),FIntVector(0,1,0),FIntVector(-1,0,0),FIntVector(1,0,0) };

		//FIntVector TargetLocation = CacheSVA->LocalToGlobal(FIntVector(0), ChuckKey);

		for (int32 i = 0; i < 6; i++)
		{
			if (!CacheSVA->HasChuckInitialized(ChuckKey + ChuckPos[i]))
			{
				continue;
			}

			FIntVector CheckPos = ChuckKey + ChuckPos[i];
			FChuckData& ChuckPointer = CacheSVA->ChuckData.FindChecked(CheckPos);

			for (int32 X = StartPos[i].X; X < EndPos[i].X; X++)
			{
				for (int32 Y = StartPos[i].Y; Y < EndPos[i].Y; Y++)
				{
					for (int32 Z = StartPos[i].Z; Z < EndPos[i].Z; Z++)
					{
						FIntVector CPos = FIntVector(X, Y, Z);

						if (ChuckPointer.FluidData[CacheSVA->LocalToIndex(CPos)].Depth != 0)
						{
							CacheSVA->DirtyFluidList.Add(CacheSVA->LocalToGlobal(CPos, CheckPos));
						}
					}
				}
			}
		}
		///Add Near Fluid To Update List (End)///
	}
	
	CacheSVA = nullptr;
	return;
}

// Called when the game starts or when spawned
void ASimpleVoxelChuck::BeginPlay()
{
	Super::BeginPlay();

	VoxelMesh->SetComponentTickEnabled(false);
	FluidMesh->SetComponentTickEnabled(false);
}

void ASimpleVoxelChuck::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	VoxelTask->EnsureCompletion();
	delete VoxelTask;

	FluidTask->EnsureCompletion();
	delete FluidTask;

	MasterActor->ActiveChuckList.Remove(ChuckKey);
}

// Called every frame
void ASimpleVoxelChuck::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//Startup Function////////////////////////////////////////////////////

const FChuckData& ASimpleVoxelChuck::GetChuckData()
{
	return MasterActor->ChuckData.FindChecked(ChuckKey);
}

void ASimpleVoxelChuck::SetupVoxelChuck(UPARAM(ref)TArray<UMaterialInterface*>& VoxelMat, UMaterialInterface* FluidMat, FIntVector ChuckLoc, FIntVector ChuckSize, ASimpleVoxelActor* Controller)
{
	FScopeLock ScopeLockVoxel(&VoxelMutex);
	FScopeLock ScopeLockFluid(&FluidMutex);

	ChuckKey = ChuckLoc;

	ChuckGlobalPos = FIntVector(ChuckLoc.X * Controller->MaxVoxelPerChuckAmount.X, ChuckLoc.Y * Controller->MaxVoxelPerChuckAmount.Y, ChuckLoc.Z * Controller->MaxVoxelPerChuckAmount.Z);

	int32 H = (Controller->MaxVoxelPerChuckAmount.X + 2) * (Controller->MaxVoxelPerChuckAmount.Z + 2);
	int32 V = Controller->MaxVoxelPerChuckAmount.Y + 2;

	CustomColorImage = NewObject<UDynTexture>(this);
	CustomColorImage->InitializeCanvas(H, V);
	
	FlowMapImage = NewObject<UDynTexture>(this);
	FlowMapImage->InitializeCanvas(H, V);

	VisibleMapImage = NewObject<UDynTexture>(this);
	VisibleMapImage->InitializeCanvas(H, V);

	for (int i = 0; i < VoxelMat.Num(); i++)
	{
		UMaterialInstanceDynamic* DynMaterial = UMaterialInstanceDynamic::Create(VoxelMat[i], this);

		DynMaterial->SetTextureParameterValue(FName(TEXT("ChuckCustomColorImage")), CustomColorImage->RenderTexture);
		DynMaterial->SetTextureParameterValue(FName(TEXT("ChuckFluidFlowMapImage")), FlowMapImage->RenderTexture);
		DynMaterial->SetTextureParameterValue(FName(TEXT("ChuckVisibleMapImage")), VisibleMapImage->RenderTexture);
		DynMaterial->SetVectorParameterValue(FName(TEXT("VoxelScale")), FLinearColor(Controller->VoxelScale));
		DynMaterial->SetVectorParameterValue(FName(TEXT("MaxVoxelPerChuck")), FLinearColor(Controller->MaxVoxelPerChuckAmount.X, Controller->MaxVoxelPerChuckAmount.Y, Controller->MaxVoxelPerChuckAmount.Z));

		VoxelMesh->SetMaterial(i, DynMaterial);
	}

	VoxelMaterialNum = VoxelMat.Num();

	UMaterialInstanceDynamic* DynMaterial = UMaterialInstanceDynamic::Create(FluidMat, this);

	DynMaterial->SetTextureParameterValue(FName(TEXT("ChuckCustomColorImage")), CustomColorImage->RenderTexture);
	DynMaterial->SetTextureParameterValue(FName(TEXT("ChuckFluidFlowMapImage")), FlowMapImage->RenderTexture);
	DynMaterial->SetTextureParameterValue(FName(TEXT("ChuckVisibleMapImage")), VisibleMapImage->RenderTexture);
	DynMaterial->SetVectorParameterValue(FName(TEXT("VoxelScale")), FLinearColor(Controller->VoxelScale));
	DynMaterial->SetVectorParameterValue(FName(TEXT("MaxVoxelPerChuck")), FLinearColor(Controller->MaxVoxelPerChuckAmount.X, Controller->MaxVoxelPerChuckAmount.Y, Controller->MaxVoxelPerChuckAmount.Z));

	FluidRenderData = FVoxelRenderData();
	FluidMesh->SetMaterial(0, DynMaterial);

	FluidTriIndex = 0;

	MasterActor = Controller;

	return;
}

//Mesh Generator///////////////////////////////////////////////////////////////////////////////////////////////

void ASimpleVoxelChuck::UpdateImage()
{
	FIntVector CacheGlobalLocation;
	FIntPoint ImagePos;

	for (int32 Z = 0; Z < MasterActor->MaxVoxelPerChuckAmount.Z + 2; Z++)
	{
		for (int32 Y = 0; Y < MasterActor->MaxVoxelPerChuckAmount.Y + 2; Y++)
		{
			for (int32 X = 0; X < MasterActor->MaxVoxelPerChuckAmount.X + 2; X++)
			{
				CacheGlobalLocation = ChuckGlobalPos + FIntVector(X, Y, Z) - FIntVector(1);
				ImagePos = FIntPoint(X + (Z * (MasterActor->MaxVoxelPerChuckAmount.X + 2)), Y);
				FColor CacheColor;

				if (MasterActor->IsFluidVisible(CacheGlobalLocation, false))  //Is Fluid
				{
					CustomColorImage->setPixelColor(ImagePos, MasterActor->GetFluidData(CacheGlobalLocation).CustomData);
					
					VisibleMapImage->setPixelColor(ImagePos, FColor(0, 255, 0, 0));
				
					FIntVector CacheFlow = MasterActor->GetFluidData(CacheGlobalLocation).FlowFrom;
					CacheColor.R = CacheFlow.X == 0 ? (uint8)128 : CacheFlow.X > 0 ? (uint8)255 : (uint8)0;
					CacheColor.G = CacheFlow.Y == 0 ? (uint8)128 : CacheFlow.X > 0 ? (uint8)255 : (uint8)0;
					CacheColor.B = CacheFlow.Z == 0 ? (uint8)128 : CacheFlow.X > 0 ? (uint8)255 : (uint8)0;
					CacheColor.A = MasterActor->GetFluidData(CacheGlobalLocation).Depth;
				
					FlowMapImage->setPixelColor(ImagePos, CacheColor);

					continue;
				}

				if (MasterActor->IsVoxelVisible(CacheGlobalLocation, -1, true)) //Is Voxel
				{
					CustomColorImage->setPixelColor(ImagePos, MasterActor->GetVoxelData(CacheGlobalLocation).VoxelCustomData);

					VisibleMapImage->setPixelColor(ImagePos, FColor(255, 0, 0, 0));

					FlowMapImage->setPixelColor(ImagePos, FColor(128, 128, 128, 0));

					continue;
				}

				//Is Empty
				CustomColorImage->setPixelColor(ImagePos, FColor(0));

				VisibleMapImage->setPixelColor(ImagePos, FColor(0));

				FlowMapImage->setPixelColor(ImagePos, FColor(128, 128, 128, 0));
			}
		}
	}

	return;
}

void ASimpleVoxelChuck::CreateVoxelRenderDataGM()
{
	if (VoxelTask->IsDone())
	{
		MasterActor->IncrementVoxelThreadCounter();

		VoxelTask->StartBackgroundTask(MasterActor->ChuckThreadPool);
	}

	return;
}

void ASimpleVoxelChuck::CreateVoxelRenderDataGMDone()
{
	AsyncTask(ENamedThreads::GameThread, [=]()
	{
		//UE_LOG(LogTemp, Warning, TEXT("Done %d"), VoxelRenderData[0].Vertices.Num());

		if (AutoRender)
		{
			RenderVoxelMesh();
		}

		MasterActor->DecrementVoxelThreadCounter();
		OnVoxelRenderUpdate(VoxelEventDataAdd, VoxelEventDataRemove);

		VoxelEventDataAdd.Empty();
		VoxelEventDataRemove.Empty();
	});
}

void ASimpleVoxelChuck::CreateFluidRenderDataGM()
{
	if (FluidTask->IsDone())
	{
		MasterActor->IncrementFluidThreadCounter();
		//MasterActor->ReadAccessLock->Reset();

		FluidTask->StartBackgroundTask(MasterActor->ChuckThreadPool);
	}

	return;
}

void ASimpleVoxelChuck::CreateFluidRenderDataGMDone()
{
	AsyncTask(ENamedThreads::GameThread, [=]()
		{
			if (AutoRender)
			{
				RenderFluidMesh();
			}

			MasterActor->DecrementFluidThreadCounter();
			OnFluidRenderUpdate(FluidEventDataAdd, FluidEventDataRemove);

			FluidEventDataAdd.Empty();
			FluidEventDataRemove.Empty();
		});
}

void ASimpleVoxelChuck::RenderVoxelMesh()
{
	FScopeLock ScopeLock(&VoxelMutex);

	//UE_LOG(LogTemp, Warning, TEXT("Render %d"), VoxelRenderData[0].Vertices.Num());

	CustomColorImage->UpdateCanvas();
	VisibleMapImage->UpdateCanvas();;
	FlowMapImage->UpdateCanvas();;

	for (int i = 0; i < VoxelRenderData.Num(); i++)
	{
		VoxelMesh->CreateMeshSection(i, VoxelRenderData[i].Vertices, VoxelRenderData[i].Triangles, VoxelRenderData[i].Normals, VoxelRenderData[i].UV0, VoxelRenderData[i].UV1, VoxelRenderData[i].UV2, VoxelRenderData[i].UV3, VoxelRenderData[i].VertexColors, VoxelRenderData[i].Tangents, MasterActor->CreateCollision);
	
		if (VoxelRenderData[i].Vertices.Num() == 0 || !MasterActor->ChuckRender)
		{
			VoxelMesh->SetMeshSectionVisible(i, false);

			continue;
		}
	}

	return;
}

void ASimpleVoxelChuck::RenderFluidMesh()
{
	FScopeLock ScopeLock(&FluidMutex);

	CustomColorImage->UpdateCanvas();
	VisibleMapImage->UpdateCanvas();
	FlowMapImage->UpdateCanvas();;

	FluidMesh->CreateMeshSection(0, FluidRenderData.Vertices, FluidRenderData.Triangles, FluidRenderData.Normals, FluidRenderData.UV0, FluidRenderData.UV1, FluidRenderData.UV2, FluidRenderData.UV3, FluidRenderData.VertexColors, FluidRenderData.Tangents, MasterActor->CreateCollision);

	if (FluidRenderData.Vertices.Num() == 0 || !MasterActor->ChuckRender)
	{
		FluidMesh->SetMeshSectionVisible(0, false);

		return;
	}

	return;
}

