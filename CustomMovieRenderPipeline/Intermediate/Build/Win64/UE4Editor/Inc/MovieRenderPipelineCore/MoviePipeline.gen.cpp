// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieRenderPipelineCore/Public/MoviePipeline.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoviePipeline() {}
// Cross Module References
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipeline_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipeline();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineCore();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineMasterConfig_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineExecutorJob_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieRenderDebugWidget_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ALevelSequenceActor_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEngineCustomTimeStep_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineCustomTimeStep_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineCustomTimeStep();
	ENGINE_API UClass* Z_Construct_UClass_UEngineCustomTimeStep();
// End Cross Module References
	DEFINE_FUNCTION(UMoviePipeline::execGetPreviewTexture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture**)Z_Param__Result=P_THIS->GetPreviewTexture();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipeline::execGetPipelineMasterConfig)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMoviePipelineMasterConfig**)Z_Param__Result=P_THIS->GetPipelineMasterConfig();
		P_NATIVE_END;
	}
	void UMoviePipeline::StaticRegisterNativesUMoviePipeline()
	{
		UClass* Class = UMoviePipeline::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPipelineMasterConfig", &UMoviePipeline::execGetPipelineMasterConfig },
			{ "GetPreviewTexture", &UMoviePipeline::execGetPreviewTexture },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMoviePipeline_GetPipelineMasterConfig_Statics
	{
		struct MoviePipeline_eventGetPipelineMasterConfig_Parms
		{
			UMoviePipelineMasterConfig* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipeline_GetPipelineMasterConfig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MoviePipeline_eventGetPipelineMasterConfig_Parms, ReturnValue), Z_Construct_UClass_UMoviePipelineMasterConfig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipeline_GetPipelineMasterConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipeline_GetPipelineMasterConfig_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipeline_GetPipelineMasterConfig_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/**\n\x09* Get the Master Configuration used to render this shot. This contains the global settings for the shot, as well as per-shot\n\x09* configurations which can contain their own settings.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipeline.h" },
		{ "ToolTip", "Get the Master Configuration used to render this shot. This contains the global settings for the shot, as well as per-shot\nconfigurations which can contain their own settings." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipeline_GetPipelineMasterConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipeline, nullptr, "GetPipelineMasterConfig", nullptr, nullptr, sizeof(MoviePipeline_eventGetPipelineMasterConfig_Parms), Z_Construct_UFunction_UMoviePipeline_GetPipelineMasterConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipeline_GetPipelineMasterConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipeline_GetPipelineMasterConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipeline_GetPipelineMasterConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipeline_GetPipelineMasterConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMoviePipeline_GetPipelineMasterConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipeline_GetPreviewTexture_Statics
	{
		struct MoviePipeline_eventGetPreviewTexture_Parms
		{
			UTexture* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipeline_GetPreviewTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MoviePipeline_eventGetPreviewTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipeline_GetPreviewTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipeline_GetPreviewTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipeline_GetPreviewTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "ModuleRelativePath", "Public/MoviePipeline.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipeline_GetPreviewTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipeline, nullptr, "GetPreviewTexture", nullptr, nullptr, sizeof(MoviePipeline_eventGetPreviewTexture_Parms), Z_Construct_UFunction_UMoviePipeline_GetPreviewTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipeline_GetPreviewTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipeline_GetPreviewTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipeline_GetPreviewTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipeline_GetPreviewTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMoviePipeline_GetPreviewTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMoviePipeline_NoRegister()
	{
		return UMoviePipeline::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipeline_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentJob_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentJob;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DebugWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelSequenceActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LevelSequenceActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetSequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedPrevCustomTimeStep_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CachedPrevCustomTimeStep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTimeStep_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomTimeStep;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipeline_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMoviePipeline_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMoviePipeline_GetPipelineMasterConfig, "GetPipelineMasterConfig" }, // 3441500561
		{ &Z_Construct_UFunction_UMoviePipeline_GetPreviewTexture, "GetPreviewTexture" }, // 2938427846
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipeline_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MoviePipeline.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MoviePipeline.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipeline_Statics::NewProp_CurrentJob_MetaData[] = {
		{ "Comment", "/** Keep track of which job we're working on. This holds our Configuration + which shots we're supposed to render from it. */" },
		{ "ModuleRelativePath", "Public/MoviePipeline.h" },
		{ "ToolTip", "Keep track of which job we're working on. This holds our Configuration + which shots we're supposed to render from it." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMoviePipeline_Statics::NewProp_CurrentJob = { "CurrentJob", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMoviePipeline, CurrentJob), Z_Construct_UClass_UMoviePipelineExecutorJob_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMoviePipeline_Statics::NewProp_CurrentJob_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipeline_Statics::NewProp_CurrentJob_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipeline_Statics::NewProp_PreviewTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/MoviePipeline.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMoviePipeline_Statics::NewProp_PreviewTexture = { "PreviewTexture", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMoviePipeline, PreviewTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMoviePipeline_Statics::NewProp_PreviewTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipeline_Statics::NewProp_PreviewTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipeline_Statics::NewProp_DebugWidget_MetaData[] = {
		{ "Comment", "/** The Debug UI Widget that is spawned and placed on the player UI */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MoviePipeline.h" },
		{ "ToolTip", "The Debug UI Widget that is spawned and placed on the player UI" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMoviePipeline_Statics::NewProp_DebugWidget = { "DebugWidget", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMoviePipeline, DebugWidget), Z_Construct_UClass_UMovieRenderDebugWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMoviePipeline_Statics::NewProp_DebugWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipeline_Statics::NewProp_DebugWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipeline_Statics::NewProp_LevelSequenceActor_MetaData[] = {
		{ "Comment", "/** The Level Sequence Actor we spawned to play our TargetSequence. */" },
		{ "ModuleRelativePath", "Public/MoviePipeline.h" },
		{ "ToolTip", "The Level Sequence Actor we spawned to play our TargetSequence." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMoviePipeline_Statics::NewProp_LevelSequenceActor = { "LevelSequenceActor", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMoviePipeline, LevelSequenceActor), Z_Construct_UClass_ALevelSequenceActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMoviePipeline_Statics::NewProp_LevelSequenceActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipeline_Statics::NewProp_LevelSequenceActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipeline_Statics::NewProp_TargetSequence_MetaData[] = {
		{ "Comment", "/** This is our duplicated sequence that we're rendering. This will get modified throughout the rendering process. */" },
		{ "ModuleRelativePath", "Public/MoviePipeline.h" },
		{ "ToolTip", "This is our duplicated sequence that we're rendering. This will get modified throughout the rendering process." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMoviePipeline_Statics::NewProp_TargetSequence = { "TargetSequence", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMoviePipeline, TargetSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMoviePipeline_Statics::NewProp_TargetSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipeline_Statics::NewProp_TargetSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipeline_Statics::NewProp_CachedPrevCustomTimeStep_MetaData[] = {
		{ "Comment", "/** Hold a reference to the existing custom time step (if any) so we can restore it after we're done using our custom one. */" },
		{ "ModuleRelativePath", "Public/MoviePipeline.h" },
		{ "ToolTip", "Hold a reference to the existing custom time step (if any) so we can restore it after we're done using our custom one." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMoviePipeline_Statics::NewProp_CachedPrevCustomTimeStep = { "CachedPrevCustomTimeStep", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMoviePipeline, CachedPrevCustomTimeStep), Z_Construct_UClass_UEngineCustomTimeStep_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMoviePipeline_Statics::NewProp_CachedPrevCustomTimeStep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipeline_Statics::NewProp_CachedPrevCustomTimeStep_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipeline_Statics::NewProp_CustomTimeStep_MetaData[] = {
		{ "Comment", "/** Custom TimeStep used to drive the engine while rendering. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MoviePipeline.h" },
		{ "ToolTip", "Custom TimeStep used to drive the engine while rendering." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMoviePipeline_Statics::NewProp_CustomTimeStep = { "CustomTimeStep", nullptr, (EPropertyFlags)0x0042000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMoviePipeline, CustomTimeStep), Z_Construct_UClass_UMoviePipelineCustomTimeStep_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMoviePipeline_Statics::NewProp_CustomTimeStep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipeline_Statics::NewProp_CustomTimeStep_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoviePipeline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipeline_Statics::NewProp_CurrentJob,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipeline_Statics::NewProp_PreviewTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipeline_Statics::NewProp_DebugWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipeline_Statics::NewProp_LevelSequenceActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipeline_Statics::NewProp_TargetSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipeline_Statics::NewProp_CachedPrevCustomTimeStep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipeline_Statics::NewProp_CustomTimeStep,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipeline_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipeline>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipeline_Statics::ClassParams = {
		&UMoviePipeline::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMoviePipeline_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipeline_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMoviePipeline_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipeline_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoviePipeline()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMoviePipeline_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMoviePipeline, 2108704651);
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMoviePipeline>()
	{
		return UMoviePipeline::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMoviePipeline(Z_Construct_UClass_UMoviePipeline, &UMoviePipeline::StaticClass, TEXT("/Script/MovieRenderPipelineCore"), TEXT("UMoviePipeline"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipeline);
	void UMoviePipelineCustomTimeStep::StaticRegisterNativesUMoviePipelineCustomTimeStep()
	{
	}
	UClass* Z_Construct_UClass_UMoviePipelineCustomTimeStep_NoRegister()
	{
		return UMoviePipelineCustomTimeStep::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelineCustomTimeStep_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelineCustomTimeStep_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngineCustomTimeStep,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineCustomTimeStep_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MoviePipeline.h" },
		{ "ModuleRelativePath", "Public/MoviePipeline.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelineCustomTimeStep_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineCustomTimeStep>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineCustomTimeStep_Statics::ClassParams = {
		&UMoviePipelineCustomTimeStep::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineCustomTimeStep_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineCustomTimeStep_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoviePipelineCustomTimeStep()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMoviePipelineCustomTimeStep_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMoviePipelineCustomTimeStep, 3907928501);
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMoviePipelineCustomTimeStep>()
	{
		return UMoviePipelineCustomTimeStep::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMoviePipelineCustomTimeStep(Z_Construct_UClass_UMoviePipelineCustomTimeStep, &UMoviePipelineCustomTimeStep::StaticClass, TEXT("/Script/MovieRenderPipelineCore"), TEXT("UMoviePipelineCustomTimeStep"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineCustomTimeStep);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
