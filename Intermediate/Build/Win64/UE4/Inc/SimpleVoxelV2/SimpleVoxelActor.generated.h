// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFluidData;
struct FIntVector;
struct FColor;
class ASimpleVoxelChuck;
struct FVoxelData;
struct FIntVector; struct FChuckData;
#ifdef SIMPLEVOXELV2_SimpleVoxelActor_generated_h
#error "SimpleVoxelActor.generated.h already included, missing '#pragma once' in SimpleVoxelActor.h"
#endif
#define SIMPLEVOXELV2_SimpleVoxelActor_generated_h

#define HostProject_Plugins_SimpleVoxelV2_Source_SimpleVoxelV2_Public_SimpleVoxelActor_h_99_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSingleThreadJobData_Statics; \
	SIMPLEVOXELV2_API static class UScriptStruct* StaticStruct();


template<> SIMPLEVOXELV2_API UScriptStruct* StaticStruct<struct FSingleThreadJobData>();

#define HostProject_Plugins_SimpleVoxelV2_Source_SimpleVoxelV2_Public_SimpleVoxelActor_h_75_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChuckData_Statics; \
	SIMPLEVOXELV2_API static class UScriptStruct* StaticStruct();


template<> SIMPLEVOXELV2_API UScriptStruct* StaticStruct<struct FChuckData>();

#define HostProject_Plugins_SimpleVoxelV2_Source_SimpleVoxelV2_Public_SimpleVoxelActor_h_54_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelData_Statics; \
	SIMPLEVOXELV2_API static class UScriptStruct* StaticStruct();


template<> SIMPLEVOXELV2_API UScriptStruct* StaticStruct<struct FVoxelData>();

#define HostProject_Plugins_SimpleVoxelV2_Source_SimpleVoxelV2_Public_SimpleVoxelActor_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFluidData_Statics; \
	SIMPLEVOXELV2_API static class UScriptStruct* StaticStruct();


template<> SIMPLEVOXELV2_API UScriptStruct* StaticStruct<struct FFluidData>();

#define HostProject_Plugins_SimpleVoxelV2_Source_SimpleVoxelV2_Public_SimpleVoxelActor_h_126_SPARSE_DATA
#define HostProject_Plugins_SimpleVoxelV2_Source_SimpleVoxelV2_Public_SimpleVoxelActor_h_126_RPC_WRAPPERS \
	virtual bool InitializeChuck_Implementation(const FIntVector ChuckLocation, ASimpleVoxelChuck* ChuckActor); \
 \
	DECLARE_FUNCTION(execFluidSimStepThreadDone); \
	DECLARE_FUNCTION(execFluidSimStepThread); \
	DECLARE_FUNCTION(execFluidSimStep); \
	DECLARE_FUNCTION(execSetFluid); \
	DECLARE_FUNCTION(execSetFluidLocal); \
	DECLARE_FUNCTION(execSetVoxelsLocalByHeightMap); \
	DECLARE_FUNCTION(execSetVoxelArea); \
	DECLARE_FUNCTION(execSetVoxelAreaLocal); \
	DECLARE_FUNCTION(execUpdateVoxels); \
	DECLARE_FUNCTION(execSetVoxels); \
	DECLARE_FUNCTION(execUpdateVoxelsLocal); \
	DECLARE_FUNCTION(execSetVoxelsLocal); \
	DECLARE_FUNCTION(execSetVoxel); \
	DECLARE_FUNCTION(execSetVoxelLocal); \
	DECLARE_FUNCTION(execUpdateFluidChuck); \
	DECLARE_FUNCTION(execUpdateVoxelChuck); \
	DECLARE_FUNCTION(execAddDirtyFluidChuck); \
	DECLARE_FUNCTION(execAddDirtyVoxelChuck); \
	DECLARE_FUNCTION(execDeactiveChuck); \
	DECLARE_FUNCTION(execActiveChuck); \
	DECLARE_FUNCTION(execActiveChuckInScene); \
	DECLARE_FUNCTION(execInitializeChuck_Implementation); \
	DECLARE_FUNCTION(execInitializeChuck); \
	DECLARE_FUNCTION(execFillChuckWithVoxel); \
	DECLARE_FUNCTION(execFindChuckByGlobal); \
	DECLARE_FUNCTION(execGlobalToLocal); \
	DECLARE_FUNCTION(execGlobalToIndex); \
	DECLARE_FUNCTION(execLocalToGlobal); \
	DECLARE_FUNCTION(execLocalToIndex); \
	DECLARE_FUNCTION(execIndexToGlobal); \
	DECLARE_FUNCTION(execIndexToLocal); \
	DECLARE_FUNCTION(execFluidDirectionTrace); \
	DECLARE_FUNCTION(execVoxelDirectionTrace); \
	DECLARE_FUNCTION(execGetVoxelAreaMask); \
	DECLARE_FUNCTION(execGetVoxelBoxMask); \
	DECLARE_FUNCTION(execGetVoxelSphereMask); \
	DECLARE_FUNCTION(execIsFluidVisible); \
	DECLARE_FUNCTION(execGetFluidData); \
	DECLARE_FUNCTION(execGetVoxelData); \
	DECLARE_FUNCTION(execIsVoxelVisible); \
	DECLARE_FUNCTION(execIsChuckActive); \
	DECLARE_FUNCTION(execHasChuckInitialized); \
	DECLARE_FUNCTION(execLoadSaveData); \
	DECLARE_FUNCTION(execGetSaveData); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execCompleteAllUpdate); \
	DECLARE_FUNCTION(execCallGameThreadJob); \
	DECLARE_FUNCTION(execIncrementFluidThreadCounter); \
	DECLARE_FUNCTION(execDecrementFluidThreadCounter); \
	DECLARE_FUNCTION(execIncrementVoxelThreadCounter); \
	DECLARE_FUNCTION(execDecrementVoxelThreadCounter);


#define HostProject_Plugins_SimpleVoxelV2_Source_SimpleVoxelV2_Public_SimpleVoxelActor_h_126_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFluidSimStepThreadDone); \
	DECLARE_FUNCTION(execFluidSimStepThread); \
	DECLARE_FUNCTION(execFluidSimStep); \
	DECLARE_FUNCTION(execSetFluid); \
	DECLARE_FUNCTION(execSetFluidLocal); \
	DECLARE_FUNCTION(execSetVoxelsLocalByHeightMap); \
	DECLARE_FUNCTION(execSetVoxelArea); \
	DECLARE_FUNCTION(execSetVoxelAreaLocal); \
	DECLARE_FUNCTION(execUpdateVoxels); \
	DECLARE_FUNCTION(execSetVoxels); \
	DECLARE_FUNCTION(execUpdateVoxelsLocal); \
	DECLARE_FUNCTION(execSetVoxelsLocal); \
	DECLARE_FUNCTION(execSetVoxel); \
	DECLARE_FUNCTION(execSetVoxelLocal); \
	DECLARE_FUNCTION(execUpdateFluidChuck); \
	DECLARE_FUNCTION(execUpdateVoxelChuck); \
	DECLARE_FUNCTION(execAddDirtyFluidChuck); \
	DECLARE_FUNCTION(execAddDirtyVoxelChuck); \
	DECLARE_FUNCTION(execDeactiveChuck); \
	DECLARE_FUNCTION(execActiveChuck); \
	DECLARE_FUNCTION(execActiveChuckInScene); \
	DECLARE_FUNCTION(execInitializeChuck_Implementation); \
	DECLARE_FUNCTION(execInitializeChuck); \
	DECLARE_FUNCTION(execFillChuckWithVoxel); \
	DECLARE_FUNCTION(execFindChuckByGlobal); \
	DECLARE_FUNCTION(execGlobalToLocal); \
	DECLARE_FUNCTION(execGlobalToIndex); \
	DECLARE_FUNCTION(execLocalToGlobal); \
	DECLARE_FUNCTION(execLocalToIndex); \
	DECLARE_FUNCTION(execIndexToGlobal); \
	DECLARE_FUNCTION(execIndexToLocal); \
	DECLARE_FUNCTION(execFluidDirectionTrace); \
	DECLARE_FUNCTION(execVoxelDirectionTrace); \
	DECLARE_FUNCTION(execGetVoxelAreaMask); \
	DECLARE_FUNCTION(execGetVoxelBoxMask); \
	DECLARE_FUNCTION(execGetVoxelSphereMask); \
	DECLARE_FUNCTION(execIsFluidVisible); \
	DECLARE_FUNCTION(execGetFluidData); \
	DECLARE_FUNCTION(execGetVoxelData); \
	DECLARE_FUNCTION(execIsVoxelVisible); \
	DECLARE_FUNCTION(execIsChuckActive); \
	DECLARE_FUNCTION(execHasChuckInitialized); \
	DECLARE_FUNCTION(execLoadSaveData); \
	DECLARE_FUNCTION(execGetSaveData); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execCompleteAllUpdate); \
	DECLARE_FUNCTION(execCallGameThreadJob); \
	DECLARE_FUNCTION(execIncrementFluidThreadCounter); \
	DECLARE_FUNCTION(execDecrementFluidThreadCounter); \
	DECLARE_FUNCTION(execIncrementVoxelThreadCounter); \
	DECLARE_FUNCTION(execDecrementVoxelThreadCounter);


#define HostProject_Plugins_SimpleVoxelV2_Source_SimpleVoxelV2_Public_SimpleVoxelActor_h_126_EVENT_PARMS \
	struct SimpleVoxelActor_eventInitializeChuck_Parms \
	{ \
		FIntVector ChuckLocation; \
		ASimpleVoxelChuck* ChuckActor; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SimpleVoxelActor_eventInitializeChuck_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define HostProject_Plugins_SimpleVoxelV2_Source_SimpleVoxelV2_Public_SimpleVoxelActor_h_126_CALLBACK_WRAPPERS
#define HostProject_Plugins_SimpleVoxelV2_Source_SimpleVoxelV2_Public_SimpleVoxelActor_h_126_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASimpleVoxelActor(); \
	friend struct Z_Construct_UClass_ASimpleVoxelActor_Statics; \
public: \
	DECLARE_CLASS(ASimpleVoxelActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SimpleVoxelV2"), NO_API) \
	DECLARE_SERIALIZER(ASimpleVoxelActor)


#define HostProject_Plugins_SimpleVoxelV2_Source_SimpleVoxelV2_Public_SimpleVoxelActor_h_126_INCLASS \
private: \
	static void StaticRegisterNativesASimpleVoxelActor(); \
	friend struct Z_Construct_UClass_ASimpleVoxelActor_Statics; \
public: \
	DECLARE_CLASS(ASimpleVoxelActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SimpleVoxelV2"), NO_API) \
	DECLARE_SERIALIZER(ASimpleVoxelActor)


#define HostProject_Plugins_SimpleVoxelV2_Source_SimpleVoxelV2_Public_SimpleVoxelActor_h_126_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASimpleVoxelActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASimpleVoxelActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASimpleVoxelActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASimpleVoxelActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASimpleVoxelActor(ASimpleVoxelActor&&); \
	NO_API ASimpleVoxelActor(const ASimpleVoxelActor&); \
public:


#define HostProject_Plugins_SimpleVoxelV2_Source_SimpleVoxelV2_Public_SimpleVoxelActor_h_126_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASimpleVoxelActor(ASimpleVoxelActor&&); \
	NO_API ASimpleVoxelActor(const ASimpleVoxelActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASimpleVoxelActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASimpleVoxelActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASimpleVoxelActor)


#define HostProject_Plugins_SimpleVoxelV2_Source_SimpleVoxelV2_Public_SimpleVoxelActor_h_126_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_SimpleVoxelV2_Source_SimpleVoxelV2_Public_SimpleVoxelActor_h_123_PROLOG \
	HostProject_Plugins_SimpleVoxelV2_Source_SimpleVoxelV2_Public_SimpleVoxelActor_h_126_EVENT_PARMS


#define HostProject_Plugins_SimpleVoxelV2_Source_SimpleVoxelV2_Public_SimpleVoxelActor_h_126_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SimpleVoxelV2_Source_SimpleVoxelV2_Public_SimpleVoxelActor_h_126_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SimpleVoxelV2_Source_SimpleVoxelV2_Public_SimpleVoxelActor_h_126_SPARSE_DATA \
	HostProject_Plugins_SimpleVoxelV2_Source_SimpleVoxelV2_Public_SimpleVoxelActor_h_126_RPC_WRAPPERS \
	HostProject_Plugins_SimpleVoxelV2_Source_SimpleVoxelV2_Public_SimpleVoxelActor_h_126_CALLBACK_WRAPPERS \
	HostProject_Plugins_SimpleVoxelV2_Source_SimpleVoxelV2_Public_SimpleVoxelActor_h_126_INCLASS \
	HostProject_Plugins_SimpleVoxelV2_Source_SimpleVoxelV2_Public_SimpleVoxelActor_h_126_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SimpleVoxelV2_Source_SimpleVoxelV2_Public_SimpleVoxelActor_h_126_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SimpleVoxelV2_Source_SimpleVoxelV2_Public_SimpleVoxelActor_h_126_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SimpleVoxelV2_Source_SimpleVoxelV2_Public_SimpleVoxelActor_h_126_SPARSE_DATA \
	HostProject_Plugins_SimpleVoxelV2_Source_SimpleVoxelV2_Public_SimpleVoxelActor_h_126_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SimpleVoxelV2_Source_SimpleVoxelV2_Public_SimpleVoxelActor_h_126_CALLBACK_WRAPPERS \
	HostProject_Plugins_SimpleVoxelV2_Source_SimpleVoxelV2_Public_SimpleVoxelActor_h_126_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SimpleVoxelV2_Source_SimpleVoxelV2_Public_SimpleVoxelActor_h_126_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIMPLEVOXELV2_API UClass* StaticClass<class ASimpleVoxelActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_SimpleVoxelV2_Source_SimpleVoxelV2_Public_SimpleVoxelActor_h


#define FOREACH_ENUM_ESINGLETHREADJOBTYPE(op) \
	op(None) \
	op(SetVoxel) \
	op(SetFluid) \
	op(ActiveChuck) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
