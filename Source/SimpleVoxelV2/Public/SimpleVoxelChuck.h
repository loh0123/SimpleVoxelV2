// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ProceduralMeshComponent.h"
#include "DynTexture.h"
#include "Async/AsyncWork.h"
#include "GameFramework/Actor.h"
#include "SimpleVoxelChuck.generated.h"

class ASimpleVoxelActor;
class VoxelRenderDataTaskAD;
class FluidRenderDataTaskAD;

USTRUCT()
struct FGreddyMeshingData
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY()
		FIntVector Start;

	UPROPERTY()
		uint16 Forward;

	UPROPERTY()
		uint16 Right;

	UPROPERTY()
		int32 Material;

	FGreddyMeshingData() : Start(FIntVector()), Forward(0), Right(0), Material(-1) {}
	FGreddyMeshingData(FIntVector Position, int32 M, uint16 L) : Start(Position), Forward(L), Right(0), Material(M) {}
};

USTRUCT(BlueprintType)
struct FVoxelRenderData
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VoxelRenderData | Variable")
		TArray<FVector> Vertices;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VoxelRenderData | Variable")
		TArray<int> Triangles;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VoxelRenderData | Variable")
		TArray<FVector> Normals;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VoxelRenderData | Variable")
		TArray<FVector2D> UV0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VoxelRenderData | Variable")
		TArray<FVector2D> UV1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VoxelRenderData | Variable")
		TArray<FVector2D> UV2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VoxelRenderData | Variable")
		TArray<FVector2D> UV3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VoxelRenderData | Variable")
		TArray<FColor> VertexColors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VoxelRenderData | Variable")
		TArray<FProcMeshTangent> Tangents;
};

UCLASS()
class SIMPLEVOXELV2_API ASimpleVoxelChuck : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ASimpleVoxelChuck();

	FCriticalSection VoxelMutex;
	FCriticalSection FluidMutex;

protected:
	FAsyncTask<VoxelRenderDataTaskAD>* VoxelTask;
	FAsyncTask<FluidRenderDataTaskAD>* FluidTask;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason);

public:
	virtual void PostActorCreated() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	//Events Data//////////////////////////////////////

	UPROPERTY()
		TArray<FVoxelData> VoxelEventDataAdd;

	UPROPERTY()
		TArray<FVoxelData> VoxelEventDataRemove;

	UPROPERTY()
		TArray<FFluidData> FluidEventDataAdd;

	UPROPERTY()
		TArray<FFluidData> FluidEventDataRemove;

	//Events //////////////////////////////////////////
	UFUNCTION(BlueprintImplementableEvent, Category = "SimpleVoxelChuck | Event")
		void OnVoxelRenderUpdate(const TArray<FVoxelData>& Add, const TArray<FVoxelData>& Remove);

	UFUNCTION(BlueprintImplementableEvent, Category = "SimpleVoxelChuck | Event")
		void OnFluidRenderUpdate(const TArray<FFluidData>& Add, const TArray<FFluidData>& Remove);

	//Components//////////////////////////////////////

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "SimpleVoxelChuck | Variable")
		UProceduralMeshComponent* VoxelMesh;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "SimpleVoxelChuck | Variable")
		UProceduralMeshComponent* FluidMesh;

	//Data Outputer//////////////////////////////////

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "SimpleVoxelChuck | Variable")
		UDynTexture* CustomColorImage;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "SimpleVoxelChuck | Variable")
		UDynTexture* FlowMapImage;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "SimpleVoxelChuck | Variable")
		UDynTexture* VisibleMapImage;

	//Start Data/////////////////////////////////////
public:

	UPROPERTY(BlueprintReadOnly, meta = (ExposeOnSpawn = "true"), Category = "SimpleVoxelChuck | Variable")
		FIntVector ChuckKey;

	UPROPERTY(BlueprintReadOnly, Category = "SimpleVoxelChuck | Variable")
		FIntVector ChuckGlobalPos;

	UPROPERTY(BlueprintReadOnly, meta = (ExposeOnSpawn = "true"), Category = "SimpleVoxelChuck | Variable")
		ASimpleVoxelActor* MasterActor;

	UPROPERTY(BlueprintReadOnly, Category = "SimpleVoxelChuck | Variable")
		int32 VoxelMaterialNum;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, meta = (ExposeOnSpawn = "true"), Category = "SimpleVoxelChuck | Variable")
		bool AutoRender = true;

	//After Data/////////////////////////////////////

	UPROPERTY()
		TArray<FVoxelRenderData> VoxelRenderData;

	UPROPERTY()
		FVoxelRenderData FluidRenderData;

	UPROPERTY()
		int32 FluidTriIndex;

	// Collector ////////////////////////////////////////////////////

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SimpleVoxelChuck | Function")
		const FChuckData& GetChuckData();

	//Startup Function////////////////////////////////////////////////////

	UFUNCTION(BlueprintCallable, Category = "SimpleVoxelChuck | Function")
		void SetupVoxelChuck(UPARAM(ref)TArray<UMaterialInterface*>& VoxelMat, UMaterialInterface* FluidMat, FIntVector ChuckLoc, FIntVector ChuckSize, ASimpleVoxelActor* Controller);

	//Mesh Generator///////////////////////////////////////////////////////////////////////////////////////////////

	UFUNCTION()
		void UpdateImage();

	UFUNCTION(BlueprintCallable, Category = "SimpleVoxelChuck | Function")
		void CreateVoxelRenderDataGM();//NEED Thread

	UFUNCTION()
		void CreateVoxelRenderDataGMDone();

	UFUNCTION(BlueprintCallable, Category = "SimpleVoxelChuck | Function")
		void CreateFluidRenderDataGM();//NEED Thread

	UFUNCTION()
		void CreateFluidRenderDataGMDone();

	//Mesh Render//////////////////////////////////////////////////////////////////////////////////////////////////

	UFUNCTION(BlueprintCallable, Category = "SimpleVoxelChuck | Function")
		void RenderVoxelMesh();

	UFUNCTION(BlueprintCallable, Category = "SimpleVoxelChuck | Function")
		void RenderFluidMesh();
};

class VoxelRenderDataTaskAD : public FNonAbandonableTask
{
	friend class FAsyncTask<VoxelRenderDataTaskAD>;

private:
	ASimpleVoxelChuck* ClassConnector;

	TArray<int32> TriIndex;

public:
	VoxelRenderDataTaskAD(ASimpleVoxelChuck* Connector) : ClassConnector(Connector)
	{
	}

protected:
	void CreateFaceGM(FGreddyMeshingData& Data, FRotator Rotation)
	{
		if (Data.Material >= ClassConnector->VoxelRenderData.Num())
		{
			return;
		}

		Data.Start -= ClassConnector->ChuckGlobalPos;

		ClassConnector->VoxelRenderData[Data.Material].Vertices.Append(
			{
				(Rotation.RotateVector(FVector(-50,-50,50)) * ClassConnector->MasterActor->VoxelScale) + ((FVector)Data.Start * ClassConnector->MasterActor->CacheVoxelDistance),
				(Rotation.RotateVector(FVector(50 + (Data.Forward * 100),-50,50)) * ClassConnector->MasterActor->VoxelScale) + ((FVector)Data.Start * ClassConnector->MasterActor->CacheVoxelDistance),
				(Rotation.RotateVector(FVector(-50,50 + (Data.Right * 100),50)) * ClassConnector->MasterActor->VoxelScale) + ((FVector)Data.Start * ClassConnector->MasterActor->CacheVoxelDistance),
				(Rotation.RotateVector(FVector(50 + (Data.Forward * 100),50 + (Data.Right * 100),50)) * ClassConnector->MasterActor->VoxelScale) + ((FVector)Data.Start * ClassConnector->MasterActor->CacheVoxelDistance)
			}
		);

		ClassConnector->VoxelRenderData[Data.Material].Triangles.Append(
			{
				1 + TriIndex[Data.Material],
				2 + TriIndex[Data.Material],
				3 + TriIndex[Data.Material],
				2 + TriIndex[Data.Material],
				1 + TriIndex[Data.Material],
				0 + TriIndex[Data.Material]
			}
		);

		TriIndex[Data.Material] += 4;

		ClassConnector->VoxelRenderData[Data.Material].Normals.Append(
			{
				Rotation.RotateVector(FVector(0,0,1)),
				Rotation.RotateVector(FVector(0,0,1)),
				Rotation.RotateVector(FVector(0,0,1)),
				Rotation.RotateVector(FVector(0,0,1))
			}
		);

		ClassConnector->VoxelRenderData[Data.Material].UV1.Append(
			{
				FVector2D(0,0),
				FVector2D(1,0),
				FVector2D(0,1),
				FVector2D(1,1)
			}
		);

		ClassConnector->VoxelRenderData[Data.Material].UV0.Append(
			{
				FVector2D(0,0),
				FVector2D(1 + Data.Forward,0),
				FVector2D(0,1 + Data.Right),
				FVector2D(1 + Data.Forward,1 + Data.Right)
			}
		);

		ClassConnector->VoxelRenderData[Data.Material].Tangents.Append(
			{
				FProcMeshTangent(Rotation.RotateVector(FVector(1,0,0)),false),
				FProcMeshTangent(Rotation.RotateVector(FVector(1,0,0)),false),
				FProcMeshTangent(Rotation.RotateVector(FVector(1,0,0)),false),
				FProcMeshTangent(Rotation.RotateVector(FVector(1,0,0)),false)
			}
		);

		return;
	}

	TMap<FIntVector, FGreddyMeshingData> GreedyMeshingFaceTask(FIntPoint LoopSize, FIntVector CurrentLocation, FIntVector Forward, FIntVector Right, FIntVector Up)
	{
		TMap<FIntVector, FGreddyMeshingData> FaceData;

		int32 MaxULoop = Forward.Size() * LoopSize.X;
		int32 MaxVLoop = Right.Size() * LoopSize.Y;

		FIntVector CurrentPos;
		FIntVector LeftPos;

		FGreddyMeshingData PreFace = FGreddyMeshingData();

		int32 SelfMaterial = -1;
		FVector2D CacheUV;

		for (int32 V = 0; V < MaxVLoop; V++)
		{

			for (int32 U = 0; U < MaxULoop; U++)
			{
				CurrentPos = CurrentLocation + (Forward * U) + (Right * V);
				LeftPos = CurrentPos - Right;

				SelfMaterial = ClassConnector->MasterActor->GetVoxelData(CurrentPos).VoxelMaterial;

				if (SelfMaterial != -1 && !ClassConnector->MasterActor->IsVoxelVisible(CurrentPos + Up, SelfMaterial, false))
				{
					if (PreFace.Material != -1)
					{
						if (PreFace.Material == SelfMaterial)
						{
							PreFace.Forward++;

							if (FaceData.Contains(LeftPos) && FaceData.FindChecked(LeftPos).Forward == PreFace.Forward && FaceData.FindChecked(LeftPos).Material == PreFace.Material)
							{
								FaceData.RemoveAndCopyValue(LeftPos, PreFace);

								PreFace.Right++;

								FaceData.Add(CurrentPos, PreFace);

								PreFace = FGreddyMeshingData();
							}

							continue;
						}
						else
						{
							FaceData.Add(CurrentPos - Forward, PreFace);

							PreFace = FGreddyMeshingData();
						}
					}

					if (FaceData.Contains(LeftPos) && FaceData.FindChecked(LeftPos).Forward == 0 && FaceData.FindChecked(LeftPos).Material == SelfMaterial)
					{
						FaceData.RemoveAndCopyValue(LeftPos, PreFace);

						PreFace.Right++;

						FaceData.Add(CurrentPos, PreFace);

						PreFace = FGreddyMeshingData();

						continue;
					}
					else
					{
						PreFace.Material = SelfMaterial;

						PreFace.Start = CurrentPos;
					}
				}
				else
				{
					if (PreFace.Material != -1)
					{
						FaceData.Add(CurrentPos - Forward, PreFace);

						PreFace = FGreddyMeshingData();
					}
				}
			}

			if (PreFace.Material != -1)
			{
				FaceData.Add(CurrentPos, PreFace);

				PreFace = FGreddyMeshingData();
			}
		}

		return FaceData;
	}

	void DoWork()
	{
		FScopeLock ScopeLock(&(ClassConnector->VoxelMutex));

		ClassConnector->VoxelRenderData.Init(FVoxelRenderData(), ClassConnector->VoxelMaterialNum);

		TriIndex.Init(0, ClassConnector->VoxelMaterialNum);

		for (int32 Z = 0; Z < ClassConnector->MasterActor->MaxVoxelPerChuckAmount.Z; Z++)
		{
			TArray<FGreddyMeshingData> CacheFace;

			GreedyMeshingFaceTask(FIntPoint(ClassConnector->MasterActor->MaxVoxelPerChuckAmount.X, ClassConnector->MasterActor->MaxVoxelPerChuckAmount.Y), FIntVector(0, 0, Z) + ClassConnector->ChuckGlobalPos, FIntVector(1, 0, 0), FIntVector(0, 1, 0), FIntVector(0, 0, 1)).GenerateValueArray(CacheFace);

			for (FGreddyMeshingData& Value : CacheFace)
			{
				CreateFaceGM(Value, FRotator(0, 0, 0));
			}

			GreedyMeshingFaceTask(FIntPoint(ClassConnector->MasterActor->MaxVoxelPerChuckAmount.X, ClassConnector->MasterActor->MaxVoxelPerChuckAmount.Y), FIntVector(ClassConnector->MasterActor->MaxVoxelPerChuckAmount.X - 1, 0, Z) + ClassConnector->ChuckGlobalPos, FIntVector(-1, 0, 0), FIntVector(0, 1, 0), FIntVector(0, 0, -1)).GenerateValueArray(CacheFace);

			for (FGreddyMeshingData& Value : CacheFace)
			{
				CreateFaceGM(Value, FRotator(180, 0, 0));
			}

		}

		for (int32 X = 0; X < ClassConnector->MasterActor->MaxVoxelPerChuckAmount.X; X++)
		{
			TArray<FGreddyMeshingData> CacheFace;

			GreedyMeshingFaceTask(FIntPoint(ClassConnector->MasterActor->MaxVoxelPerChuckAmount.Z, ClassConnector->MasterActor->MaxVoxelPerChuckAmount.Y), FIntVector(X, 0, 0) + ClassConnector->ChuckGlobalPos, FIntVector(0, 0, 1), FIntVector(0, 1, 0), FIntVector(-1, 0, 0)).GenerateValueArray(CacheFace);

			for (FGreddyMeshingData& Value : CacheFace)
			{
				CreateFaceGM(Value, FRotator(90, 0, 0));
			}

			GreedyMeshingFaceTask(FIntPoint(ClassConnector->MasterActor->MaxVoxelPerChuckAmount.Z, ClassConnector->MasterActor->MaxVoxelPerChuckAmount.Y), FIntVector(X, ClassConnector->MasterActor->MaxVoxelPerChuckAmount.Y - 1, 0) + ClassConnector->ChuckGlobalPos, FIntVector(0, 0, 1), FIntVector(0, -1, 0), FIntVector(1, 0, 0)).GenerateValueArray(CacheFace);

			for (FGreddyMeshingData& Value : CacheFace)
			{
				CreateFaceGM(Value, FRotator(90, 0, 180));
			}

		}

		for (int32 Y = 0; Y < ClassConnector->MasterActor->MaxVoxelPerChuckAmount.Y; Y++)
		{
			TArray<FGreddyMeshingData> CacheFace;

			GreedyMeshingFaceTask(FIntPoint(ClassConnector->MasterActor->MaxVoxelPerChuckAmount.Z, ClassConnector->MasterActor->MaxVoxelPerChuckAmount.X), FIntVector(0, Y, 0) + ClassConnector->ChuckGlobalPos, FIntVector(0, 0, 1), FIntVector(1, 0, 0), FIntVector(0, 1, 0)).GenerateValueArray(CacheFace);

			for (FGreddyMeshingData& Value : CacheFace)
			{
				CreateFaceGM(Value, FRotator(90, 0, 90));
			}

			GreedyMeshingFaceTask(FIntPoint(ClassConnector->MasterActor->MaxVoxelPerChuckAmount.Z, ClassConnector->MasterActor->MaxVoxelPerChuckAmount.X), FIntVector(ClassConnector->MasterActor->MaxVoxelPerChuckAmount.X - 1, Y, 0) + ClassConnector->ChuckGlobalPos, FIntVector(0, 0, 1), FIntVector(-1, 0, 0), FIntVector(0, -1, 0)).GenerateValueArray(CacheFace);

			for (FGreddyMeshingData& Value : CacheFace)
			{
				CreateFaceGM(Value, FRotator(90, 0, -90));
			}
		}

		ClassConnector->UpdateImage();

		ClassConnector->CreateVoxelRenderDataGMDone();

		return;
	}

	FORCEINLINE TStatId GetStatId() const
	{
		RETURN_QUICK_DECLARE_CYCLE_STAT(FMyTaskName, STATGROUP_ThreadPoolAsyncTasks);
	}
};

class FluidRenderDataTaskAD : public FNonAbandonableTask
{
	friend class FAsyncTask<FluidRenderDataTaskAD>;

private:
	ASimpleVoxelChuck* ClassConnector;

	int32 TriIndex;

public:
	FluidRenderDataTaskAD(ASimpleVoxelChuck* Connector) : ClassConnector(Connector)
	{
	}

protected:
	void CreateFaceGM(FGreddyMeshingData& Data, FRotator Rotation)
	{
		Data.Start -= ClassConnector->ChuckGlobalPos;
		
		ClassConnector->FluidRenderData.Vertices.Append(
			{
				(Rotation.RotateVector(FVector(-50,-50,50)) * ClassConnector->MasterActor->VoxelScale) + ((FVector)Data.Start * ClassConnector->MasterActor->CacheVoxelDistance),
				(Rotation.RotateVector(FVector(50 + (Data.Forward * 100),-50,50)) * ClassConnector->MasterActor->VoxelScale) + ((FVector)Data.Start * ClassConnector->MasterActor->CacheVoxelDistance),
				(Rotation.RotateVector(FVector(-50,50 + (Data.Right * 100),50)) * ClassConnector->MasterActor->VoxelScale) + ((FVector)Data.Start * ClassConnector->MasterActor->CacheVoxelDistance),
				(Rotation.RotateVector(FVector(50 + (Data.Forward * 100),50 + (Data.Right * 100),50)) * ClassConnector->MasterActor->VoxelScale) + ((FVector)Data.Start * ClassConnector->MasterActor->CacheVoxelDistance)
			}
		);
		
		ClassConnector->FluidRenderData.Triangles.Append(
			{
				1 + TriIndex,
				2 + TriIndex,
				3 + TriIndex,
				2 + TriIndex,
				1 + TriIndex,
				0 + TriIndex
			}
		);
		
		TriIndex += 4;
		
		ClassConnector->FluidRenderData.Normals.Append(
			{
				Rotation.RotateVector(FVector(0,0,1)),
				Rotation.RotateVector(FVector(0,0,1)),
				Rotation.RotateVector(FVector(0,0,1)),
				Rotation.RotateVector(FVector(0,0,1))
			}
		);
		
		ClassConnector->FluidRenderData.UV1.Append(
			{
				FVector2D(0,0),
				FVector2D(1,0),
				FVector2D(0,1),
				FVector2D(1,1)
			}
		);
		
		ClassConnector->FluidRenderData.UV0.Append(
			{
				FVector2D(0,0),
				FVector2D(1 + Data.Forward,0),
				FVector2D(0,1 + Data.Right),
				FVector2D(1 + Data.Forward,1 + Data.Right)
			}
		);
		
		ClassConnector->FluidRenderData.Tangents.Append(
			{
				FProcMeshTangent(Rotation.RotateVector(FVector(1,0,0)),false),
				FProcMeshTangent(Rotation.RotateVector(FVector(1,0,0)),false),
				FProcMeshTangent(Rotation.RotateVector(FVector(1,0,0)),false),
				FProcMeshTangent(Rotation.RotateVector(FVector(1,0,0)),false)
			}
		);
		
		return;
	}

	TMap<FIntVector, FGreddyMeshingData> GreedyMeshingFaceTask(FIntPoint LoopSize, FIntVector CurrentLocation, FIntVector Forward, FIntVector Right, FIntVector Up)
	{
		TMap<FIntVector, FGreddyMeshingData> FaceData;

		int32 MaxULoop = Forward.Size() * LoopSize.X;
		int32 MaxVLoop = Right.Size() * LoopSize.Y;

		FIntVector CurrentPos;
		FIntVector LeftPos;

		FGreddyMeshingData PreFace = FGreddyMeshingData();

		//int32 SelfMaterial = -1;
		FVector2D CacheUV;

		for (int32 V = 0; V < MaxVLoop; V++)
		{

			for (int32 U = 0; U < MaxULoop; U++)
			{
				CurrentPos = CurrentLocation + (Forward * U) + (Right * V);
				LeftPos = CurrentPos - Right;

				//SelfMaterial = MasterActor->GetVoxelMaterial(CurrentPos);

				if (!ClassConnector->MasterActor->IsFluidVisible(CurrentPos + Up, false))
				{
					if (PreFace.Material != -1)
					{
						if (PreFace.Material == (ClassConnector->MasterActor->IsFluidVisible(CurrentPos, false) ? 0 : -1))
						{
							PreFace.Forward++;

							if (FaceData.Contains(LeftPos) && FaceData.FindChecked(LeftPos).Forward == PreFace.Forward)
							{
								FaceData.RemoveAndCopyValue(LeftPos, PreFace);

								PreFace.Right++;

								FaceData.Add(CurrentPos, PreFace);

								PreFace = FGreddyMeshingData();
							}

							continue;
						}
						else
						{
							FaceData.Add(CurrentPos - Forward, PreFace);

							PreFace = FGreddyMeshingData();
						}
					}

					if (FaceData.Contains(LeftPos) && FaceData.FindChecked(LeftPos).Forward == 0 && FaceData.FindChecked(LeftPos).Material == (ClassConnector->MasterActor->IsFluidVisible(CurrentPos, false) ? 0 : -1))
					{
						FaceData.RemoveAndCopyValue(LeftPos, PreFace);

						PreFace.Right++;

						FaceData.Add(CurrentPos, PreFace);

						PreFace = FGreddyMeshingData();

						continue;
					}
					else
					{
						PreFace.Material = (ClassConnector->MasterActor->IsFluidVisible(CurrentPos, false) ? 0 : -1);

						PreFace.Start = CurrentPos;
					}
				}
				else
				{
					if (PreFace.Material != -1)
					{
						FaceData.Add(CurrentPos - Forward, PreFace);

						PreFace = FGreddyMeshingData();
					}
				}
			}

			if (PreFace.Material != -1)
			{
				FaceData.Add(CurrentPos, PreFace);

				PreFace = FGreddyMeshingData();
			}
		}

		return FaceData;
	}

	void DoWork()
	{
		FScopeLock ScopeLock(&(ClassConnector->FluidMutex));

		ClassConnector->FluidRenderData = FVoxelRenderData();
		
		TriIndex = 0;
		
		for (int32 Z = 0; Z < ClassConnector->MasterActor->MaxVoxelPerChuckAmount.Z; Z++)
		{
			TArray<FGreddyMeshingData> CacheFace;
		
			GreedyMeshingFaceTask(FIntPoint(ClassConnector->MasterActor->MaxVoxelPerChuckAmount.X, ClassConnector->MasterActor->MaxVoxelPerChuckAmount.Y), FIntVector(0, 0, Z) + ClassConnector->ChuckGlobalPos, FIntVector(1, 0, 0), FIntVector(0, 1, 0), FIntVector(0, 0, 1)).GenerateValueArray(CacheFace);
		
			for (FGreddyMeshingData& Value : CacheFace)
			{
				CreateFaceGM(Value, FRotator(0, 0, 0));
			}
		
			GreedyMeshingFaceTask(FIntPoint(ClassConnector->MasterActor->MaxVoxelPerChuckAmount.X, ClassConnector->MasterActor->MaxVoxelPerChuckAmount.Y), FIntVector(ClassConnector->MasterActor->MaxVoxelPerChuckAmount.X - 1, 0, Z) + ClassConnector->ChuckGlobalPos, FIntVector(-1, 0, 0), FIntVector(0, 1, 0), FIntVector(0, 0, -1)).GenerateValueArray(CacheFace);
		
			for (FGreddyMeshingData& Value : CacheFace)
			{
				CreateFaceGM(Value, FRotator(180, 0, 0));
			}
		
		}
		
		for (int32 X = 0; X < ClassConnector->MasterActor->MaxVoxelPerChuckAmount.X; X++)
		{
			TArray<FGreddyMeshingData> CacheFace;
		
			GreedyMeshingFaceTask(FIntPoint(ClassConnector->MasterActor->MaxVoxelPerChuckAmount.Z, ClassConnector->MasterActor->MaxVoxelPerChuckAmount.Y), FIntVector(X, 0, 0) + ClassConnector->ChuckGlobalPos, FIntVector(0, 0, 1), FIntVector(0, 1, 0), FIntVector(-1, 0, 0)).GenerateValueArray(CacheFace);
		
			for (FGreddyMeshingData& Value : CacheFace)
			{
				CreateFaceGM(Value, FRotator(90, 0, 0));
			}
		
			GreedyMeshingFaceTask(FIntPoint(ClassConnector->MasterActor->MaxVoxelPerChuckAmount.Z, ClassConnector->MasterActor->MaxVoxelPerChuckAmount.Y), FIntVector(X, ClassConnector->MasterActor->MaxVoxelPerChuckAmount.Y - 1, 0) + ClassConnector->ChuckGlobalPos, FIntVector(0, 0, 1), FIntVector(0, -1, 0), FIntVector(1, 0, 0)).GenerateValueArray(CacheFace);
		
			for (FGreddyMeshingData& Value : CacheFace)
			{
				CreateFaceGM(Value, FRotator(90, 0, 180));
			}
		
		}
		
		for (int32 Y = 0; Y < ClassConnector->MasterActor->MaxVoxelPerChuckAmount.Y; Y++)
		{
			TArray<FGreddyMeshingData> CacheFace;
		
			GreedyMeshingFaceTask(FIntPoint(ClassConnector->MasterActor->MaxVoxelPerChuckAmount.Z, ClassConnector->MasterActor->MaxVoxelPerChuckAmount.X), FIntVector(0, Y, 0) + ClassConnector->ChuckGlobalPos, FIntVector(0, 0, 1), FIntVector(1, 0, 0), FIntVector(0, 1, 0)).GenerateValueArray(CacheFace);
		
			for (FGreddyMeshingData& Value : CacheFace)
			{
				CreateFaceGM(Value, FRotator(90, 0, 90));
			}
		
			GreedyMeshingFaceTask(FIntPoint(ClassConnector->MasterActor->MaxVoxelPerChuckAmount.Z, ClassConnector->MasterActor->MaxVoxelPerChuckAmount.X), FIntVector(ClassConnector->MasterActor->MaxVoxelPerChuckAmount.X - 1, Y, 0) + ClassConnector->ChuckGlobalPos, FIntVector(0, 0, 1), FIntVector(-1, 0, 0), FIntVector(0, -1, 0)).GenerateValueArray(CacheFace);
		
			for (FGreddyMeshingData& Value : CacheFace)
			{
				CreateFaceGM(Value, FRotator(90, 0, -90));
			}
		}
		
		ClassConnector->UpdateImage();
		
		ClassConnector->CreateFluidRenderDataGMDone();

		return;
	}

	FORCEINLINE TStatId GetStatId() const
	{
		RETURN_QUICK_DECLARE_CYCLE_STAT(FMyTaskName, STATGROUP_ThreadPoolAsyncTasks);
	}
};
