// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieRenderPipelineEditor/Public/MoviePipelineEditorBlueprintLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoviePipelineEditorBlueprintLibrary() {}
// Cross Module References
	MOVIERENDERPIPELINEEDITOR_API UClass* Z_Construct_UClass_UMoviePipelineEditorBlueprintLibrary_NoRegister();
	MOVIERENDERPIPELINEEDITOR_API UClass* Z_Construct_UClass_UMoviePipelineEditorBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineEditor();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineMasterConfig_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UMoviePipelineEditorBlueprintLibrary::execExportConfigToAsset)
	{
		P_GET_OBJECT(UMoviePipelineMasterConfig,Z_Param_InConfig);
		P_GET_PROPERTY(FStrProperty,Z_Param_InPackagePath);
		P_GET_PROPERTY(FStrProperty,Z_Param_InFileName);
		P_GET_UBOOL(Z_Param_bInSaveAsset);
		P_GET_OBJECT_REF(UMoviePipelineMasterConfig,Z_Param_Out_OutAsset);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_OutErrorReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMoviePipelineEditorBlueprintLibrary::ExportConfigToAsset(Z_Param_InConfig,Z_Param_InPackagePath,Z_Param_InFileName,Z_Param_bInSaveAsset,Z_Param_Out_OutAsset,Z_Param_Out_OutErrorReason);
		P_NATIVE_END;
	}
	void UMoviePipelineEditorBlueprintLibrary::StaticRegisterNativesUMoviePipelineEditorBlueprintLibrary()
	{
		UClass* Class = UMoviePipelineEditorBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExportConfigToAsset", &UMoviePipelineEditorBlueprintLibrary::execExportConfigToAsset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset_Statics
	{
		struct MoviePipelineEditorBlueprintLibrary_eventExportConfigToAsset_Parms
		{
			const UMoviePipelineMasterConfig* InConfig;
			FString InPackagePath;
			FString InFileName;
			bool bInSaveAsset;
			UMoviePipelineMasterConfig* OutAsset;
			FText OutErrorReason;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_OutErrorReason;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInSaveAsset_MetaData[];
#endif
		static void NewProp_bInSaveAsset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInSaveAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InFileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InFileName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPackagePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InPackagePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InConfig;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MoviePipelineEditorBlueprintLibrary_eventExportConfigToAsset_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MoviePipelineEditorBlueprintLibrary_eventExportConfigToAsset_Parms), &Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset_Statics::NewProp_OutErrorReason = { "OutErrorReason", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MoviePipelineEditorBlueprintLibrary_eventExportConfigToAsset_Parms, OutErrorReason), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset_Statics::NewProp_OutAsset = { "OutAsset", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MoviePipelineEditorBlueprintLibrary_eventExportConfigToAsset_Parms, OutAsset), Z_Construct_UClass_UMoviePipelineMasterConfig_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset_Statics::NewProp_bInSaveAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset_Statics::NewProp_bInSaveAsset_SetBit(void* Obj)
	{
		((MoviePipelineEditorBlueprintLibrary_eventExportConfigToAsset_Parms*)Obj)->bInSaveAsset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset_Statics::NewProp_bInSaveAsset = { "bInSaveAsset", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MoviePipelineEditorBlueprintLibrary_eventExportConfigToAsset_Parms), &Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset_Statics::NewProp_bInSaveAsset_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset_Statics::NewProp_bInSaveAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset_Statics::NewProp_bInSaveAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset_Statics::NewProp_InFileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset_Statics::NewProp_InFileName = { "InFileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MoviePipelineEditorBlueprintLibrary_eventExportConfigToAsset_Parms, InFileName), METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset_Statics::NewProp_InFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset_Statics::NewProp_InFileName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset_Statics::NewProp_InPackagePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset_Statics::NewProp_InPackagePath = { "InPackagePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MoviePipelineEditorBlueprintLibrary_eventExportConfigToAsset_Parms, InPackagePath), METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset_Statics::NewProp_InPackagePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset_Statics::NewProp_InPackagePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset_Statics::NewProp_InConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset_Statics::NewProp_InConfig = { "InConfig", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MoviePipelineEditorBlueprintLibrary_eventExportConfigToAsset_Parms, InConfig), Z_Construct_UClass_UMoviePipelineMasterConfig_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset_Statics::NewProp_InConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset_Statics::NewProp_InConfig_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset_Statics::NewProp_OutErrorReason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset_Statics::NewProp_OutAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset_Statics::NewProp_bInSaveAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset_Statics::NewProp_InFileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset_Statics::NewProp_InPackagePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset_Statics::NewProp_InConfig,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "ModuleRelativePath", "Public/MoviePipelineEditorBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineEditorBlueprintLibrary, nullptr, "ExportConfigToAsset", nullptr, nullptr, sizeof(MoviePipelineEditorBlueprintLibrary_eventExportConfigToAsset_Parms), Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMoviePipelineEditorBlueprintLibrary_NoRegister()
	{
		return UMoviePipelineEditorBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelineEditorBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelineEditorBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMoviePipelineEditorBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMoviePipelineEditorBlueprintLibrary_ExportConfigToAsset, "ExportConfigToAsset" }, // 1219136848
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineEditorBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MoviePipelineEditorBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/MoviePipelineEditorBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelineEditorBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineEditorBlueprintLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineEditorBlueprintLibrary_Statics::ClassParams = {
		&UMoviePipelineEditorBlueprintLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineEditorBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineEditorBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoviePipelineEditorBlueprintLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMoviePipelineEditorBlueprintLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMoviePipelineEditorBlueprintLibrary, 2905574198);
	template<> MOVIERENDERPIPELINEEDITOR_API UClass* StaticClass<UMoviePipelineEditorBlueprintLibrary>()
	{
		return UMoviePipelineEditorBlueprintLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMoviePipelineEditorBlueprintLibrary(Z_Construct_UClass_UMoviePipelineEditorBlueprintLibrary, &UMoviePipelineEditorBlueprintLibrary::StaticClass, TEXT("/Script/MovieRenderPipelineEditor"), TEXT("UMoviePipelineEditorBlueprintLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineEditorBlueprintLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
