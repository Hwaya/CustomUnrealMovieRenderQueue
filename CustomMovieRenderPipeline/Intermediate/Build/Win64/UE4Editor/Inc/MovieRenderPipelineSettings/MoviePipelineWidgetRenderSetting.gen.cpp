// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieRenderPipelineSettings/Public/MoviePipelineWidgetRenderSetting.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoviePipelineWidgetRenderSetting() {}
// Cross Module References
	MOVIERENDERPIPELINESETTINGS_API UClass* Z_Construct_UClass_UMoviePipelineWidgetRenderer_NoRegister();
	MOVIERENDERPIPELINESETTINGS_API UClass* Z_Construct_UClass_UMoviePipelineWidgetRenderer();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineRenderPass();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineSettings();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
// End Cross Module References
	void UMoviePipelineWidgetRenderer::StaticRegisterNativesUMoviePipelineWidgetRenderer()
	{
	}
	UClass* Z_Construct_UClass_UMoviePipelineWidgetRenderer_NoRegister()
	{
		return UMoviePipelineWidgetRenderer::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelineWidgetRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RenderTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelineWidgetRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMoviePipelineRenderPass,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineWidgetRenderer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MoviePipelineWidgetRenderSetting.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MoviePipelineWidgetRenderSetting.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineWidgetRenderer_Statics::NewProp_RenderTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/MoviePipelineWidgetRenderSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMoviePipelineWidgetRenderer_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMoviePipelineWidgetRenderer, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineWidgetRenderer_Statics::NewProp_RenderTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineWidgetRenderer_Statics::NewProp_RenderTarget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoviePipelineWidgetRenderer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineWidgetRenderer_Statics::NewProp_RenderTarget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelineWidgetRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineWidgetRenderer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineWidgetRenderer_Statics::ClassParams = {
		&UMoviePipelineWidgetRenderer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMoviePipelineWidgetRenderer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineWidgetRenderer_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineWidgetRenderer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineWidgetRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoviePipelineWidgetRenderer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMoviePipelineWidgetRenderer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMoviePipelineWidgetRenderer, 62760580);
	template<> MOVIERENDERPIPELINESETTINGS_API UClass* StaticClass<UMoviePipelineWidgetRenderer>()
	{
		return UMoviePipelineWidgetRenderer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMoviePipelineWidgetRenderer(Z_Construct_UClass_UMoviePipelineWidgetRenderer, &UMoviePipelineWidgetRenderer::StaticClass, TEXT("/Script/MovieRenderPipelineSettings"), TEXT("UMoviePipelineWidgetRenderer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineWidgetRenderer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
