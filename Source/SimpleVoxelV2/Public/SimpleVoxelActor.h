// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HAL/Event.h"
#include "SimpleVoxelActor.generated.h"

class ASimpleVoxelChuck;
class FluidSimStepTaskAD;

DECLARE_LOG_CATEGORY_EXTERN(LogSVA, Log, All);

USTRUCT(BlueprintType)
struct FFluidData
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "FluidData | Variable")
		FIntVector GlobalLocation;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "FluidData | Variable")
		FIntVector Source;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "FluidData | Variable")
		FIntVector FlowFrom;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "FluidData | Variable")
		uint8 Depth;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "FluidData | Variable")
		FColor CustomData;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "FluidData | Variable")
		uint8 FluidTick;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "FluidData | Variable")
		uint8 FlowDelay;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "FluidData | Variable")
		uint8 MaxPressure;

	FFluidData() : GlobalLocation(FIntVector(0)), Source(FIntVector(0)), FlowFrom(FIntVector(0)), Depth(0), CustomData(FColor(0)), FluidTick(0), FlowDelay(0), MaxPressure(1) {}
	FFluidData(FIntVector GL) : GlobalLocation(GL), Source(FIntVector(0)), FlowFrom(FIntVector(0)), Depth(0), CustomData(FColor(0)), FluidTick(0), FlowDelay(0), MaxPressure(1) {}
	FFluidData(FIntVector GL, FIntVector S, FIntVector FF, uint8 D, FColor CD, uint8 FD, uint8 MP) : GlobalLocation(GL), Source(S), FlowFrom(FF), Depth(D), CustomData(CD), FluidTick(FD), FlowDelay(FD), MaxPressure(MP > 0 ? MP : 1) {}

	bool operator!=(const FFluidData& Other) const;
};

USTRUCT(BlueprintType)
struct FVoxelData
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "VoxelData | Variable")
		FIntVector GlobalLocation;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "VoxelData | Variable")
		int32 VoxelMaterial;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "VoxelData | Variable")
		FColor VoxelCustomData;

	FVoxelData() : GlobalLocation(FIntVector(-1)), VoxelMaterial(-1), VoxelCustomData(FColor(0)) {}
	FVoxelData(FIntVector GL) : GlobalLocation(GL), VoxelMaterial(-1), VoxelCustomData(FColor(0)) {}
	FVoxelData(FIntVector GL, int32 VM, FColor VCD) : GlobalLocation(GL), VoxelMaterial(VM), VoxelCustomData(VCD) {}

	bool operator!=(const FVoxelData& Other) const;
};

USTRUCT(BlueprintType)
struct FChuckData
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ChuckData | Variable")
		TArray<FVoxelData> VoxelData;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ChuckData | Variable")
		TArray<FFluidData> FluidData;

	FChuckData() : VoxelData({}), FluidData({}) {}
	FChuckData(TArray<FVoxelData> VD, TArray<FFluidData> FD) : VoxelData(VD), FluidData(FD) {}
};

UENUM()
enum ESingleThreadJobType
{
	None,
	SetVoxel,
	SetFluid,
	ActiveChuck,
};

USTRUCT()
struct FSingleThreadJobData
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY()
		TEnumAsByte<ESingleThreadJobType> JobType;

	UPROPERTY()
		TArray<FIntVector> IntVectorArray;

	UPROPERTY()
		TArray<uint8> UInt8Array;

	UPROPERTY()
		TArray<int32> Int32Array;

	UPROPERTY()
		TArray<FColor> ColorArray;

	UPROPERTY()
		bool AddToRenderQueue;

	FSingleThreadJobData() : JobType(ESingleThreadJobType::None), IntVectorArray({}), UInt8Array({}), ColorArray({}) {}
	FSingleThreadJobData(ESingleThreadJobType STJT, TArray<FIntVector> IVA, TArray<uint8> UIA, TArray<int32> IA, TArray<FColor> CA, bool ATRQ) : JobType(STJT), IntVectorArray(IVA), UInt8Array(UIA), Int32Array(IA), ColorArray(CA), AddToRenderQueue(ATRQ) {}
};

UCLASS()
class SIMPLEVOXELV2_API ASimpleVoxelActor : public AActor
{
	GENERATED_BODY()

private:
	FAsyncTask<FluidSimStepTaskAD>* FluidSimStepTask;
	
public:	
	//Variable//
	int32 VoxelAccessThreadCount;
	int32 FluidAccessThreadCount;

	FQueuedThreadPool* ChuckThreadPool;

	////Setting////

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "SimpleVoxel | Setting", meta = (ExposeOnSpawn = "true"))
		bool ChuckRender = true;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "SimpleVoxel | Setting", meta = (ExposeOnSpawn = "true"))
		bool CreateCollision = false;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "SimpleVoxel | Setting", meta = (ExposeOnSpawn = "true"))
		FVector VoxelScale = FVector(1);

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "SimpleVoxel | Setting", meta = (ExposeOnSpawn = "true"))
		FIntVector MaxVoxelPerChuckAmount = FIntVector(16);

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "SimpleVoxel | Setting", meta = (ExposeOnSpawn = "true"))
		TArray<UMaterialInterface*> VoxelMaterial;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "SimpleVoxel | Setting", meta = (ExposeOnSpawn = "true"))
		UMaterialInterface* LiquidMaterial;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "SimpleVoxel | Setting", meta = (ExposeOnSpawn = "true"))
		TSubclassOf<ASimpleVoxelChuck> SpawnChuckClass;

	////Cache////
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "SimpleVoxel | Cache")
		FVector CacheChuckDistance;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "SimpleVoxel | Cache")
		FVector CacheVoxelDistance;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "SimpleVoxel | Cache")
		int32 CacheMaxVoxelIndex;

	////Data////
	UPROPERTY(BlueprintReadOnly, Category = "SimpleVoxel | Data")
		TMap<FIntVector, FChuckData> ChuckData;

	////Running////
	UPROPERTY(BlueprintReadOnly, Category = "SimpleVoxel | Running")
		TMap<FIntVector, ASimpleVoxelChuck*> ActiveChuckList;

	UPROPERTY(BlueprintReadOnly, Category = "SimpleVoxel | Running")
		TSet<FIntVector> DirtyVoxelChuckList;

	UPROPERTY(BlueprintReadOnly, Category = "SimpleVoxel | Running")
		TSet<FIntVector> DirtyFluidChuckList;

	UPROPERTY()
		TSet<FIntVector> DirtyFluidList;

	UPROPERTY()
		bool UpdateVoxelNextFrame;

	UPROPERTY()
		bool UpdateFluidNextFrame;

	UPROPERTY()
		TArray<FSingleThreadJobData> GameThreadJobQueue;

	UPROPERTY()
		FIntVector SpawningChuckLocation;

	//End Variable//

	//Function//

	///Thread///
	UFUNCTION()
		void DecrementVoxelThreadCounter();

	UFUNCTION()
		void IncrementVoxelThreadCounter();

	UFUNCTION()
		void DecrementFluidThreadCounter();

	UFUNCTION()
		void IncrementFluidThreadCounter();

	UFUNCTION()
		void CallGameThreadJob();

	///Manager///
	UFUNCTION(BlueprintCallable, Category = "SimpleVoxel | Manager")
		void CompleteAllUpdate();

	UFUNCTION(BlueprintCallable, Category = "SimpleVoxel | Manager")
		void Reset();

	UFUNCTION(BlueprintCallable, Category = "SimpleVoxel | Manager")
		void GetSaveData(TMap<FIntVector, FChuckData>& OutChuckData, TSet<FIntVector>& FluidUpdateList);

	UFUNCTION(BlueprintCallable, Category = "SimpleVoxel | Manager")
		void LoadSaveData(UPARAM(ref) TMap<FIntVector, FChuckData>& OutChuckData, UPARAM(ref) TSet<FIntVector>& FluidUpdateList);

	///Validation///
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SimpleVoxel | Validation")
		bool HasChuckInitialized(const FIntVector ChuckLocation);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SimpleVoxel | Validation")
		bool IsChuckActive(const FIntVector ChuckLocation);

	///Data Collector///

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SimpleVoxel | Data Collector")
		bool IsVoxelVisible(const FIntVector VoxelLocation, const int32 CheckMaterial, const bool NotEqual);

	UFUNCTION(BlueprintCallable, Category = "SimpleVoxel | Data Collector")
		FVoxelData GetVoxelData(const FIntVector GlobalLocation);

	UFUNCTION(BlueprintCallable, Category = "SimpleVoxel | Data Collector")
		FFluidData GetFluidData(const FIntVector GlobalLocation);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SimpleVoxel | Data Collector")
		bool IsFluidVisible(const FIntVector FluidLocation, const bool NotEqual);

	UFUNCTION(BlueprintCallable, Category = "SimpleVoxel | Data Collector")
		TArray<FIntVector> GetVoxelSphereMask(const FIntVector Location, const int32 Size);

	UFUNCTION(BlueprintCallable, Category = "SimpleVoxel | Data Collector")
		TArray<FIntVector> GetVoxelBoxMask(const FIntVector Location, const int32 Size);

	UFUNCTION(BlueprintCallable, Category = "SimpleVoxel | Data Collector")
		TArray<FIntVector> GetVoxelAreaMask(const FIntVector StartLocation, const FIntVector EndLocation);

	UFUNCTION(BlueprintCallable, Category = "SimpleVoxel | Data Collector")
		bool VoxelDirectionTrace(const FIntVector StartLocation, const FIntVector Direction, const int32 LoopTime, FVoxelData& Result);

	UFUNCTION(BlueprintCallable, Category = "SimpleVoxel | Data Collector")
		bool FluidDirectionTrace(const FIntVector StartLocation, const FIntVector Direction, const int32 LoopTime, FFluidData& Result);

	///Converter///
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SimpleVoxel | Converter")
		FIntVector IndexToLocal(const int Index);
	
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SimpleVoxel | Converter")
		FIntVector IndexToGlobal(const int Index, const FIntVector ChuckLocation);
	
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SimpleVoxel | Converter")
		int LocalToIndex(const FIntVector Location);
	
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SimpleVoxel | Converter")
		FIntVector LocalToGlobal(const FIntVector Location, const FIntVector ChuckLocation);
	
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SimpleVoxel | Converter")
		int GlobalToIndex(const FIntVector Location);
	
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SimpleVoxel | Converter")
		FIntVector GlobalToLocal(const FIntVector Location);
	
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SimpleVoxel | Converter")
		FIntVector FindChuckByGlobal(const FIntVector Location);
	
	///Chuck///

	UFUNCTION(BlueprintCallable, Category = "SimpleVoxel | Chuck Manupulation")
		bool FillChuckWithVoxel(const FIntVector ChuckLocation, const int32 Material, const FColor CustomData, const bool AddToRenderQueue = true);

	UFUNCTION(BlueprintNativeEvent, Category = "SimpleVoxel | Chuck Manupulation")
		bool InitializeChuck(const FIntVector ChuckLocation, ASimpleVoxelChuck* ChuckActor);

	UFUNCTION()
		virtual bool InitializeChuck_Implementation(const FIntVector ChuckLocation, ASimpleVoxelChuck* ChuckActor);

	UFUNCTION(BlueprintCallable, Category = "SimpleVoxel | Chuck Manupulation")
		bool ActiveChuckInScene(ASimpleVoxelChuck* ChuckActor, const FIntVector ChuckLocation, const bool AddToRenderQueue);
	
	UFUNCTION(BlueprintCallable, Category = "SimpleVoxel | Chuck Manupulation")
		bool ActiveChuck(const FIntVector ChuckLocation, const bool AddToRenderQueue);
	
	UFUNCTION(BlueprintCallable, Category = "SimpleVoxel | Chuck Manupulation")
		bool DeactiveChuck(const FIntVector ChuckLocation);

	UFUNCTION(BlueprintCallable, Category = "SimpleVoxel | Chuck Manupulation")
		bool AddDirtyVoxelChuck(const FIntVector ChuckLocation, const bool Update);
	
	UFUNCTION(BlueprintCallable, Category = "SimpleVoxel | Chuck Manupulation")
		bool AddDirtyFluidChuck(const FIntVector ChuckLocation, const bool Update);

	UFUNCTION(BlueprintCallable, Category = "SimpleVoxel | Chuck Manupulation")
		bool UpdateVoxelChuck(const bool Force);

	UFUNCTION(BlueprintCallable, Category = "SimpleVoxel | Chuck Manupulation")
		bool UpdateFluidChuck(const bool Force);

	///Voxel///

	UFUNCTION(BlueprintCallable, Category = "SimpleVoxel | Voxel")
		bool SetVoxelLocal(FIntVector VoxelLocation, FIntVector ChuckLocation, int32 Material, FColor CustomData, bool AddToRenderQueue = true);

	UFUNCTION(BlueprintCallable, Category = "SimpleVoxel | Voxel")
		bool SetVoxel(FIntVector GlobalLocation, int32 Material, FColor CustomData, bool AddToRenderQueue = true);

	UFUNCTION(BlueprintCallable, Category = "SimpleVoxel | Voxel")
		bool SetVoxelsLocal(TArray<FIntVector> VoxelsLocation, FIntVector ChuckLocation, int32 Material, FColor CustomData, bool AddToRenderQueue = true);

	UFUNCTION(BlueprintCallable, Category = "SimpleVoxel | Voxel")
		bool UpdateVoxelsLocal(TArray<FIntVector> VoxelsLocation, FIntVector ChuckLocation, FColor CustomData, bool AddToRenderQueue = true);

	UFUNCTION(BlueprintCallable, Category = "SimpleVoxel | Voxel")
		void SetVoxels(TArray<FIntVector> GlobalLocation, int32 Material, FColor CustomData, bool AddToRenderQueue = true);

	UFUNCTION(BlueprintCallable, Category = "SimpleVoxel | Voxel")
		void UpdateVoxels(TArray<FIntVector> GlobalLocation, FColor CustomData, bool AddToRenderQueue = true);

	UFUNCTION(BlueprintCallable, Category = "SimpleVoxel | Voxel")
		bool SetVoxelAreaLocal(const FIntVector StartLocation, const FIntVector EndLocation, FIntVector ChuckLocation, int32 Material, FColor CustomData, bool AddToRenderQueue = true);

	UFUNCTION(BlueprintCallable, Category = "SimpleVoxel | Voxel")
		bool SetVoxelArea(const FIntVector StartLocation, const FIntVector EndLocation, int32 Material, FColor CustomData, bool AddToRenderQueue = true);

	UFUNCTION(BlueprintCallable, Category = "SimpleVoxel | Voxel")
		bool SetVoxelsLocalByHeightMap(TArray<FIntVector> VoxelsLocation, FIntVector ChuckLocation, int32 Material, FColor CustomData, bool AddToRenderQueue = true);

	///Fluid///
	UFUNCTION(BlueprintCallable, Category = "SimpleVoxel | Fluid")
		bool SetFluidLocal(FIntVector VoxelLocation, FIntVector ChuckLocation, uint8 Depth, FColor CustomData, uint8 FlowDelay, uint8 MaxPressure, bool AddToRenderQueue = true);

	UFUNCTION(BlueprintCallable, Category = "SimpleVoxel | Fluid")
		bool SetFluid(FIntVector GlobalLocation, uint8 Depth, FColor CustomData, uint8 FlowDelay, uint8 MaxPressure, bool AddToRenderQueue = true);

	///Simulation///
	UFUNCTION(BlueprintCallable, Category = "SimpleVoxel | Simulation")
		void FluidSimStep(bool AddToRenderQueue);

	UFUNCTION()
		void FluidSimStepThread(TArray<FFluidData>& DestoryFluids, TArray<FFluidData>& CreateFluids);

	UFUNCTION()
		void FluidSimStepThreadDone(bool AddToRenderQueue, const TArray<FFluidData>& DestoryFluids, const TArray<FFluidData>& CreateFluids);

	// Sets default values for this actor's properties
	ASimpleVoxelActor();
	~ASimpleVoxelActor();

protected:
	virtual void OnConstruction(const FTransform& Transform) override;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

class FluidSimStepTaskAD : public FNonAbandonableTask
{
	friend class FAsyncTask<FluidSimStepTaskAD>;

private:
	ASimpleVoxelActor* ClassConnector;

public:
	bool AddToRenderQueue;

	FluidSimStepTaskAD(ASimpleVoxelActor* Connector) : ClassConnector(Connector)
	{
	}

protected:
	void DoWork()
	{
		TArray<FFluidData> DestoryFluids;
		TArray<FFluidData> CreateFluids;

		ClassConnector->FluidSimStepThread(DestoryFluids, CreateFluids);
		ClassConnector->FluidSimStepThreadDone(AddToRenderQueue, DestoryFluids, CreateFluids);
		
		return;
	}

	FORCEINLINE TStatId GetStatId() const
	{
		RETURN_QUICK_DECLARE_CYCLE_STAT(FluidSimStepTaskAD, STATGROUP_ThreadPoolAsyncTasks);
	}
};

