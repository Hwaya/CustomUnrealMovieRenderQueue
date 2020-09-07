// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIERENDERPIPELINECORE_MovieRenderPipelineDataTypes_generated_h
#error "MovieRenderPipelineDataTypes.generated.h already included, missing '#pragma once' in MovieRenderPipelineDataTypes.h"
#endif
#define MOVIERENDERPIPELINECORE_MovieRenderPipelineDataTypes_generated_h

#define HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MovieRenderPipelineDataTypes_h_457_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMoviePipelineShotInfo_Statics; \
	MOVIERENDERPIPELINECORE_API static class UScriptStruct* StaticStruct();


template<> MOVIERENDERPIPELINECORE_API UScriptStruct* StaticStruct<struct FMoviePipelineShotInfo>();

#define HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MovieRenderPipelineDataTypes_h_349_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMoviePipelineCameraCutInfo_Statics; \
	MOVIERENDERPIPELINECORE_API static class UScriptStruct* StaticStruct();


template<> MOVIERENDERPIPELINECORE_API UScriptStruct* StaticStruct<struct FMoviePipelineCameraCutInfo>();

#define HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MovieRenderPipelineDataTypes_h_292_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics; \
	MOVIERENDERPIPELINECORE_API static class UScriptStruct* StaticStruct();


template<> MOVIERENDERPIPELINECORE_API UScriptStruct* StaticStruct<struct FMoviePipelineSegmentWorkMetrics>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MovieRenderPipelineDataTypes_h


#define FOREACH_ENUM_EMOVIEPIPELINESHUTTERTIMING(op) \
	op(EMoviePipelineShutterTiming::FrameOpen) \
	op(EMoviePipelineShutterTiming::FrameCenter) \
	op(EMoviePipelineShutterTiming::FrameClose) 

enum class EMoviePipelineShutterTiming : uint8;
template<> MOVIERENDERPIPELINECORE_API UEnum* StaticEnum<EMoviePipelineShutterTiming>();

#define FOREACH_ENUM_ESTEREOSTATE(op) \
	op(EStereoState::None) \
	op(EStereoState::Origin) \
	op(EStereoState::Left) \
	op(EStereoState::Right) 

enum class EStereoState : uint8;
template<> MOVIERENDERPIPELINECORE_API UEnum* StaticEnum<EStereoState>();

#define FOREACH_ENUM_EMOVIERENDERSHOTSTATE(op) \
	op(EMovieRenderShotState::Uninitialized) \
	op(EMovieRenderShotState::WarmingUp) \
	op(EMovieRenderShotState::MotionBlur) \
	op(EMovieRenderShotState::Rendering) \
	op(EMovieRenderShotState::Finished) 

enum class EMovieRenderShotState : uint8;
template<> MOVIERENDERPIPELINECORE_API UEnum* StaticEnum<EMovieRenderShotState>();

#define FOREACH_ENUM_EMOVIERENDERPIPELINESTATE(op) \
	op(EMovieRenderPipelineState::Uninitialized) \
	op(EMovieRenderPipelineState::ProducingFrames) \
	op(EMovieRenderPipelineState::Finalize) \
	op(EMovieRenderPipelineState::Export) \
	op(EMovieRenderPipelineState::Finished) 

enum class EMovieRenderPipelineState : uint8;
template<> MOVIERENDERPIPELINECORE_API UEnum* StaticEnum<EMovieRenderPipelineState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
