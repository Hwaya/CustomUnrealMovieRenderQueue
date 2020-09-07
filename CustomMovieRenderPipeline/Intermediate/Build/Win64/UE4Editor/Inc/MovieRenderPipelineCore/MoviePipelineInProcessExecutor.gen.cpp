// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieRenderPipelineCore/Public/MoviePipelineInProcessExecutor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoviePipelineInProcessExecutor() {}
// Cross Module References
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineInProcessExecutor_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineInProcessExecutor();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineLinearExecutorBase();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineCore();
// End Cross Module References
	void UMoviePipelineInProcessExecutor::StaticRegisterNativesUMoviePipelineInProcessExecutor()
	{
	}
	UClass* Z_Construct_UClass_UMoviePipelineInProcessExecutor_NoRegister()
	{
		return UMoviePipelineInProcessExecutor::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelineInProcessExecutor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelineInProcessExecutor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMoviePipelineLinearExecutorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineInProcessExecutor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* This executor implementation can process an array of movie pipelines and\n* run them inside the currently running process. This is intended for usage\n* outside of the editor (ie. -game mode) as it will take over the currently\n* running world/game instance instead of launching a new world instance like \n* the editor only PIE.\n*/" },
		{ "IncludePath", "MoviePipelineInProcessExecutor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MoviePipelineInProcessExecutor.h" },
		{ "ToolTip", "This executor implementation can process an array of movie pipelines and\nrun them inside the currently running process. This is intended for usage\noutside of the editor (ie. -game mode) as it will take over the currently\nrunning world/game instance instead of launching a new world instance like\nthe editor only PIE." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelineInProcessExecutor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineInProcessExecutor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineInProcessExecutor_Statics::ClassParams = {
		&UMoviePipelineInProcessExecutor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineInProcessExecutor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineInProcessExecutor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoviePipelineInProcessExecutor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMoviePipelineInProcessExecutor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMoviePipelineInProcessExecutor, 4077205220);
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMoviePipelineInProcessExecutor>()
	{
		return UMoviePipelineInProcessExecutor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMoviePipelineInProcessExecutor(Z_Construct_UClass_UMoviePipelineInProcessExecutor, &UMoviePipelineInProcessExecutor::StaticClass, TEXT("/Script/MovieRenderPipelineCore"), TEXT("UMoviePipelineInProcessExecutor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineInProcessExecutor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
