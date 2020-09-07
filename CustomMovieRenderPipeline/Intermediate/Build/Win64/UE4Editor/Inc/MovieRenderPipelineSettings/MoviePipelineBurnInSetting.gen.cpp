// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieRenderPipelineSettings/Public/MoviePipelineBurnInSetting.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoviePipelineBurnInSetting() {}
// Cross Module References
	MOVIERENDERPIPELINESETTINGS_API UClass* Z_Construct_UClass_UMoviePipelineBurnInSetting_NoRegister();
	MOVIERENDERPIPELINESETTINGS_API UClass* Z_Construct_UClass_UMoviePipelineBurnInSetting();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineRenderPass();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineSettings();
	MOVIERENDERPIPELINESETTINGS_API UClass* Z_Construct_UClass_UMoviePipelineBurnInWidget_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
// End Cross Module References
	void UMoviePipelineBurnInSetting::StaticRegisterNativesUMoviePipelineBurnInSetting()
	{
	}
	UClass* Z_Construct_UClass_UMoviePipelineBurnInSetting_NoRegister()
	{
		return UMoviePipelineBurnInSetting::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelineBurnInSetting_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BurnInWidgetInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BurnInWidgetInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RenderTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BurnInClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BurnInClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelineBurnInSetting_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMoviePipelineRenderPass,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineBurnInSetting_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MoviePipelineBurnInSetting.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MoviePipelineBurnInSetting.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineBurnInSetting_Statics::NewProp_BurnInWidgetInstance_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MoviePipelineBurnInSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMoviePipelineBurnInSetting_Statics::NewProp_BurnInWidgetInstance = { "BurnInWidgetInstance", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMoviePipelineBurnInSetting, BurnInWidgetInstance), Z_Construct_UClass_UMoviePipelineBurnInWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineBurnInSetting_Statics::NewProp_BurnInWidgetInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineBurnInSetting_Statics::NewProp_BurnInWidgetInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineBurnInSetting_Statics::NewProp_RenderTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/MoviePipelineBurnInSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMoviePipelineBurnInSetting_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMoviePipelineBurnInSetting, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineBurnInSetting_Statics::NewProp_RenderTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineBurnInSetting_Statics::NewProp_RenderTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineBurnInSetting_Statics::NewProp_BurnInClass_MetaData[] = {
		{ "Category", "Movie Pipeline" },
		{ "MetaClass", "MoviePipelineBurnInWidget" },
		{ "ModuleRelativePath", "Public/MoviePipelineBurnInSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMoviePipelineBurnInSetting_Statics::NewProp_BurnInClass = { "BurnInClass", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMoviePipelineBurnInSetting, BurnInClass), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineBurnInSetting_Statics::NewProp_BurnInClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineBurnInSetting_Statics::NewProp_BurnInClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoviePipelineBurnInSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineBurnInSetting_Statics::NewProp_BurnInWidgetInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineBurnInSetting_Statics::NewProp_RenderTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineBurnInSetting_Statics::NewProp_BurnInClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelineBurnInSetting_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineBurnInSetting>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineBurnInSetting_Statics::ClassParams = {
		&UMoviePipelineBurnInSetting::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMoviePipelineBurnInSetting_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineBurnInSetting_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineBurnInSetting_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineBurnInSetting_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoviePipelineBurnInSetting()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMoviePipelineBurnInSetting_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMoviePipelineBurnInSetting, 2061865693);
	template<> MOVIERENDERPIPELINESETTINGS_API UClass* StaticClass<UMoviePipelineBurnInSetting>()
	{
		return UMoviePipelineBurnInSetting::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMoviePipelineBurnInSetting(Z_Construct_UClass_UMoviePipelineBurnInSetting, &UMoviePipelineBurnInSetting::StaticClass, TEXT("/Script/MovieRenderPipelineSettings"), TEXT("UMoviePipelineBurnInSetting"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineBurnInSetting);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
