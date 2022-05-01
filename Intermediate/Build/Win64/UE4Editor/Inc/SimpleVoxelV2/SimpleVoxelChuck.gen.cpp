// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleVoxelV2/Public/SimpleVoxelChuck.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleVoxelChuck() {}
// Cross Module References
	SIMPLEVOXELV2_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelRenderData();
	UPackage* Z_Construct_UPackage__Script_SimpleVoxelV2();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	PROCEDURALMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FProcMeshTangent();
	SIMPLEVOXELV2_API UScriptStruct* Z_Construct_UScriptStruct_FGreddyMeshingData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	SIMPLEVOXELV2_API UClass* Z_Construct_UClass_ASimpleVoxelChuck_NoRegister();
	SIMPLEVOXELV2_API UClass* Z_Construct_UClass_ASimpleVoxelChuck();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	SIMPLEVOXELV2_API UScriptStruct* Z_Construct_UScriptStruct_FChuckData();
	SIMPLEVOXELV2_API UScriptStruct* Z_Construct_UScriptStruct_FFluidData();
	SIMPLEVOXELV2_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelData();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	SIMPLEVOXELV2_API UClass* Z_Construct_UClass_ASimpleVoxelActor_NoRegister();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
	SIMPLEVOXELV2_API UClass* Z_Construct_UClass_UDynTexture_NoRegister();
// End Cross Module References
class UScriptStruct* FVoxelRenderData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SIMPLEVOXELV2_API uint32 Get_Z_Construct_UScriptStruct_FVoxelRenderData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelRenderData, Z_Construct_UPackage__Script_SimpleVoxelV2(), TEXT("VoxelRenderData"), sizeof(FVoxelRenderData), Get_Z_Construct_UScriptStruct_FVoxelRenderData_Hash());
	}
	return Singleton;
}
template<> SIMPLEVOXELV2_API UScriptStruct* StaticStruct<FVoxelRenderData>()
{
	return FVoxelRenderData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelRenderData(FVoxelRenderData::StaticStruct, TEXT("/Script/SimpleVoxelV2"), TEXT("VoxelRenderData"), false, nullptr, nullptr);
static struct FScriptStruct_SimpleVoxelV2_StaticRegisterNativesFVoxelRenderData
{
	FScriptStruct_SimpleVoxelV2_StaticRegisterNativesFVoxelRenderData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelRenderData")),new UScriptStruct::TCppStructOps<FVoxelRenderData>);
	}
} ScriptStruct_SimpleVoxelV2_StaticRegisterNativesFVoxelRenderData;
	struct Z_Construct_UScriptStruct_FVoxelRenderData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Vertices;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Triangles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Triangles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Triangles;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normals_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Normals_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Normals;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UV0_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UV0_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UV0;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UV1_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UV1_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UV1;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UV2_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UV2_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UV2;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UV3_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UV3_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UV3;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexColors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexColors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VertexColors;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tangents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tangents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tangents;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelRenderData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SimpleVoxelChuck.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelRenderData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelRenderData>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelRenderData_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelRenderData_Statics::NewProp_Vertices_MetaData[] = {
		{ "Category", "VoxelRenderData | Variable" },
		{ "ModuleRelativePath", "Public/SimpleVoxelChuck.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVoxelRenderData_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelRenderData, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelRenderData_Statics::NewProp_Vertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelRenderData_Statics::NewProp_Vertices_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FVoxelRenderData_Statics::NewProp_Triangles_Inner = { "Triangles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelRenderData_Statics::NewProp_Triangles_MetaData[] = {
		{ "Category", "VoxelRenderData | Variable" },
		{ "ModuleRelativePath", "Public/SimpleVoxelChuck.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVoxelRenderData_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelRenderData, Triangles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelRenderData_Statics::NewProp_Triangles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelRenderData_Statics::NewProp_Triangles_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelRenderData_Statics::NewProp_Normals_Inner = { "Normals", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelRenderData_Statics::NewProp_Normals_MetaData[] = {
		{ "Category", "VoxelRenderData | Variable" },
		{ "ModuleRelativePath", "Public/SimpleVoxelChuck.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVoxelRenderData_Statics::NewProp_Normals = { "Normals", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelRenderData, Normals), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelRenderData_Statics::NewProp_Normals_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelRenderData_Statics::NewProp_Normals_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelRenderData_Statics::NewProp_UV0_Inner = { "UV0", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelRenderData_Statics::NewProp_UV0_MetaData[] = {
		{ "Category", "VoxelRenderData | Variable" },
		{ "ModuleRelativePath", "Public/SimpleVoxelChuck.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVoxelRenderData_Statics::NewProp_UV0 = { "UV0", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelRenderData, UV0), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelRenderData_Statics::NewProp_UV0_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelRenderData_Statics::NewProp_UV0_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelRenderData_Statics::NewProp_UV1_Inner = { "UV1", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelRenderData_Statics::NewProp_UV1_MetaData[] = {
		{ "Category", "VoxelRenderData | Variable" },
		{ "ModuleRelativePath", "Public/SimpleVoxelChuck.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVoxelRenderData_Statics::NewProp_UV1 = { "UV1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelRenderData, UV1), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelRenderData_Statics::NewProp_UV1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelRenderData_Statics::NewProp_UV1_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelRenderData_Statics::NewProp_UV2_Inner = { "UV2", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelRenderData_Statics::NewProp_UV2_MetaData[] = {
		{ "Category", "VoxelRenderData | Variable" },
		{ "ModuleRelativePath", "Public/SimpleVoxelChuck.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVoxelRenderData_Statics::NewProp_UV2 = { "UV2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelRenderData, UV2), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelRenderData_Statics::NewProp_UV2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelRenderData_Statics::NewProp_UV2_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelRenderData_Statics::NewProp_UV3_Inner = { "UV3", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelRenderData_Statics::NewProp_UV3_MetaData[] = {
		{ "Category", "VoxelRenderData | Variable" },
		{ "ModuleRelativePath", "Public/SimpleVoxelChuck.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVoxelRenderData_Statics::NewProp_UV3 = { "UV3", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelRenderData, UV3), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelRenderData_Statics::NewProp_UV3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelRenderData_Statics::NewProp_UV3_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelRenderData_Statics::NewProp_VertexColors_Inner = { "VertexColors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelRenderData_Statics::NewProp_VertexColors_MetaData[] = {
		{ "Category", "VoxelRenderData | Variable" },
		{ "ModuleRelativePath", "Public/SimpleVoxelChuck.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVoxelRenderData_Statics::NewProp_VertexColors = { "VertexColors", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelRenderData, VertexColors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelRenderData_Statics::NewProp_VertexColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelRenderData_Statics::NewProp_VertexColors_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelRenderData_Statics::NewProp_Tangents_Inner = { "Tangents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FProcMeshTangent, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelRenderData_Statics::NewProp_Tangents_MetaData[] = {
		{ "Category", "VoxelRenderData | Variable" },
		{ "ModuleRelativePath", "Public/SimpleVoxelChuck.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVoxelRenderData_Statics::NewProp_Tangents = { "Tangents", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelRenderData, Tangents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelRenderData_Statics::NewProp_Tangents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelRenderData_Statics::NewProp_Tangents_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelRenderData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelRenderData_Statics::NewProp_Vertices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelRenderData_Statics::NewProp_Vertices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelRenderData_Statics::NewProp_Triangles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelRenderData_Statics::NewProp_Triangles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelRenderData_Statics::NewProp_Normals_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelRenderData_Statics::NewProp_Normals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelRenderData_Statics::NewProp_UV0_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelRenderData_Statics::NewProp_UV0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelRenderData_Statics::NewProp_UV1_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelRenderData_Statics::NewProp_UV1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelRenderData_Statics::NewProp_UV2_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelRenderData_Statics::NewProp_UV2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelRenderData_Statics::NewProp_UV3_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelRenderData_Statics::NewProp_UV3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelRenderData_Statics::NewProp_VertexColors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelRenderData_Statics::NewProp_VertexColors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelRenderData_Statics::NewProp_Tangents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelRenderData_Statics::NewProp_Tangents,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelRenderData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleVoxelV2,
		nullptr,
		&NewStructOps,
		"VoxelRenderData",
		sizeof(FVoxelRenderData),
		alignof(FVoxelRenderData),
		Z_Construct_UScriptStruct_FVoxelRenderData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelRenderData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelRenderData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelRenderData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelRenderData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelRenderData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SimpleVoxelV2();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelRenderData"), sizeof(FVoxelRenderData), Get_Z_Construct_UScriptStruct_FVoxelRenderData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelRenderData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelRenderData_Hash() { return 4024789387U; }
class UScriptStruct* FGreddyMeshingData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SIMPLEVOXELV2_API uint32 Get_Z_Construct_UScriptStruct_FGreddyMeshingData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGreddyMeshingData, Z_Construct_UPackage__Script_SimpleVoxelV2(), TEXT("GreddyMeshingData"), sizeof(FGreddyMeshingData), Get_Z_Construct_UScriptStruct_FGreddyMeshingData_Hash());
	}
	return Singleton;
}
template<> SIMPLEVOXELV2_API UScriptStruct* StaticStruct<FGreddyMeshingData>()
{
	return FGreddyMeshingData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGreddyMeshingData(FGreddyMeshingData::StaticStruct, TEXT("/Script/SimpleVoxelV2"), TEXT("GreddyMeshingData"), false, nullptr, nullptr);
static struct FScriptStruct_SimpleVoxelV2_StaticRegisterNativesFGreddyMeshingData
{
	FScriptStruct_SimpleVoxelV2_StaticRegisterNativesFGreddyMeshingData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GreddyMeshingData")),new UScriptStruct::TCppStructOps<FGreddyMeshingData>);
	}
} ScriptStruct_SimpleVoxelV2_StaticRegisterNativesFGreddyMeshingData;
	struct Z_Construct_UScriptStruct_FGreddyMeshingData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Start;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Forward_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_Forward;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Right_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_Right;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Material;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGreddyMeshingData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleVoxelChuck.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGreddyMeshingData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGreddyMeshingData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGreddyMeshingData_Statics::NewProp_Start_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleVoxelChuck.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGreddyMeshingData_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGreddyMeshingData, Start), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FGreddyMeshingData_Statics::NewProp_Start_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGreddyMeshingData_Statics::NewProp_Start_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGreddyMeshingData_Statics::NewProp_Forward_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleVoxelChuck.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FGreddyMeshingData_Statics::NewProp_Forward = { "Forward", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGreddyMeshingData, Forward), METADATA_PARAMS(Z_Construct_UScriptStruct_FGreddyMeshingData_Statics::NewProp_Forward_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGreddyMeshingData_Statics::NewProp_Forward_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGreddyMeshingData_Statics::NewProp_Right_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleVoxelChuck.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FGreddyMeshingData_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGreddyMeshingData, Right), METADATA_PARAMS(Z_Construct_UScriptStruct_FGreddyMeshingData_Statics::NewProp_Right_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGreddyMeshingData_Statics::NewProp_Right_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGreddyMeshingData_Statics::NewProp_Material_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleVoxelChuck.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGreddyMeshingData_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGreddyMeshingData, Material), METADATA_PARAMS(Z_Construct_UScriptStruct_FGreddyMeshingData_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGreddyMeshingData_Statics::NewProp_Material_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGreddyMeshingData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGreddyMeshingData_Statics::NewProp_Start,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGreddyMeshingData_Statics::NewProp_Forward,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGreddyMeshingData_Statics::NewProp_Right,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGreddyMeshingData_Statics::NewProp_Material,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGreddyMeshingData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleVoxelV2,
		nullptr,
		&NewStructOps,
		"GreddyMeshingData",
		sizeof(FGreddyMeshingData),
		alignof(FGreddyMeshingData),
		Z_Construct_UScriptStruct_FGreddyMeshingData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGreddyMeshingData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGreddyMeshingData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGreddyMeshingData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGreddyMeshingData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGreddyMeshingData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SimpleVoxelV2();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GreddyMeshingData"), sizeof(FGreddyMeshingData), Get_Z_Construct_UScriptStruct_FGreddyMeshingData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGreddyMeshingData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGreddyMeshingData_Hash() { return 2068736587U; }
	DEFINE_FUNCTION(ASimpleVoxelChuck::execRenderFluidMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RenderFluidMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimpleVoxelChuck::execRenderVoxelMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RenderVoxelMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimpleVoxelChuck::execCreateFluidRenderDataGMDone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateFluidRenderDataGMDone();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimpleVoxelChuck::execCreateFluidRenderDataGM)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateFluidRenderDataGM();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimpleVoxelChuck::execCreateVoxelRenderDataGMDone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateVoxelRenderDataGMDone();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimpleVoxelChuck::execCreateVoxelRenderDataGM)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateVoxelRenderDataGM();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimpleVoxelChuck::execUpdateImage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateImage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimpleVoxelChuck::execSetupVoxelChuck)
	{
		P_GET_TARRAY_REF(UMaterialInterface*,Z_Param_Out_VoxelMat);
		P_GET_OBJECT(UMaterialInterface,Z_Param_FluidMat);
		P_GET_STRUCT(FIntVector,Z_Param_ChuckLoc);
		P_GET_STRUCT(FIntVector,Z_Param_ChuckSize);
		P_GET_OBJECT(ASimpleVoxelActor,Z_Param_Controller);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupVoxelChuck(Z_Param_Out_VoxelMat,Z_Param_FluidMat,Z_Param_ChuckLoc,Z_Param_ChuckSize,Z_Param_Controller);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimpleVoxelChuck::execGetChuckData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FChuckData*)Z_Param__Result=P_THIS->GetChuckData();
		P_NATIVE_END;
	}
	static FName NAME_ASimpleVoxelChuck_OnFluidRenderUpdate = FName(TEXT("OnFluidRenderUpdate"));
	void ASimpleVoxelChuck::OnFluidRenderUpdate(TArray<FFluidData> const& Add, TArray<FFluidData> const& Remove)
	{
		SimpleVoxelChuck_eventOnFluidRenderUpdate_Parms Parms;
		Parms.Add=Add;
		Parms.Remove=Remove;
		ProcessEvent(FindFunctionChecked(NAME_ASimpleVoxelChuck_OnFluidRenderUpdate),&Parms);
	}
	static FName NAME_ASimpleVoxelChuck_OnVoxelRenderUpdate = FName(TEXT("OnVoxelRenderUpdate"));
	void ASimpleVoxelChuck::OnVoxelRenderUpdate(TArray<FVoxelData> const& Add, TArray<FVoxelData> const& Remove)
	{
		SimpleVoxelChuck_eventOnVoxelRenderUpdate_Parms Parms;
		Parms.Add=Add;
		Parms.Remove=Remove;
		ProcessEvent(FindFunctionChecked(NAME_ASimpleVoxelChuck_OnVoxelRenderUpdate),&Parms);
	}
	void ASimpleVoxelChuck::StaticRegisterNativesASimpleVoxelChuck()
	{
		UClass* Class = ASimpleVoxelChuck::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateFluidRenderDataGM", &ASimpleVoxelChuck::execCreateFluidRenderDataGM },
			{ "CreateFluidRenderDataGMDone", &ASimpleVoxelChuck::execCreateFluidRenderDataGMDone },
			{ "CreateVoxelRenderDataGM", &ASimpleVoxelChuck::execCreateVoxelRenderDataGM },
			{ "CreateVoxelRenderDataGMDone", &ASimpleVoxelChuck::execCreateVoxelRenderDataGMDone },
			{ "GetChuckData", &ASimpleVoxelChuck::execGetChuckData },
			{ "RenderFluidMesh", &ASimpleVoxelChuck::execRenderFluidMesh },
			{ "RenderVoxelMesh", &ASimpleVoxelChuck::execRenderVoxelMesh },
			{ "SetupVoxelChuck", &ASimpleVoxelChuck::execSetupVoxelChuck },
			{ "UpdateImage", &ASimpleVoxelChuck::execUpdateImage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASimpleVoxelChuck_CreateFluidRenderDataGM_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelChuck_CreateFluidRenderDataGM_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleVoxelChuck | Function" },
		{ "ModuleRelativePath", "Public/SimpleVoxelChuck.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleVoxelChuck_CreateFluidRenderDataGM_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimpleVoxelChuck, nullptr, "CreateFluidRenderDataGM", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelChuck_CreateFluidRenderDataGM_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelChuck_CreateFluidRenderDataGM_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimpleVoxelChuck_CreateFluidRenderDataGM()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimpleVoxelChuck_CreateFluidRenderDataGM_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimpleVoxelChuck_CreateFluidRenderDataGMDone_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelChuck_CreateFluidRenderDataGMDone_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//NEED Thread\n" },
		{ "ModuleRelativePath", "Public/SimpleVoxelChuck.h" },
		{ "ToolTip", "NEED Thread" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleVoxelChuck_CreateFluidRenderDataGMDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimpleVoxelChuck, nullptr, "CreateFluidRenderDataGMDone", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelChuck_CreateFluidRenderDataGMDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelChuck_CreateFluidRenderDataGMDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimpleVoxelChuck_CreateFluidRenderDataGMDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimpleVoxelChuck_CreateFluidRenderDataGMDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimpleVoxelChuck_CreateVoxelRenderDataGM_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelChuck_CreateVoxelRenderDataGM_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleVoxelChuck | Function" },
		{ "ModuleRelativePath", "Public/SimpleVoxelChuck.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleVoxelChuck_CreateVoxelRenderDataGM_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimpleVoxelChuck, nullptr, "CreateVoxelRenderDataGM", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelChuck_CreateVoxelRenderDataGM_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelChuck_CreateVoxelRenderDataGM_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimpleVoxelChuck_CreateVoxelRenderDataGM()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimpleVoxelChuck_CreateVoxelRenderDataGM_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimpleVoxelChuck_CreateVoxelRenderDataGMDone_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelChuck_CreateVoxelRenderDataGMDone_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//NEED Thread\n" },
		{ "ModuleRelativePath", "Public/SimpleVoxelChuck.h" },
		{ "ToolTip", "NEED Thread" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleVoxelChuck_CreateVoxelRenderDataGMDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimpleVoxelChuck, nullptr, "CreateVoxelRenderDataGMDone", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelChuck_CreateVoxelRenderDataGMDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelChuck_CreateVoxelRenderDataGMDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimpleVoxelChuck_CreateVoxelRenderDataGMDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimpleVoxelChuck_CreateVoxelRenderDataGMDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimpleVoxelChuck_GetChuckData_Statics
	{
		struct SimpleVoxelChuck_eventGetChuckData_Parms
		{
			FChuckData ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelChuck_GetChuckData_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelChuck_GetChuckData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelChuck_eventGetChuckData_Parms, ReturnValue), Z_Construct_UScriptStruct_FChuckData, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelChuck_GetChuckData_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelChuck_GetChuckData_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimpleVoxelChuck_GetChuckData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelChuck_GetChuckData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelChuck_GetChuckData_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleVoxelChuck | Function" },
		{ "Comment", "// Collector ////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Public/SimpleVoxelChuck.h" },
		{ "ToolTip", "Collector /" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleVoxelChuck_GetChuckData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimpleVoxelChuck, nullptr, "GetChuckData", nullptr, nullptr, sizeof(SimpleVoxelChuck_eventGetChuckData_Parms), Z_Construct_UFunction_ASimpleVoxelChuck_GetChuckData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelChuck_GetChuckData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelChuck_GetChuckData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelChuck_GetChuckData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimpleVoxelChuck_GetChuckData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimpleVoxelChuck_GetChuckData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimpleVoxelChuck_OnFluidRenderUpdate_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Add_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Add_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Add;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Remove_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Remove_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Remove;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelChuck_OnFluidRenderUpdate_Statics::NewProp_Add_Inner = { "Add", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFluidData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelChuck_OnFluidRenderUpdate_Statics::NewProp_Add_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASimpleVoxelChuck_OnFluidRenderUpdate_Statics::NewProp_Add = { "Add", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelChuck_eventOnFluidRenderUpdate_Parms, Add), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelChuck_OnFluidRenderUpdate_Statics::NewProp_Add_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelChuck_OnFluidRenderUpdate_Statics::NewProp_Add_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelChuck_OnFluidRenderUpdate_Statics::NewProp_Remove_Inner = { "Remove", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFluidData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelChuck_OnFluidRenderUpdate_Statics::NewProp_Remove_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASimpleVoxelChuck_OnFluidRenderUpdate_Statics::NewProp_Remove = { "Remove", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelChuck_eventOnFluidRenderUpdate_Parms, Remove), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelChuck_OnFluidRenderUpdate_Statics::NewProp_Remove_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelChuck_OnFluidRenderUpdate_Statics::NewProp_Remove_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimpleVoxelChuck_OnFluidRenderUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelChuck_OnFluidRenderUpdate_Statics::NewProp_Add_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelChuck_OnFluidRenderUpdate_Statics::NewProp_Add,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelChuck_OnFluidRenderUpdate_Statics::NewProp_Remove_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelChuck_OnFluidRenderUpdate_Statics::NewProp_Remove,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelChuck_OnFluidRenderUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleVoxelChuck | Event" },
		{ "ModuleRelativePath", "Public/SimpleVoxelChuck.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleVoxelChuck_OnFluidRenderUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimpleVoxelChuck, nullptr, "OnFluidRenderUpdate", nullptr, nullptr, sizeof(SimpleVoxelChuck_eventOnFluidRenderUpdate_Parms), Z_Construct_UFunction_ASimpleVoxelChuck_OnFluidRenderUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelChuck_OnFluidRenderUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelChuck_OnFluidRenderUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelChuck_OnFluidRenderUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimpleVoxelChuck_OnFluidRenderUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimpleVoxelChuck_OnFluidRenderUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimpleVoxelChuck_OnVoxelRenderUpdate_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Add_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Add_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Add;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Remove_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Remove_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Remove;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelChuck_OnVoxelRenderUpdate_Statics::NewProp_Add_Inner = { "Add", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVoxelData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelChuck_OnVoxelRenderUpdate_Statics::NewProp_Add_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASimpleVoxelChuck_OnVoxelRenderUpdate_Statics::NewProp_Add = { "Add", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelChuck_eventOnVoxelRenderUpdate_Parms, Add), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelChuck_OnVoxelRenderUpdate_Statics::NewProp_Add_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelChuck_OnVoxelRenderUpdate_Statics::NewProp_Add_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelChuck_OnVoxelRenderUpdate_Statics::NewProp_Remove_Inner = { "Remove", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVoxelData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelChuck_OnVoxelRenderUpdate_Statics::NewProp_Remove_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASimpleVoxelChuck_OnVoxelRenderUpdate_Statics::NewProp_Remove = { "Remove", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelChuck_eventOnVoxelRenderUpdate_Parms, Remove), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelChuck_OnVoxelRenderUpdate_Statics::NewProp_Remove_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelChuck_OnVoxelRenderUpdate_Statics::NewProp_Remove_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimpleVoxelChuck_OnVoxelRenderUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelChuck_OnVoxelRenderUpdate_Statics::NewProp_Add_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelChuck_OnVoxelRenderUpdate_Statics::NewProp_Add,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelChuck_OnVoxelRenderUpdate_Statics::NewProp_Remove_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelChuck_OnVoxelRenderUpdate_Statics::NewProp_Remove,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelChuck_OnVoxelRenderUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleVoxelChuck | Event" },
		{ "Comment", "//Events //////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Public/SimpleVoxelChuck.h" },
		{ "ToolTip", "Events" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleVoxelChuck_OnVoxelRenderUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimpleVoxelChuck, nullptr, "OnVoxelRenderUpdate", nullptr, nullptr, sizeof(SimpleVoxelChuck_eventOnVoxelRenderUpdate_Parms), Z_Construct_UFunction_ASimpleVoxelChuck_OnVoxelRenderUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelChuck_OnVoxelRenderUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelChuck_OnVoxelRenderUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelChuck_OnVoxelRenderUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimpleVoxelChuck_OnVoxelRenderUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimpleVoxelChuck_OnVoxelRenderUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimpleVoxelChuck_RenderFluidMesh_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelChuck_RenderFluidMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleVoxelChuck | Function" },
		{ "ModuleRelativePath", "Public/SimpleVoxelChuck.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleVoxelChuck_RenderFluidMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimpleVoxelChuck, nullptr, "RenderFluidMesh", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelChuck_RenderFluidMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelChuck_RenderFluidMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimpleVoxelChuck_RenderFluidMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimpleVoxelChuck_RenderFluidMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimpleVoxelChuck_RenderVoxelMesh_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelChuck_RenderVoxelMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleVoxelChuck | Function" },
		{ "Comment", "//Mesh Render//////////////////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Public/SimpleVoxelChuck.h" },
		{ "ToolTip", "Mesh Render" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleVoxelChuck_RenderVoxelMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimpleVoxelChuck, nullptr, "RenderVoxelMesh", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelChuck_RenderVoxelMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelChuck_RenderVoxelMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimpleVoxelChuck_RenderVoxelMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimpleVoxelChuck_RenderVoxelMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimpleVoxelChuck_SetupVoxelChuck_Statics
	{
		struct SimpleVoxelChuck_eventSetupVoxelChuck_Parms
		{
			TArray<UMaterialInterface*> VoxelMat;
			UMaterialInterface* FluidMat;
			FIntVector ChuckLoc;
			FIntVector ChuckSize;
			ASimpleVoxelActor* Controller;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VoxelMat_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VoxelMat;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FluidMat;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChuckLoc;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChuckSize;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASimpleVoxelChuck_SetupVoxelChuck_Statics::NewProp_VoxelMat_Inner = { "VoxelMat", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASimpleVoxelChuck_SetupVoxelChuck_Statics::NewProp_VoxelMat = { "VoxelMat", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelChuck_eventSetupVoxelChuck_Parms, VoxelMat), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASimpleVoxelChuck_SetupVoxelChuck_Statics::NewProp_FluidMat = { "FluidMat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelChuck_eventSetupVoxelChuck_Parms, FluidMat), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelChuck_SetupVoxelChuck_Statics::NewProp_ChuckLoc = { "ChuckLoc", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelChuck_eventSetupVoxelChuck_Parms, ChuckLoc), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimpleVoxelChuck_SetupVoxelChuck_Statics::NewProp_ChuckSize = { "ChuckSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelChuck_eventSetupVoxelChuck_Parms, ChuckSize), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASimpleVoxelChuck_SetupVoxelChuck_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleVoxelChuck_eventSetupVoxelChuck_Parms, Controller), Z_Construct_UClass_ASimpleVoxelActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimpleVoxelChuck_SetupVoxelChuck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelChuck_SetupVoxelChuck_Statics::NewProp_VoxelMat_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelChuck_SetupVoxelChuck_Statics::NewProp_VoxelMat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelChuck_SetupVoxelChuck_Statics::NewProp_FluidMat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelChuck_SetupVoxelChuck_Statics::NewProp_ChuckLoc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelChuck_SetupVoxelChuck_Statics::NewProp_ChuckSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleVoxelChuck_SetupVoxelChuck_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelChuck_SetupVoxelChuck_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleVoxelChuck | Function" },
		{ "Comment", "//Startup Function////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Public/SimpleVoxelChuck.h" },
		{ "ToolTip", "Startup Function/" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleVoxelChuck_SetupVoxelChuck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimpleVoxelChuck, nullptr, "SetupVoxelChuck", nullptr, nullptr, sizeof(SimpleVoxelChuck_eventSetupVoxelChuck_Parms), Z_Construct_UFunction_ASimpleVoxelChuck_SetupVoxelChuck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelChuck_SetupVoxelChuck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelChuck_SetupVoxelChuck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelChuck_SetupVoxelChuck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimpleVoxelChuck_SetupVoxelChuck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimpleVoxelChuck_SetupVoxelChuck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimpleVoxelChuck_UpdateImage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimpleVoxelChuck_UpdateImage_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Mesh Generator///////////////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Public/SimpleVoxelChuck.h" },
		{ "ToolTip", "Mesh Generator" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleVoxelChuck_UpdateImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimpleVoxelChuck, nullptr, "UpdateImage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimpleVoxelChuck_UpdateImage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleVoxelChuck_UpdateImage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimpleVoxelChuck_UpdateImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimpleVoxelChuck_UpdateImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASimpleVoxelChuck_NoRegister()
	{
		return ASimpleVoxelChuck::StaticClass();
	}
	struct Z_Construct_UClass_ASimpleVoxelChuck_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VoxelEventDataAdd_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoxelEventDataAdd_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VoxelEventDataAdd;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VoxelEventDataRemove_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoxelEventDataRemove_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VoxelEventDataRemove;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FluidEventDataAdd_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FluidEventDataAdd_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FluidEventDataAdd;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FluidEventDataRemove_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FluidEventDataRemove_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FluidEventDataRemove;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoxelMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VoxelMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FluidMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FluidMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomColorImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomColorImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlowMapImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FlowMapImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibleMapImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VisibleMapImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChuckKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChuckKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChuckGlobalPos_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChuckGlobalPos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MasterActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MasterActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoxelMaterialNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VoxelMaterialNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoRender_MetaData[];
#endif
		static void NewProp_AutoRender_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AutoRender;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VoxelRenderData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoxelRenderData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VoxelRenderData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FluidRenderData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FluidRenderData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FluidTriIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FluidTriIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASimpleVoxelChuck_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleVoxelV2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASimpleVoxelChuck_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASimpleVoxelChuck_CreateFluidRenderDataGM, "CreateFluidRenderDataGM" }, // 1609214716
		{ &Z_Construct_UFunction_ASimpleVoxelChuck_CreateFluidRenderDataGMDone, "CreateFluidRenderDataGMDone" }, // 1735439752
		{ &Z_Construct_UFunction_ASimpleVoxelChuck_CreateVoxelRenderDataGM, "CreateVoxelRenderDataGM" }, // 894136156
		{ &Z_Construct_UFunction_ASimpleVoxelChuck_CreateVoxelRenderDataGMDone, "CreateVoxelRenderDataGMDone" }, // 2967712696
		{ &Z_Construct_UFunction_ASimpleVoxelChuck_GetChuckData, "GetChuckData" }, // 3086778090
		{ &Z_Construct_UFunction_ASimpleVoxelChuck_OnFluidRenderUpdate, "OnFluidRenderUpdate" }, // 4279373635
		{ &Z_Construct_UFunction_ASimpleVoxelChuck_OnVoxelRenderUpdate, "OnVoxelRenderUpdate" }, // 3560809047
		{ &Z_Construct_UFunction_ASimpleVoxelChuck_RenderFluidMesh, "RenderFluidMesh" }, // 2508802202
		{ &Z_Construct_UFunction_ASimpleVoxelChuck_RenderVoxelMesh, "RenderVoxelMesh" }, // 2834768402
		{ &Z_Construct_UFunction_ASimpleVoxelChuck_SetupVoxelChuck, "SetupVoxelChuck" }, // 1300539994
		{ &Z_Construct_UFunction_ASimpleVoxelChuck_UpdateImage, "UpdateImage" }, // 3846615740
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimpleVoxelChuck_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SimpleVoxelChuck.h" },
		{ "ModuleRelativePath", "Public/SimpleVoxelChuck.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_VoxelEventDataAdd_Inner = { "VoxelEventDataAdd", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVoxelData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_VoxelEventDataAdd_MetaData[] = {
		{ "Comment", "//Events Data//////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Public/SimpleVoxelChuck.h" },
		{ "ToolTip", "Events Data" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_VoxelEventDataAdd = { "VoxelEventDataAdd", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASimpleVoxelChuck, VoxelEventDataAdd), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_VoxelEventDataAdd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_VoxelEventDataAdd_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_VoxelEventDataRemove_Inner = { "VoxelEventDataRemove", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVoxelData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_VoxelEventDataRemove_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleVoxelChuck.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_VoxelEventDataRemove = { "VoxelEventDataRemove", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASimpleVoxelChuck, VoxelEventDataRemove), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_VoxelEventDataRemove_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_VoxelEventDataRemove_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_FluidEventDataAdd_Inner = { "FluidEventDataAdd", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFluidData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_FluidEventDataAdd_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleVoxelChuck.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_FluidEventDataAdd = { "FluidEventDataAdd", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASimpleVoxelChuck, FluidEventDataAdd), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_FluidEventDataAdd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_FluidEventDataAdd_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_FluidEventDataRemove_Inner = { "FluidEventDataRemove", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFluidData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_FluidEventDataRemove_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleVoxelChuck.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_FluidEventDataRemove = { "FluidEventDataRemove", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASimpleVoxelChuck, FluidEventDataRemove), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_FluidEventDataRemove_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_FluidEventDataRemove_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_VoxelMesh_MetaData[] = {
		{ "Category", "SimpleVoxelChuck | Variable" },
		{ "Comment", "//Components//////////////////////////////////////\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SimpleVoxelChuck.h" },
		{ "ToolTip", "Components" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_VoxelMesh = { "VoxelMesh", nullptr, (EPropertyFlags)0x001000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASimpleVoxelChuck, VoxelMesh), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_VoxelMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_VoxelMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_FluidMesh_MetaData[] = {
		{ "Category", "SimpleVoxelChuck | Variable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SimpleVoxelChuck.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_FluidMesh = { "FluidMesh", nullptr, (EPropertyFlags)0x001000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASimpleVoxelChuck, FluidMesh), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_FluidMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_FluidMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_CustomColorImage_MetaData[] = {
		{ "Category", "SimpleVoxelChuck | Variable" },
		{ "Comment", "//Data Outputer//////////////////////////////////\n" },
		{ "ModuleRelativePath", "Public/SimpleVoxelChuck.h" },
		{ "ToolTip", "Data Outputer/" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_CustomColorImage = { "CustomColorImage", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASimpleVoxelChuck, CustomColorImage), Z_Construct_UClass_UDynTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_CustomColorImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_CustomColorImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_FlowMapImage_MetaData[] = {
		{ "Category", "SimpleVoxelChuck | Variable" },
		{ "ModuleRelativePath", "Public/SimpleVoxelChuck.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_FlowMapImage = { "FlowMapImage", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASimpleVoxelChuck, FlowMapImage), Z_Construct_UClass_UDynTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_FlowMapImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_FlowMapImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_VisibleMapImage_MetaData[] = {
		{ "Category", "SimpleVoxelChuck | Variable" },
		{ "ModuleRelativePath", "Public/SimpleVoxelChuck.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_VisibleMapImage = { "VisibleMapImage", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASimpleVoxelChuck, VisibleMapImage), Z_Construct_UClass_UDynTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_VisibleMapImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_VisibleMapImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_ChuckKey_MetaData[] = {
		{ "Category", "SimpleVoxelChuck | Variable" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/SimpleVoxelChuck.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_ChuckKey = { "ChuckKey", nullptr, (EPropertyFlags)0x0011000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASimpleVoxelChuck, ChuckKey), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_ChuckKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_ChuckKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_ChuckGlobalPos_MetaData[] = {
		{ "Category", "SimpleVoxelChuck | Variable" },
		{ "ModuleRelativePath", "Public/SimpleVoxelChuck.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_ChuckGlobalPos = { "ChuckGlobalPos", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASimpleVoxelChuck, ChuckGlobalPos), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_ChuckGlobalPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_ChuckGlobalPos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_MasterActor_MetaData[] = {
		{ "Category", "SimpleVoxelChuck | Variable" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/SimpleVoxelChuck.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_MasterActor = { "MasterActor", nullptr, (EPropertyFlags)0x0011000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASimpleVoxelChuck, MasterActor), Z_Construct_UClass_ASimpleVoxelActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_MasterActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_MasterActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_VoxelMaterialNum_MetaData[] = {
		{ "Category", "SimpleVoxelChuck | Variable" },
		{ "ModuleRelativePath", "Public/SimpleVoxelChuck.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_VoxelMaterialNum = { "VoxelMaterialNum", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASimpleVoxelChuck, VoxelMaterialNum), METADATA_PARAMS(Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_VoxelMaterialNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_VoxelMaterialNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_AutoRender_MetaData[] = {
		{ "Category", "SimpleVoxelChuck | Variable" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/SimpleVoxelChuck.h" },
	};
#endif
	void Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_AutoRender_SetBit(void* Obj)
	{
		((ASimpleVoxelChuck*)Obj)->AutoRender = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_AutoRender = { "AutoRender", nullptr, (EPropertyFlags)0x0011000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASimpleVoxelChuck), &Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_AutoRender_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_AutoRender_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_AutoRender_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_VoxelRenderData_Inner = { "VoxelRenderData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVoxelRenderData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_VoxelRenderData_MetaData[] = {
		{ "Comment", "//After Data/////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Public/SimpleVoxelChuck.h" },
		{ "ToolTip", "After Data/" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_VoxelRenderData = { "VoxelRenderData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASimpleVoxelChuck, VoxelRenderData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_VoxelRenderData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_VoxelRenderData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_FluidRenderData_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleVoxelChuck.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_FluidRenderData = { "FluidRenderData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASimpleVoxelChuck, FluidRenderData), Z_Construct_UScriptStruct_FVoxelRenderData, METADATA_PARAMS(Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_FluidRenderData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_FluidRenderData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_FluidTriIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleVoxelChuck.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_FluidTriIndex = { "FluidTriIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASimpleVoxelChuck, FluidTriIndex), METADATA_PARAMS(Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_FluidTriIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_FluidTriIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASimpleVoxelChuck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_VoxelEventDataAdd_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_VoxelEventDataAdd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_VoxelEventDataRemove_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_VoxelEventDataRemove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_FluidEventDataAdd_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_FluidEventDataAdd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_FluidEventDataRemove_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_FluidEventDataRemove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_VoxelMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_FluidMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_CustomColorImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_FlowMapImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_VisibleMapImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_ChuckKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_ChuckGlobalPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_MasterActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_VoxelMaterialNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_AutoRender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_VoxelRenderData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_VoxelRenderData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_FluidRenderData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleVoxelChuck_Statics::NewProp_FluidTriIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASimpleVoxelChuck_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASimpleVoxelChuck>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASimpleVoxelChuck_Statics::ClassParams = {
		&ASimpleVoxelChuck::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASimpleVoxelChuck_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASimpleVoxelChuck_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASimpleVoxelChuck_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASimpleVoxelChuck_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASimpleVoxelChuck()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASimpleVoxelChuck_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASimpleVoxelChuck, 2553444052);
	template<> SIMPLEVOXELV2_API UClass* StaticClass<ASimpleVoxelChuck>()
	{
		return ASimpleVoxelChuck::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASimpleVoxelChuck(Z_Construct_UClass_ASimpleVoxelChuck, &ASimpleVoxelChuck::StaticClass, TEXT("/Script/SimpleVoxelV2"), TEXT("ASimpleVoxelChuck"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASimpleVoxelChuck);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
