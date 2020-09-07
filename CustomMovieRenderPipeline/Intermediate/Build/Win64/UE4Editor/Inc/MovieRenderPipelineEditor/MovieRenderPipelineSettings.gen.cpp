// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieRenderPipelineEditor/Public/MovieRenderPipelineSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieRenderPipelineSettings() {}
// Cross Module References
	MOVIERENDERPIPELINEEDITOR_API UClass* Z_Construct_UClass_UMovieRenderPipelineProjectSettings_NoRegister();
	MOVIERENDERPIPELINEEDITOR_API UClass* Z_Construct_UClass_UMovieRenderPipelineProjectSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineEditor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineSetting_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipeline_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineExecutorBase_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineMasterConfig_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
// End Cross Module References
	void UMovieRenderPipelineProjectSettings::StaticRegisterNativesUMovieRenderPipelineProjectSettings()
	{
	}
	UClass* Z_Construct_UClass_UMovieRenderPipelineProjectSettings_NoRegister()
	{
		return UMovieRenderPipelineProjectSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DefaultClasses;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DefaultClasses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultPipeline_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DefaultPipeline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultRemoteExecutor_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DefaultRemoteExecutor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultLocalExecutor_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DefaultLocalExecutor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastPresetOrigin_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_LastPresetOrigin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PresetSaveDir_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PresetSaveDir;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Universal Movie Render Pipeline settings that apply to the whole project.\n */" },
		{ "IncludePath", "MovieRenderPipelineSettings.h" },
		{ "ModuleRelativePath", "Public/MovieRenderPipelineSettings.h" },
		{ "ToolTip", "Universal Movie Render Pipeline settings that apply to the whole project." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::NewProp_DefaultClasses_MetaData[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/**\n\x09* The settings specified here will automatically be added to a Movie Pipeline Master Configuration when using the UI. \n\x09* This does not apply to scripting and does not apply to runtime. It is only a convenience function so that when a job is\n\x09* created, it can be pre-filled with some settings to make the render functional out of the gate. It can also be\n\x09* used to automatically add your own setting to jobs.\n\x09*\n\x09* This only applies to jobs created via the UI. If you do not use the UI (ie: Scripting/Python) you will need to\n\x09* add settings by hand for each job you create. */" },
		{ "DisplayName", "Default Job Settings Classes" },
		{ "ModuleRelativePath", "Public/MovieRenderPipelineSettings.h" },
		{ "ToolTip", "The settings specified here will automatically be added to a Movie Pipeline Master Configuration when using the UI.\nThis does not apply to scripting and does not apply to runtime. It is only a convenience function so that when a job is\ncreated, it can be pre-filled with some settings to make the render functional out of the gate. It can also be\nused to automatically add your own setting to jobs.\n\nThis only applies to jobs created via the UI. If you do not use the UI (ie: Scripting/Python) you will need to\nadd settings by hand for each job you create." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::NewProp_DefaultClasses = { "DefaultClasses", nullptr, (EPropertyFlags)0x0014000000004005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieRenderPipelineProjectSettings, DefaultClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::NewProp_DefaultClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::NewProp_DefaultClasses_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::NewProp_DefaultClasses_Inner = { "DefaultClasses", nullptr, (EPropertyFlags)0x0004000000004000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMoviePipelineSetting_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::NewProp_DefaultPipeline_MetaData[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/**\n\x09* This allows you to implement your own Pipeline to handle timing and rendering of a movie. Changing\n\x09* this will allow you to re-use the existing UI/Executors while providing your own logic for producing\n\x09* a single render.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MovieRenderPipelineSettings.h" },
		{ "ToolTip", "This allows you to implement your own Pipeline to handle timing and rendering of a movie. Changing\nthis will allow you to re-use the existing UI/Executors while providing your own logic for producing\na single render." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::NewProp_DefaultPipeline = { "DefaultPipeline", nullptr, (EPropertyFlags)0x0014000000004005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieRenderPipelineProjectSettings, DefaultPipeline), Z_Construct_UClass_UMoviePipeline_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::NewProp_DefaultPipeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::NewProp_DefaultPipeline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::NewProp_DefaultRemoteExecutor_MetaData[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/**\n\x09* When the user uses the UI to request we render a movie remotely, which implementation should we use\n\x09* to execute the queue of things they want rendered. This allows you to implement your own executor\n\x09* which does different logic. See UMoviePipelineExecutorBase for more information. This is used for\n\x09* the Render Remotely button on the UI.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MovieRenderPipelineSettings.h" },
		{ "ToolTip", "When the user uses the UI to request we render a movie remotely, which implementation should we use\nto execute the queue of things they want rendered. This allows you to implement your own executor\nwhich does different logic. See UMoviePipelineExecutorBase for more information. This is used for\nthe Render Remotely button on the UI." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::NewProp_DefaultRemoteExecutor = { "DefaultRemoteExecutor", nullptr, (EPropertyFlags)0x0014000000004005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieRenderPipelineProjectSettings, DefaultRemoteExecutor), Z_Construct_UClass_UMoviePipelineExecutorBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::NewProp_DefaultRemoteExecutor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::NewProp_DefaultRemoteExecutor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::NewProp_DefaultLocalExecutor_MetaData[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/**\n\x09* When the user uses the UI to request we render a movie locally, which implementation should we use\n\x09* to execute the queue of things they want rendered. This allows you to implement your own executor \n\x09* which does different logic. See UMoviePipelineExecutorBase for more information. This is used for\n\x09* the Render button on the UI.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MovieRenderPipelineSettings.h" },
		{ "ToolTip", "When the user uses the UI to request we render a movie locally, which implementation should we use\nto execute the queue of things they want rendered. This allows you to implement your own executor\nwhich does different logic. See UMoviePipelineExecutorBase for more information. This is used for\nthe Render button on the UI." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::NewProp_DefaultLocalExecutor = { "DefaultLocalExecutor", nullptr, (EPropertyFlags)0x0014000000004005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieRenderPipelineProjectSettings, DefaultLocalExecutor), Z_Construct_UClass_UMoviePipelineExecutorBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::NewProp_DefaultLocalExecutor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::NewProp_DefaultLocalExecutor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::NewProp_LastPresetOrigin_MetaData[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/**\n\x09* What was the last configuration preset the user used? Can be null.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MovieRenderPipelineSettings.h" },
		{ "ToolTip", "What was the last configuration preset the user used? Can be null." },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::NewProp_LastPresetOrigin = { "LastPresetOrigin", nullptr, (EPropertyFlags)0x0014000000002005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieRenderPipelineProjectSettings, LastPresetOrigin), Z_Construct_UClass_UMoviePipelineMasterConfig_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::NewProp_LastPresetOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::NewProp_LastPresetOrigin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::NewProp_PresetSaveDir_MetaData[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/**\n\x09* Which directory should we try to save presets in by default?\n\x09*/" },
		{ "DisplayName", "Preset Save Location" },
		{ "ModuleRelativePath", "Public/MovieRenderPipelineSettings.h" },
		{ "ToolTip", "Which directory should we try to save presets in by default?" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::NewProp_PresetSaveDir = { "PresetSaveDir", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieRenderPipelineProjectSettings, PresetSaveDir), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::NewProp_PresetSaveDir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::NewProp_PresetSaveDir_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::NewProp_DefaultClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::NewProp_DefaultClasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::NewProp_DefaultPipeline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::NewProp_DefaultRemoteExecutor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::NewProp_DefaultLocalExecutor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::NewProp_LastPresetOrigin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::NewProp_PresetSaveDir,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieRenderPipelineProjectSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::ClassParams = {
		&UMovieRenderPipelineProjectSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::PropPointers),
		0,
		0x000800A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieRenderPipelineProjectSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieRenderPipelineProjectSettings, 4040812098);
	template<> MOVIERENDERPIPELINEEDITOR_API UClass* StaticClass<UMovieRenderPipelineProjectSettings>()
	{
		return UMovieRenderPipelineProjectSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieRenderPipelineProjectSettings(Z_Construct_UClass_UMovieRenderPipelineProjectSettings, &UMovieRenderPipelineProjectSettings::StaticClass, TEXT("/Script/MovieRenderPipelineEditor"), TEXT("UMovieRenderPipelineProjectSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieRenderPipelineProjectSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
