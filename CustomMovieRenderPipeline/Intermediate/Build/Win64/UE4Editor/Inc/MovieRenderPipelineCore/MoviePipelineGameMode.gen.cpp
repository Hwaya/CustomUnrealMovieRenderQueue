// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieRenderPipelineCore/Public/MoviePipelineGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoviePipelineGameMode() {}
// Cross Module References
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_AMoviePipelineGameMode_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_AMoviePipelineGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineCore();
// End Cross Module References
	void AMoviePipelineGameMode::StaticRegisterNativesAMoviePipelineGameMode()
	{
	}
	UClass* Z_Construct_UClass_AMoviePipelineGameMode_NoRegister()
	{
		return AMoviePipelineGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMoviePipelineGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMoviePipelineGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoviePipelineGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MoviePipelineGameMode.h" },
		{ "ModuleRelativePath", "Public/MoviePipelineGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMoviePipelineGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMoviePipelineGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMoviePipelineGameMode_Statics::ClassParams = {
		&AMoviePipelineGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMoviePipelineGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMoviePipelineGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMoviePipelineGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMoviePipelineGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMoviePipelineGameMode, 1574312692);
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<AMoviePipelineGameMode>()
	{
		return AMoviePipelineGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMoviePipelineGameMode(Z_Construct_UClass_AMoviePipelineGameMode, &AMoviePipelineGameMode::StaticClass, TEXT("/Script/MovieRenderPipelineCore"), TEXT("AMoviePipelineGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMoviePipelineGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
