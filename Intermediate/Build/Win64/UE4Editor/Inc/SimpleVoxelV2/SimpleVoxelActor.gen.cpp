// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleVoxelV2/Public/SimpleVoxelActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleVoxelActor() {}
// Cross Module References
	SIMPLEVOXELV2_API UEnum* Z_Construct_UEnum_SimpleVoxelV2_ESingleThreadJobType();
	UPackage* Z_Construct_UPackage__Script_SimpleVoxelV2();
	SIMPLEVOXELV2_API UScriptStruct* Z_Construct_UScriptStruct_FSingleThreadJobData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	SIMPLEVOXELV2_API UScriptStruct* Z_Construct_UScriptStruct_FChuckData();
	SIMPLEVOXELV2_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelData();
	SIMPLEVOXELV2_API UScriptStruct* Z_Construct_UScriptStruct_FFluidData();
	SIMPLEVOXELV2_API UClass* Z_Construct_UClass_ASimpleVoxelActor_NoRegister();
	SIMPLEVOXELV2_API UClass* Z_Construct_UClass_ASimpleVoxelActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	SIMPLEVOXELV2_API UClass* Z_Construct_UClass_ASimpleVoxelChuck_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	static UEnum* ESingleThreadJobType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SimpleVoxelV2_ESingleThreadJobType, Z_Construct_UPackage__Script_SimpleVoxelV2(), TEXT("ESingleThreadJobType"));
		}
		return Singleton;
	}
	template<> SIMPLEVOXELV2_API UEnum* StaticEnum<ESingleThreadJobType>()
	{
		return ESingleThreadJobType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESingleThreadJobType(ESingleThreadJobType_StaticEnum, TEXT("/Script/SimpleVoxelV2"), TEXT("ESingleThreadJobType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SimpleVoxelV2_ESingleThreadJobType_Hash() { return 2159104369U; }
	UEnum* Z_Construct_UEnum_SimpleVoxelV2_ESingleThreadJobType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SimpleVoxelV2();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESingleThreadJobType"), 0, Get_Z_Construct_UEnum_SimpleVoxelV2_ESingleThreadJobType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "None", (int64)None },
				{ "SetVoxel", (int64)SetVoxel },
				{ "SetFluid", (int64)SetFluid },
				{ "ActiveChuck", (int64)ActiveChuck },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ActiveChuck.Name", "ActiveChuck" },
				{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
				{ "None.Name", "None" },
				{ "SetFluid.Name", "SetFluid" },
				{ "SetVoxel.Name", "SetVoxel" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SimpleVoxelV2,
				nullptr,
				"ESingleThreadJobType",
				"ESingleThreadJobType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FSingleThreadJobData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SIMPLEVOXELV2_API uint32 Get_Z_Construct_UScriptStruct_FSingleThreadJobData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSingleThreadJobData, Z_Construct_UPackage__Script_SimpleVoxelV2(), TEXT("SingleThreadJobData"), sizeof(FSingleThreadJobData), Get_Z_Construct_UScriptStruct_FSingleThreadJobData_Hash());
	}
	return Singleton;
}
template<> SIMPLEVOXELV2_API UScriptStruct* StaticStruct<FSingleThreadJobData>()
{
	return FSingleThreadJobData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSingleThreadJobData(FSingleThreadJobData::StaticStruct, TEXT("/Script/SimpleVoxelV2"), TEXT("SingleThreadJobData"), false, nullptr, nullptr);
static struct FScriptStruct_SimpleVoxelV2_StaticRegisterNativesFSingleThreadJobData
{
	FScriptStruct_SimpleVoxelV2_StaticRegisterNativesFSingleThreadJobData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SingleThreadJobData")),new UScriptStruct::TCppStructOps<FSingleThreadJobData>);
	}
} ScriptStruct_SimpleVoxelV2_StaticRegisterNativesFSingleThreadJobData;
	struct Z_Construct_UScriptStruct_FSingleThreadJobData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JobType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_JobType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IntVectorArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntVectorArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IntVectorArray;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_UInt8Array_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UInt8Array_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UInt8Array;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Int32Array_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Int32Array_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Int32Array;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ColorArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddToRenderQueue_MetaData[];
#endif
		static void NewProp_AddToRenderQueue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AddToRenderQueue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSingleThreadJobData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSingleThreadJobData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSingleThreadJobData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSingleThreadJobData_Statics::NewProp_JobType_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSingleThreadJobData_Statics::NewProp_JobType = { "JobType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSingleThreadJobData, JobType), Z_Construct_UEnum_SimpleVoxelV2_ESingleThreadJobType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSingleThreadJobData_Statics::NewProp_JobType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSingleThreadJobData_Statics::NewProp_JobType_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSingleThreadJobData_Statics::NewProp_IntVectorArray_Inner = { "IntVectorArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSingleThreadJobData_Statics::NewProp_IntVectorArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSingleThreadJobData_Statics::NewProp_IntVectorArray = { "IntVectorArray", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSingleThreadJobData, IntVectorArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSingleThreadJobData_Statics::NewProp_IntVectorArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSingleThreadJobData_Statics::NewProp_IntVectorArray_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSingleThreadJobData_Statics::NewProp_UInt8Array_Inner = { "UInt8Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSingleThreadJobData_Statics::NewProp_UInt8Array_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSingleThreadJobData_Statics::NewProp_UInt8Array = { "UInt8Array", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSingleThreadJobData, UInt8Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSingleThreadJobData_Statics::NewProp_UInt8Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSingleThreadJobData_Statics::NewProp_UInt8Array_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSingleThreadJobData_Statics::NewProp_Int32Array_Inner = { "Int32Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSingleThreadJobData_Statics::NewProp_Int32Array_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSingleThreadJobData_Statics::NewProp_Int32Array = { "Int32Array", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSingleThreadJobData, Int32Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSingleThreadJobData_Statics::NewProp_Int32Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSingleThreadJobData_Statics::NewProp_Int32Array_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSingleThreadJobData_Statics::NewProp_ColorArray_Inner = { "ColorArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSingleThreadJobData_Statics::NewProp_ColorArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSingleThreadJobData_Statics::NewProp_ColorArray = { "ColorArray", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSingleThreadJobData, ColorArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSingleThreadJobData_Statics::NewProp_ColorArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSingleThreadJobData_Statics::NewProp_ColorArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSingleThreadJobData_Statics::NewProp_AddToRenderQueue_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSingleThreadJobData_Statics::NewProp_AddToRenderQueue_SetBit(void* Obj)
	{
		((FSingleThreadJobData*)Obj)->AddToRenderQueue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSingleThreadJobData_Statics::NewProp_AddToRenderQueue = { "AddToRenderQueue", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSingleThreadJobData), &Z_Construct_UScriptStruct_FSingleThreadJobData_Statics::NewProp_AddToRenderQueue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSingleThreadJobData_Statics::NewProp_AddToRenderQueue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSingleThreadJobData_Statics::NewProp_AddToRenderQueue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSingleThreadJobData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSingleThreadJobData_Statics::NewProp_JobType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSingleThreadJobData_Statics::NewProp_IntVectorArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSingleThreadJobData_Statics::NewProp_IntVectorArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSingleThreadJobData_Statics::NewProp_UInt8Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSingleThreadJobData_Statics::NewProp_UInt8Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSingleThreadJobData_Statics::NewProp_Int32Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSingleThreadJobData_Statics::NewProp_Int32Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSingleThreadJobData_Statics::NewProp_ColorArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSingleThreadJobData_Statics::NewProp_ColorArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSingleThreadJobData_Statics::NewProp_AddToRenderQueue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSingleThreadJobData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleVoxelV2,
		nullptr,
		&NewStructOps,
		"SingleThreadJobData",
		sizeof(FSingleThreadJobData),
		alignof(FSingleThreadJobData),
		Z_Construct_UScriptStruct_FSingleThreadJobData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSingleThreadJobData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSingleThreadJobData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSingleThreadJobData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSingleThreadJobData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSingleThreadJobData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SimpleVoxelV2();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SingleThreadJobData"), sizeof(FSingleThreadJobData), Get_Z_Construct_UScriptStruct_FSingleThreadJobData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSingleThreadJobData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSingleThreadJobData_Hash() { return 4080707751U; }
class UScriptStruct* FChuckData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SIMPLEVOXELV2_API uint32 Get_Z_Construct_UScriptStruct_FChuckData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FChuckData, Z_Construct_UPackage__Script_SimpleVoxelV2(), TEXT("ChuckData"), sizeof(FChuckData), Get_Z_Construct_UScriptStruct_FChuckData_Hash());
	}
	return Singleton;
}
template<> SIMPLEVOXELV2_API UScriptStruct* StaticStruct<FChuckData>()
{
	return FChuckData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FChuckData(FChuckData::StaticStruct, TEXT("/Script/SimpleVoxelV2"), TEXT("ChuckData"), false, nullptr, nullptr);
static struct FScriptStruct_SimpleVoxelV2_StaticRegisterNativesFChuckData
{
	FScriptStruct_SimpleVoxelV2_StaticRegisterNativesFChuckData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ChuckData")),new UScriptStruct::TCppStructOps<FChuckData>);
	}
} ScriptStruct_SimpleVoxelV2_StaticRegisterNativesFChuckData;
	struct Z_Construct_UScriptStruct_FChuckData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VoxelData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoxelData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VoxelData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FluidData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FluidData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FluidData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChuckData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChuckData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChuckData>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChuckData_Statics::NewProp_VoxelData_Inner = { "VoxelData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVoxelData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChuckData_Statics::NewProp_VoxelData_MetaData[] = {
		{ "Category", "ChuckData | Variable" },
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FChuckData_Statics::NewProp_VoxelData = { "VoxelData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChuckData, VoxelData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FChuckData_Statics::NewProp_VoxelData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChuckData_Statics::NewProp_VoxelData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChuckData_Statics::NewProp_FluidData_Inner = { "FluidData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFluidData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChuckData_Statics::NewProp_FluidData_MetaData[] = {
		{ "Category", "ChuckData | Variable" },
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FChuckData_Statics::NewProp_FluidData = { "FluidData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChuckData, FluidData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FChuckData_Statics::NewProp_FluidData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChuckData_Statics::NewProp_FluidData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChuckData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChuckData_Statics::NewProp_VoxelData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChuckData_Statics::NewProp_VoxelData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChuckData_Statics::NewProp_FluidData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChuckData_Statics::NewProp_FluidData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChuckData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleVoxelV2,
		nullptr,
		&NewStructOps,
		"ChuckData",
		sizeof(FChuckData),
		alignof(FChuckData),
		Z_Construct_UScriptStruct_FChuckData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChuckData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChuckData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChuckData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChuckData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FChuckData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SimpleVoxelV2();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ChuckData"), sizeof(FChuckData), Get_Z_Construct_UScriptStruct_FChuckData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FChuckData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FChuckData_Hash() { return 2760545462U; }
class UScriptStruct* FVoxelData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SIMPLEVOXELV2_API uint32 Get_Z_Construct_UScriptStruct_FVoxelData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelData, Z_Construct_UPackage__Script_SimpleVoxelV2(), TEXT("VoxelData"), sizeof(FVoxelData), Get_Z_Construct_UScriptStruct_FVoxelData_Hash());
	}
	return Singleton;
}
template<> SIMPLEVOXELV2_API UScriptStruct* StaticStruct<FVoxelData>()
{
	return FVoxelData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelData(FVoxelData::StaticStruct, TEXT("/Script/SimpleVoxelV2"), TEXT("VoxelData"), false, nullptr, nullptr);
static struct FScriptStruct_SimpleVoxelV2_StaticRegisterNativesFVoxelData
{
	FScriptStruct_SimpleVoxelV2_StaticRegisterNativesFVoxelData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelData")),new UScriptStruct::TCppStructOps<FVoxelData>);
	}
} ScriptStruct_SimpleVoxelV2_StaticRegisterNativesFVoxelData;
	struct Z_Construct_UScriptStruct_FVoxelData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GlobalLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoxelMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VoxelMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoxelCustomData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VoxelCustomData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelData_Statics::NewProp_GlobalLocation_MetaData[] = {
		{ "Category", "VoxelData | Variable" },
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelData_Statics::NewProp_GlobalLocation = { "GlobalLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelData, GlobalLocation), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelData_Statics::NewProp_GlobalLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelData_Statics::NewProp_GlobalLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelData_Statics::NewProp_VoxelMaterial_MetaData[] = {
		{ "Category", "VoxelData | Variable" },
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelData_Statics::NewProp_VoxelMaterial = { "VoxelMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelData, VoxelMaterial), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelData_Statics::NewProp_VoxelMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelData_Statics::NewProp_VoxelMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelData_Statics::NewProp_VoxelCustomData_MetaData[] = {
		{ "Category", "VoxelData | Variable" },
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelData_Statics::NewProp_VoxelCustomData = { "VoxelCustomData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelData, VoxelCustomData), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelData_Statics::NewProp_VoxelCustomData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelData_Statics::NewProp_VoxelCustomData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelData_Statics::NewProp_GlobalLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelData_Statics::NewProp_VoxelMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelData_Statics::NewProp_VoxelCustomData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleVoxelV2,
		nullptr,
		&NewStructOps,
		"VoxelData",
		sizeof(FVoxelData),
		alignof(FVoxelData),
		Z_Construct_UScriptStruct_FVoxelData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SimpleVoxelV2();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelData"), sizeof(FVoxelData), Get_Z_Construct_UScriptStruct_FVoxelData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelData_Hash() { return 2518622996U; }
class UScriptStruct* FFluidData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SIMPLEVOXELV2_API uint32 Get_Z_Construct_UScriptStruct_FFluidData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFluidData, Z_Construct_UPackage__Script_SimpleVoxelV2(), TEXT("FluidData"), sizeof(FFluidData), Get_Z_Construct_UScriptStruct_FFluidData_Hash());
	}
	return Singleton;
}
template<> SIMPLEVOXELV2_API UScriptStruct* StaticStruct<FFluidData>()
{
	return FFluidData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFluidData(FFluidData::StaticStruct, TEXT("/Script/SimpleVoxelV2"), TEXT("FluidData"), false, nullptr, nullptr);
static struct FScriptStruct_SimpleVoxelV2_StaticRegisterNativesFFluidData
{
	FScriptStruct_SimpleVoxelV2_StaticRegisterNativesFFluidData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FluidData")),new UScriptStruct::TCppStructOps<FFluidData>);
	}
} ScriptStruct_SimpleVoxelV2_StaticRegisterNativesFFluidData;
	struct Z_Construct_UScriptStruct_FFluidData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GlobalLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Source;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlowFrom_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FlowFrom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Depth_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Depth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FluidTick_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FluidTick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlowDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FlowDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPressure_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MaxPressure;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFluidData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFluidData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFluidData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFluidData_Statics::NewProp_GlobalLocation_MetaData[] = {
		{ "Category", "FluidData | Variable" },
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFluidData_Statics::NewProp_GlobalLocation = { "GlobalLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFluidData, GlobalLocation), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FFluidData_Statics::NewProp_GlobalLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFluidData_Statics::NewProp_GlobalLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFluidData_Statics::NewProp_Source_MetaData[] = {
		{ "Category", "FluidData | Variable" },
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFluidData_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFluidData, Source), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FFluidData_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFluidData_Statics::NewProp_Source_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFluidData_Statics::NewProp_FlowFrom_MetaData[] = {
		{ "Category", "FluidData | Variable" },
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFluidData_Statics::NewProp_FlowFrom = { "FlowFrom", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFluidData, FlowFrom), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FFluidData_Statics::NewProp_FlowFrom_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFluidData_Statics::NewProp_FlowFrom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFluidData_Statics::NewProp_Depth_MetaData[] = {
		{ "Category", "FluidData | Variable" },
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFluidData_Statics::NewProp_Depth = { "Depth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFluidData, Depth), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FFluidData_Statics::NewProp_Depth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFluidData_Statics::NewProp_Depth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFluidData_Statics::NewProp_CustomData_MetaData[] = {
		{ "Category", "FluidData | Variable" },
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFluidData_Statics::NewProp_CustomData = { "CustomData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFluidData, CustomData), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FFluidData_Statics::NewProp_CustomData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFluidData_Statics::NewProp_CustomData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFluidData_Statics::NewProp_FluidTick_MetaData[] = {
		{ "Category", "FluidData | Variable" },
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFluidData_Statics::NewProp_FluidTick = { "FluidTick", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFluidData, FluidTick), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FFluidData_Statics::NewProp_FluidTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFluidData_Statics::NewProp_FluidTick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFluidData_Statics::NewProp_FlowDelay_MetaData[] = {
		{ "Category", "FluidData | Variable" },
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFluidData_Statics::NewProp_FlowDelay = { "FlowDelay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFluidData, FlowDelay), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FFluidData_Statics::NewProp_FlowDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFluidData_Statics::NewProp_FlowDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFluidData_Statics::NewProp_MaxPressure_MetaData[] = {
		{ "Category", "FluidData | Variable" },
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFluidData_Statics::NewProp_MaxPressure = { "MaxPressure", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFluidData, MaxPressure), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FFluidData_Statics::NewProp_MaxPressure_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFluidData_Statics::NewProp_MaxPressure_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFluidData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFluidData_Statics::NewProp_GlobalLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFluidData_Statics::NewProp_Source,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFluidData_Statics::NewProp_FlowFrom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFluidData_Statics::NewProp_Depth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFluidData_Statics::NewProp_CustomData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFluidData_Statics::NewProp_FluidTick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFluidData_Statics::NewProp_FlowDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFluidData_Statics::NewProp_MaxPressure,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFluidData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleVoxelV2,
		nullptr,
		&NewStructOps,
		"FluidData",
		sizeof(FFluidData),
		alignof(FFluidData),
		Z_Construct_UScriptStruct_FFluidData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFluidData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFluidData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFluidData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFluidData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFluidData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SimpleVoxelV2();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FluidData"), sizeof(FFluidData), Get_Z_Construct_UScriptStruct_FFluidData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFluidData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFluidData_Hash() { return 944070951U; }
	DEFINE_FUNCTION(ASimpleVoxelActor::execFluidSimStepThreadDone)
	{
		P_GET_UBOOL(Z_Param_AddToRenderQueue);
		P_GET_TARRAY_REF(FFluidData,Z_Param_Out_DestoryFluids);
		P_GET_TARRAY_REF(FFluidData,Z_Param_Out_CreateFluids);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FluidSimStepThreadDone(Z_Param_AddToRenderQueue,Z_Param_Out_DestoryFluids,Z_Param_Out_CreateFluids);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimpleVoxelActor::execFluidSimStepThread)
	{
		P_GET_TARRAY_REF(FFluidData,Z_Param_Out_DestoryFluids);
		P_GET_TARRAY_REF(FFluidData,Z_Param_Out_CreateFluids);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FluidSimStepThread(Z_Param_Out_DestoryFluids,Z_Param_Out_CreateFluids);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimpleVoxelActor::execFluidSimStep)
	{
		P_GET_UBOOL(Z_Param_AddToRenderQueue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FluidSimStep(Z_Param_AddToRenderQueue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimpleVoxelActor::execSetFluid)
	{
		P_GET_STRUCT(FIntVector,Z_Param_GlobalLocation);
		P_GET_PROPERTY(FByteProperty,Z_Param_Depth);
		P_GET_STRUCT(FColor,Z_Param_CustomData);
		P_GET_PROPERTY(FByteProperty,Z_Param_FlowDelay);
		P_GET_PROPERTY(FByteProperty,Z_Param_MaxPressure);
		P_GET_UBOOL(Z_Param_AddToRenderQueue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetFluid(Z_Param_GlobalLocation,Z_Param_Depth,Z_Param_CustomData,Z_Param_FlowDelay,Z_Param_MaxPressure,Z_Param_AddToRenderQueue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimpleVoxelActor::execSetFluidLocal)
	{
		P_GET_STRUCT(FIntVector,Z_Param_VoxelLocation);
		P_GET_STRUCT(FIntVector,Z_Param_ChuckLocation);
		P_GET_PROPERTY(FByteProperty,Z_Param_Depth);
		P_GET_STRUCT(FColor,Z_Param_CustomData);
		P_GET_PROPERTY(FByteProperty,Z_Param_FlowDelay);
		P_GET_PROPERTY(FByteProperty,Z_Param_MaxPressure);
		P_GET_UBOOL(Z_Param_AddToRenderQueue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetFluidLocal(Z_Param_VoxelLocation,Z_Param_ChuckLocation,Z_Param_Depth,Z_Param_CustomData,Z_Param_FlowDelay,Z_Param_MaxPressure,Z_Param_AddToRenderQueue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimpleVoxelActor::execSetVoxelsLocalByHeightMap)
	{
		P_GET_TARRAY(FIntVector,Z_Param_VoxelsLocation);
		P_GET_STRUCT(FIntVector,Z_Param_ChuckLocation);
		P_GET_PROPERTY(FIntProperty,Z_Param_Material);
		P_GET_STRUCT(FColor,Z_Param_CustomData);
		P_GET_UBOOL(Z_Param_AddToRenderQueue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetVoxelsLocalByHeightMap(Z_Param_VoxelsLocation,Z_Param_ChuckLocation,Z_Param_Material,Z_Param_CustomData,Z_Param_AddToRenderQueue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimpleVoxelActor::execSetVoxelArea)
	{
		P_GET_STRUCT(FIntVector,Z_Param_StartLocation);
		P_GET_STRUCT(FIntVector,Z_Param_EndLocation);
		P_GET_PROPERTY(FIntProperty,Z_Param_Material);
		P_GET_STRUCT(FColor,Z_Param_CustomData);
		P_GET_UBOOL(Z_Param_AddToRenderQueue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetVoxelArea(Z_Param_StartLocation,Z_Param_EndLocation,Z_Param_Material,Z_Param_CustomData,Z_Param_AddToRenderQueue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimpleVoxelActor::execSetVoxelAreaLocal)
	{
		P_GET_STRUCT(FIntVector,Z_Param_StartLocation);
		P_GET_STRUCT(FIntVector,Z_Param_EndLocation);
		P_GET_STRUCT(FIntVector,Z_Param_ChuckLocation);
		P_GET_PROPERTY(FIntProperty,Z_Param_Material);
		P_GET_STRUCT(FColor,Z_Param_CustomData);
		P_GET_UBOOL(Z_Param_AddToRenderQueue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetVoxelAreaLocal(Z_Param_StartLocation,Z_Param_EndLocation,Z_Param_ChuckLocation,Z_Param_Material,Z_Param_CustomData,Z_Param_AddToRenderQueue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimpleVoxelActor::execUpdateVoxels)
	{
		P_GET_TARRAY(FIntVector,Z_Param_GlobalLocation);
		P_GET_STRUCT(FColor,Z_Param_CustomData);
		P_GET_UBOOL(Z_Param_AddToRenderQueue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateVoxels(Z_Param_GlobalLocation,Z_Param_CustomData,Z_Param_AddToRenderQueue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimpleVoxelActor::execSetVoxels)
	{
		P_GET_TARRAY(FIntVector,Z_Param_GlobalLocation);
		P_GET_PROPERTY(FIntProperty,Z_Param_Material);
		P_GET_STRUCT(FColor,Z_Param_CustomData);
		P_GET_UBOOL(Z_Param_AddToRenderQueue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVoxels(Z_Param_GlobalLocation,Z_Param_Material,Z_Param_CustomData,Z_Param_AddToRenderQueue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimpleVoxelActor::execUpdateVoxelsLocal)
	{
		P_GET_TARRAY(FIntVector,Z_Param_VoxelsLocation);
		P_GET_STRUCT(FIntVector,Z_Param_ChuckLocation);
		P_GET_STRUCT(FColor,Z_Param_CustomData);
		P_GET_UBOOL(Z_Param_AddToRenderQueue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UpdateVoxelsLocal(Z_Param_VoxelsLocation,Z_Param_ChuckLocation,Z_Param_CustomData,Z_Param_AddToRenderQueue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimpleVoxelActor::execSetVoxelsLocal)
	{
		P_GET_TARRAY(FIntVector,Z_Param_VoxelsLocation);
		P_GET_STRUCT(FIntVector,Z_Param_ChuckLocation);
		P_GET_PROPERTY(FIntProperty,Z_Param_Material);
		P_GET_STRUCT(FColor,Z_Param_CustomData);
		P_GET_UBOOL(Z_Param_AddToRenderQueue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetVoxelsLocal(Z_Param_VoxelsLocation,Z_Param_ChuckLocation,Z_Param_Material,Z_Param_CustomData,Z_Param_AddToRenderQueue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimpleVoxelActor::execSetVoxel)
	{
		P_GET_STRUCT(FIntVector,Z_Param_GlobalLocation);
		P_GET_PROPERTY(FIntProperty,Z_Param_Material);
		P_GET_STRUCT(FColor,Z_Param_CustomData);
		P_GET_UBOOL(Z_Param_AddToRenderQueue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetVoxel(Z_Param_GlobalLocation,Z_Param_Material,Z_Param_CustomData,Z_Param_AddToRenderQueue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimpleVoxelActor::execSetVoxelLocal)
	{
		P_GET_STRUCT(FIntVector,Z_Param_VoxelLocation);
		P_GET_STRUCT(FIntVector,Z_Param_ChuckLocation);
		P_GET_PROPERTY(FIntProperty,Z_Param_Material);
		P_GET_STRUCT(FColor,Z_Param_CustomData);
		P_GET_UBOOL(Z_Param_AddToRenderQueue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetVoxelLocal(Z_Param_VoxelLocation,Z_Param_ChuckLocation,Z_Param_Material,Z_Param_CustomData,Z_Param_AddToRenderQueue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimpleVoxelActor::execUpdateFluidChuck)
	{
		P_GET_UBOOL(Z_Param_Force);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UpdateFluidChuck(Z_Param_Force);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimpleVoxelActor::execUpdateVoxelChuck)
	{
		P_GET_UBOOL(Z_Param_Force);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UpdateVoxelChuck(Z_Param_Force);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimpleVoxelActor::execAddDirtyFluidChuck)
	{
		P_GET_STRUCT(FIntVector,Z_Param_ChuckLocation);
		P_GET_UBOOL(Z_Param_Update);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddDirtyFluidChuck(Z_Param_ChuckLocation,Z_Param_Update);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimpleVoxelActor::execAddDirtyVoxelChuck)
	{
		P_GET_STRUCT(FIntVector,Z_Param_ChuckLocation);
		P_GET_UBOOL(Z_Param_Update);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddDirtyVoxelChuck(Z_Param_ChuckLocation,Z_Param_Update);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimpleVoxelActor::execDeactiveChuck)
	{
		P_GET_STRUCT(FIntVector,Z_Param_ChuckLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DeactiveChuck(Z_Param_ChuckLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimpleVoxelActor::execActiveChuck)
	{
		P_GET_STRUCT(FIntVector,Z_Param_ChuckLocation);
		P_GET_UBOOL(Z_Param_AddToRenderQueue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ActiveChuck(Z_Param_ChuckLocation,Z_Param_AddToRenderQueue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimpleVoxelActor::execActiveChuckInScene)
	{
		P_GET_OBJECT(ASimpleVoxelChuck,Z_Param_ChuckActor);
		P_GET_STRUCT(FIntVector,Z_Param_ChuckLocation);
		P_GET_UBOOL(Z_Param_AddToRenderQueue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ActiveChuckInScene(Z_Param_ChuckActor,Z_Param_ChuckLocation,Z_Param_AddToRenderQueue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimpleVoxelActor::execInitializeChuck_Implementation)
	{
		P_GET_STRUCT(FIntVector,Z_Param_ChuckLocation);
		P_GET_OBJECT(ASimpleVoxelChuck,Z_Param_ChuckActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->InitializeChuck_Implementation(Z_Param_ChuckLocation,Z_Param_ChuckActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimpleVoxelActor::execInitializeChuck)
	{
		P_GET_STRUCT(FIntVector,Z_Param_ChuckLocation);
		P_GET_OBJECT(ASimpleVoxelChuck,Z_Param_ChuckActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->InitializeChuck_Implementation(Z_Param_ChuckLocation,Z_Param_ChuckActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimpleVoxelActor::execFillChuckWithVoxel)
	{
		P_GET_STRUCT(FIntVector,Z_Param_ChuckLocation);
		P_GET_PROPERTY(FIntProperty,Z_Param_Material);
		P_GET_STRUCT(FColor,Z_Param_CustomData);
		P_GET_UBOOL(Z_Param_AddToRenderQueue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FillChuckWithVoxel(Z_Param_ChuckLocation,Z_Param_Material,Z_Param_CustomData,Z_Param_AddToRenderQueue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimpleVoxelActor::execFindChuckByGlobal)
	{
		P_GET_STRUCT(FIntVector,Z_Param_Location);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntVector*)Z_Param__Result=P_THIS->FindChuckByGlobal(Z_Param_Location);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimpleVoxelActor::execGlobalToLocal)
	{
		P_GET_STRUCT(FIntVector,Z_Param_Location);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntVector*)Z_Param__Result=P_THIS->GlobalToLocal(Z_Param_Location);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimpleVoxelActor::execGlobalToIndex)
	{
		P_GET_STRUCT(FIntVector,Z_Param_Location);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GlobalToIndex(Z_Param_Location);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimpleVoxelActor::execLocalToGlobal)
	{
		P_GET_STRUCT(FIntVector,Z_Param_Location);
		P_GET_STRUCT(FIntVector,Z_Param_ChuckLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntVector*)Z_Param__Result=P_THIS->LocalToGlobal(Z_Param_Location,Z_Param_ChuckLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimpleVoxelActor::execLocalToIndex)
	{
		P_GET_STRUCT(FIntVector,Z_Param_Location);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->LocalToIndex(Z_Param_Location);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimpleVoxelActor::execIndexToGlobal)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT(FIntVector,Z_Param_ChuckLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntVector*)Z_Param__Result=P_THIS->IndexToGlobal(Z_Param_Index,Z_Param_ChuckLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimpleVoxelActor::execIndexToLocal)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntVector*)Z_Param__Result=P_THIS->IndexToLocal(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimpleVoxelActor::execFluidDirectionTrace)
	{
		P_GET_STRUCT(FIntVector,Z_Param_StartLocation);
		P_GET_STRUCT(FIntVector,Z_Param_Direction);
		P_GET_PROPERTY(FIntProperty,Z_Param_LoopTime);
		P_GET_STRUCT_REF(FFluidData,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FluidDirectionTrace(Z_Param_StartLocation,Z_Param_Direction,Z_Param_LoopTime,Z_Param_Out_Result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimpleVoxelActor::execVoxelDirectionTrace)
	{
		P_GET_STRUCT(FIntVector,Z_Param_StartLocation);
		P_GET_STRUCT(FIntVector,Z_Param_Direction);
		P_GET_PROPERTY(FIntProperty,Z_Param_LoopTime);
		P_GET_STRUCT_REF(FVoxelData,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->VoxelDirectionTrace(Z_Param_StartLocation,Z_Param_Direction,Z_Param_LoopTime,Z_Param_Out_Result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimpleVoxelActor::execGetVoxelAreaMask)
	{
		P_GET_STRUCT(FIntVector,Z_Param_StartLocation);
		P_GET_STRUCT(FIntVector,Z_Param_EndLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FIntVector>*)Z_Param__Result=P_THIS->GetVoxelAreaMask(Z_Param_StartLocation,Z_Param_EndLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimpleVoxelActor::execGetVoxelBoxMask)
	{
		P_GET_STRUCT(FIntVector,Z_Param_Location);
		P_GET_PROPERTY(FIntProperty,Z_Param_Size);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FIntVector>*)Z_Param__Result=P_THIS->GetVoxelBoxMask(Z_Param_Location,Z_Param_Size);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimpleVoxelActor::execGetVoxelSphereMask)
	{
		P_GET_STRUCT(FIntVector,Z_Param_Location);
		P_GET_PROPERTY(FIntProperty,Z_Param_Size);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FIntVector>*)Z_Param__Result=P_THIS->GetVoxelSphereMask(Z_Param_Location,Z_Param_Size);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimpleVoxelActor::execIsFluidVisible)
	{
		P_GET_STRUCT(FIntVector,Z_Param_FluidLocation);
		P_GET_UBOOL(Z_Param_NotEqual);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsFluidVisible(Z_Param_FluidLocation,Z_Param_NotEqual);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimpleVoxelActor::execGetFluidData)
	{
		P_GET_STRUCT(FIntVector,Z_Param_GlobalLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFluidData*)Z_Param__Result=P_THIS->GetFluidData(Z_Param_GlobalLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimpleVoxelActor::execGetVoxelData)
	{
		P_GET_STRUCT(FIntVector,Z_Param_GlobalLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVoxelData*)Z_Param__Result=P_THIS->GetVoxelData(Z_Param_GlobalLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimpleVoxelActor::execIsVoxelVisible)
	{
		P_GET_STRUCT(FIntVector,Z_Param_VoxelLocation);
		P_GET_PROPERTY(FIntProperty,Z_Param_CheckMaterial);
		P_GET_UBOOL(Z_Param_NotEqual);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsVoxelVisible(Z_Param_VoxelLocation,Z_Param_CheckMaterial,Z_Param_NotEqual);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimpleVoxelActor::execIsChuckActive)
	{
		P_GET_STRUCT(FIntVector,Z_Param_ChuckLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsChuckActive(Z_Param_ChuckLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimpleVoxelActor::execHasChuckInitialized)
	{
		P_GET_STRUCT(FIntVector,Z_Param_ChuckLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasChuckInitialized(Z_Param_ChuckLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimpleVoxelActor::execLoadSaveData)
	{
		P_GET_TMAP_REF(FIntVector,FChuckData,Z_Param_Out_OutChuckData);
		P_GET_TSET_REF(FIntVector,Z_Param_Out_FluidUpdateList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadSaveData(Z_Param_Out_OutChuckData,Z_Param_Out_FluidUpdateList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimpleVoxelActor::execGetSaveData)
	{
		P_GET_TMAP_REF(FIntVector,FChuckData,Z_Param_Out_OutChuckData);
		P_GET_TSET_REF(FIntVector,Z_Param_Out_FluidUpdateList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetSaveData(Z_Param_Out_OutChuckData,Z_Param_Out_FluidUpdateList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimpleVoxelActor::execReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimpleVoxelActor::execCompleteAllUpdate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CompleteAllUpdate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimpleVoxelActor::execCallGameThreadJob)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CallGameThreadJob();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimpleVoxelActor::execIncrementFluidThreadCounter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IncrementFluidThreadCounter();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimpleVoxelActor::execDecrementFluidThreadCounter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DecrementFluidThreadCounter();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimpleVoxelActor::execIncrementVoxelThreadCounter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IncrementVoxelThreadCounter();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimpleVoxelActor::execDecrementVoxelThreadCounter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DecrementVoxelThreadCounter();
		P_NATIVE_END;
	}
	static FName NAME_ASimpleVoxelActor_InitializeChuck = FName(TEXT("InitializeChuck"));
	bool ASimpleVoxelActor::InitializeChuck(const FIntVector ChuckLocation, ASimpleVoxelChuck* ChuckActor)
	{
		SimpleVoxelActor_eventInitializeChuck_Parms Parms;
		Parms.ChuckLocation=ChuckLocation;
		Parms.ChuckActor=ChuckActor;
		ProcessEvent(FindFunctionChecked(NAME_ASimpleVoxelActor_InitializeChuck),&Parms);
		return !!Parms.ReturnValue;
	}
	void ASimpleVoxelActor::StaticRegisterNativesASimpleVoxelActor()
	{
		UClass* Class = ASimpleVoxelActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActiveChuck", &ASimpleVoxelActor::execActiveChuck },
			{ "ActiveChuckInScene", &ASimpleVoxelActor::execActiveChuckInScene },
			{ "AddDirtyFluidChuck", &ASimpleVoxelActor::execAddDirtyFluidChuck },
			{ "AddDirtyVoxelChuck", &ASimpleVoxelActor::execAddDirtyVoxelChuck },
			{ "CallGameThreadJob", &ASimpleVoxelActor::execCallGameThreadJob },
			{ "CompleteAllUpdate", &ASimpleVoxelActor::execCompleteAllUpdate },
			{ "DeactiveChuck", &ASimpleVoxelActor::execDeactiveChuck },
			{ "DecrementFluidThreadCounter", &ASimpleVoxelActor::execDecrementFluidThreadCounter },
			{ "DecrementVoxelThreadCounter", &ASimpleVoxelActor::execDecrementVoxelThreadCounter },
			{ "FillChuckWithVoxel", &ASimpleVoxelActor::execFillChuckWithVoxel },
			{ "FindChuckByGlobal", &ASimpleVoxelActor::execFindChuckByGlobal },
			{ "FluidDirectionTrace", &ASimpleVoxelActor::execFluidDirectionTrace },
			{ "FluidSimStep", &ASimpleVoxelActor::execFluidSimStep },
			{ "FluidSimStepThread", &ASimpleVoxelActor::execFluidSimStepThread },
			{ "FluidSimStepThreadDone", &ASimpleVoxelActor::execFluidSimStepThreadDone },
			{ "GetFluidData", &ASimpleVoxelActor::execGetFluidData },
			{ "GetSaveData", &ASimpleVoxelActor::execGetSaveData },
			{ "GetVoxelAreaMask", &ASimpleVoxelActor::execGetVoxelAreaMask },
			{ "GetVoxelBoxMask", &ASimpleVoxelActor::execGetVoxelBoxMask },
			{ "GetVoxelData", &ASimpleVoxelActor::execGetVoxelData },
			{ "GetVoxelSphereMask", &ASimpleVoxelActor::execGetVoxelSphereMask },
			{ "GlobalToIndex", &ASimpleVoxelActor::execGlobalToIndex },
			{ "GlobalToLocal", &ASimpleVoxelActor::execGlobalToLocal },
			{ "HasChuckInitialized", &ASimpleVoxelActor::execHasChuckInitialized },
			{ "IncrementFluidThreadCounter", &ASimpleVoxelActor::execIncrementFluidThreadCounter },
			{ "IncrementVoxelThreadCounter", &ASimpleVoxelActor::execIncrementVoxelThreadCounter },
			{ "IndexToGlobal", &ASimpleVoxelActor::execIndexToGlobal },
			{ "IndexToLocal", &ASimpleVoxelActor::execIndexToLocal },
			{ "InitializeChuck", &ASimpleVoxelActor::execInitializeChuck },
			{ "InitializeChuck_Implementation", &ASimpleVoxelActor::execInitializeChuck_Implementation },
			{ "IsChuckActive", &ASimpleVoxelActor::execIsChuckActive },
			{ "IsFluidVisible", &ASimpleVoxelActor::execIsFluidVisible },
			{ "IsVoxelVisible", &ASimpleVoxelActor::execIsVoxelVisible },
			{ "LoadSaveData", &ASimpleVoxelActor::execLoadSaveData },
			{ "LocalToGlobal", &ASimpleVoxelActor::execLocalToGlobal },
			{ "LocalToIndex", &ASimpleVoxelActor::execLocalToIndex },
			{ "Reset", &ASimpleVoxelActor::execReset },
			{ "SetFluid", &ASimpleVoxelActor::execSetFluid },
			{ "SetFluidLocal", &ASimpleVoxelActor::execSetFluidLocal },
			{ "SetVoxel", &ASimpleVoxelActor::execSetVoxel },
			{ "SetVoxelArea", &ASimpleVoxelActor::execSetVoxelArea },
			{ "SetVoxelAreaLocal", &ASimpleVoxelActor::execSetVoxelAreaLocal },
			{ "SetVoxelLocal", &ASimpleVoxelActor::execSetVoxelLocal },
			{ "SetVoxels", &ASimpleVoxelActor::execSetVoxels },
			{ "SetVoxelsLocal", &ASimpleVoxelActor::execSetVoxelsLocal },
			{ "SetVoxelsLocalByHeightMap", &ASimpleVoxelActor::execSetVoxelsLocalByHeightMap },
			{ "UpdateFluidChuck", &ASimpleVoxelActor::execUpdateFluidChuck },
			{ "UpdateVoxelChuck", &ASimpleVoxelActor::execUpdateVoxelChuck },
			{ "UpdateVoxels", &ASimpleVoxelActor::execUpdateVoxels },
			{ "UpdateVoxelsLocal", &ASimpleVoxelActor::execUpdateVoxelsLocal },
			{ "VoxelDirectionTrace", &ASimpleVoxelActor::execVoxelDirectionTrace },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASimpleVoxelActor_ActiveChuck_Statics
	{
		struct SimpleVoxelActor_eventActiveChuck_Parms
		{
			FIntVector ChuckLocation;
			bool AddToRenderQueue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChuckLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChuckLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddToRenderQueue_MetaData[];
#endif
		static void NewProp_AddToRenderQueue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AddToRenderQueue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_ActiveChuck_Statics::NewProp_ChuckLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_ActiveChuck_Statics::NewProp_ChuckLocation = { "ChuckLocation", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventActiveChuck_Parms, ChuckLocation), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_ActiveChuck_Statics::NewProp_ChuckLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_ActiveChuck_Statics::NewProp_ChuckLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_ActiveChuck_Statics::NewProp_AddToRenderQueue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ASimpleVoxelActor_ActiveChuck_Statics::NewProp_AddToRenderQueue_SetBit(void* Obj)
	{
		((SimpleVoxelActor_eventActiveChuck_Parms*)Obj)->AddToRenderQueue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_ActiveChuck_Statics::NewProp_AddToRenderQueue = { "AddToRenderQueue", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleVoxelActor_eventActiveChuck_Parms), &Z_Construct_UFunction_ASimpleVoxelActor_ActiveChuck_Statics::NewProp_AddToRenderQueue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_ActiveChuck_Statics::NewProp_AddToRenderQueue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_ActiveChuck_Statics::NewProp_AddToRenderQueue_MetaData)) };
	void Z_Construct_UFunction_ASimpleVoxelActor_ActiveChuck_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleVoxelActor_eventActiveChuck_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_ActiveChuck_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleVoxelActor_eventActiveChuck_Parms), &Z_Construct_UFunction_ASimpleVoxelActor_ActiveChuck_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimpleVoxelActor_ActiveChuck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_ActiveChuck_Statics::NewProp_ChuckLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_ActiveChuck_Statics::NewProp_AddToRenderQueue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_ActiveChuck_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_ActiveChuck_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleVoxel | Chuck Manupulation" },
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleVoxelActor_ActiveChuck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimpleVoxelActor, nullptr, "ActiveChuck", nullptr, nullptr, sizeof(SimpleVoxelActor_eventActiveChuck_Parms), Z_Construct_UFunction_ASimpleVoxelActor_ActiveChuck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_ActiveChuck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_ActiveChuck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_ActiveChuck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimpleVoxelActor_ActiveChuck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimpleVoxelActor_ActiveChuck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimpleVoxelActor_ActiveChuckInScene_Statics
	{
		struct SimpleVoxelActor_eventActiveChuckInScene_Parms
		{
			ASimpleVoxelChuck* ChuckActor;
			FIntVector ChuckLocation;
			bool AddToRenderQueue;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChuckActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChuckLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChuckLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddToRenderQueue_MetaData[];
#endif
		static void NewProp_AddToRenderQueue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AddToRenderQueue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_ActiveChuckInScene_Statics::NewProp_ChuckActor = { "ChuckActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventActiveChuckInScene_Parms, ChuckActor), Z_Construct_UClass_ASimpleVoxelChuck_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_ActiveChuckInScene_Statics::NewProp_ChuckLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_ActiveChuckInScene_Statics::NewProp_ChuckLocation = { "ChuckLocation", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventActiveChuckInScene_Parms, ChuckLocation), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_ActiveChuckInScene_Statics::NewProp_ChuckLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_ActiveChuckInScene_Statics::NewProp_ChuckLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_ActiveChuckInScene_Statics::NewProp_AddToRenderQueue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ASimpleVoxelActor_ActiveChuckInScene_Statics::NewProp_AddToRenderQueue_SetBit(void* Obj)
	{
		((SimpleVoxelActor_eventActiveChuckInScene_Parms*)Obj)->AddToRenderQueue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_ActiveChuckInScene_Statics::NewProp_AddToRenderQueue = { "AddToRenderQueue", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleVoxelActor_eventActiveChuckInScene_Parms), &Z_Construct_UFunction_ASimpleVoxelActor_ActiveChuckInScene_Statics::NewProp_AddToRenderQueue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_ActiveChuckInScene_Statics::NewProp_AddToRenderQueue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_ActiveChuckInScene_Statics::NewProp_AddToRenderQueue_MetaData)) };
	void Z_Construct_UFunction_ASimpleVoxelActor_ActiveChuckInScene_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleVoxelActor_eventActiveChuckInScene_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_ActiveChuckInScene_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleVoxelActor_eventActiveChuckInScene_Parms), &Z_Construct_UFunction_ASimpleVoxelActor_ActiveChuckInScene_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimpleVoxelActor_ActiveChuckInScene_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_ActiveChuckInScene_Statics::NewProp_ChuckActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_ActiveChuckInScene_Statics::NewProp_ChuckLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_ActiveChuckInScene_Statics::NewProp_AddToRenderQueue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_ActiveChuckInScene_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_ActiveChuckInScene_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleVoxel | Chuck Manupulation" },
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleVoxelActor_ActiveChuckInScene_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimpleVoxelActor, nullptr, "ActiveChuckInScene", nullptr, nullptr, sizeof(SimpleVoxelActor_eventActiveChuckInScene_Parms), Z_Construct_UFunction_ASimpleVoxelActor_ActiveChuckInScene_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_ActiveChuckInScene_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_ActiveChuckInScene_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_ActiveChuckInScene_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimpleVoxelActor_ActiveChuckInScene()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimpleVoxelActor_ActiveChuckInScene_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimpleVoxelActor_AddDirtyFluidChuck_Statics
	{
		struct SimpleVoxelActor_eventAddDirtyFluidChuck_Parms
		{
			FIntVector ChuckLocation;
			bool Update;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChuckLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChuckLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Update_MetaData[];
#endif
		static void NewProp_Update_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Update;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_AddDirtyFluidChuck_Statics::NewProp_ChuckLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_AddDirtyFluidChuck_Statics::NewProp_ChuckLocation = { "ChuckLocation", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventAddDirtyFluidChuck_Parms, ChuckLocation), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_AddDirtyFluidChuck_Statics::NewProp_ChuckLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_AddDirtyFluidChuck_Statics::NewProp_ChuckLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_AddDirtyFluidChuck_Statics::NewProp_Update_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ASimpleVoxelActor_AddDirtyFluidChuck_Statics::NewProp_Update_SetBit(void* Obj)
	{
		((SimpleVoxelActor_eventAddDirtyFluidChuck_Parms*)Obj)->Update = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_AddDirtyFluidChuck_Statics::NewProp_Update = { "Update", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleVoxelActor_eventAddDirtyFluidChuck_Parms), &Z_Construct_UFunction_ASimpleVoxelActor_AddDirtyFluidChuck_Statics::NewProp_Update_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_AddDirtyFluidChuck_Statics::NewProp_Update_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_AddDirtyFluidChuck_Statics::NewProp_Update_MetaData)) };
	void Z_Construct_UFunction_ASimpleVoxelActor_AddDirtyFluidChuck_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleVoxelActor_eventAddDirtyFluidChuck_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_AddDirtyFluidChuck_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleVoxelActor_eventAddDirtyFluidChuck_Parms), &Z_Construct_UFunction_ASimpleVoxelActor_AddDirtyFluidChuck_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimpleVoxelActor_AddDirtyFluidChuck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_AddDirtyFluidChuck_Statics::NewProp_ChuckLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_AddDirtyFluidChuck_Statics::NewProp_Update,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_AddDirtyFluidChuck_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_AddDirtyFluidChuck_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleVoxel | Chuck Manupulation" },
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleVoxelActor_AddDirtyFluidChuck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimpleVoxelActor, nullptr, "AddDirtyFluidChuck", nullptr, nullptr, sizeof(SimpleVoxelActor_eventAddDirtyFluidChuck_Parms), Z_Construct_UFunction_ASimpleVoxelActor_AddDirtyFluidChuck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_AddDirtyFluidChuck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_AddDirtyFluidChuck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_AddDirtyFluidChuck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimpleVoxelActor_AddDirtyFluidChuck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimpleVoxelActor_AddDirtyFluidChuck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimpleVoxelActor_AddDirtyVoxelChuck_Statics
	{
		struct SimpleVoxelActor_eventAddDirtyVoxelChuck_Parms
		{
			FIntVector ChuckLocation;
			bool Update;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChuckLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChuckLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Update_MetaData[];
#endif
		static void NewProp_Update_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Update;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_AddDirtyVoxelChuck_Statics::NewProp_ChuckLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_AddDirtyVoxelChuck_Statics::NewProp_ChuckLocation = { "ChuckLocation", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventAddDirtyVoxelChuck_Parms, ChuckLocation), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_AddDirtyVoxelChuck_Statics::NewProp_ChuckLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_AddDirtyVoxelChuck_Statics::NewProp_ChuckLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_AddDirtyVoxelChuck_Statics::NewProp_Update_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ASimpleVoxelActor_AddDirtyVoxelChuck_Statics::NewProp_Update_SetBit(void* Obj)
	{
		((SimpleVoxelActor_eventAddDirtyVoxelChuck_Parms*)Obj)->Update = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_AddDirtyVoxelChuck_Statics::NewProp_Update = { "Update", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleVoxelActor_eventAddDirtyVoxelChuck_Parms), &Z_Construct_UFunction_ASimpleVoxelActor_AddDirtyVoxelChuck_Statics::NewProp_Update_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_AddDirtyVoxelChuck_Statics::NewProp_Update_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_AddDirtyVoxelChuck_Statics::NewProp_Update_MetaData)) };
	void Z_Construct_UFunction_ASimpleVoxelActor_AddDirtyVoxelChuck_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleVoxelActor_eventAddDirtyVoxelChuck_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_AddDirtyVoxelChuck_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleVoxelActor_eventAddDirtyVoxelChuck_Parms), &Z_Construct_UFunction_ASimpleVoxelActor_AddDirtyVoxelChuck_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimpleVoxelActor_AddDirtyVoxelChuck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_AddDirtyVoxelChuck_Statics::NewProp_ChuckLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_AddDirtyVoxelChuck_Statics::NewProp_Update,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_AddDirtyVoxelChuck_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_AddDirtyVoxelChuck_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleVoxel | Chuck Manupulation" },
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleVoxelActor_AddDirtyVoxelChuck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimpleVoxelActor, nullptr, "AddDirtyVoxelChuck", nullptr, nullptr, sizeof(SimpleVoxelActor_eventAddDirtyVoxelChuck_Parms), Z_Construct_UFunction_ASimpleVoxelActor_AddDirtyVoxelChuck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_AddDirtyVoxelChuck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_AddDirtyVoxelChuck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_AddDirtyVoxelChuck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimpleVoxelActor_AddDirtyVoxelChuck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimpleVoxelActor_AddDirtyVoxelChuck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimpleVoxelActor_CallGameThreadJob_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_CallGameThreadJob_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleVoxelActor_CallGameThreadJob_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimpleVoxelActor, nullptr, "CallGameThreadJob", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_CallGameThreadJob_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_CallGameThreadJob_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimpleVoxelActor_CallGameThreadJob()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimpleVoxelActor_CallGameThreadJob_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimpleVoxelActor_CompleteAllUpdate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_CompleteAllUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleVoxel | Manager" },
		{ "Comment", "///Manager///\n" },
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
		{ "ToolTip", "Manager" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleVoxelActor_CompleteAllUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimpleVoxelActor, nullptr, "CompleteAllUpdate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_CompleteAllUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_CompleteAllUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimpleVoxelActor_CompleteAllUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimpleVoxelActor_CompleteAllUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimpleVoxelActor_DeactiveChuck_Statics
	{
		struct SimpleVoxelActor_eventDeactiveChuck_Parms
		{
			FIntVector ChuckLocation;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChuckLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChuckLocation;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_DeactiveChuck_Statics::NewProp_ChuckLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_DeactiveChuck_Statics::NewProp_ChuckLocation = { "ChuckLocation", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventDeactiveChuck_Parms, ChuckLocation), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_DeactiveChuck_Statics::NewProp_ChuckLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_DeactiveChuck_Statics::NewProp_ChuckLocation_MetaData)) };
	void Z_Construct_UFunction_ASimpleVoxelActor_DeactiveChuck_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleVoxelActor_eventDeactiveChuck_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_DeactiveChuck_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleVoxelActor_eventDeactiveChuck_Parms), &Z_Construct_UFunction_ASimpleVoxelActor_DeactiveChuck_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimpleVoxelActor_DeactiveChuck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_DeactiveChuck_Statics::NewProp_ChuckLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_DeactiveChuck_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_DeactiveChuck_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleVoxel | Chuck Manupulation" },
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleVoxelActor_DeactiveChuck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimpleVoxelActor, nullptr, "DeactiveChuck", nullptr, nullptr, sizeof(SimpleVoxelActor_eventDeactiveChuck_Parms), Z_Construct_UFunction_ASimpleVoxelActor_DeactiveChuck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_DeactiveChuck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_DeactiveChuck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_DeactiveChuck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimpleVoxelActor_DeactiveChuck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimpleVoxelActor_DeactiveChuck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimpleVoxelActor_DecrementFluidThreadCounter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_DecrementFluidThreadCounter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleVoxelActor_DecrementFluidThreadCounter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimpleVoxelActor, nullptr, "DecrementFluidThreadCounter", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_DecrementFluidThreadCounter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_DecrementFluidThreadCounter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimpleVoxelActor_DecrementFluidThreadCounter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimpleVoxelActor_DecrementFluidThreadCounter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimpleVoxelActor_DecrementVoxelThreadCounter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_DecrementVoxelThreadCounter_Statics::Function_MetaDataParams[] = {
		{ "Comment", "///Thread///\n" },
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
		{ "ToolTip", "Thread" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleVoxelActor_DecrementVoxelThreadCounter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimpleVoxelActor, nullptr, "DecrementVoxelThreadCounter", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_DecrementVoxelThreadCounter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_DecrementVoxelThreadCounter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimpleVoxelActor_DecrementVoxelThreadCounter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimpleVoxelActor_DecrementVoxelThreadCounter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimpleVoxelActor_FillChuckWithVoxel_Statics
	{
		struct SimpleVoxelActor_eventFillChuckWithVoxel_Parms
		{
			FIntVector ChuckLocation;
			int32 Material;
			FColor CustomData;
			bool AddToRenderQueue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChuckLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChuckLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Material;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddToRenderQueue_MetaData[];
#endif
		static void NewProp_AddToRenderQueue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AddToRenderQueue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_FillChuckWithVoxel_Statics::NewProp_ChuckLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_FillChuckWithVoxel_Statics::NewProp_ChuckLocation = { "ChuckLocation", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventFillChuckWithVoxel_Parms, ChuckLocation), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_FillChuckWithVoxel_Statics::NewProp_ChuckLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_FillChuckWithVoxel_Statics::NewProp_ChuckLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_FillChuckWithVoxel_Statics::NewProp_Material_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_FillChuckWithVoxel_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventFillChuckWithVoxel_Parms, Material), METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_FillChuckWithVoxel_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_FillChuckWithVoxel_Statics::NewProp_Material_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_FillChuckWithVoxel_Statics::NewProp_CustomData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_FillChuckWithVoxel_Statics::NewProp_CustomData = { "CustomData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventFillChuckWithVoxel_Parms, CustomData), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_FillChuckWithVoxel_Statics::NewProp_CustomData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_FillChuckWithVoxel_Statics::NewProp_CustomData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_FillChuckWithVoxel_Statics::NewProp_AddToRenderQueue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ASimpleVoxelActor_FillChuckWithVoxel_Statics::NewProp_AddToRenderQueue_SetBit(void* Obj)
	{
		((SimpleVoxelActor_eventFillChuckWithVoxel_Parms*)Obj)->AddToRenderQueue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_FillChuckWithVoxel_Statics::NewProp_AddToRenderQueue = { "AddToRenderQueue", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleVoxelActor_eventFillChuckWithVoxel_Parms), &Z_Construct_UFunction_ASimpleVoxelActor_FillChuckWithVoxel_Statics::NewProp_AddToRenderQueue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_FillChuckWithVoxel_Statics::NewProp_AddToRenderQueue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_FillChuckWithVoxel_Statics::NewProp_AddToRenderQueue_MetaData)) };
	void Z_Construct_UFunction_ASimpleVoxelActor_FillChuckWithVoxel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleVoxelActor_eventFillChuckWithVoxel_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_FillChuckWithVoxel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleVoxelActor_eventFillChuckWithVoxel_Parms), &Z_Construct_UFunction_ASimpleVoxelActor_FillChuckWithVoxel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimpleVoxelActor_FillChuckWithVoxel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_FillChuckWithVoxel_Statics::NewProp_ChuckLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_FillChuckWithVoxel_Statics::NewProp_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_FillChuckWithVoxel_Statics::NewProp_CustomData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_FillChuckWithVoxel_Statics::NewProp_AddToRenderQueue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_FillChuckWithVoxel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_FillChuckWithVoxel_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleVoxel | Chuck Manupulation" },
		{ "Comment", "///Chuck///\n" },
		{ "CPP_Default_AddToRenderQueue", "true" },
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
		{ "ToolTip", "Chuck" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleVoxelActor_FillChuckWithVoxel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimpleVoxelActor, nullptr, "FillChuckWithVoxel", nullptr, nullptr, sizeof(SimpleVoxelActor_eventFillChuckWithVoxel_Parms), Z_Construct_UFunction_ASimpleVoxelActor_FillChuckWithVoxel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_FillChuckWithVoxel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_FillChuckWithVoxel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_FillChuckWithVoxel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimpleVoxelActor_FillChuckWithVoxel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimpleVoxelActor_FillChuckWithVoxel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimpleVoxelActor_FindChuckByGlobal_Statics
	{
		struct SimpleVoxelActor_eventFindChuckByGlobal_Parms
		{
			FIntVector Location;
			FIntVector ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_FindChuckByGlobal_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_FindChuckByGlobal_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventFindChuckByGlobal_Parms, Location), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_FindChuckByGlobal_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_FindChuckByGlobal_Statics::NewProp_Location_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_FindChuckByGlobal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventFindChuckByGlobal_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimpleVoxelActor_FindChuckByGlobal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_FindChuckByGlobal_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_FindChuckByGlobal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_FindChuckByGlobal_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleVoxel | Converter" },
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleVoxelActor_FindChuckByGlobal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimpleVoxelActor, nullptr, "FindChuckByGlobal", nullptr, nullptr, sizeof(SimpleVoxelActor_eventFindChuckByGlobal_Parms), Z_Construct_UFunction_ASimpleVoxelActor_FindChuckByGlobal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_FindChuckByGlobal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_FindChuckByGlobal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_FindChuckByGlobal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimpleVoxelActor_FindChuckByGlobal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimpleVoxelActor_FindChuckByGlobal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimpleVoxelActor_FluidDirectionTrace_Statics
	{
		struct SimpleVoxelActor_eventFluidDirectionTrace_Parms
		{
			FIntVector StartLocation;
			FIntVector Direction;
			int32 LoopTime;
			FFluidData Result;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoopTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LoopTime;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Result;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_FluidDirectionTrace_Statics::NewProp_StartLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_FluidDirectionTrace_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventFluidDirectionTrace_Parms, StartLocation), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_FluidDirectionTrace_Statics::NewProp_StartLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_FluidDirectionTrace_Statics::NewProp_StartLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_FluidDirectionTrace_Statics::NewProp_Direction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_FluidDirectionTrace_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventFluidDirectionTrace_Parms, Direction), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_FluidDirectionTrace_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_FluidDirectionTrace_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_FluidDirectionTrace_Statics::NewProp_LoopTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_FluidDirectionTrace_Statics::NewProp_LoopTime = { "LoopTime", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventFluidDirectionTrace_Parms, LoopTime), METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_FluidDirectionTrace_Statics::NewProp_LoopTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_FluidDirectionTrace_Statics::NewProp_LoopTime_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_FluidDirectionTrace_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventFluidDirectionTrace_Parms, Result), Z_Construct_UScriptStruct_FFluidData, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASimpleVoxelActor_FluidDirectionTrace_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleVoxelActor_eventFluidDirectionTrace_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_FluidDirectionTrace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleVoxelActor_eventFluidDirectionTrace_Parms), &Z_Construct_UFunction_ASimpleVoxelActor_FluidDirectionTrace_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimpleVoxelActor_FluidDirectionTrace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_FluidDirectionTrace_Statics::NewProp_StartLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_FluidDirectionTrace_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_FluidDirectionTrace_Statics::NewProp_LoopTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_FluidDirectionTrace_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_FluidDirectionTrace_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_FluidDirectionTrace_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleVoxel | Data Collector" },
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleVoxelActor_FluidDirectionTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimpleVoxelActor, nullptr, "FluidDirectionTrace", nullptr, nullptr, sizeof(SimpleVoxelActor_eventFluidDirectionTrace_Parms), Z_Construct_UFunction_ASimpleVoxelActor_FluidDirectionTrace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_FluidDirectionTrace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_FluidDirectionTrace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_FluidDirectionTrace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimpleVoxelActor_FluidDirectionTrace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimpleVoxelActor_FluidDirectionTrace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimpleVoxelActor_FluidSimStep_Statics
	{
		struct SimpleVoxelActor_eventFluidSimStep_Parms
		{
			bool AddToRenderQueue;
		};
		static void NewProp_AddToRenderQueue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AddToRenderQueue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASimpleVoxelActor_FluidSimStep_Statics::NewProp_AddToRenderQueue_SetBit(void* Obj)
	{
		((SimpleVoxelActor_eventFluidSimStep_Parms*)Obj)->AddToRenderQueue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_FluidSimStep_Statics::NewProp_AddToRenderQueue = { "AddToRenderQueue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleVoxelActor_eventFluidSimStep_Parms), &Z_Construct_UFunction_ASimpleVoxelActor_FluidSimStep_Statics::NewProp_AddToRenderQueue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimpleVoxelActor_FluidSimStep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_FluidSimStep_Statics::NewProp_AddToRenderQueue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_FluidSimStep_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleVoxel | Simulation" },
		{ "Comment", "///Simulation///\n" },
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
		{ "ToolTip", "Simulation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleVoxelActor_FluidSimStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimpleVoxelActor, nullptr, "FluidSimStep", nullptr, nullptr, sizeof(SimpleVoxelActor_eventFluidSimStep_Parms), Z_Construct_UFunction_ASimpleVoxelActor_FluidSimStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_FluidSimStep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_FluidSimStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_FluidSimStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimpleVoxelActor_FluidSimStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimpleVoxelActor_FluidSimStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimpleVoxelActor_FluidSimStepThread_Statics
	{
		struct SimpleVoxelActor_eventFluidSimStepThread_Parms
		{
			TArray<FFluidData> DestoryFluids;
			TArray<FFluidData> CreateFluids;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DestoryFluids_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DestoryFluids;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CreateFluids_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CreateFluids;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_FluidSimStepThread_Statics::NewProp_DestoryFluids_Inner = { "DestoryFluids", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFluidData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_FluidSimStepThread_Statics::NewProp_DestoryFluids = { "DestoryFluids", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventFluidSimStepThread_Parms, DestoryFluids), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_FluidSimStepThread_Statics::NewProp_CreateFluids_Inner = { "CreateFluids", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFluidData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_FluidSimStepThread_Statics::NewProp_CreateFluids = { "CreateFluids", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventFluidSimStepThread_Parms, CreateFluids), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimpleVoxelActor_FluidSimStepThread_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_FluidSimStepThread_Statics::NewProp_DestoryFluids_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_FluidSimStepThread_Statics::NewProp_DestoryFluids,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_FluidSimStepThread_Statics::NewProp_CreateFluids_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_FluidSimStepThread_Statics::NewProp_CreateFluids,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_FluidSimStepThread_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleVoxelActor_FluidSimStepThread_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimpleVoxelActor, nullptr, "FluidSimStepThread", nullptr, nullptr, sizeof(SimpleVoxelActor_eventFluidSimStepThread_Parms), Z_Construct_UFunction_ASimpleVoxelActor_FluidSimStepThread_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_FluidSimStepThread_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_FluidSimStepThread_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_FluidSimStepThread_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimpleVoxelActor_FluidSimStepThread()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimpleVoxelActor_FluidSimStepThread_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimpleVoxelActor_FluidSimStepThreadDone_Statics
	{
		struct SimpleVoxelActor_eventFluidSimStepThreadDone_Parms
		{
			bool AddToRenderQueue;
			TArray<FFluidData> DestoryFluids;
			TArray<FFluidData> CreateFluids;
		};
		static void NewProp_AddToRenderQueue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AddToRenderQueue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DestoryFluids_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestoryFluids_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DestoryFluids;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CreateFluids_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreateFluids_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CreateFluids;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASimpleVoxelActor_FluidSimStepThreadDone_Statics::NewProp_AddToRenderQueue_SetBit(void* Obj)
	{
		((SimpleVoxelActor_eventFluidSimStepThreadDone_Parms*)Obj)->AddToRenderQueue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_FluidSimStepThreadDone_Statics::NewProp_AddToRenderQueue = { "AddToRenderQueue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleVoxelActor_eventFluidSimStepThreadDone_Parms), &Z_Construct_UFunction_ASimpleVoxelActor_FluidSimStepThreadDone_Statics::NewProp_AddToRenderQueue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_FluidSimStepThreadDone_Statics::NewProp_DestoryFluids_Inner = { "DestoryFluids", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFluidData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_FluidSimStepThreadDone_Statics::NewProp_DestoryFluids_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_FluidSimStepThreadDone_Statics::NewProp_DestoryFluids = { "DestoryFluids", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventFluidSimStepThreadDone_Parms, DestoryFluids), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_FluidSimStepThreadDone_Statics::NewProp_DestoryFluids_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_FluidSimStepThreadDone_Statics::NewProp_DestoryFluids_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_FluidSimStepThreadDone_Statics::NewProp_CreateFluids_Inner = { "CreateFluids", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFluidData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_FluidSimStepThreadDone_Statics::NewProp_CreateFluids_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_FluidSimStepThreadDone_Statics::NewProp_CreateFluids = { "CreateFluids", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventFluidSimStepThreadDone_Parms, CreateFluids), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_FluidSimStepThreadDone_Statics::NewProp_CreateFluids_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_FluidSimStepThreadDone_Statics::NewProp_CreateFluids_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimpleVoxelActor_FluidSimStepThreadDone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_FluidSimStepThreadDone_Statics::NewProp_AddToRenderQueue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_FluidSimStepThreadDone_Statics::NewProp_DestoryFluids_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_FluidSimStepThreadDone_Statics::NewProp_DestoryFluids,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_FluidSimStepThreadDone_Statics::NewProp_CreateFluids_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_FluidSimStepThreadDone_Statics::NewProp_CreateFluids,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_FluidSimStepThreadDone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleVoxelActor_FluidSimStepThreadDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimpleVoxelActor, nullptr, "FluidSimStepThreadDone", nullptr, nullptr, sizeof(SimpleVoxelActor_eventFluidSimStepThreadDone_Parms), Z_Construct_UFunction_ASimpleVoxelActor_FluidSimStepThreadDone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_FluidSimStepThreadDone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_FluidSimStepThreadDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_FluidSimStepThreadDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimpleVoxelActor_FluidSimStepThreadDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimpleVoxelActor_FluidSimStepThreadDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimpleVoxelActor_GetFluidData_Statics
	{
		struct SimpleVoxelActor_eventGetFluidData_Parms
		{
			FIntVector GlobalLocation;
			FFluidData ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GlobalLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_GetFluidData_Statics::NewProp_GlobalLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_GetFluidData_Statics::NewProp_GlobalLocation = { "GlobalLocation", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventGetFluidData_Parms, GlobalLocation), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_GetFluidData_Statics::NewProp_GlobalLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_GetFluidData_Statics::NewProp_GlobalLocation_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_GetFluidData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventGetFluidData_Parms, ReturnValue), Z_Construct_UScriptStruct_FFluidData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimpleVoxelActor_GetFluidData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_GetFluidData_Statics::NewProp_GlobalLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_GetFluidData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_GetFluidData_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleVoxel | Data Collector" },
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleVoxelActor_GetFluidData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimpleVoxelActor, nullptr, "GetFluidData", nullptr, nullptr, sizeof(SimpleVoxelActor_eventGetFluidData_Parms), Z_Construct_UFunction_ASimpleVoxelActor_GetFluidData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_GetFluidData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_GetFluidData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_GetFluidData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimpleVoxelActor_GetFluidData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimpleVoxelActor_GetFluidData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimpleVoxelActor_GetSaveData_Statics
	{
		struct SimpleVoxelActor_eventGetSaveData_Parms
		{
			TMap<FIntVector,FChuckData> OutChuckData;
			TSet<FIntVector> FluidUpdateList;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutChuckData_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutChuckData_Key_KeyProp;
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_OutChuckData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FluidUpdateList_ElementProp;
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_FluidUpdateList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_GetSaveData_Statics::NewProp_OutChuckData_ValueProp = { "OutChuckData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FChuckData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_GetSaveData_Statics::NewProp_OutChuckData_Key_KeyProp = { "OutChuckData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_GetSaveData_Statics::NewProp_OutChuckData = { "OutChuckData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventGetSaveData_Parms, OutChuckData), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_GetSaveData_Statics::NewProp_FluidUpdateList_ElementProp = { "FluidUpdateList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_GetSaveData_Statics::NewProp_FluidUpdateList = { "FluidUpdateList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventGetSaveData_Parms, FluidUpdateList), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimpleVoxelActor_GetSaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_GetSaveData_Statics::NewProp_OutChuckData_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_GetSaveData_Statics::NewProp_OutChuckData_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_GetSaveData_Statics::NewProp_OutChuckData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_GetSaveData_Statics::NewProp_FluidUpdateList_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_GetSaveData_Statics::NewProp_FluidUpdateList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_GetSaveData_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleVoxel | Manager" },
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleVoxelActor_GetSaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimpleVoxelActor, nullptr, "GetSaveData", nullptr, nullptr, sizeof(SimpleVoxelActor_eventGetSaveData_Parms), Z_Construct_UFunction_ASimpleVoxelActor_GetSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_GetSaveData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_GetSaveData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_GetSaveData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimpleVoxelActor_GetSaveData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimpleVoxelActor_GetSaveData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelAreaMask_Statics
	{
		struct SimpleVoxelActor_eventGetVoxelAreaMask_Parms
		{
			FIntVector StartLocation;
			FIntVector EndLocation;
			TArray<FIntVector> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelAreaMask_Statics::NewProp_StartLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelAreaMask_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventGetVoxelAreaMask_Parms, StartLocation), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelAreaMask_Statics::NewProp_StartLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelAreaMask_Statics::NewProp_StartLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelAreaMask_Statics::NewProp_EndLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelAreaMask_Statics::NewProp_EndLocation = { "EndLocation", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventGetVoxelAreaMask_Parms, EndLocation), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelAreaMask_Statics::NewProp_EndLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelAreaMask_Statics::NewProp_EndLocation_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelAreaMask_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelAreaMask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventGetVoxelAreaMask_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelAreaMask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelAreaMask_Statics::NewProp_StartLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelAreaMask_Statics::NewProp_EndLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelAreaMask_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelAreaMask_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelAreaMask_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleVoxel | Data Collector" },
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelAreaMask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimpleVoxelActor, nullptr, "GetVoxelAreaMask", nullptr, nullptr, sizeof(SimpleVoxelActor_eventGetVoxelAreaMask_Parms), Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelAreaMask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelAreaMask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelAreaMask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelAreaMask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelAreaMask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelAreaMask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelBoxMask_Statics
	{
		struct SimpleVoxelActor_eventGetVoxelBoxMask_Parms
		{
			FIntVector Location;
			int32 Size;
			TArray<FIntVector> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Size;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelBoxMask_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelBoxMask_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventGetVoxelBoxMask_Parms, Location), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelBoxMask_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelBoxMask_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelBoxMask_Statics::NewProp_Size_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelBoxMask_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventGetVoxelBoxMask_Parms, Size), METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelBoxMask_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelBoxMask_Statics::NewProp_Size_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelBoxMask_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelBoxMask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventGetVoxelBoxMask_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelBoxMask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelBoxMask_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelBoxMask_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelBoxMask_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelBoxMask_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelBoxMask_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleVoxel | Data Collector" },
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelBoxMask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimpleVoxelActor, nullptr, "GetVoxelBoxMask", nullptr, nullptr, sizeof(SimpleVoxelActor_eventGetVoxelBoxMask_Parms), Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelBoxMask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelBoxMask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelBoxMask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelBoxMask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelBoxMask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelBoxMask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelData_Statics
	{
		struct SimpleVoxelActor_eventGetVoxelData_Parms
		{
			FIntVector GlobalLocation;
			FVoxelData ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GlobalLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelData_Statics::NewProp_GlobalLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelData_Statics::NewProp_GlobalLocation = { "GlobalLocation", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventGetVoxelData_Parms, GlobalLocation), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelData_Statics::NewProp_GlobalLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelData_Statics::NewProp_GlobalLocation_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventGetVoxelData_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelData_Statics::NewProp_GlobalLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelData_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleVoxel | Data Collector" },
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimpleVoxelActor, nullptr, "GetVoxelData", nullptr, nullptr, sizeof(SimpleVoxelActor_eventGetVoxelData_Parms), Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelSphereMask_Statics
	{
		struct SimpleVoxelActor_eventGetVoxelSphereMask_Parms
		{
			FIntVector Location;
			int32 Size;
			TArray<FIntVector> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Size;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelSphereMask_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelSphereMask_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventGetVoxelSphereMask_Parms, Location), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelSphereMask_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelSphereMask_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelSphereMask_Statics::NewProp_Size_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelSphereMask_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventGetVoxelSphereMask_Parms, Size), METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelSphereMask_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelSphereMask_Statics::NewProp_Size_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelSphereMask_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelSphereMask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventGetVoxelSphereMask_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelSphereMask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelSphereMask_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelSphereMask_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelSphereMask_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelSphereMask_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelSphereMask_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleVoxel | Data Collector" },
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelSphereMask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimpleVoxelActor, nullptr, "GetVoxelSphereMask", nullptr, nullptr, sizeof(SimpleVoxelActor_eventGetVoxelSphereMask_Parms), Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelSphereMask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelSphereMask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelSphereMask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelSphereMask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelSphereMask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelSphereMask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimpleVoxelActor_GlobalToIndex_Statics
	{
		struct SimpleVoxelActor_eventGlobalToIndex_Parms
		{
			FIntVector Location;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_GlobalToIndex_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_GlobalToIndex_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventGlobalToIndex_Parms, Location), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_GlobalToIndex_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_GlobalToIndex_Statics::NewProp_Location_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_GlobalToIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventGlobalToIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimpleVoxelActor_GlobalToIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_GlobalToIndex_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_GlobalToIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_GlobalToIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleVoxel | Converter" },
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleVoxelActor_GlobalToIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimpleVoxelActor, nullptr, "GlobalToIndex", nullptr, nullptr, sizeof(SimpleVoxelActor_eventGlobalToIndex_Parms), Z_Construct_UFunction_ASimpleVoxelActor_GlobalToIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_GlobalToIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_GlobalToIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_GlobalToIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimpleVoxelActor_GlobalToIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimpleVoxelActor_GlobalToIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimpleVoxelActor_GlobalToLocal_Statics
	{
		struct SimpleVoxelActor_eventGlobalToLocal_Parms
		{
			FIntVector Location;
			FIntVector ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_GlobalToLocal_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_GlobalToLocal_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventGlobalToLocal_Parms, Location), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_GlobalToLocal_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_GlobalToLocal_Statics::NewProp_Location_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_GlobalToLocal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventGlobalToLocal_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimpleVoxelActor_GlobalToLocal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_GlobalToLocal_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_GlobalToLocal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_GlobalToLocal_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleVoxel | Converter" },
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleVoxelActor_GlobalToLocal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimpleVoxelActor, nullptr, "GlobalToLocal", nullptr, nullptr, sizeof(SimpleVoxelActor_eventGlobalToLocal_Parms), Z_Construct_UFunction_ASimpleVoxelActor_GlobalToLocal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_GlobalToLocal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_GlobalToLocal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_GlobalToLocal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimpleVoxelActor_GlobalToLocal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimpleVoxelActor_GlobalToLocal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimpleVoxelActor_HasChuckInitialized_Statics
	{
		struct SimpleVoxelActor_eventHasChuckInitialized_Parms
		{
			FIntVector ChuckLocation;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChuckLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChuckLocation;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_HasChuckInitialized_Statics::NewProp_ChuckLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_HasChuckInitialized_Statics::NewProp_ChuckLocation = { "ChuckLocation", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventHasChuckInitialized_Parms, ChuckLocation), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_HasChuckInitialized_Statics::NewProp_ChuckLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_HasChuckInitialized_Statics::NewProp_ChuckLocation_MetaData)) };
	void Z_Construct_UFunction_ASimpleVoxelActor_HasChuckInitialized_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleVoxelActor_eventHasChuckInitialized_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_HasChuckInitialized_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleVoxelActor_eventHasChuckInitialized_Parms), &Z_Construct_UFunction_ASimpleVoxelActor_HasChuckInitialized_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimpleVoxelActor_HasChuckInitialized_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_HasChuckInitialized_Statics::NewProp_ChuckLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_HasChuckInitialized_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_HasChuckInitialized_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleVoxel | Validation" },
		{ "Comment", "///Validation///\n" },
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
		{ "ToolTip", "Validation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleVoxelActor_HasChuckInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimpleVoxelActor, nullptr, "HasChuckInitialized", nullptr, nullptr, sizeof(SimpleVoxelActor_eventHasChuckInitialized_Parms), Z_Construct_UFunction_ASimpleVoxelActor_HasChuckInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_HasChuckInitialized_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_HasChuckInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_HasChuckInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimpleVoxelActor_HasChuckInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimpleVoxelActor_HasChuckInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimpleVoxelActor_IncrementFluidThreadCounter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_IncrementFluidThreadCounter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleVoxelActor_IncrementFluidThreadCounter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimpleVoxelActor, nullptr, "IncrementFluidThreadCounter", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_IncrementFluidThreadCounter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_IncrementFluidThreadCounter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimpleVoxelActor_IncrementFluidThreadCounter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimpleVoxelActor_IncrementFluidThreadCounter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimpleVoxelActor_IncrementVoxelThreadCounter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_IncrementVoxelThreadCounter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleVoxelActor_IncrementVoxelThreadCounter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimpleVoxelActor, nullptr, "IncrementVoxelThreadCounter", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_IncrementVoxelThreadCounter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_IncrementVoxelThreadCounter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimpleVoxelActor_IncrementVoxelThreadCounter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimpleVoxelActor_IncrementVoxelThreadCounter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimpleVoxelActor_IndexToGlobal_Statics
	{
		struct SimpleVoxelActor_eventIndexToGlobal_Parms
		{
			int32 Index;
			FIntVector ChuckLocation;
			FIntVector ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChuckLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChuckLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_IndexToGlobal_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_IndexToGlobal_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventIndexToGlobal_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_IndexToGlobal_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_IndexToGlobal_Statics::NewProp_Index_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_IndexToGlobal_Statics::NewProp_ChuckLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_IndexToGlobal_Statics::NewProp_ChuckLocation = { "ChuckLocation", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventIndexToGlobal_Parms, ChuckLocation), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_IndexToGlobal_Statics::NewProp_ChuckLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_IndexToGlobal_Statics::NewProp_ChuckLocation_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_IndexToGlobal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventIndexToGlobal_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimpleVoxelActor_IndexToGlobal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_IndexToGlobal_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_IndexToGlobal_Statics::NewProp_ChuckLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_IndexToGlobal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_IndexToGlobal_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleVoxel | Converter" },
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleVoxelActor_IndexToGlobal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimpleVoxelActor, nullptr, "IndexToGlobal", nullptr, nullptr, sizeof(SimpleVoxelActor_eventIndexToGlobal_Parms), Z_Construct_UFunction_ASimpleVoxelActor_IndexToGlobal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_IndexToGlobal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_IndexToGlobal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_IndexToGlobal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimpleVoxelActor_IndexToGlobal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimpleVoxelActor_IndexToGlobal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimpleVoxelActor_IndexToLocal_Statics
	{
		struct SimpleVoxelActor_eventIndexToLocal_Parms
		{
			int32 Index;
			FIntVector ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_IndexToLocal_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_IndexToLocal_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventIndexToLocal_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_IndexToLocal_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_IndexToLocal_Statics::NewProp_Index_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_IndexToLocal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventIndexToLocal_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimpleVoxelActor_IndexToLocal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_IndexToLocal_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_IndexToLocal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_IndexToLocal_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleVoxel | Converter" },
		{ "Comment", "///Converter///\n" },
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
		{ "ToolTip", "Converter" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleVoxelActor_IndexToLocal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimpleVoxelActor, nullptr, "IndexToLocal", nullptr, nullptr, sizeof(SimpleVoxelActor_eventIndexToLocal_Parms), Z_Construct_UFunction_ASimpleVoxelActor_IndexToLocal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_IndexToLocal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_IndexToLocal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_IndexToLocal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimpleVoxelActor_IndexToLocal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimpleVoxelActor_IndexToLocal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimpleVoxelActor_InitializeChuck_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChuckLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChuckLocation;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChuckActor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_InitializeChuck_Statics::NewProp_ChuckLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_InitializeChuck_Statics::NewProp_ChuckLocation = { "ChuckLocation", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventInitializeChuck_Parms, ChuckLocation), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_InitializeChuck_Statics::NewProp_ChuckLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_InitializeChuck_Statics::NewProp_ChuckLocation_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_InitializeChuck_Statics::NewProp_ChuckActor = { "ChuckActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventInitializeChuck_Parms, ChuckActor), Z_Construct_UClass_ASimpleVoxelChuck_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASimpleVoxelActor_InitializeChuck_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleVoxelActor_eventInitializeChuck_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_InitializeChuck_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleVoxelActor_eventInitializeChuck_Parms), &Z_Construct_UFunction_ASimpleVoxelActor_InitializeChuck_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimpleVoxelActor_InitializeChuck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_InitializeChuck_Statics::NewProp_ChuckLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_InitializeChuck_Statics::NewProp_ChuckActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_InitializeChuck_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_InitializeChuck_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleVoxel | Chuck Manupulation" },
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleVoxelActor_InitializeChuck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimpleVoxelActor, nullptr, "InitializeChuck", nullptr, nullptr, sizeof(SimpleVoxelActor_eventInitializeChuck_Parms), Z_Construct_UFunction_ASimpleVoxelActor_InitializeChuck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_InitializeChuck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_InitializeChuck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_InitializeChuck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimpleVoxelActor_InitializeChuck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimpleVoxelActor_InitializeChuck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimpleVoxelActor_InitializeChuck_Implementation_Statics
	{
		struct SimpleVoxelActor_eventInitializeChuck_Implementation_Parms
		{
			FIntVector ChuckLocation;
			ASimpleVoxelChuck* ChuckActor;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChuckLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChuckLocation;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChuckActor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_InitializeChuck_Implementation_Statics::NewProp_ChuckLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_InitializeChuck_Implementation_Statics::NewProp_ChuckLocation = { "ChuckLocation", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventInitializeChuck_Implementation_Parms, ChuckLocation), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_InitializeChuck_Implementation_Statics::NewProp_ChuckLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_InitializeChuck_Implementation_Statics::NewProp_ChuckLocation_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_InitializeChuck_Implementation_Statics::NewProp_ChuckActor = { "ChuckActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventInitializeChuck_Implementation_Parms, ChuckActor), Z_Construct_UClass_ASimpleVoxelChuck_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASimpleVoxelActor_InitializeChuck_Implementation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleVoxelActor_eventInitializeChuck_Implementation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_InitializeChuck_Implementation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleVoxelActor_eventInitializeChuck_Implementation_Parms), &Z_Construct_UFunction_ASimpleVoxelActor_InitializeChuck_Implementation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimpleVoxelActor_InitializeChuck_Implementation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_InitializeChuck_Implementation_Statics::NewProp_ChuckLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_InitializeChuck_Implementation_Statics::NewProp_ChuckActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_InitializeChuck_Implementation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_InitializeChuck_Implementation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleVoxelActor_InitializeChuck_Implementation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimpleVoxelActor, nullptr, "InitializeChuck_Implementation", nullptr, nullptr, sizeof(SimpleVoxelActor_eventInitializeChuck_Implementation_Parms), Z_Construct_UFunction_ASimpleVoxelActor_InitializeChuck_Implementation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_InitializeChuck_Implementation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_InitializeChuck_Implementation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_InitializeChuck_Implementation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimpleVoxelActor_InitializeChuck_Implementation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimpleVoxelActor_InitializeChuck_Implementation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimpleVoxelActor_IsChuckActive_Statics
	{
		struct SimpleVoxelActor_eventIsChuckActive_Parms
		{
			FIntVector ChuckLocation;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChuckLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChuckLocation;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_IsChuckActive_Statics::NewProp_ChuckLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_IsChuckActive_Statics::NewProp_ChuckLocation = { "ChuckLocation", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventIsChuckActive_Parms, ChuckLocation), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_IsChuckActive_Statics::NewProp_ChuckLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_IsChuckActive_Statics::NewProp_ChuckLocation_MetaData)) };
	void Z_Construct_UFunction_ASimpleVoxelActor_IsChuckActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleVoxelActor_eventIsChuckActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_IsChuckActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleVoxelActor_eventIsChuckActive_Parms), &Z_Construct_UFunction_ASimpleVoxelActor_IsChuckActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimpleVoxelActor_IsChuckActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_IsChuckActive_Statics::NewProp_ChuckLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_IsChuckActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_IsChuckActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleVoxel | Validation" },
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleVoxelActor_IsChuckActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimpleVoxelActor, nullptr, "IsChuckActive", nullptr, nullptr, sizeof(SimpleVoxelActor_eventIsChuckActive_Parms), Z_Construct_UFunction_ASimpleVoxelActor_IsChuckActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_IsChuckActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_IsChuckActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_IsChuckActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimpleVoxelActor_IsChuckActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimpleVoxelActor_IsChuckActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimpleVoxelActor_IsFluidVisible_Statics
	{
		struct SimpleVoxelActor_eventIsFluidVisible_Parms
		{
			FIntVector FluidLocation;
			bool NotEqual;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FluidLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FluidLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotEqual_MetaData[];
#endif
		static void NewProp_NotEqual_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NotEqual;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_IsFluidVisible_Statics::NewProp_FluidLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_IsFluidVisible_Statics::NewProp_FluidLocation = { "FluidLocation", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventIsFluidVisible_Parms, FluidLocation), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_IsFluidVisible_Statics::NewProp_FluidLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_IsFluidVisible_Statics::NewProp_FluidLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_IsFluidVisible_Statics::NewProp_NotEqual_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ASimpleVoxelActor_IsFluidVisible_Statics::NewProp_NotEqual_SetBit(void* Obj)
	{
		((SimpleVoxelActor_eventIsFluidVisible_Parms*)Obj)->NotEqual = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_IsFluidVisible_Statics::NewProp_NotEqual = { "NotEqual", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleVoxelActor_eventIsFluidVisible_Parms), &Z_Construct_UFunction_ASimpleVoxelActor_IsFluidVisible_Statics::NewProp_NotEqual_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_IsFluidVisible_Statics::NewProp_NotEqual_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_IsFluidVisible_Statics::NewProp_NotEqual_MetaData)) };
	void Z_Construct_UFunction_ASimpleVoxelActor_IsFluidVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleVoxelActor_eventIsFluidVisible_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_IsFluidVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleVoxelActor_eventIsFluidVisible_Parms), &Z_Construct_UFunction_ASimpleVoxelActor_IsFluidVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimpleVoxelActor_IsFluidVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_IsFluidVisible_Statics::NewProp_FluidLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_IsFluidVisible_Statics::NewProp_NotEqual,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_IsFluidVisible_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_IsFluidVisible_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleVoxel | Data Collector" },
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleVoxelActor_IsFluidVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimpleVoxelActor, nullptr, "IsFluidVisible", nullptr, nullptr, sizeof(SimpleVoxelActor_eventIsFluidVisible_Parms), Z_Construct_UFunction_ASimpleVoxelActor_IsFluidVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_IsFluidVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_IsFluidVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_IsFluidVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimpleVoxelActor_IsFluidVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimpleVoxelActor_IsFluidVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimpleVoxelActor_IsVoxelVisible_Statics
	{
		struct SimpleVoxelActor_eventIsVoxelVisible_Parms
		{
			FIntVector VoxelLocation;
			int32 CheckMaterial;
			bool NotEqual;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoxelLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VoxelLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CheckMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotEqual_MetaData[];
#endif
		static void NewProp_NotEqual_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NotEqual;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_IsVoxelVisible_Statics::NewProp_VoxelLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_IsVoxelVisible_Statics::NewProp_VoxelLocation = { "VoxelLocation", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventIsVoxelVisible_Parms, VoxelLocation), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_IsVoxelVisible_Statics::NewProp_VoxelLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_IsVoxelVisible_Statics::NewProp_VoxelLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_IsVoxelVisible_Statics::NewProp_CheckMaterial_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_IsVoxelVisible_Statics::NewProp_CheckMaterial = { "CheckMaterial", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventIsVoxelVisible_Parms, CheckMaterial), METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_IsVoxelVisible_Statics::NewProp_CheckMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_IsVoxelVisible_Statics::NewProp_CheckMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_IsVoxelVisible_Statics::NewProp_NotEqual_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ASimpleVoxelActor_IsVoxelVisible_Statics::NewProp_NotEqual_SetBit(void* Obj)
	{
		((SimpleVoxelActor_eventIsVoxelVisible_Parms*)Obj)->NotEqual = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_IsVoxelVisible_Statics::NewProp_NotEqual = { "NotEqual", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleVoxelActor_eventIsVoxelVisible_Parms), &Z_Construct_UFunction_ASimpleVoxelActor_IsVoxelVisible_Statics::NewProp_NotEqual_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_IsVoxelVisible_Statics::NewProp_NotEqual_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_IsVoxelVisible_Statics::NewProp_NotEqual_MetaData)) };
	void Z_Construct_UFunction_ASimpleVoxelActor_IsVoxelVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleVoxelActor_eventIsVoxelVisible_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_IsVoxelVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleVoxelActor_eventIsVoxelVisible_Parms), &Z_Construct_UFunction_ASimpleVoxelActor_IsVoxelVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimpleVoxelActor_IsVoxelVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_IsVoxelVisible_Statics::NewProp_VoxelLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_IsVoxelVisible_Statics::NewProp_CheckMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_IsVoxelVisible_Statics::NewProp_NotEqual,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_IsVoxelVisible_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_IsVoxelVisible_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleVoxel | Data Collector" },
		{ "Comment", "///Data Collector///\n" },
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
		{ "ToolTip", "Data Collector" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleVoxelActor_IsVoxelVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimpleVoxelActor, nullptr, "IsVoxelVisible", nullptr, nullptr, sizeof(SimpleVoxelActor_eventIsVoxelVisible_Parms), Z_Construct_UFunction_ASimpleVoxelActor_IsVoxelVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_IsVoxelVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_IsVoxelVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_IsVoxelVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimpleVoxelActor_IsVoxelVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimpleVoxelActor_IsVoxelVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimpleVoxelActor_LoadSaveData_Statics
	{
		struct SimpleVoxelActor_eventLoadSaveData_Parms
		{
			TMap<FIntVector,FChuckData> OutChuckData;
			TSet<FIntVector> FluidUpdateList;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutChuckData_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutChuckData_Key_KeyProp;
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_OutChuckData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FluidUpdateList_ElementProp;
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_FluidUpdateList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_LoadSaveData_Statics::NewProp_OutChuckData_ValueProp = { "OutChuckData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FChuckData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_LoadSaveData_Statics::NewProp_OutChuckData_Key_KeyProp = { "OutChuckData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_LoadSaveData_Statics::NewProp_OutChuckData = { "OutChuckData", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventLoadSaveData_Parms, OutChuckData), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_LoadSaveData_Statics::NewProp_FluidUpdateList_ElementProp = { "FluidUpdateList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_LoadSaveData_Statics::NewProp_FluidUpdateList = { "FluidUpdateList", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventLoadSaveData_Parms, FluidUpdateList), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimpleVoxelActor_LoadSaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_LoadSaveData_Statics::NewProp_OutChuckData_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_LoadSaveData_Statics::NewProp_OutChuckData_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_LoadSaveData_Statics::NewProp_OutChuckData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_LoadSaveData_Statics::NewProp_FluidUpdateList_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_LoadSaveData_Statics::NewProp_FluidUpdateList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_LoadSaveData_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleVoxel | Manager" },
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleVoxelActor_LoadSaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimpleVoxelActor, nullptr, "LoadSaveData", nullptr, nullptr, sizeof(SimpleVoxelActor_eventLoadSaveData_Parms), Z_Construct_UFunction_ASimpleVoxelActor_LoadSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_LoadSaveData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_LoadSaveData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_LoadSaveData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimpleVoxelActor_LoadSaveData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimpleVoxelActor_LoadSaveData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimpleVoxelActor_LocalToGlobal_Statics
	{
		struct SimpleVoxelActor_eventLocalToGlobal_Parms
		{
			FIntVector Location;
			FIntVector ChuckLocation;
			FIntVector ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChuckLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChuckLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_LocalToGlobal_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_LocalToGlobal_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventLocalToGlobal_Parms, Location), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_LocalToGlobal_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_LocalToGlobal_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_LocalToGlobal_Statics::NewProp_ChuckLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_LocalToGlobal_Statics::NewProp_ChuckLocation = { "ChuckLocation", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventLocalToGlobal_Parms, ChuckLocation), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_LocalToGlobal_Statics::NewProp_ChuckLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_LocalToGlobal_Statics::NewProp_ChuckLocation_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_LocalToGlobal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventLocalToGlobal_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimpleVoxelActor_LocalToGlobal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_LocalToGlobal_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_LocalToGlobal_Statics::NewProp_ChuckLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_LocalToGlobal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_LocalToGlobal_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleVoxel | Converter" },
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleVoxelActor_LocalToGlobal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimpleVoxelActor, nullptr, "LocalToGlobal", nullptr, nullptr, sizeof(SimpleVoxelActor_eventLocalToGlobal_Parms), Z_Construct_UFunction_ASimpleVoxelActor_LocalToGlobal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_LocalToGlobal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_LocalToGlobal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_LocalToGlobal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimpleVoxelActor_LocalToGlobal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimpleVoxelActor_LocalToGlobal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimpleVoxelActor_LocalToIndex_Statics
	{
		struct SimpleVoxelActor_eventLocalToIndex_Parms
		{
			FIntVector Location;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_LocalToIndex_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_LocalToIndex_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventLocalToIndex_Parms, Location), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_LocalToIndex_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_LocalToIndex_Statics::NewProp_Location_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_LocalToIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventLocalToIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimpleVoxelActor_LocalToIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_LocalToIndex_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_LocalToIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_LocalToIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleVoxel | Converter" },
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleVoxelActor_LocalToIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimpleVoxelActor, nullptr, "LocalToIndex", nullptr, nullptr, sizeof(SimpleVoxelActor_eventLocalToIndex_Parms), Z_Construct_UFunction_ASimpleVoxelActor_LocalToIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_LocalToIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_LocalToIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_LocalToIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimpleVoxelActor_LocalToIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimpleVoxelActor_LocalToIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimpleVoxelActor_Reset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_Reset_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleVoxel | Manager" },
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleVoxelActor_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimpleVoxelActor, nullptr, "Reset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimpleVoxelActor_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimpleVoxelActor_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimpleVoxelActor_SetFluid_Statics
	{
		struct SimpleVoxelActor_eventSetFluid_Parms
		{
			FIntVector GlobalLocation;
			uint8 Depth;
			FColor CustomData;
			uint8 FlowDelay;
			uint8 MaxPressure;
			bool AddToRenderQueue;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GlobalLocation;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Depth;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FlowDelay;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MaxPressure;
		static void NewProp_AddToRenderQueue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AddToRenderQueue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_SetFluid_Statics::NewProp_GlobalLocation = { "GlobalLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventSetFluid_Parms, GlobalLocation), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASimpleVoxelActor_SetFluid_Statics::NewProp_Depth = { "Depth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventSetFluid_Parms, Depth), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_SetFluid_Statics::NewProp_CustomData = { "CustomData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventSetFluid_Parms, CustomData), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASimpleVoxelActor_SetFluid_Statics::NewProp_FlowDelay = { "FlowDelay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventSetFluid_Parms, FlowDelay), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASimpleVoxelActor_SetFluid_Statics::NewProp_MaxPressure = { "MaxPressure", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventSetFluid_Parms, MaxPressure), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASimpleVoxelActor_SetFluid_Statics::NewProp_AddToRenderQueue_SetBit(void* Obj)
	{
		((SimpleVoxelActor_eventSetFluid_Parms*)Obj)->AddToRenderQueue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_SetFluid_Statics::NewProp_AddToRenderQueue = { "AddToRenderQueue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleVoxelActor_eventSetFluid_Parms), &Z_Construct_UFunction_ASimpleVoxelActor_SetFluid_Statics::NewProp_AddToRenderQueue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASimpleVoxelActor_SetFluid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleVoxelActor_eventSetFluid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_SetFluid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleVoxelActor_eventSetFluid_Parms), &Z_Construct_UFunction_ASimpleVoxelActor_SetFluid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimpleVoxelActor_SetFluid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_SetFluid_Statics::NewProp_GlobalLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_SetFluid_Statics::NewProp_Depth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_SetFluid_Statics::NewProp_CustomData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_SetFluid_Statics::NewProp_FlowDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_SetFluid_Statics::NewProp_MaxPressure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_SetFluid_Statics::NewProp_AddToRenderQueue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_SetFluid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_SetFluid_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleVoxel | Fluid" },
		{ "CPP_Default_AddToRenderQueue", "true" },
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleVoxelActor_SetFluid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimpleVoxelActor, nullptr, "SetFluid", nullptr, nullptr, sizeof(SimpleVoxelActor_eventSetFluid_Parms), Z_Construct_UFunction_ASimpleVoxelActor_SetFluid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_SetFluid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_SetFluid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_SetFluid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimpleVoxelActor_SetFluid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimpleVoxelActor_SetFluid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimpleVoxelActor_SetFluidLocal_Statics
	{
		struct SimpleVoxelActor_eventSetFluidLocal_Parms
		{
			FIntVector VoxelLocation;
			FIntVector ChuckLocation;
			uint8 Depth;
			FColor CustomData;
			uint8 FlowDelay;
			uint8 MaxPressure;
			bool AddToRenderQueue;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VoxelLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChuckLocation;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Depth;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FlowDelay;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MaxPressure;
		static void NewProp_AddToRenderQueue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AddToRenderQueue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_SetFluidLocal_Statics::NewProp_VoxelLocation = { "VoxelLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventSetFluidLocal_Parms, VoxelLocation), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_SetFluidLocal_Statics::NewProp_ChuckLocation = { "ChuckLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventSetFluidLocal_Parms, ChuckLocation), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASimpleVoxelActor_SetFluidLocal_Statics::NewProp_Depth = { "Depth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventSetFluidLocal_Parms, Depth), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_SetFluidLocal_Statics::NewProp_CustomData = { "CustomData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventSetFluidLocal_Parms, CustomData), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASimpleVoxelActor_SetFluidLocal_Statics::NewProp_FlowDelay = { "FlowDelay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventSetFluidLocal_Parms, FlowDelay), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASimpleVoxelActor_SetFluidLocal_Statics::NewProp_MaxPressure = { "MaxPressure", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventSetFluidLocal_Parms, MaxPressure), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASimpleVoxelActor_SetFluidLocal_Statics::NewProp_AddToRenderQueue_SetBit(void* Obj)
	{
		((SimpleVoxelActor_eventSetFluidLocal_Parms*)Obj)->AddToRenderQueue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_SetFluidLocal_Statics::NewProp_AddToRenderQueue = { "AddToRenderQueue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleVoxelActor_eventSetFluidLocal_Parms), &Z_Construct_UFunction_ASimpleVoxelActor_SetFluidLocal_Statics::NewProp_AddToRenderQueue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASimpleVoxelActor_SetFluidLocal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleVoxelActor_eventSetFluidLocal_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_SetFluidLocal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleVoxelActor_eventSetFluidLocal_Parms), &Z_Construct_UFunction_ASimpleVoxelActor_SetFluidLocal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimpleVoxelActor_SetFluidLocal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_SetFluidLocal_Statics::NewProp_VoxelLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_SetFluidLocal_Statics::NewProp_ChuckLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_SetFluidLocal_Statics::NewProp_Depth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_SetFluidLocal_Statics::NewProp_CustomData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_SetFluidLocal_Statics::NewProp_FlowDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_SetFluidLocal_Statics::NewProp_MaxPressure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_SetFluidLocal_Statics::NewProp_AddToRenderQueue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_SetFluidLocal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_SetFluidLocal_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleVoxel | Fluid" },
		{ "Comment", "///Fluid///\n" },
		{ "CPP_Default_AddToRenderQueue", "true" },
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
		{ "ToolTip", "Fluid" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleVoxelActor_SetFluidLocal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimpleVoxelActor, nullptr, "SetFluidLocal", nullptr, nullptr, sizeof(SimpleVoxelActor_eventSetFluidLocal_Parms), Z_Construct_UFunction_ASimpleVoxelActor_SetFluidLocal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_SetFluidLocal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_SetFluidLocal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_SetFluidLocal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimpleVoxelActor_SetFluidLocal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimpleVoxelActor_SetFluidLocal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimpleVoxelActor_SetVoxel_Statics
	{
		struct SimpleVoxelActor_eventSetVoxel_Parms
		{
			FIntVector GlobalLocation;
			int32 Material;
			FColor CustomData;
			bool AddToRenderQueue;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GlobalLocation;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Material;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomData;
		static void NewProp_AddToRenderQueue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AddToRenderQueue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_SetVoxel_Statics::NewProp_GlobalLocation = { "GlobalLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventSetVoxel_Parms, GlobalLocation), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_SetVoxel_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventSetVoxel_Parms, Material), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_SetVoxel_Statics::NewProp_CustomData = { "CustomData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventSetVoxel_Parms, CustomData), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASimpleVoxelActor_SetVoxel_Statics::NewProp_AddToRenderQueue_SetBit(void* Obj)
	{
		((SimpleVoxelActor_eventSetVoxel_Parms*)Obj)->AddToRenderQueue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_SetVoxel_Statics::NewProp_AddToRenderQueue = { "AddToRenderQueue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleVoxelActor_eventSetVoxel_Parms), &Z_Construct_UFunction_ASimpleVoxelActor_SetVoxel_Statics::NewProp_AddToRenderQueue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASimpleVoxelActor_SetVoxel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleVoxelActor_eventSetVoxel_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_SetVoxel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleVoxelActor_eventSetVoxel_Parms), &Z_Construct_UFunction_ASimpleVoxelActor_SetVoxel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimpleVoxelActor_SetVoxel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_SetVoxel_Statics::NewProp_GlobalLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_SetVoxel_Statics::NewProp_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_SetVoxel_Statics::NewProp_CustomData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_SetVoxel_Statics::NewProp_AddToRenderQueue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_SetVoxel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_SetVoxel_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleVoxel | Voxel" },
		{ "CPP_Default_AddToRenderQueue", "true" },
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleVoxelActor_SetVoxel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimpleVoxelActor, nullptr, "SetVoxel", nullptr, nullptr, sizeof(SimpleVoxelActor_eventSetVoxel_Parms), Z_Construct_UFunction_ASimpleVoxelActor_SetVoxel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_SetVoxel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_SetVoxel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_SetVoxel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimpleVoxelActor_SetVoxel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimpleVoxelActor_SetVoxel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelArea_Statics
	{
		struct SimpleVoxelActor_eventSetVoxelArea_Parms
		{
			FIntVector StartLocation;
			FIntVector EndLocation;
			int32 Material;
			FColor CustomData;
			bool AddToRenderQueue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndLocation;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Material;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomData;
		static void NewProp_AddToRenderQueue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AddToRenderQueue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelArea_Statics::NewProp_StartLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelArea_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventSetVoxelArea_Parms, StartLocation), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelArea_Statics::NewProp_StartLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelArea_Statics::NewProp_StartLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelArea_Statics::NewProp_EndLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelArea_Statics::NewProp_EndLocation = { "EndLocation", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventSetVoxelArea_Parms, EndLocation), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelArea_Statics::NewProp_EndLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelArea_Statics::NewProp_EndLocation_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelArea_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventSetVoxelArea_Parms, Material), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelArea_Statics::NewProp_CustomData = { "CustomData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventSetVoxelArea_Parms, CustomData), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelArea_Statics::NewProp_AddToRenderQueue_SetBit(void* Obj)
	{
		((SimpleVoxelActor_eventSetVoxelArea_Parms*)Obj)->AddToRenderQueue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelArea_Statics::NewProp_AddToRenderQueue = { "AddToRenderQueue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleVoxelActor_eventSetVoxelArea_Parms), &Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelArea_Statics::NewProp_AddToRenderQueue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelArea_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleVoxelActor_eventSetVoxelArea_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelArea_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleVoxelActor_eventSetVoxelArea_Parms), &Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelArea_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelArea_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelArea_Statics::NewProp_StartLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelArea_Statics::NewProp_EndLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelArea_Statics::NewProp_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelArea_Statics::NewProp_CustomData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelArea_Statics::NewProp_AddToRenderQueue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelArea_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelArea_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleVoxel | Voxel" },
		{ "CPP_Default_AddToRenderQueue", "true" },
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelArea_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimpleVoxelActor, nullptr, "SetVoxelArea", nullptr, nullptr, sizeof(SimpleVoxelActor_eventSetVoxelArea_Parms), Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelArea_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelArea_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelArea_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelArea_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelArea()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelArea_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelAreaLocal_Statics
	{
		struct SimpleVoxelActor_eventSetVoxelAreaLocal_Parms
		{
			FIntVector StartLocation;
			FIntVector EndLocation;
			FIntVector ChuckLocation;
			int32 Material;
			FColor CustomData;
			bool AddToRenderQueue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChuckLocation;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Material;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomData;
		static void NewProp_AddToRenderQueue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AddToRenderQueue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelAreaLocal_Statics::NewProp_StartLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelAreaLocal_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventSetVoxelAreaLocal_Parms, StartLocation), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelAreaLocal_Statics::NewProp_StartLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelAreaLocal_Statics::NewProp_StartLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelAreaLocal_Statics::NewProp_EndLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelAreaLocal_Statics::NewProp_EndLocation = { "EndLocation", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventSetVoxelAreaLocal_Parms, EndLocation), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelAreaLocal_Statics::NewProp_EndLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelAreaLocal_Statics::NewProp_EndLocation_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelAreaLocal_Statics::NewProp_ChuckLocation = { "ChuckLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventSetVoxelAreaLocal_Parms, ChuckLocation), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelAreaLocal_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventSetVoxelAreaLocal_Parms, Material), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelAreaLocal_Statics::NewProp_CustomData = { "CustomData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventSetVoxelAreaLocal_Parms, CustomData), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelAreaLocal_Statics::NewProp_AddToRenderQueue_SetBit(void* Obj)
	{
		((SimpleVoxelActor_eventSetVoxelAreaLocal_Parms*)Obj)->AddToRenderQueue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelAreaLocal_Statics::NewProp_AddToRenderQueue = { "AddToRenderQueue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleVoxelActor_eventSetVoxelAreaLocal_Parms), &Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelAreaLocal_Statics::NewProp_AddToRenderQueue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelAreaLocal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleVoxelActor_eventSetVoxelAreaLocal_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelAreaLocal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleVoxelActor_eventSetVoxelAreaLocal_Parms), &Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelAreaLocal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelAreaLocal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelAreaLocal_Statics::NewProp_StartLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelAreaLocal_Statics::NewProp_EndLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelAreaLocal_Statics::NewProp_ChuckLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelAreaLocal_Statics::NewProp_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelAreaLocal_Statics::NewProp_CustomData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelAreaLocal_Statics::NewProp_AddToRenderQueue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelAreaLocal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelAreaLocal_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleVoxel | Voxel" },
		{ "CPP_Default_AddToRenderQueue", "true" },
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelAreaLocal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimpleVoxelActor, nullptr, "SetVoxelAreaLocal", nullptr, nullptr, sizeof(SimpleVoxelActor_eventSetVoxelAreaLocal_Parms), Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelAreaLocal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelAreaLocal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelAreaLocal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelAreaLocal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelAreaLocal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelAreaLocal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelLocal_Statics
	{
		struct SimpleVoxelActor_eventSetVoxelLocal_Parms
		{
			FIntVector VoxelLocation;
			FIntVector ChuckLocation;
			int32 Material;
			FColor CustomData;
			bool AddToRenderQueue;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VoxelLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChuckLocation;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Material;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomData;
		static void NewProp_AddToRenderQueue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AddToRenderQueue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelLocal_Statics::NewProp_VoxelLocation = { "VoxelLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventSetVoxelLocal_Parms, VoxelLocation), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelLocal_Statics::NewProp_ChuckLocation = { "ChuckLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventSetVoxelLocal_Parms, ChuckLocation), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelLocal_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventSetVoxelLocal_Parms, Material), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelLocal_Statics::NewProp_CustomData = { "CustomData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventSetVoxelLocal_Parms, CustomData), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelLocal_Statics::NewProp_AddToRenderQueue_SetBit(void* Obj)
	{
		((SimpleVoxelActor_eventSetVoxelLocal_Parms*)Obj)->AddToRenderQueue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelLocal_Statics::NewProp_AddToRenderQueue = { "AddToRenderQueue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleVoxelActor_eventSetVoxelLocal_Parms), &Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelLocal_Statics::NewProp_AddToRenderQueue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelLocal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleVoxelActor_eventSetVoxelLocal_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelLocal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleVoxelActor_eventSetVoxelLocal_Parms), &Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelLocal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelLocal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelLocal_Statics::NewProp_VoxelLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelLocal_Statics::NewProp_ChuckLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelLocal_Statics::NewProp_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelLocal_Statics::NewProp_CustomData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelLocal_Statics::NewProp_AddToRenderQueue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelLocal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelLocal_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleVoxel | Voxel" },
		{ "Comment", "///Voxel///\n" },
		{ "CPP_Default_AddToRenderQueue", "true" },
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
		{ "ToolTip", "Voxel" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelLocal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimpleVoxelActor, nullptr, "SetVoxelLocal", nullptr, nullptr, sizeof(SimpleVoxelActor_eventSetVoxelLocal_Parms), Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelLocal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelLocal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelLocal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelLocal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelLocal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelLocal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimpleVoxelActor_SetVoxels_Statics
	{
		struct SimpleVoxelActor_eventSetVoxels_Parms
		{
			TArray<FIntVector> GlobalLocation;
			int32 Material;
			FColor CustomData;
			bool AddToRenderQueue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GlobalLocation_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GlobalLocation;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Material;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomData;
		static void NewProp_AddToRenderQueue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AddToRenderQueue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_SetVoxels_Statics::NewProp_GlobalLocation_Inner = { "GlobalLocation", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_SetVoxels_Statics::NewProp_GlobalLocation = { "GlobalLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventSetVoxels_Parms, GlobalLocation), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_SetVoxels_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventSetVoxels_Parms, Material), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_SetVoxels_Statics::NewProp_CustomData = { "CustomData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventSetVoxels_Parms, CustomData), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASimpleVoxelActor_SetVoxels_Statics::NewProp_AddToRenderQueue_SetBit(void* Obj)
	{
		((SimpleVoxelActor_eventSetVoxels_Parms*)Obj)->AddToRenderQueue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_SetVoxels_Statics::NewProp_AddToRenderQueue = { "AddToRenderQueue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleVoxelActor_eventSetVoxels_Parms), &Z_Construct_UFunction_ASimpleVoxelActor_SetVoxels_Statics::NewProp_AddToRenderQueue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimpleVoxelActor_SetVoxels_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_SetVoxels_Statics::NewProp_GlobalLocation_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_SetVoxels_Statics::NewProp_GlobalLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_SetVoxels_Statics::NewProp_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_SetVoxels_Statics::NewProp_CustomData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_SetVoxels_Statics::NewProp_AddToRenderQueue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_SetVoxels_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleVoxel | Voxel" },
		{ "CPP_Default_AddToRenderQueue", "true" },
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleVoxelActor_SetVoxels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimpleVoxelActor, nullptr, "SetVoxels", nullptr, nullptr, sizeof(SimpleVoxelActor_eventSetVoxels_Parms), Z_Construct_UFunction_ASimpleVoxelActor_SetVoxels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_SetVoxels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_SetVoxels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_SetVoxels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimpleVoxelActor_SetVoxels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimpleVoxelActor_SetVoxels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelsLocal_Statics
	{
		struct SimpleVoxelActor_eventSetVoxelsLocal_Parms
		{
			TArray<FIntVector> VoxelsLocation;
			FIntVector ChuckLocation;
			int32 Material;
			FColor CustomData;
			bool AddToRenderQueue;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VoxelsLocation_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VoxelsLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChuckLocation;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Material;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomData;
		static void NewProp_AddToRenderQueue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AddToRenderQueue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelsLocal_Statics::NewProp_VoxelsLocation_Inner = { "VoxelsLocation", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelsLocal_Statics::NewProp_VoxelsLocation = { "VoxelsLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventSetVoxelsLocal_Parms, VoxelsLocation), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelsLocal_Statics::NewProp_ChuckLocation = { "ChuckLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventSetVoxelsLocal_Parms, ChuckLocation), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelsLocal_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventSetVoxelsLocal_Parms, Material), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelsLocal_Statics::NewProp_CustomData = { "CustomData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventSetVoxelsLocal_Parms, CustomData), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelsLocal_Statics::NewProp_AddToRenderQueue_SetBit(void* Obj)
	{
		((SimpleVoxelActor_eventSetVoxelsLocal_Parms*)Obj)->AddToRenderQueue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelsLocal_Statics::NewProp_AddToRenderQueue = { "AddToRenderQueue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleVoxelActor_eventSetVoxelsLocal_Parms), &Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelsLocal_Statics::NewProp_AddToRenderQueue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelsLocal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleVoxelActor_eventSetVoxelsLocal_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelsLocal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleVoxelActor_eventSetVoxelsLocal_Parms), &Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelsLocal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelsLocal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelsLocal_Statics::NewProp_VoxelsLocation_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelsLocal_Statics::NewProp_VoxelsLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelsLocal_Statics::NewProp_ChuckLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelsLocal_Statics::NewProp_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelsLocal_Statics::NewProp_CustomData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelsLocal_Statics::NewProp_AddToRenderQueue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelsLocal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelsLocal_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleVoxel | Voxel" },
		{ "CPP_Default_AddToRenderQueue", "true" },
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelsLocal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimpleVoxelActor, nullptr, "SetVoxelsLocal", nullptr, nullptr, sizeof(SimpleVoxelActor_eventSetVoxelsLocal_Parms), Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelsLocal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelsLocal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelsLocal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelsLocal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelsLocal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelsLocal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelsLocalByHeightMap_Statics
	{
		struct SimpleVoxelActor_eventSetVoxelsLocalByHeightMap_Parms
		{
			TArray<FIntVector> VoxelsLocation;
			FIntVector ChuckLocation;
			int32 Material;
			FColor CustomData;
			bool AddToRenderQueue;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VoxelsLocation_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VoxelsLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChuckLocation;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Material;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomData;
		static void NewProp_AddToRenderQueue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AddToRenderQueue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelsLocalByHeightMap_Statics::NewProp_VoxelsLocation_Inner = { "VoxelsLocation", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelsLocalByHeightMap_Statics::NewProp_VoxelsLocation = { "VoxelsLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventSetVoxelsLocalByHeightMap_Parms, VoxelsLocation), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelsLocalByHeightMap_Statics::NewProp_ChuckLocation = { "ChuckLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventSetVoxelsLocalByHeightMap_Parms, ChuckLocation), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelsLocalByHeightMap_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventSetVoxelsLocalByHeightMap_Parms, Material), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelsLocalByHeightMap_Statics::NewProp_CustomData = { "CustomData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventSetVoxelsLocalByHeightMap_Parms, CustomData), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelsLocalByHeightMap_Statics::NewProp_AddToRenderQueue_SetBit(void* Obj)
	{
		((SimpleVoxelActor_eventSetVoxelsLocalByHeightMap_Parms*)Obj)->AddToRenderQueue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelsLocalByHeightMap_Statics::NewProp_AddToRenderQueue = { "AddToRenderQueue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleVoxelActor_eventSetVoxelsLocalByHeightMap_Parms), &Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelsLocalByHeightMap_Statics::NewProp_AddToRenderQueue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelsLocalByHeightMap_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleVoxelActor_eventSetVoxelsLocalByHeightMap_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelsLocalByHeightMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleVoxelActor_eventSetVoxelsLocalByHeightMap_Parms), &Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelsLocalByHeightMap_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelsLocalByHeightMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelsLocalByHeightMap_Statics::NewProp_VoxelsLocation_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelsLocalByHeightMap_Statics::NewProp_VoxelsLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelsLocalByHeightMap_Statics::NewProp_ChuckLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelsLocalByHeightMap_Statics::NewProp_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelsLocalByHeightMap_Statics::NewProp_CustomData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelsLocalByHeightMap_Statics::NewProp_AddToRenderQueue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelsLocalByHeightMap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelsLocalByHeightMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleVoxel | Voxel" },
		{ "CPP_Default_AddToRenderQueue", "true" },
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelsLocalByHeightMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimpleVoxelActor, nullptr, "SetVoxelsLocalByHeightMap", nullptr, nullptr, sizeof(SimpleVoxelActor_eventSetVoxelsLocalByHeightMap_Parms), Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelsLocalByHeightMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelsLocalByHeightMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelsLocalByHeightMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelsLocalByHeightMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelsLocalByHeightMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelsLocalByHeightMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimpleVoxelActor_UpdateFluidChuck_Statics
	{
		struct SimpleVoxelActor_eventUpdateFluidChuck_Parms
		{
			bool Force;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Force_MetaData[];
#endif
		static void NewProp_Force_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Force;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_UpdateFluidChuck_Statics::NewProp_Force_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ASimpleVoxelActor_UpdateFluidChuck_Statics::NewProp_Force_SetBit(void* Obj)
	{
		((SimpleVoxelActor_eventUpdateFluidChuck_Parms*)Obj)->Force = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_UpdateFluidChuck_Statics::NewProp_Force = { "Force", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleVoxelActor_eventUpdateFluidChuck_Parms), &Z_Construct_UFunction_ASimpleVoxelActor_UpdateFluidChuck_Statics::NewProp_Force_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_UpdateFluidChuck_Statics::NewProp_Force_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_UpdateFluidChuck_Statics::NewProp_Force_MetaData)) };
	void Z_Construct_UFunction_ASimpleVoxelActor_UpdateFluidChuck_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleVoxelActor_eventUpdateFluidChuck_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_UpdateFluidChuck_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleVoxelActor_eventUpdateFluidChuck_Parms), &Z_Construct_UFunction_ASimpleVoxelActor_UpdateFluidChuck_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimpleVoxelActor_UpdateFluidChuck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_UpdateFluidChuck_Statics::NewProp_Force,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_UpdateFluidChuck_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_UpdateFluidChuck_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleVoxel | Chuck Manupulation" },
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleVoxelActor_UpdateFluidChuck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimpleVoxelActor, nullptr, "UpdateFluidChuck", nullptr, nullptr, sizeof(SimpleVoxelActor_eventUpdateFluidChuck_Parms), Z_Construct_UFunction_ASimpleVoxelActor_UpdateFluidChuck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_UpdateFluidChuck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_UpdateFluidChuck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_UpdateFluidChuck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimpleVoxelActor_UpdateFluidChuck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimpleVoxelActor_UpdateFluidChuck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimpleVoxelActor_UpdateVoxelChuck_Statics
	{
		struct SimpleVoxelActor_eventUpdateVoxelChuck_Parms
		{
			bool Force;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Force_MetaData[];
#endif
		static void NewProp_Force_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Force;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_UpdateVoxelChuck_Statics::NewProp_Force_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ASimpleVoxelActor_UpdateVoxelChuck_Statics::NewProp_Force_SetBit(void* Obj)
	{
		((SimpleVoxelActor_eventUpdateVoxelChuck_Parms*)Obj)->Force = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_UpdateVoxelChuck_Statics::NewProp_Force = { "Force", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleVoxelActor_eventUpdateVoxelChuck_Parms), &Z_Construct_UFunction_ASimpleVoxelActor_UpdateVoxelChuck_Statics::NewProp_Force_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_UpdateVoxelChuck_Statics::NewProp_Force_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_UpdateVoxelChuck_Statics::NewProp_Force_MetaData)) };
	void Z_Construct_UFunction_ASimpleVoxelActor_UpdateVoxelChuck_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleVoxelActor_eventUpdateVoxelChuck_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_UpdateVoxelChuck_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleVoxelActor_eventUpdateVoxelChuck_Parms), &Z_Construct_UFunction_ASimpleVoxelActor_UpdateVoxelChuck_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimpleVoxelActor_UpdateVoxelChuck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_UpdateVoxelChuck_Statics::NewProp_Force,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_UpdateVoxelChuck_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_UpdateVoxelChuck_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleVoxel | Chuck Manupulation" },
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleVoxelActor_UpdateVoxelChuck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimpleVoxelActor, nullptr, "UpdateVoxelChuck", nullptr, nullptr, sizeof(SimpleVoxelActor_eventUpdateVoxelChuck_Parms), Z_Construct_UFunction_ASimpleVoxelActor_UpdateVoxelChuck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_UpdateVoxelChuck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_UpdateVoxelChuck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_UpdateVoxelChuck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimpleVoxelActor_UpdateVoxelChuck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimpleVoxelActor_UpdateVoxelChuck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimpleVoxelActor_UpdateVoxels_Statics
	{
		struct SimpleVoxelActor_eventUpdateVoxels_Parms
		{
			TArray<FIntVector> GlobalLocation;
			FColor CustomData;
			bool AddToRenderQueue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GlobalLocation_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GlobalLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomData;
		static void NewProp_AddToRenderQueue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AddToRenderQueue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_UpdateVoxels_Statics::NewProp_GlobalLocation_Inner = { "GlobalLocation", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_UpdateVoxels_Statics::NewProp_GlobalLocation = { "GlobalLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventUpdateVoxels_Parms, GlobalLocation), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_UpdateVoxels_Statics::NewProp_CustomData = { "CustomData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventUpdateVoxels_Parms, CustomData), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASimpleVoxelActor_UpdateVoxels_Statics::NewProp_AddToRenderQueue_SetBit(void* Obj)
	{
		((SimpleVoxelActor_eventUpdateVoxels_Parms*)Obj)->AddToRenderQueue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_UpdateVoxels_Statics::NewProp_AddToRenderQueue = { "AddToRenderQueue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleVoxelActor_eventUpdateVoxels_Parms), &Z_Construct_UFunction_ASimpleVoxelActor_UpdateVoxels_Statics::NewProp_AddToRenderQueue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimpleVoxelActor_UpdateVoxels_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_UpdateVoxels_Statics::NewProp_GlobalLocation_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_UpdateVoxels_Statics::NewProp_GlobalLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_UpdateVoxels_Statics::NewProp_CustomData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_UpdateVoxels_Statics::NewProp_AddToRenderQueue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_UpdateVoxels_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleVoxel | Voxel" },
		{ "CPP_Default_AddToRenderQueue", "true" },
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleVoxelActor_UpdateVoxels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimpleVoxelActor, nullptr, "UpdateVoxels", nullptr, nullptr, sizeof(SimpleVoxelActor_eventUpdateVoxels_Parms), Z_Construct_UFunction_ASimpleVoxelActor_UpdateVoxels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_UpdateVoxels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_UpdateVoxels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_UpdateVoxels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimpleVoxelActor_UpdateVoxels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimpleVoxelActor_UpdateVoxels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimpleVoxelActor_UpdateVoxelsLocal_Statics
	{
		struct SimpleVoxelActor_eventUpdateVoxelsLocal_Parms
		{
			TArray<FIntVector> VoxelsLocation;
			FIntVector ChuckLocation;
			FColor CustomData;
			bool AddToRenderQueue;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VoxelsLocation_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VoxelsLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChuckLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomData;
		static void NewProp_AddToRenderQueue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AddToRenderQueue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_UpdateVoxelsLocal_Statics::NewProp_VoxelsLocation_Inner = { "VoxelsLocation", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_UpdateVoxelsLocal_Statics::NewProp_VoxelsLocation = { "VoxelsLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventUpdateVoxelsLocal_Parms, VoxelsLocation), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_UpdateVoxelsLocal_Statics::NewProp_ChuckLocation = { "ChuckLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventUpdateVoxelsLocal_Parms, ChuckLocation), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_UpdateVoxelsLocal_Statics::NewProp_CustomData = { "CustomData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventUpdateVoxelsLocal_Parms, CustomData), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASimpleVoxelActor_UpdateVoxelsLocal_Statics::NewProp_AddToRenderQueue_SetBit(void* Obj)
	{
		((SimpleVoxelActor_eventUpdateVoxelsLocal_Parms*)Obj)->AddToRenderQueue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_UpdateVoxelsLocal_Statics::NewProp_AddToRenderQueue = { "AddToRenderQueue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleVoxelActor_eventUpdateVoxelsLocal_Parms), &Z_Construct_UFunction_ASimpleVoxelActor_UpdateVoxelsLocal_Statics::NewProp_AddToRenderQueue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASimpleVoxelActor_UpdateVoxelsLocal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleVoxelActor_eventUpdateVoxelsLocal_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_UpdateVoxelsLocal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleVoxelActor_eventUpdateVoxelsLocal_Parms), &Z_Construct_UFunction_ASimpleVoxelActor_UpdateVoxelsLocal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimpleVoxelActor_UpdateVoxelsLocal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_UpdateVoxelsLocal_Statics::NewProp_VoxelsLocation_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_UpdateVoxelsLocal_Statics::NewProp_VoxelsLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_UpdateVoxelsLocal_Statics::NewProp_ChuckLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_UpdateVoxelsLocal_Statics::NewProp_CustomData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_UpdateVoxelsLocal_Statics::NewProp_AddToRenderQueue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_UpdateVoxelsLocal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_UpdateVoxelsLocal_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleVoxel | Voxel" },
		{ "CPP_Default_AddToRenderQueue", "true" },
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleVoxelActor_UpdateVoxelsLocal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimpleVoxelActor, nullptr, "UpdateVoxelsLocal", nullptr, nullptr, sizeof(SimpleVoxelActor_eventUpdateVoxelsLocal_Parms), Z_Construct_UFunction_ASimpleVoxelActor_UpdateVoxelsLocal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_UpdateVoxelsLocal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_UpdateVoxelsLocal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_UpdateVoxelsLocal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimpleVoxelActor_UpdateVoxelsLocal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimpleVoxelActor_UpdateVoxelsLocal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimpleVoxelActor_VoxelDirectionTrace_Statics
	{
		struct SimpleVoxelActor_eventVoxelDirectionTrace_Parms
		{
			FIntVector StartLocation;
			FIntVector Direction;
			int32 LoopTime;
			FVoxelData Result;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoopTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LoopTime;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Result;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_VoxelDirectionTrace_Statics::NewProp_StartLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_VoxelDirectionTrace_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventVoxelDirectionTrace_Parms, StartLocation), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_VoxelDirectionTrace_Statics::NewProp_StartLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_VoxelDirectionTrace_Statics::NewProp_StartLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_VoxelDirectionTrace_Statics::NewProp_Direction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_VoxelDirectionTrace_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventVoxelDirectionTrace_Parms, Direction), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_VoxelDirectionTrace_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_VoxelDirectionTrace_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_VoxelDirectionTrace_Statics::NewProp_LoopTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_VoxelDirectionTrace_Statics::NewProp_LoopTime = { "LoopTime", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventVoxelDirectionTrace_Parms, LoopTime), METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_VoxelDirectionTrace_Statics::NewProp_LoopTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_VoxelDirectionTrace_Statics::NewProp_LoopTime_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_VoxelDirectionTrace_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelActor_eventVoxelDirectionTrace_Parms, Result), Z_Construct_UScriptStruct_FVoxelData, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASimpleVoxelActor_VoxelDirectionTrace_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleVoxelActor_eventVoxelDirectionTrace_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASimpleVoxelActor_VoxelDirectionTrace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleVoxelActor_eventVoxelDirectionTrace_Parms), &Z_Construct_UFunction_ASimpleVoxelActor_VoxelDirectionTrace_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimpleVoxelActor_VoxelDirectionTrace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_VoxelDirectionTrace_Statics::NewProp_StartLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_VoxelDirectionTrace_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_VoxelDirectionTrace_Statics::NewProp_LoopTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_VoxelDirectionTrace_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelActor_VoxelDirectionTrace_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelActor_VoxelDirectionTrace_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleVoxel | Data Collector" },
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleVoxelActor_VoxelDirectionTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimpleVoxelActor, nullptr, "VoxelDirectionTrace", nullptr, nullptr, sizeof(SimpleVoxelActor_eventVoxelDirectionTrace_Parms), Z_Construct_UFunction_ASimpleVoxelActor_VoxelDirectionTrace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_VoxelDirectionTrace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelActor_VoxelDirectionTrace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelActor_VoxelDirectionTrace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimpleVoxelActor_VoxelDirectionTrace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimpleVoxelActor_VoxelDirectionTrace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASimpleVoxelActor_NoRegister()
	{
		return ASimpleVoxelActor::StaticClass();
	}
	struct Z_Construct_UClass_ASimpleVoxelActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChuckRender_MetaData[];
#endif
		static void NewProp_ChuckRender_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ChuckRender;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreateCollision_MetaData[];
#endif
		static void NewProp_CreateCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CreateCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoxelScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VoxelScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxVoxelPerChuckAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxVoxelPerChuckAmount;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VoxelMaterial_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoxelMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VoxelMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LiquidMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LiquidMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnChuckClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SpawnChuckClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CacheChuckDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CacheChuckDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CacheVoxelDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CacheVoxelDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CacheMaxVoxelIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CacheMaxVoxelIndex;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChuckData_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChuckData_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChuckData_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ChuckData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActiveChuckList_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActiveChuckList_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveChuckList_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ActiveChuckList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DirtyVoxelChuckList_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirtyVoxelChuckList_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_DirtyVoxelChuckList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DirtyFluidChuckList_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirtyFluidChuckList_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_DirtyFluidChuckList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DirtyFluidList_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirtyFluidList_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_DirtyFluidList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateVoxelNextFrame_MetaData[];
#endif
		static void NewProp_UpdateVoxelNextFrame_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UpdateVoxelNextFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateFluidNextFrame_MetaData[];
#endif
		static void NewProp_UpdateFluidNextFrame_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UpdateFluidNextFrame;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameThreadJobQueue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameThreadJobQueue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GameThreadJobQueue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawningChuckLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawningChuckLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASimpleVoxelActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleVoxelV2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASimpleVoxelActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASimpleVoxelActor_ActiveChuck, "ActiveChuck" }, // 116812295
		{ &Z_Construct_UFunction_ASimpleVoxelActor_ActiveChuckInScene, "ActiveChuckInScene" }, // 3085043961
		{ &Z_Construct_UFunction_ASimpleVoxelActor_AddDirtyFluidChuck, "AddDirtyFluidChuck" }, // 891399476
		{ &Z_Construct_UFunction_ASimpleVoxelActor_AddDirtyVoxelChuck, "AddDirtyVoxelChuck" }, // 2399215149
		{ &Z_Construct_UFunction_ASimpleVoxelActor_CallGameThreadJob, "CallGameThreadJob" }, // 2944326787
		{ &Z_Construct_UFunction_ASimpleVoxelActor_CompleteAllUpdate, "CompleteAllUpdate" }, // 1802022730
		{ &Z_Construct_UFunction_ASimpleVoxelActor_DeactiveChuck, "DeactiveChuck" }, // 2934373187
		{ &Z_Construct_UFunction_ASimpleVoxelActor_DecrementFluidThreadCounter, "DecrementFluidThreadCounter" }, // 1753642580
		{ &Z_Construct_UFunction_ASimpleVoxelActor_DecrementVoxelThreadCounter, "DecrementVoxelThreadCounter" }, // 2792433458
		{ &Z_Construct_UFunction_ASimpleVoxelActor_FillChuckWithVoxel, "FillChuckWithVoxel" }, // 4289006408
		{ &Z_Construct_UFunction_ASimpleVoxelActor_FindChuckByGlobal, "FindChuckByGlobal" }, // 2728363051
		{ &Z_Construct_UFunction_ASimpleVoxelActor_FluidDirectionTrace, "FluidDirectionTrace" }, // 3134858168
		{ &Z_Construct_UFunction_ASimpleVoxelActor_FluidSimStep, "FluidSimStep" }, // 4208109632
		{ &Z_Construct_UFunction_ASimpleVoxelActor_FluidSimStepThread, "FluidSimStepThread" }, // 2007003400
		{ &Z_Construct_UFunction_ASimpleVoxelActor_FluidSimStepThreadDone, "FluidSimStepThreadDone" }, // 1697699649
		{ &Z_Construct_UFunction_ASimpleVoxelActor_GetFluidData, "GetFluidData" }, // 709266436
		{ &Z_Construct_UFunction_ASimpleVoxelActor_GetSaveData, "GetSaveData" }, // 4044867181
		{ &Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelAreaMask, "GetVoxelAreaMask" }, // 3673864731
		{ &Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelBoxMask, "GetVoxelBoxMask" }, // 309994014
		{ &Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelData, "GetVoxelData" }, // 215984964
		{ &Z_Construct_UFunction_ASimpleVoxelActor_GetVoxelSphereMask, "GetVoxelSphereMask" }, // 3181760113
		{ &Z_Construct_UFunction_ASimpleVoxelActor_GlobalToIndex, "GlobalToIndex" }, // 2558135048
		{ &Z_Construct_UFunction_ASimpleVoxelActor_GlobalToLocal, "GlobalToLocal" }, // 3370468454
		{ &Z_Construct_UFunction_ASimpleVoxelActor_HasChuckInitialized, "HasChuckInitialized" }, // 65491239
		{ &Z_Construct_UFunction_ASimpleVoxelActor_IncrementFluidThreadCounter, "IncrementFluidThreadCounter" }, // 2194801864
		{ &Z_Construct_UFunction_ASimpleVoxelActor_IncrementVoxelThreadCounter, "IncrementVoxelThreadCounter" }, // 3507803189
		{ &Z_Construct_UFunction_ASimpleVoxelActor_IndexToGlobal, "IndexToGlobal" }, // 4237209693
		{ &Z_Construct_UFunction_ASimpleVoxelActor_IndexToLocal, "IndexToLocal" }, // 3349412334
		{ &Z_Construct_UFunction_ASimpleVoxelActor_InitializeChuck, "InitializeChuck" }, // 1084950257
		{ &Z_Construct_UFunction_ASimpleVoxelActor_InitializeChuck_Implementation, "InitializeChuck_Implementation" }, // 3023985061
		{ &Z_Construct_UFunction_ASimpleVoxelActor_IsChuckActive, "IsChuckActive" }, // 2668272802
		{ &Z_Construct_UFunction_ASimpleVoxelActor_IsFluidVisible, "IsFluidVisible" }, // 3210305455
		{ &Z_Construct_UFunction_ASimpleVoxelActor_IsVoxelVisible, "IsVoxelVisible" }, // 1720643240
		{ &Z_Construct_UFunction_ASimpleVoxelActor_LoadSaveData, "LoadSaveData" }, // 2736334822
		{ &Z_Construct_UFunction_ASimpleVoxelActor_LocalToGlobal, "LocalToGlobal" }, // 393457834
		{ &Z_Construct_UFunction_ASimpleVoxelActor_LocalToIndex, "LocalToIndex" }, // 2554089602
		{ &Z_Construct_UFunction_ASimpleVoxelActor_Reset, "Reset" }, // 2778392113
		{ &Z_Construct_UFunction_ASimpleVoxelActor_SetFluid, "SetFluid" }, // 275732807
		{ &Z_Construct_UFunction_ASimpleVoxelActor_SetFluidLocal, "SetFluidLocal" }, // 765266962
		{ &Z_Construct_UFunction_ASimpleVoxelActor_SetVoxel, "SetVoxel" }, // 2751109861
		{ &Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelArea, "SetVoxelArea" }, // 662613649
		{ &Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelAreaLocal, "SetVoxelAreaLocal" }, // 958656801
		{ &Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelLocal, "SetVoxelLocal" }, // 4189905728
		{ &Z_Construct_UFunction_ASimpleVoxelActor_SetVoxels, "SetVoxels" }, // 4229682349
		{ &Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelsLocal, "SetVoxelsLocal" }, // 2695746517
		{ &Z_Construct_UFunction_ASimpleVoxelActor_SetVoxelsLocalByHeightMap, "SetVoxelsLocalByHeightMap" }, // 1760395806
		{ &Z_Construct_UFunction_ASimpleVoxelActor_UpdateFluidChuck, "UpdateFluidChuck" }, // 907084428
		{ &Z_Construct_UFunction_ASimpleVoxelActor_UpdateVoxelChuck, "UpdateVoxelChuck" }, // 2941785922
		{ &Z_Construct_UFunction_ASimpleVoxelActor_UpdateVoxels, "UpdateVoxels" }, // 3343697101
		{ &Z_Construct_UFunction_ASimpleVoxelActor_UpdateVoxelsLocal, "UpdateVoxelsLocal" }, // 2937637026
		{ &Z_Construct_UFunction_ASimpleVoxelActor_VoxelDirectionTrace, "VoxelDirectionTrace" }, // 2529925015
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimpleVoxelActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SimpleVoxelActor.h" },
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_ChuckRender_MetaData[] = {
		{ "Category", "SimpleVoxel | Setting" },
		{ "Comment", "////Setting////\n" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
		{ "ToolTip", "/Setting/" },
	};
#endif
	void Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_ChuckRender_SetBit(void* Obj)
	{
		((ASimpleVoxelActor*)Obj)->ChuckRender = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_ChuckRender = { "ChuckRender", nullptr, (EPropertyFlags)0x0011000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASimpleVoxelActor), &Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_ChuckRender_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_ChuckRender_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_ChuckRender_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_CreateCollision_MetaData[] = {
		{ "Category", "SimpleVoxel | Setting" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	void Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_CreateCollision_SetBit(void* Obj)
	{
		((ASimpleVoxelActor*)Obj)->CreateCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_CreateCollision = { "CreateCollision", nullptr, (EPropertyFlags)0x0011000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASimpleVoxelActor), &Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_CreateCollision_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_CreateCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_CreateCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_VoxelScale_MetaData[] = {
		{ "Category", "SimpleVoxel | Setting" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_VoxelScale = { "VoxelScale", nullptr, (EPropertyFlags)0x0011000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASimpleVoxelActor, VoxelScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_VoxelScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_VoxelScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_MaxVoxelPerChuckAmount_MetaData[] = {
		{ "Category", "SimpleVoxel | Setting" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_MaxVoxelPerChuckAmount = { "MaxVoxelPerChuckAmount", nullptr, (EPropertyFlags)0x0011000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASimpleVoxelActor, MaxVoxelPerChuckAmount), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_MaxVoxelPerChuckAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_MaxVoxelPerChuckAmount_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_VoxelMaterial_Inner = { "VoxelMaterial", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_VoxelMaterial_MetaData[] = {
		{ "Category", "SimpleVoxel | Setting" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_VoxelMaterial = { "VoxelMaterial", nullptr, (EPropertyFlags)0x0011000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASimpleVoxelActor, VoxelMaterial), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_VoxelMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_VoxelMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_LiquidMaterial_MetaData[] = {
		{ "Category", "SimpleVoxel | Setting" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_LiquidMaterial = { "LiquidMaterial", nullptr, (EPropertyFlags)0x0011000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASimpleVoxelActor, LiquidMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_LiquidMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_LiquidMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_SpawnChuckClass_MetaData[] = {
		{ "Category", "SimpleVoxel | Setting" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_SpawnChuckClass = { "SpawnChuckClass", nullptr, (EPropertyFlags)0x0015000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASimpleVoxelActor, SpawnChuckClass), Z_Construct_UClass_ASimpleVoxelChuck_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_SpawnChuckClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_SpawnChuckClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_CacheChuckDistance_MetaData[] = {
		{ "Category", "SimpleVoxel | Cache" },
		{ "Comment", "////Cache////\n" },
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
		{ "ToolTip", "/Cache/" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_CacheChuckDistance = { "CacheChuckDistance", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASimpleVoxelActor, CacheChuckDistance), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_CacheChuckDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_CacheChuckDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_CacheVoxelDistance_MetaData[] = {
		{ "Category", "SimpleVoxel | Cache" },
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_CacheVoxelDistance = { "CacheVoxelDistance", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASimpleVoxelActor, CacheVoxelDistance), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_CacheVoxelDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_CacheVoxelDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_CacheMaxVoxelIndex_MetaData[] = {
		{ "Category", "SimpleVoxel | Cache" },
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_CacheMaxVoxelIndex = { "CacheMaxVoxelIndex", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASimpleVoxelActor, CacheMaxVoxelIndex), METADATA_PARAMS(Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_CacheMaxVoxelIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_CacheMaxVoxelIndex_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_ChuckData_ValueProp = { "ChuckData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FChuckData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_ChuckData_Key_KeyProp = { "ChuckData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_ChuckData_MetaData[] = {
		{ "Category", "SimpleVoxel | Data" },
		{ "Comment", "////Data////\n" },
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
		{ "ToolTip", "/Data/" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_ChuckData = { "ChuckData", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASimpleVoxelActor, ChuckData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_ChuckData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_ChuckData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_ActiveChuckList_ValueProp = { "ActiveChuckList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_ASimpleVoxelChuck_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_ActiveChuckList_Key_KeyProp = { "ActiveChuckList_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_ActiveChuckList_MetaData[] = {
		{ "Category", "SimpleVoxel | Running" },
		{ "Comment", "////Running////\n" },
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
		{ "ToolTip", "/Running/" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_ActiveChuckList = { "ActiveChuckList", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASimpleVoxelActor, ActiveChuckList), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_ActiveChuckList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_ActiveChuckList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_DirtyVoxelChuckList_ElementProp = { "DirtyVoxelChuckList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_DirtyVoxelChuckList_MetaData[] = {
		{ "Category", "SimpleVoxel | Running" },
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_DirtyVoxelChuckList = { "DirtyVoxelChuckList", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASimpleVoxelActor, DirtyVoxelChuckList), METADATA_PARAMS(Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_DirtyVoxelChuckList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_DirtyVoxelChuckList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_DirtyFluidChuckList_ElementProp = { "DirtyFluidChuckList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_DirtyFluidChuckList_MetaData[] = {
		{ "Category", "SimpleVoxel | Running" },
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_DirtyFluidChuckList = { "DirtyFluidChuckList", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASimpleVoxelActor, DirtyFluidChuckList), METADATA_PARAMS(Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_DirtyFluidChuckList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_DirtyFluidChuckList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_DirtyFluidList_ElementProp = { "DirtyFluidList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_DirtyFluidList_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_DirtyFluidList = { "DirtyFluidList", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASimpleVoxelActor, DirtyFluidList), METADATA_PARAMS(Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_DirtyFluidList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_DirtyFluidList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_UpdateVoxelNextFrame_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	void Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_UpdateVoxelNextFrame_SetBit(void* Obj)
	{
		((ASimpleVoxelActor*)Obj)->UpdateVoxelNextFrame = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_UpdateVoxelNextFrame = { "UpdateVoxelNextFrame", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASimpleVoxelActor), &Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_UpdateVoxelNextFrame_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_UpdateVoxelNextFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_UpdateVoxelNextFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_UpdateFluidNextFrame_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	void Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_UpdateFluidNextFrame_SetBit(void* Obj)
	{
		((ASimpleVoxelActor*)Obj)->UpdateFluidNextFrame = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_UpdateFluidNextFrame = { "UpdateFluidNextFrame", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASimpleVoxelActor), &Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_UpdateFluidNextFrame_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_UpdateFluidNextFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_UpdateFluidNextFrame_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_GameThreadJobQueue_Inner = { "GameThreadJobQueue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSingleThreadJobData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_GameThreadJobQueue_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_GameThreadJobQueue = { "GameThreadJobQueue", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASimpleVoxelActor, GameThreadJobQueue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_GameThreadJobQueue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_GameThreadJobQueue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_SpawningChuckLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleVoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_SpawningChuckLocation = { "SpawningChuckLocation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASimpleVoxelActor, SpawningChuckLocation), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_SpawningChuckLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_SpawningChuckLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASimpleVoxelActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_ChuckRender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_CreateCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_VoxelScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_MaxVoxelPerChuckAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_VoxelMaterial_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_VoxelMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_LiquidMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_SpawnChuckClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_CacheChuckDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_CacheVoxelDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_CacheMaxVoxelIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_ChuckData_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_ChuckData_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_ChuckData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_ActiveChuckList_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_ActiveChuckList_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_ActiveChuckList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_DirtyVoxelChuckList_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_DirtyVoxelChuckList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_DirtyFluidChuckList_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_DirtyFluidChuckList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_DirtyFluidList_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_DirtyFluidList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_UpdateVoxelNextFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_UpdateFluidNextFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_GameThreadJobQueue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_GameThreadJobQueue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleVoxelActor_Statics::NewProp_SpawningChuckLocation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASimpleVoxelActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASimpleVoxelActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASimpleVoxelActor_Statics::ClassParams = {
		&ASimpleVoxelActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASimpleVoxelActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASimpleVoxelActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASimpleVoxelActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASimpleVoxelActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASimpleVoxelActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASimpleVoxelActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASimpleVoxelActor, 334099963);
	template<> SIMPLEVOXELV2_API UClass* StaticClass<ASimpleVoxelActor>()
	{
		return ASimpleVoxelActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASimpleVoxelActor(Z_Construct_UClass_ASimpleVoxelActor, &ASimpleVoxelActor::StaticClass, TEXT("/Script/SimpleVoxelV2"), TEXT("ASimpleVoxelActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASimpleVoxelActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
