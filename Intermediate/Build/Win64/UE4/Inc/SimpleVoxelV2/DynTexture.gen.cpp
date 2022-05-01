// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleVoxelV2/Public/DynTexture.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDynTexture() {}
// Cross Module References
	SIMPLEVOXELV2_API UClass* Z_Construct_UClass_UDynTexture_NoRegister();
	SIMPLEVOXELV2_API UClass* Z_Construct_UClass_UDynTexture();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SimpleVoxelV2();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDynTexture::execGetPixelColor)
	{
		P_GET_STRUCT(FIntPoint,Z_Param_Pos);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FColor*)Z_Param__Result=P_THIS->GetPixelColor(Z_Param_Pos);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDynTexture::execsetPixelColor)
	{
		P_GET_STRUCT(FIntPoint,Z_Param_Pos);
		P_GET_STRUCT(FColor,Z_Param_Color);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->setPixelColor(Z_Param_Pos,Z_Param_Color);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDynTexture::execClearCanvas)
	{
		P_GET_UBOOL(Z_Param_IsBlack);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearCanvas(Z_Param_IsBlack);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDynTexture::execUpdateCanvas)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateCanvas();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDynTexture::execInitializeCanvas)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_pixelsH);
		P_GET_PROPERTY(FIntProperty,Z_Param_pixelsV);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeCanvas(Z_Param_pixelsH,Z_Param_pixelsV);
		P_NATIVE_END;
	}
	void UDynTexture::StaticRegisterNativesUDynTexture()
	{
		UClass* Class = UDynTexture::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearCanvas", &UDynTexture::execClearCanvas },
			{ "GetPixelColor", &UDynTexture::execGetPixelColor },
			{ "InitializeCanvas", &UDynTexture::execInitializeCanvas },
			{ "setPixelColor", &UDynTexture::execsetPixelColor },
			{ "UpdateCanvas", &UDynTexture::execUpdateCanvas },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDynTexture_ClearCanvas_Statics
	{
		struct DynTexture_eventClearCanvas_Parms
		{
			bool IsBlack;
		};
		static void NewProp_IsBlack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsBlack;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDynTexture_ClearCanvas_Statics::NewProp_IsBlack_SetBit(void* Obj)
	{
		((DynTexture_eventClearCanvas_Parms*)Obj)->IsBlack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDynTexture_ClearCanvas_Statics::NewProp_IsBlack = { "IsBlack", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DynTexture_eventClearCanvas_Parms), &Z_Construct_UFunction_UDynTexture_ClearCanvas_Statics::NewProp_IsBlack_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDynTexture_ClearCanvas_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynTexture_ClearCanvas_Statics::NewProp_IsBlack,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynTexture_ClearCanvas_Statics::Function_MetaDataParams[] = {
		{ "Category", "DynTexture | Function" },
		{ "ModuleRelativePath", "Public/DynTexture.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynTexture_ClearCanvas_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynTexture, nullptr, "ClearCanvas", nullptr, nullptr, sizeof(DynTexture_eventClearCanvas_Parms), Z_Construct_UFunction_UDynTexture_ClearCanvas_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynTexture_ClearCanvas_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDynTexture_ClearCanvas_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynTexture_ClearCanvas_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDynTexture_ClearCanvas()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDynTexture_ClearCanvas_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDynTexture_GetPixelColor_Statics
	{
		struct DynTexture_eventGetPixelColor_Parms
		{
			FIntPoint Pos;
			FColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Pos;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDynTexture_GetPixelColor_Statics::NewProp_Pos = { "Pos", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DynTexture_eventGetPixelColor_Parms, Pos), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDynTexture_GetPixelColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DynTexture_eventGetPixelColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDynTexture_GetPixelColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynTexture_GetPixelColor_Statics::NewProp_Pos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynTexture_GetPixelColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynTexture_GetPixelColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "DynTexture | Function" },
		{ "ModuleRelativePath", "Public/DynTexture.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynTexture_GetPixelColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynTexture, nullptr, "GetPixelColor", nullptr, nullptr, sizeof(DynTexture_eventGetPixelColor_Parms), Z_Construct_UFunction_UDynTexture_GetPixelColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynTexture_GetPixelColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDynTexture_GetPixelColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynTexture_GetPixelColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDynTexture_GetPixelColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDynTexture_GetPixelColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDynTexture_InitializeCanvas_Statics
	{
		struct DynTexture_eventInitializeCanvas_Parms
		{
			int32 pixelsH;
			int32 pixelsV;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pixelsH_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_pixelsH;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pixelsV_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_pixelsV;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynTexture_InitializeCanvas_Statics::NewProp_pixelsH_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDynTexture_InitializeCanvas_Statics::NewProp_pixelsH = { "pixelsH", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DynTexture_eventInitializeCanvas_Parms, pixelsH), METADATA_PARAMS(Z_Construct_UFunction_UDynTexture_InitializeCanvas_Statics::NewProp_pixelsH_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynTexture_InitializeCanvas_Statics::NewProp_pixelsH_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynTexture_InitializeCanvas_Statics::NewProp_pixelsV_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDynTexture_InitializeCanvas_Statics::NewProp_pixelsV = { "pixelsV", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DynTexture_eventInitializeCanvas_Parms, pixelsV), METADATA_PARAMS(Z_Construct_UFunction_UDynTexture_InitializeCanvas_Statics::NewProp_pixelsV_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynTexture_InitializeCanvas_Statics::NewProp_pixelsV_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDynTexture_InitializeCanvas_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynTexture_InitializeCanvas_Statics::NewProp_pixelsH,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynTexture_InitializeCanvas_Statics::NewProp_pixelsV,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynTexture_InitializeCanvas_Statics::Function_MetaDataParams[] = {
		{ "Category", "DynTexture | Function" },
		{ "ModuleRelativePath", "Public/DynTexture.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynTexture_InitializeCanvas_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynTexture, nullptr, "InitializeCanvas", nullptr, nullptr, sizeof(DynTexture_eventInitializeCanvas_Parms), Z_Construct_UFunction_UDynTexture_InitializeCanvas_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynTexture_InitializeCanvas_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDynTexture_InitializeCanvas_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynTexture_InitializeCanvas_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDynTexture_InitializeCanvas()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDynTexture_InitializeCanvas_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDynTexture_setPixelColor_Statics
	{
		struct DynTexture_eventsetPixelColor_Parms
		{
			FIntPoint Pos;
			FColor Color;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Pos;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDynTexture_setPixelColor_Statics::NewProp_Pos = { "Pos", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DynTexture_eventsetPixelColor_Parms, Pos), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDynTexture_setPixelColor_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DynTexture_eventsetPixelColor_Parms, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDynTexture_setPixelColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynTexture_setPixelColor_Statics::NewProp_Pos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynTexture_setPixelColor_Statics::NewProp_Color,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynTexture_setPixelColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "DynTexture | Function" },
		{ "Comment", "//UFUNCTION(BlueprintCallable)\n//\x09void setPixelColor(FIntPoint Pos, uint8 red, uint8 green, uint8 blue, uint8 alpha);\n" },
		{ "ModuleRelativePath", "Public/DynTexture.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable)\n       void setPixelColor(FIntPoint Pos, uint8 red, uint8 green, uint8 blue, uint8 alpha);" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynTexture_setPixelColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynTexture, nullptr, "setPixelColor", nullptr, nullptr, sizeof(DynTexture_eventsetPixelColor_Parms), Z_Construct_UFunction_UDynTexture_setPixelColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynTexture_setPixelColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDynTexture_setPixelColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynTexture_setPixelColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDynTexture_setPixelColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDynTexture_setPixelColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDynTexture_UpdateCanvas_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynTexture_UpdateCanvas_Statics::Function_MetaDataParams[] = {
		{ "Category", "DynTexture | Function" },
		{ "ModuleRelativePath", "Public/DynTexture.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynTexture_UpdateCanvas_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynTexture, nullptr, "UpdateCanvas", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDynTexture_UpdateCanvas_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynTexture_UpdateCanvas_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDynTexture_UpdateCanvas()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDynTexture_UpdateCanvas_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDynTexture_NoRegister()
	{
		return UDynTexture::StaticClass();
	}
	struct Z_Construct_UClass_UDynTexture_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RenderTexture;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CPUData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CPUData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CPUData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_canvasWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_canvasWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_canvasHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_canvasHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bytesPerPixel_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_bytesPerPixel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bufferPitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_bufferPitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bufferSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_bufferSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDynTexture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleVoxelV2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDynTexture_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDynTexture_ClearCanvas, "ClearCanvas" }, // 71058883
		{ &Z_Construct_UFunction_UDynTexture_GetPixelColor, "GetPixelColor" }, // 3125418879
		{ &Z_Construct_UFunction_UDynTexture_InitializeCanvas, "InitializeCanvas" }, // 2183156172
		{ &Z_Construct_UFunction_UDynTexture_setPixelColor, "setPixelColor" }, // 2629322668
		{ &Z_Construct_UFunction_UDynTexture_UpdateCanvas, "UpdateCanvas" }, // 781654525
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynTexture_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DynTexture.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DynTexture.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynTexture_Statics::NewProp_RenderTexture_MetaData[] = {
		{ "Category", "DynTexture | Variables" },
		{ "ModuleRelativePath", "Public/DynTexture.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDynTexture_Statics::NewProp_RenderTexture = { "RenderTexture", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDynTexture, RenderTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDynTexture_Statics::NewProp_RenderTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynTexture_Statics::NewProp_RenderTexture_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDynTexture_Statics::NewProp_CPUData_Inner = { "CPUData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynTexture_Statics::NewProp_CPUData_MetaData[] = {
		{ "Category", "DynTexture | Variables" },
		{ "ModuleRelativePath", "Public/DynTexture.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDynTexture_Statics::NewProp_CPUData = { "CPUData", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDynTexture, CPUData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDynTexture_Statics::NewProp_CPUData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynTexture_Statics::NewProp_CPUData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynTexture_Statics::NewProp_canvasWidth_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynTexture.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UDynTexture_Statics::NewProp_canvasWidth = { "canvasWidth", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDynTexture, canvasWidth), METADATA_PARAMS(Z_Construct_UClass_UDynTexture_Statics::NewProp_canvasWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynTexture_Statics::NewProp_canvasWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynTexture_Statics::NewProp_canvasHeight_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynTexture.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UDynTexture_Statics::NewProp_canvasHeight = { "canvasHeight", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDynTexture, canvasHeight), METADATA_PARAMS(Z_Construct_UClass_UDynTexture_Statics::NewProp_canvasHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynTexture_Statics::NewProp_canvasHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynTexture_Statics::NewProp_bytesPerPixel_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynTexture.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UDynTexture_Statics::NewProp_bytesPerPixel = { "bytesPerPixel", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDynTexture, bytesPerPixel), METADATA_PARAMS(Z_Construct_UClass_UDynTexture_Statics::NewProp_bytesPerPixel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynTexture_Statics::NewProp_bytesPerPixel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynTexture_Statics::NewProp_bufferPitch_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynTexture.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UDynTexture_Statics::NewProp_bufferPitch = { "bufferPitch", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDynTexture, bufferPitch), METADATA_PARAMS(Z_Construct_UClass_UDynTexture_Statics::NewProp_bufferPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynTexture_Statics::NewProp_bufferPitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynTexture_Statics::NewProp_bufferSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynTexture.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UDynTexture_Statics::NewProp_bufferSize = { "bufferSize", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDynTexture, bufferSize), METADATA_PARAMS(Z_Construct_UClass_UDynTexture_Statics::NewProp_bufferSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynTexture_Statics::NewProp_bufferSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDynTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynTexture_Statics::NewProp_RenderTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynTexture_Statics::NewProp_CPUData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynTexture_Statics::NewProp_CPUData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynTexture_Statics::NewProp_canvasWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynTexture_Statics::NewProp_canvasHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynTexture_Statics::NewProp_bytesPerPixel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynTexture_Statics::NewProp_bufferPitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynTexture_Statics::NewProp_bufferSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDynTexture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDynTexture>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDynTexture_Statics::ClassParams = {
		&UDynTexture::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDynTexture_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDynTexture_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDynTexture_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDynTexture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDynTexture()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDynTexture_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDynTexture, 2863766807);
	template<> SIMPLEVOXELV2_API UClass* StaticClass<UDynTexture>()
	{
		return UDynTexture::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDynTexture(Z_Construct_UClass_UDynTexture, &UDynTexture::StaticClass, TEXT("/Script/SimpleVoxelV2"), TEXT("UDynTexture"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDynTexture);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
