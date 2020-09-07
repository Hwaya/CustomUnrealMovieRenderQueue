// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMoviePipelineExecutorBase;
class UMoviePipelineQueue;
#ifdef MOVIERENDERPIPELINEEDITOR_MoviePipelineQueueSubsystem_generated_h
#error "MoviePipelineQueueSubsystem.generated.h already included, missing '#pragma once' in MoviePipelineQueueSubsystem.h"
#endif
#define MOVIERENDERPIPELINEEDITOR_MoviePipelineQueueSubsystem_generated_h

#define HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelineQueueSubsystem_h_12_SPARSE_DATA
#define HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelineQueueSubsystem_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsRendering); \
	DECLARE_FUNCTION(execRenderQueueWithExecutor); \
	DECLARE_FUNCTION(execGetActiveExecutor); \
	DECLARE_FUNCTION(execGetQueue);


#define HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelineQueueSubsystem_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsRendering); \
	DECLARE_FUNCTION(execRenderQueueWithExecutor); \
	DECLARE_FUNCTION(execGetActiveExecutor); \
	DECLARE_FUNCTION(execGetQueue);


#define HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelineQueueSubsystem_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoviePipelineQueueSubsystem(); \
	friend struct Z_Construct_UClass_UMoviePipelineQueueSubsystem_Statics; \
public: \
	DECLARE_CLASS(UMoviePipelineQueueSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineEditor"), NO_API) \
	DECLARE_SERIALIZER(UMoviePipelineQueueSubsystem)


#define HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelineQueueSubsystem_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUMoviePipelineQueueSubsystem(); \
	friend struct Z_Construct_UClass_UMoviePipelineQueueSubsystem_Statics; \
public: \
	DECLARE_CLASS(UMoviePipelineQueueSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineEditor"), NO_API) \
	DECLARE_SERIALIZER(UMoviePipelineQueueSubsystem)


#define HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelineQueueSubsystem_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMoviePipelineQueueSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMoviePipelineQueueSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoviePipelineQueueSubsystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePipelineQueueSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMoviePipelineQueueSubsystem(UMoviePipelineQueueSubsystem&&); \
	NO_API UMoviePipelineQueueSubsystem(const UMoviePipelineQueueSubsystem&); \
public:


#define HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelineQueueSubsystem_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMoviePipelineQueueSubsystem(UMoviePipelineQueueSubsystem&&); \
	NO_API UMoviePipelineQueueSubsystem(const UMoviePipelineQueueSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoviePipelineQueueSubsystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePipelineQueueSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMoviePipelineQueueSubsystem)


#define HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelineQueueSubsystem_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ActiveExecutor() { return STRUCT_OFFSET(UMoviePipelineQueueSubsystem, ActiveExecutor); } \
	FORCEINLINE static uint32 __PPO__CurrentQueue() { return STRUCT_OFFSET(UMoviePipelineQueueSubsystem, CurrentQueue); }


#define HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelineQueueSubsystem_h_9_PROLOG
#define HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelineQueueSubsystem_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelineQueueSubsystem_h_12_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelineQueueSubsystem_h_12_SPARSE_DATA \
	HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelineQueueSubsystem_h_12_RPC_WRAPPERS \
	HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelineQueueSubsystem_h_12_INCLASS \
	HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelineQueueSubsystem_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelineQueueSubsystem_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelineQueueSubsystem_h_12_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelineQueueSubsystem_h_12_SPARSE_DATA \
	HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelineQueueSubsystem_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelineQueueSubsystem_h_12_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelineQueueSubsystem_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIERENDERPIPELINEEDITOR_API UClass* StaticClass<class UMoviePipelineQueueSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelineQueueSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
