// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieRenderPipelineCore/Public/MoviePipelineLinearExecutor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoviePipelineLinearExecutor() {}
// Cross Module References
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineLinearExecutorBase_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineLinearExecutorBase();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineExecutorBase();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineCore();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipeline_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineQueue_NoRegister();
// End Cross Module References
	void UMoviePipelineLinearExecutorBase::StaticRegisterNativesUMoviePipelineLinearExecutorBase()
	{
	}
	UClass* Z_Construct_UClass_UMoviePipelineLinearExecutorBase_NoRegister()
	{
		return UMoviePipelineLinearExecutorBase::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelineLinearExecutorBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveMoviePipeline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActiveMoviePipeline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Queue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Queue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelineLinearExecutorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMoviePipelineExecutorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineLinearExecutorBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* This is an abstract base class designed for executing an array of movie pipelines in linear\n* fashion. It is generally the case that you only want to execute one at a time on a local machine\n* and a different executor approach should be taken for a render farm that distributes out jobs\n* to many different machines.\n*/" },
		{ "IncludePath", "MoviePipelineLinearExecutor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MoviePipelineLinearExecutor.h" },
		{ "ToolTip", "This is an abstract base class designed for executing an array of movie pipelines in linear\nfashion. It is generally the case that you only want to execute one at a time on a local machine\nand a different executor approach should be taken for a render farm that distributes out jobs\nto many different machines." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineLinearExecutorBase_Statics::NewProp_ActiveMoviePipeline_MetaData[] = {
		{ "Comment", "/** A Movie Pipeline that has been spawned and is running (if any) */" },
		{ "ModuleRelativePath", "Public/MoviePipelineLinearExecutor.h" },
		{ "ToolTip", "A Movie Pipeline that has been spawned and is running (if any)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMoviePipelineLinearExecutorBase_Statics::NewProp_ActiveMoviePipeline = { "ActiveMoviePipeline", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMoviePipelineLinearExecutorBase, ActiveMoviePipeline), Z_Construct_UClass_UMoviePipeline_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineLinearExecutorBase_Statics::NewProp_ActiveMoviePipeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineLinearExecutorBase_Statics::NewProp_ActiveMoviePipeline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineLinearExecutorBase_Statics::NewProp_Queue_MetaData[] = {
		{ "Comment", "/** List of Pipeline Configs we've been asked to execute. */" },
		{ "ModuleRelativePath", "Public/MoviePipelineLinearExecutor.h" },
		{ "ToolTip", "List of Pipeline Configs we've been asked to execute." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMoviePipelineLinearExecutorBase_Statics::NewProp_Queue = { "Queue", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMoviePipelineLinearExecutorBase, Queue), Z_Construct_UClass_UMoviePipelineQueue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineLinearExecutorBase_Statics::NewProp_Queue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineLinearExecutorBase_Statics::NewProp_Queue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoviePipelineLinearExecutorBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineLinearExecutorBase_Statics::NewProp_ActiveMoviePipeline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineLinearExecutorBase_Statics::NewProp_Queue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelineLinearExecutorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineLinearExecutorBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineLinearExecutorBase_Statics::ClassParams = {
		&UMoviePipelineLinearExecutorBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMoviePipelineLinearExecutorBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineLinearExecutorBase_Statics::PropPointers),
		0,
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineLinearExecutorBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineLinearExecutorBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoviePipelineLinearExecutorBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMoviePipelineLinearExecutorBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMoviePipelineLinearExecutorBase, 418729712);
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMoviePipelineLinearExecutorBase>()
	{
		return UMoviePipelineLinearExecutorBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMoviePipelineLinearExecutorBase(Z_Construct_UClass_UMoviePipelineLinearExecutorBase, &UMoviePipelineLinearExecutorBase::StaticClass, TEXT("/Script/MovieRenderPipelineCore"), TEXT("UMoviePipelineLinearExecutorBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineLinearExecutorBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
