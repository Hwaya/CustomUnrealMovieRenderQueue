// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieRenderPipelineCore/Public/MoviePipelineHighResSetting.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoviePipelineHighResSetting() {}
// Cross Module References
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineHighResSetting_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineHighResSetting();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineSetting();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineCore();
// End Cross Module References
	void UMoviePipelineHighResSetting::StaticRegisterNativesUMoviePipelineHighResSetting()
	{
	}
	UClass* Z_Construct_UClass_UMoviePipelineHighResSetting_NoRegister()
	{
		return UMoviePipelineHighResSetting::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelineHighResSetting_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWriteAllSamples_MetaData[];
#endif
		static void NewProp_bWriteAllSamples_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWriteAllSamples;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BurleySampleCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BurleySampleCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideSubSurfaceScattering_MetaData[];
#endif
		static void NewProp_bOverrideSubSurfaceScattering_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideSubSurfaceScattering;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlapRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OverlapRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureSharpnessBias_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TextureSharpnessBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TileCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelineHighResSetting_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMoviePipelineSetting,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineHighResSetting_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MoviePipelineHighResSetting.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MoviePipelineHighResSetting.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineHighResSetting_Statics::NewProp_bWriteAllSamples_MetaData[] = {
		{ "Category", "Movie Pipeline" },
		{ "Comment", "/**\n\x09* If true, we will write all samples that get generated to disk individually. This can be useful for debugging or if you need to accumulate\n\x09* render passes differently than provided.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineHighResSetting.h" },
		{ "ToolTip", "If true, we will write all samples that get generated to disk individually. This can be useful for debugging or if you need to accumulate\nrender passes differently than provided." },
	};
#endif
	void Z_Construct_UClass_UMoviePipelineHighResSetting_Statics::NewProp_bWriteAllSamples_SetBit(void* Obj)
	{
		((UMoviePipelineHighResSetting*)Obj)->bWriteAllSamples = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoviePipelineHighResSetting_Statics::NewProp_bWriteAllSamples = { "bWriteAllSamples", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMoviePipelineHighResSetting), &Z_Construct_UClass_UMoviePipelineHighResSetting_Statics::NewProp_bWriteAllSamples_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineHighResSetting_Statics::NewProp_bWriteAllSamples_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineHighResSetting_Statics::NewProp_bWriteAllSamples_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineHighResSetting_Statics::NewProp_BurleySampleCount_MetaData[] = {
		{ "Category", "Movie Pipeline" },
		{ "ClampMin", "0" },
		{ "Comment", "/*\n\x09* How many samples should the Burley Sub Surface Scattering use?\n\x09*/" },
		{ "EditCondition", "bOverrideSubSurfaceScattering" },
		{ "ModuleRelativePath", "Public/MoviePipelineHighResSetting.h" },
		{ "ToolTip", "* How many samples should the Burley Sub Surface Scattering use?" },
		{ "UIMax", "1024" },
		{ "UIMin", "64" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMoviePipelineHighResSetting_Statics::NewProp_BurleySampleCount = { "BurleySampleCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMoviePipelineHighResSetting, BurleySampleCount), METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineHighResSetting_Statics::NewProp_BurleySampleCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineHighResSetting_Statics::NewProp_BurleySampleCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineHighResSetting_Statics::NewProp_bOverrideSubSurfaceScattering_MetaData[] = {
		{ "Category", "Movie Pipeline" },
		{ "Comment", "/**\n\x09* Sub Surface Scattering relies on history which is not available when using tiling. This can be overriden to use more samples\n\x09* to improve the quality.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineHighResSetting.h" },
		{ "ToolTip", "Sub Surface Scattering relies on history which is not available when using tiling. This can be overriden to use more samples\nto improve the quality." },
	};
#endif
	void Z_Construct_UClass_UMoviePipelineHighResSetting_Statics::NewProp_bOverrideSubSurfaceScattering_SetBit(void* Obj)
	{
		((UMoviePipelineHighResSetting*)Obj)->bOverrideSubSurfaceScattering = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoviePipelineHighResSetting_Statics::NewProp_bOverrideSubSurfaceScattering = { "bOverrideSubSurfaceScattering", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMoviePipelineHighResSetting), &Z_Construct_UClass_UMoviePipelineHighResSetting_Statics::NewProp_bOverrideSubSurfaceScattering_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineHighResSetting_Statics::NewProp_bOverrideSubSurfaceScattering_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineHighResSetting_Statics::NewProp_bOverrideSubSurfaceScattering_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineHighResSetting_Statics::NewProp_OverlapRatio_MetaData[] = {
		{ "Category", "Movie Pipeline" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09* How much should each tile overlap each other (0-0.5). Decreasing the overlap will result in smaller individual\n\x09* tiles (which means faster renders) but increases the likelyhood of edge-of-screen artifacts showing up which\n\x09* will become visible in the final image as a \"grid\" of repeated problem areas.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineHighResSetting.h" },
		{ "ToolTip", "How much should each tile overlap each other (0-0.5). Decreasing the overlap will result in smaller individual\ntiles (which means faster renders) but increases the likelyhood of edge-of-screen artifacts showing up which\nwill become visible in the final image as a \"grid\" of repeated problem areas." },
		{ "UIMax", "0.5" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMoviePipelineHighResSetting_Statics::NewProp_OverlapRatio = { "OverlapRatio", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMoviePipelineHighResSetting, OverlapRatio), METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineHighResSetting_Statics::NewProp_OverlapRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineHighResSetting_Statics::NewProp_OverlapRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineHighResSetting_Statics::NewProp_TextureSharpnessBias_MetaData[] = {
		{ "Category", "Movie Pipeline" },
		{ "Comment", "/**\n\x09* This bias encourages the engine to use a higher detail texture when it would normally use a lower detail\n\x09* texture due to the size of the texture on screen. A more negative number means overall sharper images\n\x09* (up to the detail resolution of your texture). Too much sharpness will cause visual grain/noise in the\n\x09* resulting image, but this can be mitigated with more spatial samples.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineHighResSetting.h" },
		{ "ToolTip", "This bias encourages the engine to use a higher detail texture when it would normally use a lower detail\ntexture due to the size of the texture on screen. A more negative number means overall sharper images\n(up to the detail resolution of your texture). Too much sharpness will cause visual grain/noise in the\nresulting image, but this can be mitigated with more spatial samples." },
		{ "UIMax", "0" },
		{ "UIMin", "-1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMoviePipelineHighResSetting_Statics::NewProp_TextureSharpnessBias = { "TextureSharpnessBias", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMoviePipelineHighResSetting, TextureSharpnessBias), METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineHighResSetting_Statics::NewProp_TextureSharpnessBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineHighResSetting_Statics::NewProp_TextureSharpnessBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineHighResSetting_Statics::NewProp_TileCount_MetaData[] = {
		{ "Category", "Movie Pipeline" },
		{ "ClampMin", "1" },
		{ "Comment", "/**\n\x09* How many tiles should the resulting movie render be broken into? A tile should be no larger than\n\x09* the maximum texture resolution supported by your graphics card (likely 16k), so NumTiles should be\n\x09* ceil(Width/MaxTextureSize). More tiles mean more individual passes over the whole scene at a smaller\n\x09* resolution which may help with gpu timeouts. Requires at least 1 tile. Tiling is applied evenly to\n\x09* both X and Y.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineHighResSetting.h" },
		{ "ToolTip", "How many tiles should the resulting movie render be broken into? A tile should be no larger than\nthe maximum texture resolution supported by your graphics card (likely 16k), so NumTiles should be\nceil(Width/MaxTextureSize). More tiles mean more individual passes over the whole scene at a smaller\nresolution which may help with gpu timeouts. Requires at least 1 tile. Tiling is applied evenly to\nboth X and Y." },
		{ "UIMax", "16" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMoviePipelineHighResSetting_Statics::NewProp_TileCount = { "TileCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMoviePipelineHighResSetting, TileCount), METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineHighResSetting_Statics::NewProp_TileCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineHighResSetting_Statics::NewProp_TileCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoviePipelineHighResSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineHighResSetting_Statics::NewProp_bWriteAllSamples,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineHighResSetting_Statics::NewProp_BurleySampleCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineHighResSetting_Statics::NewProp_bOverrideSubSurfaceScattering,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineHighResSetting_Statics::NewProp_OverlapRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineHighResSetting_Statics::NewProp_TextureSharpnessBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineHighResSetting_Statics::NewProp_TileCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelineHighResSetting_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineHighResSetting>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineHighResSetting_Statics::ClassParams = {
		&UMoviePipelineHighResSetting::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMoviePipelineHighResSetting_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineHighResSetting_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineHighResSetting_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineHighResSetting_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoviePipelineHighResSetting()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMoviePipelineHighResSetting_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMoviePipelineHighResSetting, 2661882117);
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMoviePipelineHighResSetting>()
	{
		return UMoviePipelineHighResSetting::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMoviePipelineHighResSetting(Z_Construct_UClass_UMoviePipelineHighResSetting, &UMoviePipelineHighResSetting::StaticClass, TEXT("/Script/MovieRenderPipelineCore"), TEXT("UMoviePipelineHighResSetting"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineHighResSetting);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
