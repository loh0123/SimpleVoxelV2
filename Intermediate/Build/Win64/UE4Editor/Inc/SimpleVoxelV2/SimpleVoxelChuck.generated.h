// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInterface;
struct FIntVector;
class ASimpleVoxelActor;
struct FChuckData;
struct FFluidData;
struct FVoxelData;
#ifdef SIMPLEVOXELV2_SimpleVoxelChuck_generated_h
#error "SimpleVoxelChuck.generated.h already included, missing '#pragma once' in SimpleVoxelChuck.h"
#endif
#define SIMPLEVOXELV2_SimpleVoxelChuck_generated_h

#define HostProject_Plugins_SimpleVoxelV2_Source_SimpleVoxelV2_Public_SimpleVoxelChuck_h_40_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelRenderData_Statics; \
	SIMPLEVOXELV2_API static class UScriptStruct* StaticStruct();


template<> SIMPLEVOXELV2_API UScriptStruct* StaticStruct<struct FVoxelRenderData>();

#define HostProject_Plugins_SimpleVoxelV2_Source_SimpleVoxelV2_Public_SimpleVoxelChuck_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGreddyMeshingData_Statics; \
	SIMPLEVOXELV2_API static class UScriptStruct* StaticStruct();


template<> SIMPLEVOXELV2_API UScriptStruct* StaticStruct<struct FGreddyMeshingData>();

#define HostProject_Plugins_SimpleVoxelV2_Source_SimpleVoxelV2_Public_SimpleVoxelChuck_h_73_SPARSE_DATA
#define HostProject_Plugins_SimpleVoxelV2_Source_SimpleVoxelV2_Public_SimpleVoxelChuck_h_73_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRenderFluidMesh); \
	DECLARE_FUNCTION(execRenderVoxelMesh); \
	DECLARE_FUNCTION(execCreateFluidRenderDataGMDone); \
	DECLARE_FUNCTION(execCreateFluidRenderDataGM); \
	DECLARE_FUNCTION(execCreateVoxelRenderDataGMDone); \
	DECLARE_FUNCTION(execCreateVoxelRenderDataGM); \
	DECLARE_FUNCTION(execUpdateImage); \
	DECLARE_FUNCTION(execSetupVoxelChuck); \
	DECLARE_FUNCTION(execGetChuckData);


#define HostProject_Plugins_SimpleVoxelV2_Source_SimpleVoxelV2_Public_SimpleVoxelChuck_h_73_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRenderFluidMesh); \
	DECLARE_FUNCTION(execRenderVoxelMesh); \
	DECLARE_FUNCTION(execCreateFluidRenderDataGMDone); \
	DECLARE_FUNCTION(execCreateFluidRenderDataGM); \
	DECLARE_FUNCTION(execCreateVoxelRenderDataGMDone); \
	DECLARE_FUNCTION(execCreateVoxelRenderDataGM); \
	DECLARE_FUNCTION(execUpdateImage); \
	DECLARE_FUNCTION(execSetupVoxelChuck); \
	DECLARE_FUNCTION(execGetChuckData);


#define HostProject_Plugins_SimpleVoxelV2_Source_SimpleVoxelV2_Public_SimpleVoxelChuck_h_73_EVENT_PARMS \
	struct SimpleVoxelChuck_eventOnFluidRenderUpdate_Parms \
	{ \
		TArray<FFluidData> Add; \
		TArray<FFluidData> Remove; \
	}; \
	struct SimpleVoxelChuck_eventOnVoxelRenderUpdate_Parms \
	{ \
		TArray<FVoxelData> Add; \
		TArray<FVoxelData> Remove; \
	};


#define HostProject_Plugins_SimpleVoxelV2_Source_SimpleVoxelV2_Public_SimpleVoxelChuck_h_73_CALLBACK_WRAPPERS
#define HostProject_Plugins_SimpleVoxelV2_Source_SimpleVoxelV2_Public_SimpleVoxelChuck_h_73_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASimpleVoxelChuck(); \
	friend struct Z_Construct_UClass_ASimpleVoxelChuck_Statics; \
public: \
	DECLARE_CLASS(ASimpleVoxelChuck, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SimpleVoxelV2"), NO_API) \
	DECLARE_SERIALIZER(ASimpleVoxelChuck)


#define HostProject_Plugins_SimpleVoxelV2_Source_SimpleVoxelV2_Public_SimpleVoxelChuck_h_73_INCLASS \
private: \
	static void StaticRegisterNativesASimpleVoxelChuck(); \
	friend struct Z_Construct_UClass_ASimpleVoxelChuck_Statics; \
public: \
	DECLARE_CLASS(ASimpleVoxelChuck, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SimpleVoxelV2"), NO_API) \
	DECLARE_SERIALIZER(ASimpleVoxelChuck)


#define HostProject_Plugins_SimpleVoxelV2_Source_SimpleVoxelV2_Public_SimpleVoxelChuck_h_73_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASimpleVoxelChuck(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASimpleVoxelChuck) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASimpleVoxelChuck); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASimpleVoxelChuck); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASimpleVoxelChuck(ASimpleVoxelChuck&&); \
	NO_API ASimpleVoxelChuck(const ASimpleVoxelChuck&); \
public:


#define HostProject_Plugins_SimpleVoxelV2_Source_SimpleVoxelV2_Public_SimpleVoxelChuck_h_73_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASimpleVoxelChuck(ASimpleVoxelChuck&&); \
	NO_API ASimpleVoxelChuck(const ASimpleVoxelChuck&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASimpleVoxelChuck); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASimpleVoxelChuck); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASimpleVoxelChuck)


#define HostProject_Plugins_SimpleVoxelV2_Source_SimpleVoxelV2_Public_SimpleVoxelChuck_h_73_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_SimpleVoxelV2_Source_SimpleVoxelV2_Public_SimpleVoxelChuck_h_70_PROLOG \
	HostProject_Plugins_SimpleVoxelV2_Source_SimpleVoxelV2_Public_SimpleVoxelChuck_h_73_EVENT_PARMS


#define HostProject_Plugins_SimpleVoxelV2_Source_SimpleVoxelV2_Public_SimpleVoxelChuck_h_73_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SimpleVoxelV2_Source_SimpleVoxelV2_Public_SimpleVoxelChuck_h_73_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SimpleVoxelV2_Source_SimpleVoxelV2_Public_SimpleVoxelChuck_h_73_SPARSE_DATA \
	HostProject_Plugins_SimpleVoxelV2_Source_SimpleVoxelV2_Public_SimpleVoxelChuck_h_73_RPC_WRAPPERS \
	HostProject_Plugins_SimpleVoxelV2_Source_SimpleVoxelV2_Public_SimpleVoxelChuck_h_73_CALLBACK_WRAPPERS \
	HostProject_Plugins_SimpleVoxelV2_Source_SimpleVoxelV2_Public_SimpleVoxelChuck_h_73_INCLASS \
	HostProject_Plugins_SimpleVoxelV2_Source_SimpleVoxelV2_Public_SimpleVoxelChuck_h_73_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SimpleVoxelV2_Source_SimpleVoxelV2_Public_SimpleVoxelChuck_h_73_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SimpleVoxelV2_Source_SimpleVoxelV2_Public_SimpleVoxelChuck_h_73_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SimpleVoxelV2_Source_SimpleVoxelV2_Public_SimpleVoxelChuck_h_73_SPARSE_DATA \
	HostProject_Plugins_SimpleVoxelV2_Source_SimpleVoxelV2_Public_SimpleVoxelChuck_h_73_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SimpleVoxelV2_Source_SimpleVoxelV2_Public_SimpleVoxelChuck_h_73_CALLBACK_WRAPPERS \
	HostProject_Plugins_SimpleVoxelV2_Source_SimpleVoxelV2_Public_SimpleVoxelChuck_h_73_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SimpleVoxelV2_Source_SimpleVoxelV2_Public_SimpleVoxelChuck_h_73_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIMPLEVOXELV2_API UClass* StaticClass<class ASimpleVoxelChuck>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_SimpleVoxelV2_Source_SimpleVoxelV2_Public_SimpleVoxelChuck_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
