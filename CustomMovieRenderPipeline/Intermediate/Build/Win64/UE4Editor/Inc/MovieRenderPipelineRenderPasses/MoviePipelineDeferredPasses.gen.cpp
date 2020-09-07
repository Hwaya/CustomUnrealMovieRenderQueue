// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieRenderPipelineRenderPasses/Public/MoviePipelineDeferredPasses.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoviePipelineDeferredPasses() {}
// Cross Module References
	MOVIERENDERPIPELINERENDERPASSES_API UClass* Z_Construct_UClass_UMoviePipelineDeferredPassBase_NoRegister();
	MOVIERENDERPIPELINERENDERPASSES_API UClass* Z_Construct_UClass_UMoviePipelineDeferredPassBase();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineRenderPass();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineRenderPasses();
// End Cross Module References
	void UMoviePipelineDeferredPassBase::StaticRegisterNativesUMoviePipelineDeferredPassBase()
	{
	}
	UClass* Z_Construct_UClass_UMoviePipelineDeferredPassBase_NoRegister()
	{
		return UMoviePipelineDeferredPassBase::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMoviePipelineRenderPass,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineRenderPasses,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MoviePipelineDeferredPasses.h" },
		{ "ModuleRelativePath", "Public/MoviePipelineDeferredPasses.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineDeferredPassBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::ClassParams = {
		&UMoviePipelineDeferredPassBase::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoviePipelineDeferredPassBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMoviePipelineDeferredPassBase, 1540927137);
	template<> MOVIERENDERPIPELINERENDERPASSES_API UClass* StaticClass<UMoviePipelineDeferredPassBase>()
	{
		return UMoviePipelineDeferredPassBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMoviePipelineDeferredPassBase(Z_Construct_UClass_UMoviePipelineDeferredPassBase, &UMoviePipelineDeferredPassBase::StaticClass, TEXT("/Script/MovieRenderPipelineRenderPasses"), TEXT("UMoviePipelineDeferredPassBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineDeferredPassBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
