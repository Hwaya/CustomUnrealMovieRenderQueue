// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieRenderPipelineCore/Public/MoviePipelineInProcessExecutorSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoviePipelineInProcessExecutorSettings() {}
// Cross Module References
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineInProcessExecutorSettings_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineInProcessExecutorSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineCore();
// End Cross Module References
	void UMoviePipelineInProcessExecutorSettings::StaticRegisterNativesUMoviePipelineInProcessExecutorSettings()
	{
	}
	UClass* Z_Construct_UClass_UMoviePipelineInProcessExecutorSettings_NoRegister()
	{
		return UMoviePipelineInProcessExecutorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelineInProcessExecutorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialDelayFrameCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InitialDelayFrameCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InheritedCommandLineArguments_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InheritedCommandLineArguments;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalCommandLineArguments_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AdditionalCommandLineArguments;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCloseEditor_MetaData[];
#endif
		static void NewProp_bCloseEditor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCloseEditor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelineInProcessExecutorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineInProcessExecutorSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* This is the implementation responsible for executing the rendering of\n* multiple movie pipelines after being launched via the command line.\n*/" },
		{ "DisplayName", "Movie Pipeline New Process" },
		{ "IncludePath", "MoviePipelineInProcessExecutorSettings.h" },
		{ "ModuleRelativePath", "Public/MoviePipelineInProcessExecutorSettings.h" },
		{ "ToolTip", "This is the implementation responsible for executing the rendering of\nmultiple movie pipelines after being launched via the command line." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineInProcessExecutorSettings_Statics::NewProp_InitialDelayFrameCount_MetaData[] = {
		{ "Category", "Startup" },
		{ "Comment", "/** \n\x09* How long should we wait after being initialized to start doing any work? This can be used\n\x09* to work around situations where the game is not fully loaded by the time the pipeline\n\x09* is automatically started and it is important that the game is fully loaded before we do\n\x09* any work (such as evaluating frames for warm-up).\n\x09*/" },
		{ "MinValue", "0" },
		{ "ModuleRelativePath", "Public/MoviePipelineInProcessExecutorSettings.h" },
		{ "ToolTip", "How long should we wait after being initialized to start doing any work? This can be used\nto work around situations where the game is not fully loaded by the time the pipeline\nis automatically started and it is important that the game is fully loaded before we do\nany work (such as evaluating frames for warm-up)." },
		{ "UIMax", "150" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMoviePipelineInProcessExecutorSettings_Statics::NewProp_InitialDelayFrameCount = { "InitialDelayFrameCount", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMoviePipelineInProcessExecutorSettings, InitialDelayFrameCount), METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineInProcessExecutorSettings_Statics::NewProp_InitialDelayFrameCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineInProcessExecutorSettings_Statics::NewProp_InitialDelayFrameCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineInProcessExecutorSettings_Statics::NewProp_InheritedCommandLineArguments_MetaData[] = {
		{ "Category", "Startup" },
		{ "Comment", "/** A list of command line arguments which are inherited from the currently running Editor instance that will be automatically appended to the new process. */" },
		{ "ModuleRelativePath", "Public/MoviePipelineInProcessExecutorSettings.h" },
		{ "ToolTip", "A list of command line arguments which are inherited from the currently running Editor instance that will be automatically appended to the new process." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMoviePipelineInProcessExecutorSettings_Statics::NewProp_InheritedCommandLineArguments = { "InheritedCommandLineArguments", nullptr, (EPropertyFlags)0x0010000000026015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMoviePipelineInProcessExecutorSettings, InheritedCommandLineArguments), METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineInProcessExecutorSettings_Statics::NewProp_InheritedCommandLineArguments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineInProcessExecutorSettings_Statics::NewProp_InheritedCommandLineArguments_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineInProcessExecutorSettings_Statics::NewProp_AdditionalCommandLineArguments_MetaData[] = {
		{ "Category", "Startup" },
		{ "Comment", "/** A list of additional command line arguments to be appended to the new process startup. In the form of \"-foo -bar=baz\". Can be useful if your game requires certain arguments to start such as disabling log-in screens. */" },
		{ "ModuleRelativePath", "Public/MoviePipelineInProcessExecutorSettings.h" },
		{ "ToolTip", "A list of additional command line arguments to be appended to the new process startup. In the form of \"-foo -bar=baz\". Can be useful if your game requires certain arguments to start such as disabling log-in screens." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMoviePipelineInProcessExecutorSettings_Statics::NewProp_AdditionalCommandLineArguments = { "AdditionalCommandLineArguments", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMoviePipelineInProcessExecutorSettings, AdditionalCommandLineArguments), METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineInProcessExecutorSettings_Statics::NewProp_AdditionalCommandLineArguments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineInProcessExecutorSettings_Statics::NewProp_AdditionalCommandLineArguments_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineInProcessExecutorSettings_Statics::NewProp_bCloseEditor_MetaData[] = {
		{ "Category", "Startup" },
		{ "Comment", "/** If enabled the editor will close itself when a new process is started. This can be used to gain some performance. */" },
		{ "ModuleRelativePath", "Public/MoviePipelineInProcessExecutorSettings.h" },
		{ "ToolTip", "If enabled the editor will close itself when a new process is started. This can be used to gain some performance." },
	};
#endif
	void Z_Construct_UClass_UMoviePipelineInProcessExecutorSettings_Statics::NewProp_bCloseEditor_SetBit(void* Obj)
	{
		((UMoviePipelineInProcessExecutorSettings*)Obj)->bCloseEditor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoviePipelineInProcessExecutorSettings_Statics::NewProp_bCloseEditor = { "bCloseEditor", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMoviePipelineInProcessExecutorSettings), &Z_Construct_UClass_UMoviePipelineInProcessExecutorSettings_Statics::NewProp_bCloseEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineInProcessExecutorSettings_Statics::NewProp_bCloseEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineInProcessExecutorSettings_Statics::NewProp_bCloseEditor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoviePipelineInProcessExecutorSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineInProcessExecutorSettings_Statics::NewProp_InitialDelayFrameCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineInProcessExecutorSettings_Statics::NewProp_InheritedCommandLineArguments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineInProcessExecutorSettings_Statics::NewProp_AdditionalCommandLineArguments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineInProcessExecutorSettings_Statics::NewProp_bCloseEditor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelineInProcessExecutorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineInProcessExecutorSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineInProcessExecutorSettings_Statics::ClassParams = {
		&UMoviePipelineInProcessExecutorSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMoviePipelineInProcessExecutorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineInProcessExecutorSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineInProcessExecutorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineInProcessExecutorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoviePipelineInProcessExecutorSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMoviePipelineInProcessExecutorSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMoviePipelineInProcessExecutorSettings, 2675638337);
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMoviePipelineInProcessExecutorSettings>()
	{
		return UMoviePipelineInProcessExecutorSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMoviePipelineInProcessExecutorSettings(Z_Construct_UClass_UMoviePipelineInProcessExecutorSettings, &UMoviePipelineInProcessExecutorSettings::StaticClass, TEXT("/Script/MovieRenderPipelineCore"), TEXT("UMoviePipelineInProcessExecutorSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineInProcessExecutorSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
