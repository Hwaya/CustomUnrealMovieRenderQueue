// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieRenderPipelineCore/Public/MoviePipelineSetting.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoviePipelineSetting() {}
// Cross Module References
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineSetting_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineSetting();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineCore();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipeline_NoRegister();
// End Cross Module References
	void UMoviePipelineSetting::StaticRegisterNativesUMoviePipelineSetting()
	{
	}
	UClass* Z_Construct_UClass_UMoviePipelineSetting_NoRegister()
	{
		return UMoviePipelineSetting::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelineSetting_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUserCustomized_MetaData[];
#endif
		static void NewProp_bUserCustomized_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUserCustomized;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedPipeline_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_CachedPipeline;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelineSetting_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineSetting_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* A base class for all Movie Render Pipeline settings.\n*/" },
		{ "IncludePath", "MoviePipelineSetting.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MoviePipelineSetting.h" },
		{ "ToolTip", "A base class for all Movie Render Pipeline settings." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineSetting_Statics::NewProp_bUserCustomized_MetaData[] = {
		{ "Comment", "/** Was this setting added by the user (either through UI or the FindorAdd API) or false if it was transiently added. */" },
		{ "ModuleRelativePath", "Public/MoviePipelineSetting.h" },
		{ "ToolTip", "Was this setting added by the user (either through UI or the FindorAdd API) or false if it was transiently added." },
	};
#endif
	void Z_Construct_UClass_UMoviePipelineSetting_Statics::NewProp_bUserCustomized_SetBit(void* Obj)
	{
		((UMoviePipelineSetting*)Obj)->bUserCustomized = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoviePipelineSetting_Statics::NewProp_bUserCustomized = { "bUserCustomized", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMoviePipelineSetting), &Z_Construct_UClass_UMoviePipelineSetting_Statics::NewProp_bUserCustomized_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineSetting_Statics::NewProp_bUserCustomized_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineSetting_Statics::NewProp_bUserCustomized_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineSetting_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Comment", "/** Is this setting currently enabled? Disabled settings are like they never existed. */" },
		{ "ModuleRelativePath", "Public/MoviePipelineSetting.h" },
		{ "ToolTip", "Is this setting currently enabled? Disabled settings are like they never existed." },
	};
#endif
	void Z_Construct_UClass_UMoviePipelineSetting_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((UMoviePipelineSetting*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoviePipelineSetting_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMoviePipelineSetting), &Z_Construct_UClass_UMoviePipelineSetting_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineSetting_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineSetting_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineSetting_Statics::NewProp_CachedPipeline_MetaData[] = {
		{ "ModuleRelativePath", "Public/MoviePipelineSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UMoviePipelineSetting_Statics::NewProp_CachedPipeline = { "CachedPipeline", nullptr, (EPropertyFlags)0x0024080000002000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMoviePipelineSetting, CachedPipeline), Z_Construct_UClass_UMoviePipeline_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineSetting_Statics::NewProp_CachedPipeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineSetting_Statics::NewProp_CachedPipeline_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoviePipelineSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineSetting_Statics::NewProp_bUserCustomized,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineSetting_Statics::NewProp_bEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineSetting_Statics::NewProp_CachedPipeline,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelineSetting_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineSetting>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineSetting_Statics::ClassParams = {
		&UMoviePipelineSetting::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMoviePipelineSetting_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineSetting_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineSetting_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineSetting_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoviePipelineSetting()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMoviePipelineSetting_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMoviePipelineSetting, 2445982632);
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMoviePipelineSetting>()
	{
		return UMoviePipelineSetting::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMoviePipelineSetting(Z_Construct_UClass_UMoviePipelineSetting, &UMoviePipelineSetting::StaticClass, TEXT("/Script/MovieRenderPipelineCore"), TEXT("UMoviePipelineSetting"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineSetting);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
