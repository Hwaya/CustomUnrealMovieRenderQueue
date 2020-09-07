// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMoviePipelineSetting;
#ifdef MOVIERENDERPIPELINECORE_MoviePipelineConfigBase_generated_h
#error "MoviePipelineConfigBase.generated.h already included, missing '#pragma once' in MoviePipelineConfigBase.h"
#endif
#define MOVIERENDERPIPELINECORE_MoviePipelineConfigBase_generated_h

#define HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineConfigBase_h_13_SPARSE_DATA
#define HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineConfigBase_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFindOrAddSettingByClass); \
	DECLARE_FUNCTION(execFindSettingByClass); \
	DECLARE_FUNCTION(execRemoveSetting);


#define HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineConfigBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFindOrAddSettingByClass); \
	DECLARE_FUNCTION(execFindSettingByClass); \
	DECLARE_FUNCTION(execRemoveSetting);


#define HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineConfigBase_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoviePipelineConfigBase(); \
	friend struct Z_Construct_UClass_UMoviePipelineConfigBase_Statics; \
public: \
	DECLARE_CLASS(UMoviePipelineConfigBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), NO_API) \
	DECLARE_SERIALIZER(UMoviePipelineConfigBase)


#define HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineConfigBase_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUMoviePipelineConfigBase(); \
	friend struct Z_Construct_UClass_UMoviePipelineConfigBase_Statics; \
public: \
	DECLARE_CLASS(UMoviePipelineConfigBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), NO_API) \
	DECLARE_SERIALIZER(UMoviePipelineConfigBase)


#define HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineConfigBase_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMoviePipelineConfigBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMoviePipelineConfigBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoviePipelineConfigBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePipelineConfigBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMoviePipelineConfigBase(UMoviePipelineConfigBase&&); \
	NO_API UMoviePipelineConfigBase(const UMoviePipelineConfigBase&); \
public:


#define HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineConfigBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMoviePipelineConfigBase(UMoviePipelineConfigBase&&); \
	NO_API UMoviePipelineConfigBase(const UMoviePipelineConfigBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoviePipelineConfigBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePipelineConfigBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMoviePipelineConfigBase)


#define HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineConfigBase_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Settings() { return STRUCT_OFFSET(UMoviePipelineConfigBase, Settings); }


#define HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineConfigBase_h_10_PROLOG
#define HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineConfigBase_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineConfigBase_h_13_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineConfigBase_h_13_SPARSE_DATA \
	HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineConfigBase_h_13_RPC_WRAPPERS \
	HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineConfigBase_h_13_INCLASS \
	HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineConfigBase_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineConfigBase_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineConfigBase_h_13_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineConfigBase_h_13_SPARSE_DATA \
	HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineConfigBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineConfigBase_h_13_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineConfigBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<class UMoviePipelineConfigBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineConfigBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
