// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieRenderPipelineEditor/Public/MoviePipelineNewProcessExecutor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoviePipelineNewProcessExecutor() {}
// Cross Module References
	MOVIERENDERPIPELINEEDITOR_API UClass* Z_Construct_UClass_UMoviePipelineNewProcessExecutor_NoRegister();
	MOVIERENDERPIPELINEEDITOR_API UClass* Z_Construct_UClass_UMoviePipelineNewProcessExecutor();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineExecutorBase();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineEditor();
// End Cross Module References
	void UMoviePipelineNewProcessExecutor::StaticRegisterNativesUMoviePipelineNewProcessExecutor()
	{
	}
	UClass* Z_Construct_UClass_UMoviePipelineNewProcessExecutor_NoRegister()
	{
		return UMoviePipelineNewProcessExecutor::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelineNewProcessExecutor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelineNewProcessExecutor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMoviePipelineExecutorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineNewProcessExecutor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* This is the implementation responsible for executing the rendering of\n* multiple movie pipelines on the local machine in an external process.\n* This simply handles launching and managing the external processes and \n* acts as a proxy to them where possible. This internally uses the\n* UMoviePipelineInProcessExecutor on the launched instances.\n*/" },
		{ "IncludePath", "MoviePipelineNewProcessExecutor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MoviePipelineNewProcessExecutor.h" },
		{ "ToolTip", "This is the implementation responsible for executing the rendering of\nmultiple movie pipelines on the local machine in an external process.\nThis simply handles launching and managing the external processes and\nacts as a proxy to them where possible. This internally uses the\nUMoviePipelineInProcessExecutor on the launched instances." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelineNewProcessExecutor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineNewProcessExecutor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineNewProcessExecutor_Statics::ClassParams = {
		&UMoviePipelineNewProcessExecutor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineNewProcessExecutor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineNewProcessExecutor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoviePipelineNewProcessExecutor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMoviePipelineNewProcessExecutor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMoviePipelineNewProcessExecutor, 4256950525);
	template<> MOVIERENDERPIPELINEEDITOR_API UClass* StaticClass<UMoviePipelineNewProcessExecutor>()
	{
		return UMoviePipelineNewProcessExecutor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMoviePipelineNewProcessExecutor(Z_Construct_UClass_UMoviePipelineNewProcessExecutor, &UMoviePipelineNewProcessExecutor::StaticClass, TEXT("/Script/MovieRenderPipelineEditor"), TEXT("UMoviePipelineNewProcessExecutor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineNewProcessExecutor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
