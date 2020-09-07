// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieRenderPipelineCore/Public/MoviePipelineBlueprintLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoviePipelineBlueprintLibrary() {}
// Cross Module References
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineBlueprintLibrary_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineCore();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequence_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipeline_NoRegister();
	MOVIERENDERPIPELINECORE_API UEnum* Z_Construct_UEnum_MovieRenderPipelineCore_EMovieRenderShotState();
	MOVIERENDERPIPELINECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimecode();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimespan();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	MOVIERENDERPIPELINECORE_API UEnum* Z_Construct_UEnum_MovieRenderPipelineCore_EMovieRenderPipelineState();
// End Cross Module References
	DEFINE_FUNCTION(UMoviePipelineBlueprintLibrary::execGetCurrentShotFrameNumber)
	{
		P_GET_OBJECT(UMoviePipeline,Z_Param_InMoviePipeline);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFrameNumber*)Z_Param__Result=UMoviePipelineBlueprintLibrary::GetCurrentShotFrameNumber(Z_Param_InMoviePipeline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineBlueprintLibrary::execGetCurrentShotTimecode)
	{
		P_GET_OBJECT(UMoviePipeline,Z_Param_InMoviePipeline);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTimecode*)Z_Param__Result=UMoviePipelineBlueprintLibrary::GetCurrentShotTimecode(Z_Param_InMoviePipeline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineBlueprintLibrary::execGetMasterFrameNumber)
	{
		P_GET_OBJECT(UMoviePipeline,Z_Param_InMoviePipeline);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFrameNumber*)Z_Param__Result=UMoviePipelineBlueprintLibrary::GetMasterFrameNumber(Z_Param_InMoviePipeline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineBlueprintLibrary::execGetMasterTimecode)
	{
		P_GET_OBJECT(UMoviePipeline,Z_Param_InMoviePipeline);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTimecode*)Z_Param__Result=UMoviePipelineBlueprintLibrary::GetMasterTimecode(Z_Param_InMoviePipeline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineBlueprintLibrary::execGetEngineWarmUpFrameCount)
	{
		P_GET_OBJECT(UMoviePipeline,Z_Param_InMoviePipeline);
		P_GET_PROPERTY(FIntProperty,Z_Param_InSegmentIndex);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutCurrentIndex);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutTotalCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMoviePipelineBlueprintLibrary::GetEngineWarmUpFrameCount(Z_Param_InMoviePipeline,Z_Param_InSegmentIndex,Z_Param_Out_OutCurrentIndex,Z_Param_Out_OutTotalCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineBlueprintLibrary::execGetSubsampleCount)
	{
		P_GET_OBJECT(UMoviePipeline,Z_Param_InMoviePipeline);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutCurrentIndex);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutTotalCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMoviePipelineBlueprintLibrary::GetSubsampleCount(Z_Param_InMoviePipeline,Z_Param_Out_OutCurrentIndex,Z_Param_Out_OutTotalCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineBlueprintLibrary::execGetCompletionPercentage)
	{
		P_GET_OBJECT(UMoviePipeline,Z_Param_InPipeline);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UMoviePipelineBlueprintLibrary::GetCompletionPercentage(Z_Param_InPipeline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineBlueprintLibrary::execGetTotalSampleCount)
	{
		P_GET_OBJECT(UMoviePipeline,Z_Param_InMoviePipeline);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UMoviePipelineBlueprintLibrary::GetTotalSampleCount(Z_Param_InMoviePipeline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineBlueprintLibrary::execGetCurrentSegmentWorkMetrics)
	{
		P_GET_OBJECT(UMoviePipeline,Z_Param_InMoviePipeline);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMoviePipelineSegmentWorkMetrics*)Z_Param__Result=UMoviePipelineBlueprintLibrary::GetCurrentSegmentWorkMetrics(Z_Param_InMoviePipeline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineBlueprintLibrary::execGetOverallSegmentCounts)
	{
		P_GET_OBJECT(UMoviePipeline,Z_Param_InMoviePipeline);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutCurrentIndex);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutTotalCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMoviePipelineBlueprintLibrary::GetOverallSegmentCounts(Z_Param_InMoviePipeline,Z_Param_Out_OutCurrentIndex,Z_Param_Out_OutTotalCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineBlueprintLibrary::execGetCurrentSegmentName)
	{
		P_GET_OBJECT(UMoviePipeline,Z_Param_InMoviePipeline);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UMoviePipelineBlueprintLibrary::GetCurrentSegmentName(Z_Param_InMoviePipeline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineBlueprintLibrary::execGetOverallOutputFrames)
	{
		P_GET_OBJECT(UMoviePipeline,Z_Param_InMoviePipeline);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutCurrentIndex);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutTotalCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMoviePipelineBlueprintLibrary::GetOverallOutputFrames(Z_Param_InMoviePipeline,Z_Param_Out_OutCurrentIndex,Z_Param_Out_OutTotalCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineBlueprintLibrary::execGetJobAuthor)
	{
		P_GET_OBJECT(UMoviePipeline,Z_Param_InMoviePipeline);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UMoviePipelineBlueprintLibrary::GetJobAuthor(Z_Param_InMoviePipeline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineBlueprintLibrary::execGetJobName)
	{
		P_GET_OBJECT(UMoviePipeline,Z_Param_InMoviePipeline);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UMoviePipelineBlueprintLibrary::GetJobName(Z_Param_InMoviePipeline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineBlueprintLibrary::execGetCurrentSegmentState)
	{
		P_GET_OBJECT(UMoviePipeline,Z_Param_InMoviePipeline);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EMovieRenderShotState*)Z_Param__Result=UMoviePipelineBlueprintLibrary::GetCurrentSegmentState(Z_Param_InMoviePipeline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineBlueprintLibrary::execGetPipelineState)
	{
		P_GET_OBJECT(UMoviePipeline,Z_Param_InPipeline);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EMovieRenderPipelineState*)Z_Param__Result=UMoviePipelineBlueprintLibrary::GetPipelineState(Z_Param_InPipeline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineBlueprintLibrary::execGetJobInitializationTime)
	{
		P_GET_OBJECT(UMoviePipeline,Z_Param_InMoviePipeline);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDateTime*)Z_Param__Result=UMoviePipelineBlueprintLibrary::GetJobInitializationTime(Z_Param_InMoviePipeline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineBlueprintLibrary::execGetEstimatedTimeRemaining)
	{
		P_GET_OBJECT(UMoviePipeline,Z_Param_InPipeline);
		P_GET_STRUCT_REF(FTimespan,Z_Param_Out_OutEstimate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMoviePipelineBlueprintLibrary::GetEstimatedTimeRemaining(Z_Param_InPipeline,Z_Param_Out_OutEstimate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineBlueprintLibrary::execDuplicateSequence)
	{
		P_GET_OBJECT(UObject,Z_Param_Outer);
		P_GET_OBJECT(UMovieSceneSequence,Z_Param_InSequence);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMovieSceneSequence**)Z_Param__Result=UMoviePipelineBlueprintLibrary::DuplicateSequence(Z_Param_Outer,Z_Param_InSequence);
		P_NATIVE_END;
	}
	void UMoviePipelineBlueprintLibrary::StaticRegisterNativesUMoviePipelineBlueprintLibrary()
	{
		UClass* Class = UMoviePipelineBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DuplicateSequence", &UMoviePipelineBlueprintLibrary::execDuplicateSequence },
			{ "GetCompletionPercentage", &UMoviePipelineBlueprintLibrary::execGetCompletionPercentage },
			{ "GetCurrentSegmentName", &UMoviePipelineBlueprintLibrary::execGetCurrentSegmentName },
			{ "GetCurrentSegmentState", &UMoviePipelineBlueprintLibrary::execGetCurrentSegmentState },
			{ "GetCurrentSegmentWorkMetrics", &UMoviePipelineBlueprintLibrary::execGetCurrentSegmentWorkMetrics },
			{ "GetCurrentShotFrameNumber", &UMoviePipelineBlueprintLibrary::execGetCurrentShotFrameNumber },
			{ "GetCurrentShotTimecode", &UMoviePipelineBlueprintLibrary::execGetCurrentShotTimecode },
			{ "GetEngineWarmUpFrameCount", &UMoviePipelineBlueprintLibrary::execGetEngineWarmUpFrameCount },
			{ "GetEstimatedTimeRemaining", &UMoviePipelineBlueprintLibrary::execGetEstimatedTimeRemaining },
			{ "GetJobAuthor", &UMoviePipelineBlueprintLibrary::execGetJobAuthor },
			{ "GetJobInitializationTime", &UMoviePipelineBlueprintLibrary::execGetJobInitializationTime },
			{ "GetJobName", &UMoviePipelineBlueprintLibrary::execGetJobName },
			{ "GetMasterFrameNumber", &UMoviePipelineBlueprintLibrary::execGetMasterFrameNumber },
			{ "GetMasterTimecode", &UMoviePipelineBlueprintLibrary::execGetMasterTimecode },
			{ "GetOverallOutputFrames", &UMoviePipelineBlueprintLibrary::execGetOverallOutputFrames },
			{ "GetOverallSegmentCounts", &UMoviePipelineBlueprintLibrary::execGetOverallSegmentCounts },
			{ "GetPipelineState", &UMoviePipelineBlueprintLibrary::execGetPipelineState },
			{ "GetSubsampleCount", &UMoviePipelineBlueprintLibrary::execGetSubsampleCount },
			{ "GetTotalSampleCount", &UMoviePipelineBlueprintLibrary::execGetTotalSampleCount },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_DuplicateSequence_Statics
	{
		struct MoviePipelineBlueprintLibrary_eventDuplicateSequence_Parms
		{
			UObject* Outer;
			UMovieSceneSequence* InSequence;
			UMovieSceneSequence* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InSequence;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Outer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_DuplicateSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventDuplicateSequence_Parms, ReturnValue), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_DuplicateSequence_Statics::NewProp_InSequence = { "InSequence", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventDuplicateSequence_Parms, InSequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_DuplicateSequence_Statics::NewProp_Outer = { "Outer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventDuplicateSequence_Parms, Outer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_DuplicateSequence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_DuplicateSequence_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_DuplicateSequence_Statics::NewProp_InSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_DuplicateSequence_Statics::NewProp_Outer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_DuplicateSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/**\n\x09* Duplicates the specified sequence using a medium depth copy. Standard duplication will only duplicate\n\x09* the top level Sequence (since shots and sub-sequences are other standalone assets) so this function\n\x09* recursively duplicates the given sequence, shot and subsequence and then fixes up the references to\n\x09* point to newly duplicated sequences.\n\x09*\n\x09* Use at your own risk. Some features may not work when duplicated (complex object binding arrangements,\n\x09* blueprint GetSequenceBinding nodes, etc.) but can be useful when wanting to create a bunch of variations\n\x09* with minor differences (such as swapping out an actor, track, etc.)\n\x09*\n\x09* This does not duplicate any assets that the sequence points to outside of Shots/Subsequences.\n\x09*\n\x09* @param\x09Outer\x09\x09- The Outer of the newly duplicated object. Leave null for TransientPackage();\n\x09* @param\x09InSequence\x09- The sequence to recursively duplicate.\n\x09* @return\x09\x09\x09\x09- The duplicated sequence, or null if no sequence was provided to duplicate.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineBlueprintLibrary.h" },
		{ "ToolTip", "Duplicates the specified sequence using a medium depth copy. Standard duplication will only duplicate\nthe top level Sequence (since shots and sub-sequences are other standalone assets) so this function\nrecursively duplicates the given sequence, shot and subsequence and then fixes up the references to\npoint to newly duplicated sequences.\n\nUse at your own risk. Some features may not work when duplicated (complex object binding arrangements,\nblueprint GetSequenceBinding nodes, etc.) but can be useful when wanting to create a bunch of variations\nwith minor differences (such as swapping out an actor, track, etc.)\n\nThis does not duplicate any assets that the sequence points to outside of Shots/Subsequences.\n\n@param        Outer           - The Outer of the newly duplicated object. Leave null for TransientPackage();\n@param        InSequence      - The sequence to recursively duplicate.\n@return                               - The duplicated sequence, or null if no sequence was provided to duplicate." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_DuplicateSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineBlueprintLibrary, nullptr, "DuplicateSequence", nullptr, nullptr, sizeof(MoviePipelineBlueprintLibrary_eventDuplicateSequence_Parms), Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_DuplicateSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_DuplicateSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_DuplicateSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_DuplicateSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_DuplicateSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_DuplicateSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCompletionPercentage_Statics
	{
		struct MoviePipelineBlueprintLibrary_eventGetCompletionPercentage_Parms
		{
			const UMoviePipeline* InPipeline;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPipeline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InPipeline;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCompletionPercentage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetCompletionPercentage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCompletionPercentage_Statics::NewProp_InPipeline_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCompletionPercentage_Statics::NewProp_InPipeline = { "InPipeline", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetCompletionPercentage_Parms, InPipeline), Z_Construct_UClass_UMoviePipeline_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCompletionPercentage_Statics::NewProp_InPipeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCompletionPercentage_Statics::NewProp_InPipeline_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCompletionPercentage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCompletionPercentage_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCompletionPercentage_Statics::NewProp_InPipeline,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCompletionPercentage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "// same as above but just 0-1\n" },
		{ "ModuleRelativePath", "Public/MoviePipelineBlueprintLibrary.h" },
		{ "ToolTip", "same as above but just 0-1" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCompletionPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineBlueprintLibrary, nullptr, "GetCompletionPercentage", nullptr, nullptr, sizeof(MoviePipelineBlueprintLibrary_eventGetCompletionPercentage_Parms), Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCompletionPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCompletionPercentage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCompletionPercentage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCompletionPercentage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCompletionPercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCompletionPercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentName_Statics
	{
		struct MoviePipelineBlueprintLibrary_eventGetCurrentSegmentName_Parms
		{
			UMoviePipeline* InMoviePipeline;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InMoviePipeline;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetCurrentSegmentName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentName_Statics::NewProp_InMoviePipeline = { "InMoviePipeline", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetCurrentSegmentName_Parms, InMoviePipeline), Z_Construct_UClass_UMoviePipeline_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentName_Statics::NewProp_InMoviePipeline,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "ModuleRelativePath", "Public/MoviePipelineBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineBlueprintLibrary, nullptr, "GetCurrentSegmentName", nullptr, nullptr, sizeof(MoviePipelineBlueprintLibrary_eventGetCurrentSegmentName_Parms), Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentState_Statics
	{
		struct MoviePipelineBlueprintLibrary_eventGetCurrentSegmentState_Parms
		{
			UMoviePipeline* InMoviePipeline;
			EMovieRenderShotState ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InMoviePipeline;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetCurrentSegmentState_Parms, ReturnValue), Z_Construct_UEnum_MovieRenderPipelineCore_EMovieRenderShotState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentState_Statics::NewProp_InMoviePipeline = { "InMoviePipeline", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetCurrentSegmentState_Parms, InMoviePipeline), Z_Construct_UClass_UMoviePipeline_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentState_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentState_Statics::NewProp_InMoviePipeline,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "ModuleRelativePath", "Public/MoviePipelineBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineBlueprintLibrary, nullptr, "GetCurrentSegmentState", nullptr, nullptr, sizeof(MoviePipelineBlueprintLibrary_eventGetCurrentSegmentState_Parms), Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentWorkMetrics_Statics
	{
		struct MoviePipelineBlueprintLibrary_eventGetCurrentSegmentWorkMetrics_Parms
		{
			const UMoviePipeline* InMoviePipeline;
			FMoviePipelineSegmentWorkMetrics ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InMoviePipeline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InMoviePipeline;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentWorkMetrics_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetCurrentSegmentWorkMetrics_Parms, ReturnValue), Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentWorkMetrics_Statics::NewProp_InMoviePipeline_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentWorkMetrics_Statics::NewProp_InMoviePipeline = { "InMoviePipeline", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetCurrentSegmentWorkMetrics_Parms, InMoviePipeline), Z_Construct_UClass_UMoviePipeline_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentWorkMetrics_Statics::NewProp_InMoviePipeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentWorkMetrics_Statics::NewProp_InMoviePipeline_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentWorkMetrics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentWorkMetrics_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentWorkMetrics_Statics::NewProp_InMoviePipeline,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentWorkMetrics_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "ModuleRelativePath", "Public/MoviePipelineBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentWorkMetrics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineBlueprintLibrary, nullptr, "GetCurrentSegmentWorkMetrics", nullptr, nullptr, sizeof(MoviePipelineBlueprintLibrary_eventGetCurrentSegmentWorkMetrics_Parms), Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentWorkMetrics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentWorkMetrics_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentWorkMetrics_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentWorkMetrics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentWorkMetrics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentWorkMetrics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentShotFrameNumber_Statics
	{
		struct MoviePipelineBlueprintLibrary_eventGetCurrentShotFrameNumber_Parms
		{
			const UMoviePipeline* InMoviePipeline;
			FFrameNumber ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InMoviePipeline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InMoviePipeline;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentShotFrameNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetCurrentShotFrameNumber_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentShotFrameNumber_Statics::NewProp_InMoviePipeline_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentShotFrameNumber_Statics::NewProp_InMoviePipeline = { "InMoviePipeline", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetCurrentShotFrameNumber_Parms, InMoviePipeline), Z_Construct_UClass_UMoviePipeline_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentShotFrameNumber_Statics::NewProp_InMoviePipeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentShotFrameNumber_Statics::NewProp_InMoviePipeline_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentShotFrameNumber_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentShotFrameNumber_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentShotFrameNumber_Statics::NewProp_InMoviePipeline,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentShotFrameNumber_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "ModuleRelativePath", "Public/MoviePipelineBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentShotFrameNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineBlueprintLibrary, nullptr, "GetCurrentShotFrameNumber", nullptr, nullptr, sizeof(MoviePipelineBlueprintLibrary_eventGetCurrentShotFrameNumber_Parms), Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentShotFrameNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentShotFrameNumber_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentShotFrameNumber_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentShotFrameNumber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentShotFrameNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentShotFrameNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentShotTimecode_Statics
	{
		struct FTimecode
		{
			int32 Hours;
			int32 Minutes;
			int32 Seconds;
			int32 Frames;
			bool bDropFrameFormat;
		};

		struct MoviePipelineBlueprintLibrary_eventGetCurrentShotTimecode_Parms
		{
			const UMoviePipeline* InMoviePipeline;
			FTimecode ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InMoviePipeline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InMoviePipeline;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentShotTimecode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetCurrentShotTimecode_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimecode, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentShotTimecode_Statics::NewProp_InMoviePipeline_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentShotTimecode_Statics::NewProp_InMoviePipeline = { "InMoviePipeline", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetCurrentShotTimecode_Parms, InMoviePipeline), Z_Construct_UClass_UMoviePipeline_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentShotTimecode_Statics::NewProp_InMoviePipeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentShotTimecode_Statics::NewProp_InMoviePipeline_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentShotTimecode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentShotTimecode_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentShotTimecode_Statics::NewProp_InMoviePipeline,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentShotTimecode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "ModuleRelativePath", "Public/MoviePipelineBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentShotTimecode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineBlueprintLibrary, nullptr, "GetCurrentShotTimecode", nullptr, nullptr, sizeof(MoviePipelineBlueprintLibrary_eventGetCurrentShotTimecode_Parms), Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentShotTimecode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentShotTimecode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentShotTimecode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentShotTimecode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentShotTimecode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentShotTimecode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEngineWarmUpFrameCount_Statics
	{
		struct MoviePipelineBlueprintLibrary_eventGetEngineWarmUpFrameCount_Parms
		{
			const UMoviePipeline* InMoviePipeline;
			int32 InSegmentIndex;
			int32 OutCurrentIndex;
			int32 OutTotalCount;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutTotalCount;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutCurrentIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSegmentIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InSegmentIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InMoviePipeline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InMoviePipeline;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEngineWarmUpFrameCount_Statics::NewProp_OutTotalCount = { "OutTotalCount", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetEngineWarmUpFrameCount_Parms, OutTotalCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEngineWarmUpFrameCount_Statics::NewProp_OutCurrentIndex = { "OutCurrentIndex", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetEngineWarmUpFrameCount_Parms, OutCurrentIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEngineWarmUpFrameCount_Statics::NewProp_InSegmentIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEngineWarmUpFrameCount_Statics::NewProp_InSegmentIndex = { "InSegmentIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetEngineWarmUpFrameCount_Parms, InSegmentIndex), METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEngineWarmUpFrameCount_Statics::NewProp_InSegmentIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEngineWarmUpFrameCount_Statics::NewProp_InSegmentIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEngineWarmUpFrameCount_Statics::NewProp_InMoviePipeline_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEngineWarmUpFrameCount_Statics::NewProp_InMoviePipeline = { "InMoviePipeline", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetEngineWarmUpFrameCount_Parms, InMoviePipeline), Z_Construct_UClass_UMoviePipeline_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEngineWarmUpFrameCount_Statics::NewProp_InMoviePipeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEngineWarmUpFrameCount_Statics::NewProp_InMoviePipeline_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEngineWarmUpFrameCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEngineWarmUpFrameCount_Statics::NewProp_OutTotalCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEngineWarmUpFrameCount_Statics::NewProp_OutCurrentIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEngineWarmUpFrameCount_Statics::NewProp_InSegmentIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEngineWarmUpFrameCount_Statics::NewProp_InMoviePipeline,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEngineWarmUpFrameCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "ModuleRelativePath", "Public/MoviePipelineBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEngineWarmUpFrameCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineBlueprintLibrary, nullptr, "GetEngineWarmUpFrameCount", nullptr, nullptr, sizeof(MoviePipelineBlueprintLibrary_eventGetEngineWarmUpFrameCount_Parms), Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEngineWarmUpFrameCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEngineWarmUpFrameCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEngineWarmUpFrameCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEngineWarmUpFrameCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEngineWarmUpFrameCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEngineWarmUpFrameCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEstimatedTimeRemaining_Statics
	{
		struct MoviePipelineBlueprintLibrary_eventGetEstimatedTimeRemaining_Parms
		{
			const UMoviePipeline* InPipeline;
			FTimespan OutEstimate;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutEstimate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPipeline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InPipeline;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEstimatedTimeRemaining_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MoviePipelineBlueprintLibrary_eventGetEstimatedTimeRemaining_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEstimatedTimeRemaining_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MoviePipelineBlueprintLibrary_eventGetEstimatedTimeRemaining_Parms), &Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEstimatedTimeRemaining_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEstimatedTimeRemaining_Statics::NewProp_OutEstimate = { "OutEstimate", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetEstimatedTimeRemaining_Parms, OutEstimate), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEstimatedTimeRemaining_Statics::NewProp_InPipeline_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEstimatedTimeRemaining_Statics::NewProp_InPipeline = { "InPipeline", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetEstimatedTimeRemaining_Parms, InPipeline), Z_Construct_UClass_UMoviePipeline_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEstimatedTimeRemaining_Statics::NewProp_InPipeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEstimatedTimeRemaining_Statics::NewProp_InPipeline_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEstimatedTimeRemaining_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEstimatedTimeRemaining_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEstimatedTimeRemaining_Statics::NewProp_OutEstimate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEstimatedTimeRemaining_Statics::NewProp_InPipeline,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEstimatedTimeRemaining_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/**\n\x09* Get the estimated amount of time remaining for the current pipeline. Based on looking at the total\n\x09* amount of samples to render vs. how many have been completed so far. Inaccurate when Time Dilation\n\x09* is used, and gets more accurate over the course of the render.\n\x09*\n\x09* @param\x09InPipeline\x09The pipeline to get the time estimate from.\n\x09* @param\x09OutEstimate\x09The resulting estimate, or FTimespan() if estimate is not valid.\n\x09* @return\x09\x09\x09\x09True if a valid estimate can be calculated, or false if it is not ready yet (ie: not enough samples rendered)\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineBlueprintLibrary.h" },
		{ "ToolTip", "Get the estimated amount of time remaining for the current pipeline. Based on looking at the total\namount of samples to render vs. how many have been completed so far. Inaccurate when Time Dilation\nis used, and gets more accurate over the course of the render.\n\n@param        InPipeline      The pipeline to get the time estimate from.\n@param        OutEstimate     The resulting estimate, or FTimespan() if estimate is not valid.\n@return                               True if a valid estimate can be calculated, or false if it is not ready yet (ie: not enough samples rendered)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEstimatedTimeRemaining_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineBlueprintLibrary, nullptr, "GetEstimatedTimeRemaining", nullptr, nullptr, sizeof(MoviePipelineBlueprintLibrary_eventGetEstimatedTimeRemaining_Parms), Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEstimatedTimeRemaining_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEstimatedTimeRemaining_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEstimatedTimeRemaining_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEstimatedTimeRemaining_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEstimatedTimeRemaining()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEstimatedTimeRemaining_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobAuthor_Statics
	{
		struct MoviePipelineBlueprintLibrary_eventGetJobAuthor_Parms
		{
			UMoviePipeline* InMoviePipeline;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InMoviePipeline;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobAuthor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetJobAuthor_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobAuthor_Statics::NewProp_InMoviePipeline = { "InMoviePipeline", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetJobAuthor_Parms, InMoviePipeline), Z_Construct_UClass_UMoviePipeline_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobAuthor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobAuthor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobAuthor_Statics::NewProp_InMoviePipeline,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobAuthor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "ModuleRelativePath", "Public/MoviePipelineBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobAuthor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineBlueprintLibrary, nullptr, "GetJobAuthor", nullptr, nullptr, sizeof(MoviePipelineBlueprintLibrary_eventGetJobAuthor_Parms), Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobAuthor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobAuthor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobAuthor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobAuthor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobAuthor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobAuthor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobInitializationTime_Statics
	{
		struct MoviePipelineBlueprintLibrary_eventGetJobInitializationTime_Parms
		{
			const UMoviePipeline* InMoviePipeline;
			FDateTime ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InMoviePipeline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InMoviePipeline;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobInitializationTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetJobInitializationTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobInitializationTime_Statics::NewProp_InMoviePipeline_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobInitializationTime_Statics::NewProp_InMoviePipeline = { "InMoviePipeline", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetJobInitializationTime_Parms, InMoviePipeline), Z_Construct_UClass_UMoviePipeline_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobInitializationTime_Statics::NewProp_InMoviePipeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobInitializationTime_Statics::NewProp_InMoviePipeline_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobInitializationTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobInitializationTime_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobInitializationTime_Statics::NewProp_InMoviePipeline,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobInitializationTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "ModuleRelativePath", "Public/MoviePipelineBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobInitializationTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineBlueprintLibrary, nullptr, "GetJobInitializationTime", nullptr, nullptr, sizeof(MoviePipelineBlueprintLibrary_eventGetJobInitializationTime_Parms), Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobInitializationTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobInitializationTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobInitializationTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobInitializationTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobInitializationTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobInitializationTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobName_Statics
	{
		struct MoviePipelineBlueprintLibrary_eventGetJobName_Parms
		{
			UMoviePipeline* InMoviePipeline;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InMoviePipeline;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetJobName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobName_Statics::NewProp_InMoviePipeline = { "InMoviePipeline", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetJobName_Parms, InMoviePipeline), Z_Construct_UClass_UMoviePipeline_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobName_Statics::NewProp_InMoviePipeline,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "ModuleRelativePath", "Public/MoviePipelineBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineBlueprintLibrary, nullptr, "GetJobName", nullptr, nullptr, sizeof(MoviePipelineBlueprintLibrary_eventGetJobName_Parms), Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMasterFrameNumber_Statics
	{
		struct MoviePipelineBlueprintLibrary_eventGetMasterFrameNumber_Parms
		{
			const UMoviePipeline* InMoviePipeline;
			FFrameNumber ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InMoviePipeline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InMoviePipeline;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMasterFrameNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetMasterFrameNumber_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMasterFrameNumber_Statics::NewProp_InMoviePipeline_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMasterFrameNumber_Statics::NewProp_InMoviePipeline = { "InMoviePipeline", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetMasterFrameNumber_Parms, InMoviePipeline), Z_Construct_UClass_UMoviePipeline_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMasterFrameNumber_Statics::NewProp_InMoviePipeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMasterFrameNumber_Statics::NewProp_InMoviePipeline_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMasterFrameNumber_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMasterFrameNumber_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMasterFrameNumber_Statics::NewProp_InMoviePipeline,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMasterFrameNumber_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "ModuleRelativePath", "Public/MoviePipelineBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMasterFrameNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineBlueprintLibrary, nullptr, "GetMasterFrameNumber", nullptr, nullptr, sizeof(MoviePipelineBlueprintLibrary_eventGetMasterFrameNumber_Parms), Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMasterFrameNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMasterFrameNumber_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMasterFrameNumber_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMasterFrameNumber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMasterFrameNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMasterFrameNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMasterTimecode_Statics
	{
		struct FTimecode
		{
			int32 Hours;
			int32 Minutes;
			int32 Seconds;
			int32 Frames;
			bool bDropFrameFormat;
		};

		struct MoviePipelineBlueprintLibrary_eventGetMasterTimecode_Parms
		{
			const UMoviePipeline* InMoviePipeline;
			FTimecode ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InMoviePipeline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InMoviePipeline;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMasterTimecode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetMasterTimecode_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimecode, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMasterTimecode_Statics::NewProp_InMoviePipeline_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMasterTimecode_Statics::NewProp_InMoviePipeline = { "InMoviePipeline", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetMasterTimecode_Parms, InMoviePipeline), Z_Construct_UClass_UMoviePipeline_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMasterTimecode_Statics::NewProp_InMoviePipeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMasterTimecode_Statics::NewProp_InMoviePipeline_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMasterTimecode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMasterTimecode_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMasterTimecode_Statics::NewProp_InMoviePipeline,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMasterTimecode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "ModuleRelativePath", "Public/MoviePipelineBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMasterTimecode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineBlueprintLibrary, nullptr, "GetMasterTimecode", nullptr, nullptr, sizeof(MoviePipelineBlueprintLibrary_eventGetMasterTimecode_Parms), Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMasterTimecode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMasterTimecode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMasterTimecode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMasterTimecode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMasterTimecode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMasterTimecode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallOutputFrames_Statics
	{
		struct MoviePipelineBlueprintLibrary_eventGetOverallOutputFrames_Parms
		{
			const UMoviePipeline* InMoviePipeline;
			int32 OutCurrentIndex;
			int32 OutTotalCount;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutTotalCount;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutCurrentIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InMoviePipeline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InMoviePipeline;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallOutputFrames_Statics::NewProp_OutTotalCount = { "OutTotalCount", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetOverallOutputFrames_Parms, OutTotalCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallOutputFrames_Statics::NewProp_OutCurrentIndex = { "OutCurrentIndex", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetOverallOutputFrames_Parms, OutCurrentIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallOutputFrames_Statics::NewProp_InMoviePipeline_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallOutputFrames_Statics::NewProp_InMoviePipeline = { "InMoviePipeline", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetOverallOutputFrames_Parms, InMoviePipeline), Z_Construct_UClass_UMoviePipeline_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallOutputFrames_Statics::NewProp_InMoviePipeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallOutputFrames_Statics::NewProp_InMoviePipeline_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallOutputFrames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallOutputFrames_Statics::NewProp_OutTotalCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallOutputFrames_Statics::NewProp_OutCurrentIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallOutputFrames_Statics::NewProp_InMoviePipeline,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallOutputFrames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "ModuleRelativePath", "Public/MoviePipelineBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallOutputFrames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineBlueprintLibrary, nullptr, "GetOverallOutputFrames", nullptr, nullptr, sizeof(MoviePipelineBlueprintLibrary_eventGetOverallOutputFrames_Parms), Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallOutputFrames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallOutputFrames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallOutputFrames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallOutputFrames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallOutputFrames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallOutputFrames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallSegmentCounts_Statics
	{
		struct MoviePipelineBlueprintLibrary_eventGetOverallSegmentCounts_Parms
		{
			const UMoviePipeline* InMoviePipeline;
			int32 OutCurrentIndex;
			int32 OutTotalCount;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutTotalCount;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutCurrentIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InMoviePipeline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InMoviePipeline;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallSegmentCounts_Statics::NewProp_OutTotalCount = { "OutTotalCount", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetOverallSegmentCounts_Parms, OutTotalCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallSegmentCounts_Statics::NewProp_OutCurrentIndex = { "OutCurrentIndex", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetOverallSegmentCounts_Parms, OutCurrentIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallSegmentCounts_Statics::NewProp_InMoviePipeline_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallSegmentCounts_Statics::NewProp_InMoviePipeline = { "InMoviePipeline", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetOverallSegmentCounts_Parms, InMoviePipeline), Z_Construct_UClass_UMoviePipeline_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallSegmentCounts_Statics::NewProp_InMoviePipeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallSegmentCounts_Statics::NewProp_InMoviePipeline_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallSegmentCounts_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallSegmentCounts_Statics::NewProp_OutTotalCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallSegmentCounts_Statics::NewProp_OutCurrentIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallSegmentCounts_Statics::NewProp_InMoviePipeline,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallSegmentCounts_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "ModuleRelativePath", "Public/MoviePipelineBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallSegmentCounts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineBlueprintLibrary, nullptr, "GetOverallSegmentCounts", nullptr, nullptr, sizeof(MoviePipelineBlueprintLibrary_eventGetOverallSegmentCounts_Parms), Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallSegmentCounts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallSegmentCounts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallSegmentCounts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallSegmentCounts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallSegmentCounts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallSegmentCounts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetPipelineState_Statics
	{
		struct MoviePipelineBlueprintLibrary_eventGetPipelineState_Parms
		{
			const UMoviePipeline* InPipeline;
			EMovieRenderPipelineState ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPipeline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InPipeline;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetPipelineState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetPipelineState_Parms, ReturnValue), Z_Construct_UEnum_MovieRenderPipelineCore_EMovieRenderPipelineState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetPipelineState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetPipelineState_Statics::NewProp_InPipeline_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetPipelineState_Statics::NewProp_InPipeline = { "InPipeline", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetPipelineState_Parms, InPipeline), Z_Construct_UClass_UMoviePipeline_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetPipelineState_Statics::NewProp_InPipeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetPipelineState_Statics::NewProp_InPipeline_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetPipelineState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetPipelineState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetPipelineState_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetPipelineState_Statics::NewProp_InPipeline,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetPipelineState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/**\n\x09* Get the current state of the specified Pipeline. See EMovieRenderPipelineState for more detail about each state.\n\x09*\n\x09* @param\x09InPipeline\x09The pipeline to get the state for.\n\x09* @return\x09\x09\x09\x09""Current State.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineBlueprintLibrary.h" },
		{ "ToolTip", "Get the current state of the specified Pipeline. See EMovieRenderPipelineState for more detail about each state.\n\n@param        InPipeline      The pipeline to get the state for.\n@return                               Current State." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetPipelineState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineBlueprintLibrary, nullptr, "GetPipelineState", nullptr, nullptr, sizeof(MoviePipelineBlueprintLibrary_eventGetPipelineState_Parms), Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetPipelineState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetPipelineState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetPipelineState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetPipelineState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetPipelineState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetPipelineState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetSubsampleCount_Statics
	{
		struct MoviePipelineBlueprintLibrary_eventGetSubsampleCount_Parms
		{
			const UMoviePipeline* InMoviePipeline;
			int32 OutCurrentIndex;
			int32 OutTotalCount;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutTotalCount;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutCurrentIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InMoviePipeline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InMoviePipeline;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetSubsampleCount_Statics::NewProp_OutTotalCount = { "OutTotalCount", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetSubsampleCount_Parms, OutTotalCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetSubsampleCount_Statics::NewProp_OutCurrentIndex = { "OutCurrentIndex", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetSubsampleCount_Parms, OutCurrentIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetSubsampleCount_Statics::NewProp_InMoviePipeline_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetSubsampleCount_Statics::NewProp_InMoviePipeline = { "InMoviePipeline", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetSubsampleCount_Parms, InMoviePipeline), Z_Construct_UClass_UMoviePipeline_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetSubsampleCount_Statics::NewProp_InMoviePipeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetSubsampleCount_Statics::NewProp_InMoviePipeline_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetSubsampleCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetSubsampleCount_Statics::NewProp_OutTotalCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetSubsampleCount_Statics::NewProp_OutCurrentIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetSubsampleCount_Statics::NewProp_InMoviePipeline,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetSubsampleCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "ModuleRelativePath", "Public/MoviePipelineBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetSubsampleCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineBlueprintLibrary, nullptr, "GetSubsampleCount", nullptr, nullptr, sizeof(MoviePipelineBlueprintLibrary_eventGetSubsampleCount_Parms), Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetSubsampleCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetSubsampleCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetSubsampleCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetSubsampleCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetSubsampleCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetSubsampleCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetTotalSampleCount_Statics
	{
		struct MoviePipelineBlueprintLibrary_eventGetTotalSampleCount_Parms
		{
			const UMoviePipeline* InMoviePipeline;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InMoviePipeline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InMoviePipeline;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetTotalSampleCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetTotalSampleCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetTotalSampleCount_Statics::NewProp_InMoviePipeline_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetTotalSampleCount_Statics::NewProp_InMoviePipeline = { "InMoviePipeline", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetTotalSampleCount_Parms, InMoviePipeline), Z_Construct_UClass_UMoviePipeline_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetTotalSampleCount_Statics::NewProp_InMoviePipeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetTotalSampleCount_Statics::NewProp_InMoviePipeline_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetTotalSampleCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetTotalSampleCount_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetTotalSampleCount_Statics::NewProp_InMoviePipeline,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetTotalSampleCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "// The most accurate way to determine 0-1 progress as it looks at the total number of samples needing to be rendered\n" },
		{ "ModuleRelativePath", "Public/MoviePipelineBlueprintLibrary.h" },
		{ "ToolTip", "The most accurate way to determine 0-1 progress as it looks at the total number of samples needing to be rendered" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetTotalSampleCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineBlueprintLibrary, nullptr, "GetTotalSampleCount", nullptr, nullptr, sizeof(MoviePipelineBlueprintLibrary_eventGetTotalSampleCount_Parms), Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetTotalSampleCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetTotalSampleCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetTotalSampleCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetTotalSampleCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetTotalSampleCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetTotalSampleCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMoviePipelineBlueprintLibrary_NoRegister()
	{
		return UMoviePipelineBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelineBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelineBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMoviePipelineBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_DuplicateSequence, "DuplicateSequence" }, // 871411777
		{ &Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCompletionPercentage, "GetCompletionPercentage" }, // 3528244948
		{ &Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentName, "GetCurrentSegmentName" }, // 129367848
		{ &Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentState, "GetCurrentSegmentState" }, // 1602645775
		{ &Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentWorkMetrics, "GetCurrentSegmentWorkMetrics" }, // 2187854190
		{ &Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentShotFrameNumber, "GetCurrentShotFrameNumber" }, // 3044760372
		{ &Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentShotTimecode, "GetCurrentShotTimecode" }, // 1369395036
		{ &Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEngineWarmUpFrameCount, "GetEngineWarmUpFrameCount" }, // 3021476677
		{ &Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEstimatedTimeRemaining, "GetEstimatedTimeRemaining" }, // 2999408598
		{ &Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobAuthor, "GetJobAuthor" }, // 964065747
		{ &Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobInitializationTime, "GetJobInitializationTime" }, // 1224786041
		{ &Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobName, "GetJobName" }, // 2203547871
		{ &Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMasterFrameNumber, "GetMasterFrameNumber" }, // 2418929946
		{ &Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMasterTimecode, "GetMasterTimecode" }, // 2102124083
		{ &Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallOutputFrames, "GetOverallOutputFrames" }, // 1465872200
		{ &Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallSegmentCounts, "GetOverallSegmentCounts" }, // 348196713
		{ &Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetPipelineState, "GetPipelineState" }, // 493006606
		{ &Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetSubsampleCount, "GetSubsampleCount" }, // 3696162813
		{ &Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetTotalSampleCount, "GetTotalSampleCount" }, // 10438752
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MoviePipelineBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/MoviePipelineBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelineBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineBlueprintLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineBlueprintLibrary_Statics::ClassParams = {
		&UMoviePipelineBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoviePipelineBlueprintLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMoviePipelineBlueprintLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMoviePipelineBlueprintLibrary, 3169982066);
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMoviePipelineBlueprintLibrary>()
	{
		return UMoviePipelineBlueprintLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMoviePipelineBlueprintLibrary(Z_Construct_UClass_UMoviePipelineBlueprintLibrary, &UMoviePipelineBlueprintLibrary::StaticClass, TEXT("/Script/MovieRenderPipelineCore"), TEXT("UMoviePipelineBlueprintLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineBlueprintLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
