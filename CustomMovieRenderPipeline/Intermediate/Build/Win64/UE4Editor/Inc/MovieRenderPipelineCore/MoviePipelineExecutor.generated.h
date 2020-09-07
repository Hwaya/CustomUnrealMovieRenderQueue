// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMoviePipelineExecutorBase;
class UMoviePipeline;
class UMoviePipelineQueue;
#ifdef MOVIERENDERPIPELINECORE_MoviePipelineExecutor_generated_h
#error "MoviePipelineExecutor.generated.h already included, missing '#pragma once' in MoviePipelineExecutor.h"
#endif
#define MOVIERENDERPIPELINECORE_MoviePipelineExecutor_generated_h

#define HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineExecutor_h_19_DELEGATE \
struct _Script_MovieRenderPipelineCore_eventOnMoviePipelineExecutorErrored_Parms \
{ \
	UMoviePipelineExecutorBase* PipelineExecutor; \
	UMoviePipeline* PipelineWithError; \
	bool bIsFatal; \
	FText ErrorText; \
}; \
static inline void FOnMoviePipelineExecutorErrored_DelegateWrapper(const FMulticastScriptDelegate& OnMoviePipelineExecutorErrored, UMoviePipelineExecutorBase* PipelineExecutor, UMoviePipeline* PipelineWithError, bool bIsFatal, const FText& ErrorText) \
{ \
	_Script_MovieRenderPipelineCore_eventOnMoviePipelineExecutorErrored_Parms Parms; \
	Parms.PipelineExecutor=PipelineExecutor; \
	Parms.PipelineWithError=PipelineWithError; \
	Parms.bIsFatal=bIsFatal ? true : false; \
	Parms.ErrorText=ErrorText; \
	OnMoviePipelineExecutorErrored.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineExecutor_h_16_DELEGATE \
struct _Script_MovieRenderPipelineCore_eventOnMoviePipelineExecutorFinished_Parms \
{ \
	UMoviePipelineExecutorBase* PipelineExecutor; \
	bool bSuccess; \
}; \
static inline void FOnMoviePipelineExecutorFinished_DelegateWrapper(const FMulticastScriptDelegate& OnMoviePipelineExecutorFinished, UMoviePipelineExecutorBase* PipelineExecutor, bool bSuccess) \
{ \
	_Script_MovieRenderPipelineCore_eventOnMoviePipelineExecutorFinished_Parms Parms; \
	Parms.PipelineExecutor=PipelineExecutor; \
	Parms.bSuccess=bSuccess ? true : false; \
	OnMoviePipelineExecutorFinished.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineExecutor_h_37_SPARSE_DATA
#define HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineExecutor_h_37_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execExecute);


#define HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineExecutor_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execExecute);


#define HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineExecutor_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoviePipelineExecutorBase(); \
	friend struct Z_Construct_UClass_UMoviePipelineExecutorBase_Statics; \
public: \
	DECLARE_CLASS(UMoviePipelineExecutorBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), NO_API) \
	DECLARE_SERIALIZER(UMoviePipelineExecutorBase)


#define HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineExecutor_h_37_INCLASS \
private: \
	static void StaticRegisterNativesUMoviePipelineExecutorBase(); \
	friend struct Z_Construct_UClass_UMoviePipelineExecutorBase_Statics; \
public: \
	DECLARE_CLASS(UMoviePipelineExecutorBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), NO_API) \
	DECLARE_SERIALIZER(UMoviePipelineExecutorBase)


#define HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineExecutor_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMoviePipelineExecutorBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMoviePipelineExecutorBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoviePipelineExecutorBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePipelineExecutorBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMoviePipelineExecutorBase(UMoviePipelineExecutorBase&&); \
	NO_API UMoviePipelineExecutorBase(const UMoviePipelineExecutorBase&); \
public:


#define HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineExecutor_h_37_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMoviePipelineExecutorBase(UMoviePipelineExecutorBase&&); \
	NO_API UMoviePipelineExecutorBase(const UMoviePipelineExecutorBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoviePipelineExecutorBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePipelineExecutorBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMoviePipelineExecutorBase)


#define HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineExecutor_h_37_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OnExecutorFinishedDelegate() { return STRUCT_OFFSET(UMoviePipelineExecutorBase, OnExecutorFinishedDelegate); } \
	FORCEINLINE static uint32 __PPO__OnExecutorErroredDelegate() { return STRUCT_OFFSET(UMoviePipelineExecutorBase, OnExecutorErroredDelegate); } \
	FORCEINLINE static uint32 __PPO__TargetPipelineClass() { return STRUCT_OFFSET(UMoviePipelineExecutorBase, TargetPipelineClass); }


#define HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineExecutor_h_34_PROLOG
#define HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineExecutor_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineExecutor_h_37_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineExecutor_h_37_SPARSE_DATA \
	HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineExecutor_h_37_RPC_WRAPPERS \
	HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineExecutor_h_37_INCLASS \
	HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineExecutor_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineExecutor_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineExecutor_h_37_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineExecutor_h_37_SPARSE_DATA \
	HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineExecutor_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineExecutor_h_37_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineExecutor_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<class UMoviePipelineExecutorBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineExecutor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
