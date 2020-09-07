// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMoviePipeline;
struct FFrameNumber;
struct FTimecode;
struct FMoviePipelineSegmentWorkMetrics;
enum class EMovieRenderShotState : uint8;
enum class EMovieRenderPipelineState : uint8;
struct FDateTime;
struct FTimespan;
class UObject;
class UMovieSceneSequence;
#ifdef MOVIERENDERPIPELINECORE_MoviePipelineBlueprintLibrary_generated_h
#error "MoviePipelineBlueprintLibrary.generated.h already included, missing '#pragma once' in MoviePipelineBlueprintLibrary.h"
#endif
#define MOVIERENDERPIPELINECORE_MoviePipelineBlueprintLibrary_generated_h

#define HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineBlueprintLibrary_h_17_SPARSE_DATA
#define HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineBlueprintLibrary_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrentShotFrameNumber); \
	DECLARE_FUNCTION(execGetCurrentShotTimecode); \
	DECLARE_FUNCTION(execGetMasterFrameNumber); \
	DECLARE_FUNCTION(execGetMasterTimecode); \
	DECLARE_FUNCTION(execGetEngineWarmUpFrameCount); \
	DECLARE_FUNCTION(execGetSubsampleCount); \
	DECLARE_FUNCTION(execGetCompletionPercentage); \
	DECLARE_FUNCTION(execGetTotalSampleCount); \
	DECLARE_FUNCTION(execGetCurrentSegmentWorkMetrics); \
	DECLARE_FUNCTION(execGetOverallSegmentCounts); \
	DECLARE_FUNCTION(execGetCurrentSegmentName); \
	DECLARE_FUNCTION(execGetOverallOutputFrames); \
	DECLARE_FUNCTION(execGetJobAuthor); \
	DECLARE_FUNCTION(execGetJobName); \
	DECLARE_FUNCTION(execGetCurrentSegmentState); \
	DECLARE_FUNCTION(execGetPipelineState); \
	DECLARE_FUNCTION(execGetJobInitializationTime); \
	DECLARE_FUNCTION(execGetEstimatedTimeRemaining); \
	DECLARE_FUNCTION(execDuplicateSequence);


#define HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineBlueprintLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentShotFrameNumber); \
	DECLARE_FUNCTION(execGetCurrentShotTimecode); \
	DECLARE_FUNCTION(execGetMasterFrameNumber); \
	DECLARE_FUNCTION(execGetMasterTimecode); \
	DECLARE_FUNCTION(execGetEngineWarmUpFrameCount); \
	DECLARE_FUNCTION(execGetSubsampleCount); \
	DECLARE_FUNCTION(execGetCompletionPercentage); \
	DECLARE_FUNCTION(execGetTotalSampleCount); \
	DECLARE_FUNCTION(execGetCurrentSegmentWorkMetrics); \
	DECLARE_FUNCTION(execGetOverallSegmentCounts); \
	DECLARE_FUNCTION(execGetCurrentSegmentName); \
	DECLARE_FUNCTION(execGetOverallOutputFrames); \
	DECLARE_FUNCTION(execGetJobAuthor); \
	DECLARE_FUNCTION(execGetJobName); \
	DECLARE_FUNCTION(execGetCurrentSegmentState); \
	DECLARE_FUNCTION(execGetPipelineState); \
	DECLARE_FUNCTION(execGetJobInitializationTime); \
	DECLARE_FUNCTION(execGetEstimatedTimeRemaining); \
	DECLARE_FUNCTION(execDuplicateSequence);


#define HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineBlueprintLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoviePipelineBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UMoviePipelineBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UMoviePipelineBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), NO_API) \
	DECLARE_SERIALIZER(UMoviePipelineBlueprintLibrary)


#define HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineBlueprintLibrary_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUMoviePipelineBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UMoviePipelineBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UMoviePipelineBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), NO_API) \
	DECLARE_SERIALIZER(UMoviePipelineBlueprintLibrary)


#define HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineBlueprintLibrary_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMoviePipelineBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMoviePipelineBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoviePipelineBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePipelineBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMoviePipelineBlueprintLibrary(UMoviePipelineBlueprintLibrary&&); \
	NO_API UMoviePipelineBlueprintLibrary(const UMoviePipelineBlueprintLibrary&); \
public:


#define HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineBlueprintLibrary_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMoviePipelineBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMoviePipelineBlueprintLibrary(UMoviePipelineBlueprintLibrary&&); \
	NO_API UMoviePipelineBlueprintLibrary(const UMoviePipelineBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoviePipelineBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePipelineBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMoviePipelineBlueprintLibrary)


#define HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineBlueprintLibrary_h_17_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineBlueprintLibrary_h_14_PROLOG
#define HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineBlueprintLibrary_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineBlueprintLibrary_h_17_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineBlueprintLibrary_h_17_SPARSE_DATA \
	HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineBlueprintLibrary_h_17_RPC_WRAPPERS \
	HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineBlueprintLibrary_h_17_INCLASS \
	HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineBlueprintLibrary_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineBlueprintLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineBlueprintLibrary_h_17_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineBlueprintLibrary_h_17_SPARSE_DATA \
	HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineBlueprintLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineBlueprintLibrary_h_17_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineBlueprintLibrary_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<class UMoviePipelineBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS