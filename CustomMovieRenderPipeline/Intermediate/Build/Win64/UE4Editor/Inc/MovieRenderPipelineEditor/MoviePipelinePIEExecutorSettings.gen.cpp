// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieRenderPipelineEditor/Private/MoviePipelinePIEExecutorSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoviePipelinePIEExecutorSettings() {}
// Cross Module References
	MOVIERENDERPIPELINEEDITOR_API UClass* Z_Construct_UClass_UMoviePipelinePIEExecutorSettings_NoRegister();
	MOVIERENDERPIPELINEEDITOR_API UClass* Z_Construct_UClass_UMoviePipelinePIEExecutorSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineEditor();
// End Cross Module References
	void UMoviePipelinePIEExecutorSettings::StaticRegisterNativesUMoviePipelinePIEExecutorSettings()
	{
	}
	UClass* Z_Construct_UClass_UMoviePipelinePIEExecutorSettings_NoRegister()
	{
		return UMoviePipelinePIEExecutorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelinePIEExecutorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialDelayFrameCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InitialDelayFrameCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelinePIEExecutorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelinePIEExecutorSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* This is the implementation responsible for executing the rendering of\n* multiple movie pipelines within the editor using PIE.\n*/" },
		{ "DisplayName", "Movie Pipeline In Editor" },
		{ "IncludePath", "MoviePipelinePIEExecutorSettings.h" },
		{ "ModuleRelativePath", "Private/MoviePipelinePIEExecutorSettings.h" },
		{ "ToolTip", "This is the implementation responsible for executing the rendering of\nmultiple movie pipelines within the editor using PIE." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelinePIEExecutorSettings_Statics::NewProp_InitialDelayFrameCount_MetaData[] = {
		{ "Category", "Startup" },
		{ "Comment", "/**\n\x09* How long should we wait after being initialized to start doing any work? This can be used\n\x09* to work around situations where the game is not fully loaded by the time the pipeline\n\x09* is automatically started and it is important that the game is fully loaded before we do\n\x09* any work (such as evaluating frames for warm-up).\n\x09*/" },
		{ "MinValue", "0" },
		{ "ModuleRelativePath", "Private/MoviePipelinePIEExecutorSettings.h" },
		{ "ToolTip", "How long should we wait after being initialized to start doing any work? This can be used\nto work around situations where the game is not fully loaded by the time the pipeline\nis automatically started and it is important that the game is fully loaded before we do\nany work (such as evaluating frames for warm-up)." },
		{ "UIMax", "150" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMoviePipelinePIEExecutorSettings_Statics::NewProp_InitialDelayFrameCount = { "InitialDelayFrameCount", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMoviePipelinePIEExecutorSettings, InitialDelayFrameCount), METADATA_PARAMS(Z_Construct_UClass_UMoviePipelinePIEExecutorSettings_Statics::NewProp_InitialDelayFrameCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelinePIEExecutorSettings_Statics::NewProp_InitialDelayFrameCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoviePipelinePIEExecutorSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelinePIEExecutorSettings_Statics::NewProp_InitialDelayFrameCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelinePIEExecutorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelinePIEExecutorSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelinePIEExecutorSettings_Statics::ClassParams = {
		&UMoviePipelinePIEExecutorSettings::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMoviePipelinePIEExecutorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelinePIEExecutorSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UMoviePipelinePIEExecutorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelinePIEExecutorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoviePipelinePIEExecutorSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMoviePipelinePIEExecutorSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMoviePipelinePIEExecutorSettings, 3529784252);
	template<> MOVIERENDERPIPELINEEDITOR_API UClass* StaticClass<UMoviePipelinePIEExecutorSettings>()
	{
		return UMoviePipelinePIEExecutorSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMoviePipelinePIEExecutorSettings(Z_Construct_UClass_UMoviePipelinePIEExecutorSettings, &UMoviePipelinePIEExecutorSettings::StaticClass, TEXT("/Script/MovieRenderPipelineEditor"), TEXT("UMoviePipelinePIEExecutorSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelinePIEExecutorSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
