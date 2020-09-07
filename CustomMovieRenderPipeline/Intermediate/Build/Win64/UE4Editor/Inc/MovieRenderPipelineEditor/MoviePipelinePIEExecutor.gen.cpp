// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieRenderPipelineEditor/Public/MoviePipelinePIEExecutor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoviePipelinePIEExecutor() {}
// Cross Module References
	MOVIERENDERPIPELINEEDITOR_API UClass* Z_Construct_UClass_UMoviePipelinePIEExecutor_NoRegister();
	MOVIERENDERPIPELINEEDITOR_API UClass* Z_Construct_UClass_UMoviePipelinePIEExecutor();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineLinearExecutorBase();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineEditor();
// End Cross Module References
	void UMoviePipelinePIEExecutor::StaticRegisterNativesUMoviePipelinePIEExecutor()
	{
	}
	UClass* Z_Construct_UClass_UMoviePipelinePIEExecutor_NoRegister()
	{
		return UMoviePipelinePIEExecutor::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelinePIEExecutor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelinePIEExecutor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMoviePipelineLinearExecutorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelinePIEExecutor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* This is the implementation responsible for executing the rendering of\n* multiple movie pipelines in the currently running Editor process. This\n* involves launching a Play in Editor session for each Movie Pipeline to\n* process.\n*/" },
		{ "IncludePath", "MoviePipelinePIEExecutor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MoviePipelinePIEExecutor.h" },
		{ "ToolTip", "This is the implementation responsible for executing the rendering of\nmultiple movie pipelines in the currently running Editor process. This\ninvolves launching a Play in Editor session for each Movie Pipeline to\nprocess." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelinePIEExecutor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelinePIEExecutor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelinePIEExecutor_Statics::ClassParams = {
		&UMoviePipelinePIEExecutor::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMoviePipelinePIEExecutor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelinePIEExecutor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoviePipelinePIEExecutor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMoviePipelinePIEExecutor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMoviePipelinePIEExecutor, 568129954);
	template<> MOVIERENDERPIPELINEEDITOR_API UClass* StaticClass<UMoviePipelinePIEExecutor>()
	{
		return UMoviePipelinePIEExecutor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMoviePipelinePIEExecutor(Z_Construct_UClass_UMoviePipelinePIEExecutor, &UMoviePipelinePIEExecutor::StaticClass, TEXT("/Script/MovieRenderPipelineEditor"), TEXT("UMoviePipelinePIEExecutor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelinePIEExecutor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
