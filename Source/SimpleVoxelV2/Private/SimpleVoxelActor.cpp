// Fill out your copyright notice in the Description page of Project Settings.


#include "SimpleVoxelActor.h"
#include "SimpleVoxelChuck.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "Misc/MessageDialog.h"
#include "Async/Async.h"

DEFINE_LOG_CATEGORY(LogSVA);

bool FFluidData::operator!=(const FFluidData& Other) const
{
	return Depth != Other.Depth || CustomData != Other.CustomData || FlowDelay != Other.FlowDelay || MaxPressure != Other.MaxPressure;
}

bool FVoxelData::operator!=(const FVoxelData& Other) const
{
	return VoxelMaterial != Other.VoxelMaterial || VoxelCustomData != Other.VoxelCustomData;
}

// Sets default values

ASimpleVoxelActor::ASimpleVoxelActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ChuckThreadPool = FQueuedThreadPool::Allocate();
	ChuckThreadPool->Create(12, 512, EThreadPriority::TPri_Highest, TEXT("VoxelChuckThreadPool"));

	FluidSimStepTask = new FAsyncTask<FluidSimStepTaskAD>(this);
}

ASimpleVoxelActor::~ASimpleVoxelActor()
{
	ChuckThreadPool->Destroy();
	delete ChuckThreadPool;
	ChuckThreadPool = nullptr;
}

void ASimpleVoxelActor::OnConstruction(const FTransform& Transform)
{
	CacheVoxelDistance = VoxelScale * 100;
	CacheChuckDistance = CacheVoxelDistance * (FVector)MaxVoxelPerChuckAmount;
	CacheMaxVoxelIndex = MaxVoxelPerChuckAmount.X * MaxVoxelPerChuckAmount.Y * MaxVoxelPerChuckAmount.Z;

	if (*SpawnChuckClass == nullptr)
	{
		UE_LOG(LogSVA, Error, TEXT("SpawnChuckClass is nullptr, fix before run"));
	}
}

// Called when the game starts or when spawned

void ASimpleVoxelActor::BeginPlay()
{
	CacheVoxelDistance = VoxelScale * 100;
	CacheChuckDistance = CacheVoxelDistance * (FVector)MaxVoxelPerChuckAmount;
	CacheMaxVoxelIndex = MaxVoxelPerChuckAmount.X * MaxVoxelPerChuckAmount.Y * MaxVoxelPerChuckAmount.Z;

	if (!*SpawnChuckClass)
	{
		UE_LOG(LogSVA, Error, TEXT("SpawnChuck Class is Null"));

		FMessageDialog::Debugf(FText::FromString("SpawnChuck Class is Null"));

		UKismetSystemLibrary::QuitGame(this, nullptr, EQuitPreference::Quit, false);
	}

	Super::BeginPlay();
}

void ASimpleVoxelActor::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	FluidSimStepTask->EnsureCompletion();
	delete FluidSimStepTask;
}

// Called every frame

void ASimpleVoxelActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (VoxelAccessThreadCount == 0)
	{
		if (UpdateVoxelNextFrame)
		{
			UpdateVoxelChuck(false);
		}
	}

	if (FluidAccessThreadCount == 0)
	{
		if (UpdateFluidNextFrame)
		{
			UpdateFluidChuck(false);
		}
	}
}

/// Thread ///
void ASimpleVoxelActor::DecrementVoxelThreadCounter()
{
	VoxelAccessThreadCount--;
	//UE_LOG(LogTemp, Warning, TEXT("Count %d"), AccessThreadCount);
	CallGameThreadJob();

	return;
}

void ASimpleVoxelActor::IncrementVoxelThreadCounter()
{
	VoxelAccessThreadCount++;
	//UE_LOG(LogTemp, Warning, TEXT("Count %d"), AccessThreadCount);

	return;
}

void ASimpleVoxelActor::DecrementFluidThreadCounter()
{
	FluidAccessThreadCount--;
	CallGameThreadJob();

	return;
}

void ASimpleVoxelActor::IncrementFluidThreadCounter()
{
	FluidAccessThreadCount++;

	return;
}

void ASimpleVoxelActor::CallGameThreadJob()
{
	if (VoxelAccessThreadCount == 0 && FluidAccessThreadCount == 0)
	{
		TArray<FSingleThreadJobData> NextQueue;

		for (FSingleThreadJobData& value : GameThreadJobQueue)
		{
			switch (value.JobType)
			{
			case ESingleThreadJobType::ActiveChuck: 
				if (VoxelAccessThreadCount == 0 && FluidAccessThreadCount == 0)
				{
					ActiveChuck(value.IntVectorArray[0], value.AddToRenderQueue);
				}
				else
				{
					NextQueue.Add(value);
				}
				break;
			case ESingleThreadJobType::SetFluid: 
				if (FluidAccessThreadCount == 0)
				{
					SetFluidLocal(value.IntVectorArray[0], value.IntVectorArray[1], value.UInt8Array[0], value.ColorArray[0], value.UInt8Array[1], value.UInt8Array[2], value.AddToRenderQueue);
				}
				else
				{
					NextQueue.Add(value);
				}
				break;
			case ESingleThreadJobType::SetVoxel: 
				if (VoxelAccessThreadCount == 0)
				{
					SetVoxelLocal(value.IntVectorArray[0], value.IntVectorArray[1], value.Int32Array[0], value.ColorArray[0], value.AddToRenderQueue);
				}
				else
				{
					NextQueue.Add(value);
				}
				break;
			}
		}

		GameThreadJobQueue = NextQueue;
	}
}

///Manager///
void ASimpleVoxelActor::CompleteAllUpdate()
{
	UpdateVoxelChuck(false);

	UpdateFluidChuck(false);

	return;
}

void ASimpleVoxelActor::Reset()
{
	DirtyVoxelChuckList.Empty();
	DirtyFluidChuckList.Empty();
	DirtyFluidList.Empty();

	ChuckData.Empty();

	for (TPair<FIntVector, ASimpleVoxelChuck*>& value : ActiveChuckList)
	{
		DeactiveChuck(value.Key);
	}

	return;
}

void ASimpleVoxelActor::GetSaveData(TMap<FIntVector, FChuckData>& OutChuckData, TSet<FIntVector>& FluidUpdateList)
{
	CompleteAllUpdate();

	OutChuckData = ChuckData;
	FluidUpdateList = DirtyFluidList;

	return;
}

void ASimpleVoxelActor::LoadSaveData(UPARAM(ref)TMap<FIntVector, FChuckData>& OutChuckData, UPARAM(ref)TSet<FIntVector>& FluidUpdateList)
{
	Reset();

	ChuckData = OutChuckData;
	DirtyFluidList = FluidUpdateList;

	return;
}

///Validation///

bool ASimpleVoxelActor::HasChuckInitialized(const FIntVector ChuckLocation)
{
	return ChuckData.Contains(ChuckLocation);
}

bool ASimpleVoxelActor::IsChuckActive(const FIntVector ChuckLocation)
{
	return ActiveChuckList.Contains(ChuckLocation);
}

///Data Collector///

bool ASimpleVoxelActor::IsVoxelVisible(const FIntVector VoxelLocation, const int32 CheckMaterial, const bool NotEqual)
{
	if (!HasChuckInitialized(FindChuckByGlobal(VoxelLocation)) || GlobalToIndex(VoxelLocation) == -1)
	{
		return false;
	}

	if (NotEqual)
	{
		return !(ChuckData.FindChecked(FindChuckByGlobal(VoxelLocation)).VoxelData[GlobalToIndex(VoxelLocation)].VoxelMaterial == CheckMaterial);
	}
	else
	{
		return ChuckData.FindChecked(FindChuckByGlobal(VoxelLocation)).VoxelData[GlobalToIndex(VoxelLocation)].VoxelMaterial == CheckMaterial;
	}
}

FVoxelData ASimpleVoxelActor::GetVoxelData(const FIntVector GlobalLocation)
{
	if (!HasChuckInitialized(FindChuckByGlobal(GlobalLocation)) || GlobalToIndex(GlobalLocation) == -1)
	{
		return FVoxelData();
	}

	return ChuckData.FindChecked(FindChuckByGlobal(GlobalLocation)).VoxelData[GlobalToIndex(GlobalLocation)];
}

FFluidData ASimpleVoxelActor::GetFluidData(const FIntVector GlobalLocation)
{
	if (!HasChuckInitialized(FindChuckByGlobal(GlobalLocation)) || GlobalToIndex(GlobalLocation) == -1)
	{
		return FFluidData();
	}

	return ChuckData.FindChecked(FindChuckByGlobal(GlobalLocation)).FluidData[GlobalToIndex(GlobalLocation)];
}

bool ASimpleVoxelActor::IsFluidVisible(const FIntVector FluidLocation, const bool NotEqual)
{
	if (!HasChuckInitialized(FindChuckByGlobal(FluidLocation)) || GlobalToIndex(FluidLocation) == -1)
	{
		return false;
	}

	if (NotEqual)
	{
		return !(ChuckData.FindChecked(FindChuckByGlobal(FluidLocation)).FluidData[GlobalToIndex(FluidLocation)].Depth != 0);
	}
	else
	{
		return ChuckData.FindChecked(FindChuckByGlobal(FluidLocation)).FluidData[GlobalToIndex(FluidLocation)].Depth != 0;
	}
}

TArray<FIntVector> ASimpleVoxelActor::GetVoxelSphereMask(const FIntVector Location, const int32 Size)
{
	TArray<FIntVector> CacheOutput;

	int32 Radius = Size * Size;

	for (int32 X = Location.X - Size; X <= Location.X + Size; X++)
	{
		for (int32 Y = Location.Y - Size; Y <= Location.Y + Size; Y++)
		{
			for (int32 Z = Location.Z - Size; Z <= Location.Z + Size; Z++)
			{
				FIntVector CacheLocation = FIntVector(X, Y, Z);

				FIntVector CachePos = FIntVector(FMath::Abs(CacheLocation.X - Location.X), FMath::Abs(CacheLocation.Y - Location.Y), FMath::Abs(CacheLocation.Z - Location.Z));

				CachePos.X = FMath::Pow(CachePos.X, 2);
				CachePos.Y = FMath::Pow(CachePos.Y, 2);
				CachePos.Z = FMath::Pow(CachePos.Z, 2);

				if (CachePos.X + CachePos.Y + CachePos.Z < Radius)
				{
					CacheOutput.Add(CacheLocation);
				}
			}
		}
	}

	return CacheOutput;
}

TArray<FIntVector> ASimpleVoxelActor::GetVoxelBoxMask(const FIntVector Location, const int32 Size)
{
	TArray<FIntVector> CacheOutput;

	for (int32 X = Location.X - Size; X <= Location.X + Size; X++)
	{
		for (int32 Y = Location.Y - Size; Y <= Location.Y + Size; Y++)
		{
			for (int32 Z = Location.Z - Size; Z <= Location.Z + Size; Z++)
			{
				CacheOutput.Add(FIntVector(X, Y, Z));
			}
		}
	}

	return CacheOutput;
}

TArray<FIntVector> ASimpleVoxelActor::GetVoxelAreaMask(const FIntVector StartLocation, const FIntVector EndLocation)
{
	TArray<FIntVector> CacheOutput;

	for (int32 X = StartLocation.X; X <= EndLocation.X; X++)
	{
		for (int32 Y = StartLocation.Y; Y <= EndLocation.Y; Y++)
		{
			for (int32 Z = StartLocation.Z; Z <= EndLocation.Z; Z++)
			{
				CacheOutput.Add(FIntVector(X, Y, Z));
			}
		}
	}

	return CacheOutput;
}

bool ASimpleVoxelActor::VoxelDirectionTrace(const FIntVector StartLocation, const FIntVector Direction, const int32 LoopTime, FVoxelData& Result)
{
	FIntVector CurrentLocation = StartLocation;

	for (int32 i = 0; i < LoopTime; i++)
	{
		if (IsVoxelVisible(CurrentLocation, -1, true))
		{
			Result = GetVoxelData(CurrentLocation);

			return true;
		}

		CurrentLocation += Direction;
	}

	return false;
}

bool ASimpleVoxelActor::FluidDirectionTrace(const FIntVector StartLocation, const FIntVector Direction, const int32 LoopTime, FFluidData& Result)
{
	FIntVector CurrentLocation = StartLocation;

	for (int32 i = 0; i < LoopTime; i++)
	{
		if (IsVoxelVisible(CurrentLocation, -1, true))
		{
			Result = GetFluidData(CurrentLocation);

			return true;
		}

		CurrentLocation += Direction;
	}

	return false;
}

///Converter///

FIntVector ASimpleVoxelActor::IndexToLocal(const int Index)
{
	if (Index >= CacheMaxVoxelIndex || Index < 0)
	{
		return FIntVector(-1);
	}

	return FIntVector(Index % MaxVoxelPerChuckAmount.Y, (Index % (MaxVoxelPerChuckAmount.Y * MaxVoxelPerChuckAmount.X)) / MaxVoxelPerChuckAmount.Y, Index / (MaxVoxelPerChuckAmount.Y * MaxVoxelPerChuckAmount.X));
}

FIntVector ASimpleVoxelActor::IndexToGlobal(const int Index, const FIntVector ChuckLocation)
{
	if (Index >= CacheMaxVoxelIndex || Index < 0 || ChuckLocation.X < 0 || ChuckLocation.Y < 0 || ChuckLocation.Z < 0)
	{
		return FIntVector(-1);
	}

	FIntVector Local = FIntVector(Index % MaxVoxelPerChuckAmount.Y, (Index % (MaxVoxelPerChuckAmount.Y * MaxVoxelPerChuckAmount.X)) / MaxVoxelPerChuckAmount.Y, Index / (MaxVoxelPerChuckAmount.Y * MaxVoxelPerChuckAmount.X));
	FIntVector Start = FIntVector(ChuckLocation.X * MaxVoxelPerChuckAmount.X, ChuckLocation.Y * MaxVoxelPerChuckAmount.Y, ChuckLocation.Z * MaxVoxelPerChuckAmount.Z);

	return Start + Local;
}

int ASimpleVoxelActor::LocalToIndex(const FIntVector Location)
{
	if (Location.X >= MaxVoxelPerChuckAmount.X || Location.X < 0 || 
		Location.Y >= MaxVoxelPerChuckAmount.Y || Location.Y < 0 || 
		Location.Z >= MaxVoxelPerChuckAmount.Z || Location.Z < 0)
	{
		return -1;
	}

	return Location.X + (Location.Y * MaxVoxelPerChuckAmount.X) + (Location.Z * MaxVoxelPerChuckAmount.Y * MaxVoxelPerChuckAmount.X);
}

FIntVector ASimpleVoxelActor::LocalToGlobal(const FIntVector Location, const FIntVector ChuckLocation)
{
	if (Location.X < 0 || Location.Y < 0 || Location.Z < 0 || 
		ChuckLocation.X < 0 || ChuckLocation.Y < 0 || ChuckLocation.Z < 0)
	{
		return FIntVector(-1);
	}
	else
	{
		return FIntVector(ChuckLocation.X * MaxVoxelPerChuckAmount.X, ChuckLocation.Y * MaxVoxelPerChuckAmount.Y, ChuckLocation.Z * MaxVoxelPerChuckAmount.Z) + Location;
	}
}

int ASimpleVoxelActor::GlobalToIndex(const FIntVector Location)
{
	if (Location.X < 0 || Location.Y < 0 || Location.Z < 0)
	{
		return -1;
	}

	return LocalToIndex(FIntVector(	Location.X % MaxVoxelPerChuckAmount.X, 
									Location.Y % MaxVoxelPerChuckAmount.Y, 
									Location.Z % MaxVoxelPerChuckAmount.Z));
}

FIntVector ASimpleVoxelActor::GlobalToLocal(const FIntVector Location)
{
	if (Location.X < 0 || Location.Y < 0 || Location.Z < 0)
	{
		return FIntVector(-1);
	}

	return FIntVector(	Location.X % MaxVoxelPerChuckAmount.X, 
						Location.Y % MaxVoxelPerChuckAmount.Y, 
						Location.Z % MaxVoxelPerChuckAmount.Z);
}

FIntVector ASimpleVoxelActor::FindChuckByGlobal(const FIntVector Location)
{
	if (Location.X < 0 || Location.Y < 0 || Location.Z < 0)
	{
		return FIntVector(-1);
	}

	return
		FIntVector(	Location.X / MaxVoxelPerChuckAmount.X,
					Location.Y / MaxVoxelPerChuckAmount.Y,
					Location.Z / MaxVoxelPerChuckAmount.Z);
}

///Chuck///

bool ASimpleVoxelActor::FillChuckWithVoxel(FIntVector ChuckLocation, int32 Material, FColor CustomData, bool AddToRenderQueue)
{
	if (!HasChuckInitialized(ChuckLocation))
	{
		return false;
	}

	for (int32 X = 0; X < MaxVoxelPerChuckAmount.X; X++)
	{
		for (int32 Y = 0; Y < MaxVoxelPerChuckAmount.Y; Y++)
		{
			for (int32 Z = 0; Z < MaxVoxelPerChuckAmount.Z; Z++)
			{
				SetVoxelLocal(FIntVector(X, Y, Z), ChuckLocation, Material, CustomData, false);
			}
		}
	}

	AddDirtyVoxelChuck(ChuckLocation, AddToRenderQueue);
	AddDirtyFluidChuck(ChuckLocation, AddToRenderQueue);

	return true;
}

bool ASimpleVoxelActor::InitializeChuck_Implementation(const FIntVector ChuckLocation, ASimpleVoxelChuck* ChuckActor)
{
	for (int32 i = 0; i < CacheMaxVoxelIndex; i++)
	{
		ChuckData.Find(ChuckLocation)->VoxelData[i] = FVoxelData(ChuckData.Find(ChuckLocation)->VoxelData[i].GlobalLocation, 0, FColor(255, 255, 255));
	}

	return true;
}

bool ASimpleVoxelActor::ActiveChuckInScene(ASimpleVoxelChuck* ChuckActor, const FIntVector ChuckLocation, const bool AddToRenderQueue)
{
	if (!ChuckActor)
	{
		return false;
	}

	if (VoxelAccessThreadCount > 0 || FluidAccessThreadCount > 0)
	{
		return false;
	}

	SpawningChuckLocation = ChuckLocation;

	ChuckActor->SetOwner(this);
	ChuckActor->PostActorCreated();

	AddDirtyVoxelChuck(ChuckLocation, AddToRenderQueue);
	AddDirtyFluidChuck(ChuckLocation, AddToRenderQueue);

	return true;
}

bool ASimpleVoxelActor::ActiveChuck(const FIntVector ChuckLocation, const bool AddToRenderQueue)
{
	if (ActiveChuckList.Contains(ChuckLocation))
	{
		return false;
	}

	if (VoxelAccessThreadCount > 0 || FluidAccessThreadCount > 0)
	{
		GameThreadJobQueue.Add(FSingleThreadJobData(ESingleThreadJobType::ActiveChuck, { ChuckLocation }, {}, {}, {}, AddToRenderQueue));

		return true;
	}

	SpawningChuckLocation = ChuckLocation;
	
	FActorSpawnParameters SpawnInfo;
	SpawnInfo.Owner = this;
	
	ASimpleVoxelChuck* SpawnActor = GetWorld()->SpawnActor<ASimpleVoxelChuck>(SpawnChuckClass, ((FVector)ChuckLocation * CacheChuckDistance) + this->GetActorLocation(), FRotator(0, 0, 0), SpawnInfo);
	
	if (SpawnActor)
	{
		AddDirtyVoxelChuck(ChuckLocation, AddToRenderQueue);
		AddDirtyFluidChuck(ChuckLocation, AddToRenderQueue);

		return true;
	}

	return false;
}

bool ASimpleVoxelActor::DeactiveChuck(const FIntVector ChuckLocation)
{
	if (!ActiveChuckList.Contains(ChuckLocation))
	{
		return false;
	}

	ActiveChuckList.FindChecked(ChuckLocation)->Destroy();

	return true;
}

bool ASimpleVoxelActor::AddDirtyVoxelChuck(const FIntVector ChuckLocation, const bool Update)
{
	if (!ActiveChuckList.Contains(ChuckLocation) || !Update)
	{
		return false;
	}

	DirtyVoxelChuckList.Add(ChuckLocation);
	if (ActiveChuckList.Contains(ChuckLocation + FIntVector(1, 0, 0))) { DirtyVoxelChuckList.Add(ChuckLocation + FIntVector(1, 0, 0)); }
	if (ActiveChuckList.Contains(ChuckLocation + FIntVector(0, 1, 0))) { DirtyVoxelChuckList.Add(ChuckLocation + FIntVector(0, 1, 0)); }
	if (ActiveChuckList.Contains(ChuckLocation + FIntVector(0, 0, 1))) { DirtyVoxelChuckList.Add(ChuckLocation + FIntVector(0, 0, 1)); }
	if (ActiveChuckList.Contains(ChuckLocation - FIntVector(1, 0, 0))) { DirtyVoxelChuckList.Add(ChuckLocation - FIntVector(1, 0, 0)); }
	if (ActiveChuckList.Contains(ChuckLocation - FIntVector(0, 1, 0))) { DirtyVoxelChuckList.Add(ChuckLocation - FIntVector(0, 1, 0)); }
	if (ActiveChuckList.Contains(ChuckLocation - FIntVector(0, 0, 1))) { DirtyVoxelChuckList.Add(ChuckLocation - FIntVector(0, 0, 1)); }

	UpdateVoxelNextFrame = Update || UpdateVoxelNextFrame;

	return true;
}

bool ASimpleVoxelActor::AddDirtyFluidChuck(const FIntVector ChuckLocation, const bool Update)
{
	if (!ActiveChuckList.Contains(ChuckLocation) || !Update)
	{
		return false;
	}

	DirtyFluidChuckList.Add(ChuckLocation);
	if (ActiveChuckList.Contains(ChuckLocation + FIntVector(1, 0, 0))) { DirtyFluidChuckList.Add(ChuckLocation + FIntVector(1, 0, 0)); }
	if (ActiveChuckList.Contains(ChuckLocation + FIntVector(0, 1, 0))) { DirtyFluidChuckList.Add(ChuckLocation + FIntVector(0, 1, 0)); }
	if (ActiveChuckList.Contains(ChuckLocation + FIntVector(0, 0, 1))) { DirtyFluidChuckList.Add(ChuckLocation + FIntVector(0, 0, 1)); }
	if (ActiveChuckList.Contains(ChuckLocation - FIntVector(1, 0, 0))) { DirtyFluidChuckList.Add(ChuckLocation - FIntVector(1, 0, 0)); }
	if (ActiveChuckList.Contains(ChuckLocation - FIntVector(0, 1, 0))) { DirtyFluidChuckList.Add(ChuckLocation - FIntVector(0, 1, 0)); }
	if (ActiveChuckList.Contains(ChuckLocation - FIntVector(0, 0, 1))) { DirtyFluidChuckList.Add(ChuckLocation - FIntVector(0, 0, 1)); }

	UpdateFluidNextFrame = Update || UpdateFluidNextFrame;

	return true;
}

bool ASimpleVoxelActor::UpdateVoxelChuck(const bool Force)
{
	if (ActiveChuckList.Num() == 0)
	{
		return false;
	}

	if (Force)
	{
		TArray<ASimpleVoxelChuck*> CacheArray;

		ActiveChuckList.GenerateValueArray(CacheArray);

		for (ASimpleVoxelChuck*& Value : CacheArray)
		{
			Value->CreateVoxelRenderDataGM();
		}
	}
	else
	{
		for (FIntVector& Value : DirtyVoxelChuckList)
		{
			if (ActiveChuckList.Contains(Value))
			{
				(*ActiveChuckList.Find(Value))->CreateVoxelRenderDataGM();
			}
		}
	}

	DirtyVoxelChuckList.Empty();

	UpdateVoxelNextFrame = false;

	return true;
}

bool ASimpleVoxelActor::UpdateFluidChuck(const bool Force)
{
	if (ActiveChuckList.Num() == 0)
	{
		return false;
	}

	TArray<ASimpleVoxelChuck*> CacheArray;

	if (Force)
	{
		ActiveChuckList.GenerateValueArray(CacheArray);

		for (ASimpleVoxelChuck*& Value : CacheArray)
		{
			Value->CreateFluidRenderDataGM();
		}
	}
	else
	{
		for (FIntVector& Value : DirtyFluidChuckList)
		{
			if (ActiveChuckList.Contains(Value))
			{
				(*ActiveChuckList.Find(Value))->CreateFluidRenderDataGM();
			}
		}
	}

	DirtyFluidChuckList.Empty();

	UpdateFluidNextFrame = false;

	return true;
}

///Voxel///

bool ASimpleVoxelActor::SetVoxelLocal(FIntVector VoxelLocation, FIntVector ChuckLocation, int32 Material, FColor CustomData, bool AddToRenderQueue)
{
	if (VoxelAccessThreadCount > 0)
	{
		GameThreadJobQueue.Add(FSingleThreadJobData(ESingleThreadJobType::SetVoxel, { VoxelLocation, ChuckLocation }, {}, { Material }, { CustomData }, AddToRenderQueue));

		return true;
	}

	//ReadAccessLock->Wait();

	if (VoxelLocation.X < 0 || VoxelLocation.Y < 0 || VoxelLocation.Z < 0 || 
		!HasChuckInitialized(ChuckLocation) ||
		VoxelLocation.X >= MaxVoxelPerChuckAmount.X || VoxelLocation.Y >= MaxVoxelPerChuckAmount.Y || VoxelLocation.Z >= MaxVoxelPerChuckAmount.Z)
	{
		return false;
	}

	FChuckData& EditableChuckData = ChuckData.FindChecked(ChuckLocation);

	int32 VoxelIndex = LocalToIndex(VoxelLocation);

	FVoxelData CacheData = FVoxelData(EditableChuckData.VoxelData[VoxelIndex].GlobalLocation, Material, CustomData);

	if (EditableChuckData.VoxelData[VoxelIndex] != CacheData)
	{
		if (IsFluidVisible(LocalToGlobal(VoxelLocation, ChuckLocation), false))
		{
			SetFluidLocal(VoxelLocation, ChuckLocation, 0, FColor(0), 0, 1, AddToRenderQueue);
		}

		if (IsChuckActive(ChuckLocation))
		{
			if (EditableChuckData.VoxelData[VoxelIndex].VoxelMaterial != -1 && CacheData.VoxelMaterial == -1)
			{
				(*ActiveChuckList.Find(ChuckLocation))->VoxelEventDataRemove.Add(EditableChuckData.VoxelData[VoxelIndex]);
			}
			else if (EditableChuckData.VoxelData[VoxelIndex].VoxelMaterial == -1 && CacheData.VoxelMaterial != -1)
			{
				(*ActiveChuckList.Find(ChuckLocation))->VoxelEventDataAdd.Add(CacheData);
			}
		}

		EditableChuckData.VoxelData[VoxelIndex] = CacheData;

		AddDirtyVoxelChuck(ChuckLocation, AddToRenderQueue);
	}

	return true;
}

bool ASimpleVoxelActor::SetVoxel(FIntVector GlobalLocation, int32 Material, FColor CustomData, bool AddToRenderQueue)
{
	return SetVoxelLocal(GlobalToLocal(GlobalLocation), FindChuckByGlobal(GlobalLocation), Material, CustomData, AddToRenderQueue);
}

bool ASimpleVoxelActor::SetVoxelsLocal(TArray<FIntVector> VoxelsLocation, FIntVector ChuckLocation, int32 Material, FColor CustomData, bool AddToRenderQueue)
{
	if (!HasChuckInitialized(ChuckLocation))
	{
		return false;
	}

	for (FIntVector& Data : VoxelsLocation)
	{
		SetVoxelLocal(Data, ChuckLocation, Material, CustomData, false);
	}

	AddDirtyVoxelChuck(ChuckLocation, AddToRenderQueue);
	AddDirtyFluidChuck(ChuckLocation, AddToRenderQueue);

	return true;
}

bool ASimpleVoxelActor::UpdateVoxelsLocal(TArray<FIntVector> VoxelsLocation, FIntVector ChuckLocation, FColor CustomData, bool AddToRenderQueue)
{
	if (!HasChuckInitialized(ChuckLocation))
	{
		return false;
	}

	for (FIntVector& Data : VoxelsLocation)
	{
		SetVoxelLocal(Data, ChuckLocation, ChuckData.Find(ChuckLocation)->VoxelData[LocalToIndex(Data)].VoxelMaterial, CustomData, false);
	}

	AddDirtyVoxelChuck(ChuckLocation, AddToRenderQueue);
	AddDirtyFluidChuck(ChuckLocation, AddToRenderQueue);

	return true;
}

void ASimpleVoxelActor::SetVoxels(TArray<FIntVector> GlobalLocation, int32 Material, FColor CustomData, bool AddToRenderQueue)
{
	for (FIntVector& Data : GlobalLocation)
	{
		SetVoxel(Data, Material, CustomData, AddToRenderQueue);
	}

	return;
}

void ASimpleVoxelActor::UpdateVoxels(TArray<FIntVector> GlobalLocation, FColor CustomData, bool AddToRenderQueue)
{
	for (FIntVector& Data : GlobalLocation)
	{
		SetVoxel(Data, GetVoxelData(Data).VoxelMaterial, CustomData, AddToRenderQueue);
	}

	return;
}

bool ASimpleVoxelActor::SetVoxelAreaLocal(const FIntVector StartLocation, const FIntVector EndLocation, FIntVector ChuckLocation, int32 Material, FColor CustomData, bool AddToRenderQueue)
{
	for (int32 X = StartLocation.X; X <= EndLocation.X; X++)
	{
		for (int32 Y = StartLocation.Y; Y <= EndLocation.Y; Y++)
		{
			for (int32 Z = StartLocation.Z; Z <= EndLocation.Z; Z++)
			{
				SetVoxelLocal(FIntVector(X, Y, Z), ChuckLocation, Material, CustomData, AddToRenderQueue);
			}
		}
	}

	return true;
}

bool ASimpleVoxelActor::SetVoxelArea(const FIntVector StartLocation, const FIntVector EndLocation, int32 Material, FColor CustomData, bool AddToRenderQueue)
{
	for (int32 X = StartLocation.X; X <= EndLocation.X; X++)
	{
		for (int32 Y = StartLocation.Y; Y <= EndLocation.Y; Y++)
		{
			for (int32 Z = StartLocation.Z; Z <= EndLocation.Z; Z++)
			{
				SetVoxel(FIntVector(X, Y, Z), Material, CustomData, AddToRenderQueue);
			}
		}
	}

	return true;
}

bool ASimpleVoxelActor::SetVoxelsLocalByHeightMap(TArray<FIntVector> VoxelsLocation, FIntVector ChuckLocation, int32 Material, FColor CustomData, bool AddToRenderQueue)
{
	if (!HasChuckInitialized(ChuckLocation))
	{
		return false;
	}

	for (FIntVector& Data : VoxelsLocation)
	{
		for (int32 i = 0; i <= Data.Z; i++)
		{
			SetVoxelLocal(Data - FIntVector(0, 0, i) , ChuckLocation, Material, CustomData, false);
		}
	}

	AddDirtyVoxelChuck(ChuckLocation, AddToRenderQueue);
	AddDirtyFluidChuck(ChuckLocation, AddToRenderQueue);

	return true;
}

///Fluid///

bool ASimpleVoxelActor::SetFluidLocal(FIntVector VoxelLocation, FIntVector ChuckLocation, uint8 Depth, FColor CustomData, uint8 FlowDelay, uint8 MaxPressure, bool AddToRenderQueue)
{
	if (FluidAccessThreadCount > 0)
	{
		GameThreadJobQueue.Add(FSingleThreadJobData(ESingleThreadJobType::SetFluid, { VoxelLocation, ChuckLocation }, { Depth, FlowDelay, MaxPressure }, {}, { CustomData }, AddToRenderQueue));

		return true;
	}

	//ReadAccessLock->Wait();

	if (VoxelLocation.X < 0 || VoxelLocation.Y < 0 || VoxelLocation.Z < 0 ||
		!HasChuckInitialized(ChuckLocation) ||
		VoxelLocation.X >= MaxVoxelPerChuckAmount.X || VoxelLocation.Y >= MaxVoxelPerChuckAmount.Y || VoxelLocation.Z >= MaxVoxelPerChuckAmount.Z)
	{
		return false;
	}

	FChuckData& EditableChuckData = ChuckData.FindChecked(ChuckLocation);

	int32 VoxelIndex = LocalToIndex(VoxelLocation);

	FIntVector GlobalLocation = LocalToGlobal(VoxelLocation, ChuckLocation);

	FFluidData CacheData = FFluidData(GlobalLocation, GlobalLocation, FIntVector(0, 0, 0), Depth, CustomData, FlowDelay, MaxPressure);

	if (EditableChuckData.FluidData[VoxelIndex] != CacheData)
	{
		if (IsVoxelVisible(LocalToGlobal(VoxelLocation, ChuckLocation), -1, true))
		{
			SetVoxelLocal(VoxelLocation, ChuckLocation, -1, FColor(0), false);
		}

		if (IsChuckActive(ChuckLocation))
		{
			if (EditableChuckData.FluidData[VoxelIndex].Depth != 0 && CacheData.Depth == 0)
			{
				(*ActiveChuckList.Find(ChuckLocation))->FluidEventDataRemove.Add(EditableChuckData.FluidData[VoxelIndex]);
			}
			else if (EditableChuckData.FluidData[VoxelIndex].Depth == 0 && CacheData.Depth != 0)
			{
				(*ActiveChuckList.Find(ChuckLocation))->FluidEventDataAdd.Add(CacheData);
			}
		}

		EditableChuckData.FluidData[VoxelIndex] = CacheData;

		DirtyFluidList.Add(GlobalLocation + FIntVector(1, 0, 0));
		DirtyFluidList.Add(GlobalLocation - FIntVector(1, 0, 0));
		DirtyFluidList.Add(GlobalLocation + FIntVector(0, 1, 0));
		DirtyFluidList.Add(GlobalLocation - FIntVector(0, 1, 0));
		DirtyFluidList.Add(GlobalLocation + FIntVector(0, 0, 1));
		DirtyFluidList.Add(GlobalLocation - FIntVector(0, 0, 1));
		DirtyFluidList.Add(GlobalLocation);

		AddDirtyFluidChuck(ChuckLocation, AddToRenderQueue);
	}

	return true;
}

bool ASimpleVoxelActor::SetFluid(FIntVector GlobalLocation, uint8 Depth, FColor CustomData, uint8 FlowDelay, uint8 MaxPressure, bool AddToRenderQueue)
{
	return SetFluidLocal(GlobalToLocal(GlobalLocation), FindChuckByGlobal(GlobalLocation), Depth, CustomData, FlowDelay, MaxPressure, AddToRenderQueue);
}

///Simulation///

void ASimpleVoxelActor::FluidSimStep(bool AddToRenderQueue)
{
	if (FluidSimStepTask->IsDone() && FluidAccessThreadCount == 0 && !UpdateFluidNextFrame)
	{
		IncrementFluidThreadCounter();

		FluidSimStepTask->GetTask().AddToRenderQueue = AddToRenderQueue;
		FluidSimStepTask->StartBackgroundTask(ChuckThreadPool);
	}

	return;
}

void ASimpleVoxelActor::FluidSimStepThread(TArray<FFluidData>& DestoryFluids, TArray<FFluidData>& CreateFluids)
{
	TSet<FIntVector> UpdateMap;

	TSet<FIntVector> LoopSet = { FIntVector(1,0,0),FIntVector(0,1,0) ,FIntVector(-1,0,0) ,FIntVector(0,-1,0) };

	for (FIntVector& value : DirtyFluidList)
	{
		FIntVector ChuckPos = FindChuckByGlobal(value);

		if (!HasChuckInitialized(ChuckPos))
		{
			continue;
		}

		FChuckData* ChuckRef = ChuckData.Find(ChuckPos);

		//FChuckData& ChuckRef = ChuckData.FindChecked(ChuckPos);
		int32 FluidCheckIndex;

		FFluidData& SelfData = ChuckRef->FluidData[GlobalToIndex(value)];

		// Empty ///////////////////////////////////////
		if (SelfData.Depth == 0)
		{
			continue;
		}

		// Delay ///////////////////////////////////////

		if (SelfData.FluidTick != 0)
		{
			SelfData.FluidTick--;
			UpdateMap.Add(value);

			continue;
		}

		SelfData.FluidTick = SelfData.FlowDelay;

		// Check Flow Cut ///////////////////////////
		ChuckPos = FindChuckByGlobal(value + SelfData.FlowFrom);
		ChuckRef = ChuckData.Find(ChuckPos);
		FluidCheckIndex = GlobalToIndex(value + SelfData.FlowFrom);

		if (SelfData.FlowFrom != FIntVector(0) && (ChuckRef->FluidData[FluidCheckIndex].Depth < SelfData.Depth || ChuckRef->FluidData[FluidCheckIndex].CustomData != SelfData.CustomData))
		{
			DestoryFluids.Add(SelfData);
			//AddLiquidEventData(value, SelfData);

			//SelfData = FFluidData();

			UpdateMap.Add(value + FIntVector(1, 0, 0));
			UpdateMap.Add(value + FIntVector(0, 1, 0));
			UpdateMap.Add(value + FIntVector(0, 0, 1));
			UpdateMap.Add(value - FIntVector(1, 0, 0));
			UpdateMap.Add(value - FIntVector(0, 1, 0));
			UpdateMap.Add(value - FIntVector(0, 0, 1));

			continue;
		}

		// Flow Bottom /////////////////////////////////
		FIntVector Bottom = value - FIntVector(0, 0, 1);
		ChuckPos = FindChuckByGlobal(Bottom);

		if (Bottom.Z != -1 && HasChuckInitialized(ChuckPos))
		{
			ChuckRef = ChuckData.Find(ChuckPos);
			FluidCheckIndex = GlobalToIndex(Bottom);

			if (ChuckRef->VoxelData[FluidCheckIndex].VoxelMaterial == -1)
			{
				if (SelfData.Depth > ChuckRef->FluidData[FluidCheckIndex].Depth)
				{
					if (ChuckRef->FluidData[FluidCheckIndex].Depth > 0)
					{
						DestoryFluids.Add(ChuckRef->FluidData[FluidCheckIndex]);
					}

					//ChuckRef->FluidData[FluidCheckIndex] = FFluidData(FIntVector(0, 0, 1), SelfData.Depth, SelfData.CustomData, SelfData.FlowDelay);

					CreateFluids.Add(FFluidData(Bottom, SelfData.Source, FIntVector(0, 0, 1), SelfData.Depth, SelfData.CustomData, SelfData.FlowDelay, SelfData.MaxPressure));
					//AddLiquidEventData(Bottom, LiquidMap[ToIndex(Bottom)]);

					UpdateMap.Add(Bottom);

					continue;
				}
			}
		}

		// Low Depth ///////////////////////////////////////
		if (SelfData.Depth == 1)
		{
			continue;
		}

		// Flow Side //////////////////////////////////////

		for (FIntVector& LoopLocation : LoopSet)
		{
			FIntVector LoopTarget = value + LoopLocation;

			ChuckPos = FindChuckByGlobal(LoopTarget);

			if (HasChuckInitialized(ChuckPos))
			{
				ChuckRef = ChuckData.Find(ChuckPos);
				FluidCheckIndex = GlobalToIndex(LoopTarget);

				if (ChuckRef->VoxelData[FluidCheckIndex].VoxelMaterial == -1)
				{
					if (SelfData.Depth - 1 > ChuckRef->FluidData[FluidCheckIndex].Depth)
					{
						if (ChuckRef->FluidData[FluidCheckIndex].Depth > 0)
						{
							DestoryFluids.Add(ChuckRef->FluidData[FluidCheckIndex]);
						}

						//ChuckRef->FluidData[FluidCheckIndex] = FFluidData(LoopLocation * -1, SelfData.Depth - 1, SelfData.CustomData, SelfData.FlowDelay);

						CreateFluids.Add(FFluidData(LoopTarget, SelfData.Source, LoopLocation * -1, SelfData.Depth - 1, SelfData.CustomData, SelfData.FlowDelay, SelfData.MaxPressure));
						//AddLiquidEventData(LoopTarget, LiquidMap[ToIndex(LoopTarget)]);

						UpdateMap.Add(LoopTarget);
					}
				}
			}
		}

		// Source Cut //////////////////////////////////

		if (IsFluidVisible(SelfData.Source, true))
		{
			continue;
		}

		// Flow Up //////////////////////////////////////

		if (SelfData.Depth > SelfData.MaxPressure)
		{
			FIntVector Up = FIntVector(0, 0, 1) + value;
			ChuckPos = FindChuckByGlobal(Up);

			if (HasChuckInitialized(ChuckPos))
			{
				ChuckRef = ChuckData.Find(ChuckPos);
				FluidCheckIndex = GlobalToIndex(Up);

				if (ChuckRef->VoxelData[FluidCheckIndex].VoxelMaterial == -1 && SelfData.Depth - SelfData.MaxPressure > ChuckRef->FluidData[FluidCheckIndex].Depth)
				{
					if (ChuckRef->FluidData[FluidCheckIndex].Depth > 0)
					{
						DestoryFluids.Add(ChuckRef->FluidData[FluidCheckIndex]);
					}

					//ChuckRef->FluidData[FluidCheckIndex] = FFluidData(FIntVector(0, 0, -1), SelfData.Depth - 10, SelfData.CustomData, SelfData.FlowDelay);

					CreateFluids.Add(FFluidData(Up, SelfData.Source, FIntVector(0, 0, -1), SelfData.Depth - SelfData.MaxPressure, SelfData.CustomData, SelfData.FlowDelay, SelfData.MaxPressure));

					UpdateMap.Add(Up);
				}
			}
		}
	}

	DirtyFluidList = UpdateMap;

	return;
}

void ASimpleVoxelActor::FluidSimStepThreadDone(bool AddToRenderQueue, const TArray<FFluidData>& DestoryFluids, const TArray<FFluidData>& CreateFluids)
{
	AsyncTask(ENamedThreads::GameThread, [=]()
		{
			for (const FFluidData& value : DestoryFluids)
			{
				if (IsChuckActive(FindChuckByGlobal(value.GlobalLocation)))
				{
					(*ActiveChuckList.Find(FindChuckByGlobal(value.GlobalLocation)))->FluidEventDataRemove.Add(ChuckData.Find(FindChuckByGlobal(value.GlobalLocation))->FluidData[GlobalToIndex(value.GlobalLocation)]);

					AddDirtyFluidChuck(FindChuckByGlobal(value.GlobalLocation), AddToRenderQueue);
				}

				ChuckData.Find(FindChuckByGlobal(value.GlobalLocation))->FluidData[GlobalToIndex(value.GlobalLocation)] = FFluidData(value.GlobalLocation);
			}

			for (const FFluidData& value : CreateFluids)
			{
				if (IsChuckActive(FindChuckByGlobal(value.GlobalLocation)))
				{
					(*ActiveChuckList.Find(FindChuckByGlobal(value.GlobalLocation)))->FluidEventDataAdd.Add(value);

					AddDirtyFluidChuck(FindChuckByGlobal(value.GlobalLocation), AddToRenderQueue);
				}

				ChuckData.Find(FindChuckByGlobal(value.GlobalLocation))->FluidData[GlobalToIndex(value.GlobalLocation)] = value;
			}

			DecrementFluidThreadCounter();
		});

	return;
}
