// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieRenderPipelineRenderPasses/Public/MoviePipelineWaveOutput.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoviePipelineWaveOutput() {}
// Cross Module References
	MOVIERENDERPIPELINERENDERPASSES_API UClass* Z_Construct_UClass_UMoviePipelineWaveOutput_NoRegister();
	MOVIERENDERPIPELINERENDERPASSES_API UClass* Z_Construct_UClass_UMoviePipelineWaveOutput();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineOutputBase();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineRenderPasses();
// End Cross Module References
	void UMoviePipelineWaveOutput::StaticRegisterNativesUMoviePipelineWaveOutput()
	{
	}
	UClass* Z_Construct_UClass_UMoviePipelineWaveOutput_NoRegister()
	{
		return UMoviePipelineWaveOutput::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelineWaveOutput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileNameFormat_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileNameFormat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelineWaveOutput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMoviePipelineOutputBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineRenderPasses,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineWaveOutput_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MoviePipelineWaveOutput.h" },
		{ "ModuleRelativePath", "Public/MoviePipelineWaveOutput.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineWaveOutput_Statics::NewProp_FileNameFormat_MetaData[] = {
		{ "Category", "File Output" },
		{ "Comment", "/** What format string should the final files use? Can include folder prefixes, and format string ({shot_name}, etc.) */" },
		{ "ModuleRelativePath", "Public/MoviePipelineWaveOutput.h" },
		{ "ToolTip", "What format string should the final files use? Can include folder prefixes, and format string ({shot_name}, etc.)" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMoviePipelineWaveOutput_Statics::NewProp_FileNameFormat = { "FileNameFormat", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMoviePipelineWaveOutput, FileNameFormat), METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineWaveOutput_Statics::NewProp_FileNameFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineWaveOutput_Statics::NewProp_FileNameFormat_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoviePipelineWaveOutput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineWaveOutput_Statics::NewProp_FileNameFormat,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelineWaveOutput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineWaveOutput>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineWaveOutput_Statics::ClassParams = {
		&UMoviePipelineWaveOutput::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMoviePipelineWaveOutput_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineWaveOutput_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineWaveOutput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineWaveOutput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoviePipelineWaveOutput()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMoviePipelineWaveOutput_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMoviePipelineWaveOutput, 2431274910);
	template<> MOVIERENDERPIPELINERENDERPASSES_API UClass* StaticClass<UMoviePipelineWaveOutput>()
	{
		return UMoviePipelineWaveOutput::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMoviePipelineWaveOutput(Z_Construct_UClass_UMoviePipelineWaveOutput, &UMoviePipelineWaveOutput::StaticClass, TEXT("/Script/MovieRenderPipelineRenderPasses"), TEXT("UMoviePipelineWaveOutput"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineWaveOutput);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
