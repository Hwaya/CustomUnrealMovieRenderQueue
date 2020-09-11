// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture;
class UMoviePipelineMasterConfig;
#ifdef MOVIERENDERPIPELINECORE_MoviePipeline_generated_h
#error "MoviePipeline.generated.h already included, missing '#pragma once' in MoviePipeline.h"
#endif
#define MOVIERENDERPIPELINECORE_MoviePipeline_generated_h

#define HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_36_SPARSE_DATA
#define HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_36_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPreviewTexture); \
	DECLARE_FUNCTION(execGetPipelineMasterConfig);


#define HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPreviewTexture); \
	DECLARE_FUNCTION(execGetPipelineMasterConfig);


#define HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoviePipeline(); \
	friend struct Z_Construct_UClass_UMoviePipeline_Statics; \
public: \
	DECLARE_CLASS(UMoviePipeline, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), NO_API) \
	DECLARE_SERIALIZER(UMoviePipeline)


#define HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_36_INCLASS \
private: \
	static void StaticRegisterNativesUMoviePipeline(); \
	friend struct Z_Construct_UClass_UMoviePipeline_Statics; \
public: \
	DECLARE_CLASS(UMoviePipeline, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), NO_API) \
	DECLARE_SERIALIZER(UMoviePipeline)


#define HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMoviePipeline(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMoviePipeline) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoviePipeline); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePipeline); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMoviePipeline(UMoviePipeline&&); \
	NO_API UMoviePipeline(const UMoviePipeline&); \
public:


#define HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_36_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMoviePipeline(UMoviePipeline&&); \
	NO_API UMoviePipeline(const UMoviePipeline&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoviePipeline); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePipeline); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMoviePipeline)


#define HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_36_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CustomTimeStep() { return STRUCT_OFFSET(UMoviePipeline, CustomTimeStep); } \
	FORCEINLINE static uint32 __PPO__CachedPrevCustomTimeStep() { return STRUCT_OFFSET(UMoviePipeline, CachedPrevCustomTimeStep); } \
	FORCEINLINE static uint32 __PPO__TargetSequence() { return STRUCT_OFFSET(UMoviePipeline, TargetSequence); } \
	FORCEINLINE static uint32 __PPO__LevelSequenceActor() { return STRUCT_OFFSET(UMoviePipeline, LevelSequenceActor); } \
	FORCEINLINE static uint32 __PPO__DebugWidget() { return STRUCT_OFFSET(UMoviePipeline, DebugWidget); } \
	FORCEINLINE static uint32 __PPO__PreviewTexture() { return STRUCT_OFFSET(UMoviePipeline, PreviewTexture); } \
	FORCEINLINE static uint32 __PPO__CurrentJob() { return STRUCT_OFFSET(UMoviePipeline, CurrentJob); }


#define HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_33_PROLOG
#define HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_36_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_36_SPARSE_DATA \
	HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_36_RPC_WRAPPERS \
	HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_36_INCLASS \
	HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_36_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_36_SPARSE_DATA \
	HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_36_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<class UMoviePipeline>();

#define HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_386_SPARSE_DATA
#define HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_386_RPC_WRAPPERS
#define HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_386_RPC_WRAPPERS_NO_PURE_DECLS
#define HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_386_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoviePipelineCustomTimeStep(); \
	friend struct Z_Construct_UClass_UMoviePipelineCustomTimeStep_Statics; \
public: \
	DECLARE_CLASS(UMoviePipelineCustomTimeStep, UEngineCustomTimeStep, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), NO_API) \
	DECLARE_SERIALIZER(UMoviePipelineCustomTimeStep)


#define HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_386_INCLASS \
private: \
	static void StaticRegisterNativesUMoviePipelineCustomTimeStep(); \
	friend struct Z_Construct_UClass_UMoviePipelineCustomTimeStep_Statics; \
public: \
	DECLARE_CLASS(UMoviePipelineCustomTimeStep, UEngineCustomTimeStep, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), NO_API) \
	DECLARE_SERIALIZER(UMoviePipelineCustomTimeStep)


#define HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_386_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMoviePipelineCustomTimeStep(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMoviePipelineCustomTimeStep) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoviePipelineCustomTimeStep); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePipelineCustomTimeStep); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMoviePipelineCustomTimeStep(UMoviePipelineCustomTimeStep&&); \
	NO_API UMoviePipelineCustomTimeStep(const UMoviePipelineCustomTimeStep&); \
public:


#define HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_386_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMoviePipelineCustomTimeStep(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMoviePipelineCustomTimeStep(UMoviePipelineCustomTimeStep&&); \
	NO_API UMoviePipelineCustomTimeStep(const UMoviePipelineCustomTimeStep&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoviePipelineCustomTimeStep); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePipelineCustomTimeStep); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMoviePipelineCustomTimeStep)


#define HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_386_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_383_PROLOG
#define HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_386_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_386_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_386_SPARSE_DATA \
	HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_386_RPC_WRAPPERS \
	HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_386_INCLASS \
	HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_386_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_386_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_386_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_386_SPARSE_DATA \
	HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_386_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_386_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_386_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<class UMoviePipelineCustomTimeStep>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
