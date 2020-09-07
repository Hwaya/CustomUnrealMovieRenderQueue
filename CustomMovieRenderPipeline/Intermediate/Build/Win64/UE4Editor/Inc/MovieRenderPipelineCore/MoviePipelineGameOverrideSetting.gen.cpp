// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieRenderPipelineCore/Public/MoviePipelineGameOverrideSetting.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoviePipelineGameOverrideSetting() {}
// Cross Module References
	MOVIERENDERPIPELINECORE_API UEnum* Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineTextureStreamingMethod();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineCore();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineGameOverrideSetting_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineGameOverrideSetting();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineSetting();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase_NoRegister();
// End Cross Module References
	static UEnum* EMoviePipelineTextureStreamingMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineTextureStreamingMethod, Z_Construct_UPackage__Script_MovieRenderPipelineCore(), TEXT("EMoviePipelineTextureStreamingMethod"));
		}
		return Singleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UEnum* StaticEnum<EMoviePipelineTextureStreamingMethod>()
	{
		return EMoviePipelineTextureStreamingMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMoviePipelineTextureStreamingMethod(EMoviePipelineTextureStreamingMethod_StaticEnum, TEXT("/Script/MovieRenderPipelineCore"), TEXT("EMoviePipelineTextureStreamingMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineTextureStreamingMethod_Hash() { return 1283206548U; }
	UEnum* Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineTextureStreamingMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMoviePipelineTextureStreamingMethod"), 0, Get_Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineTextureStreamingMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMoviePipelineTextureStreamingMethod::None", (int64)EMoviePipelineTextureStreamingMethod::None },
				{ "EMoviePipelineTextureStreamingMethod::Disabled", (int64)EMoviePipelineTextureStreamingMethod::Disabled },
				{ "EMoviePipelineTextureStreamingMethod::FullyLoad", (int64)EMoviePipelineTextureStreamingMethod::FullyLoad },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Disabled.Comment", "/** Disable the Texture Streaming system. Requires higher RAM limits but can help if there are still blurry textures. */" },
				{ "Disabled.DisplayName", "Disable Streaming" },
				{ "Disabled.Name", "EMoviePipelineTextureStreamingMethod::Disabled" },
				{ "Disabled.ToolTip", "Disable the Texture Streaming system. Requires higher RAM limits but can help if there are still blurry textures." },
				{ "FullyLoad.Comment", "/**  Fully load used textures instead of progressively streaming them in over multiple frames. Requires less VRAM. */" },
				{ "FullyLoad.DisplayName", "Fully Load Used Textures" },
				{ "FullyLoad.Name", "EMoviePipelineTextureStreamingMethod::FullyLoad" },
				{ "FullyLoad.ToolTip", "Fully load used textures instead of progressively streaming them in over multiple frames. Requires less VRAM." },
				{ "ModuleRelativePath", "Public/MoviePipelineGameOverrideSetting.h" },
				{ "None.Comment", "/** This will not change the texture streaming method / cvars the users has set. */" },
				{ "None.DisplayName", "Don't Override" },
				{ "None.Name", "EMoviePipelineTextureStreamingMethod::None" },
				{ "None.ToolTip", "This will not change the texture streaming method / cvars the users has set." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
				nullptr,
				"EMoviePipelineTextureStreamingMethod",
				"EMoviePipelineTextureStreamingMethod",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UMoviePipelineGameOverrideSetting::StaticRegisterNativesUMoviePipelineGameOverrideSetting()
	{
	}
	UClass* Z_Construct_UClass_UMoviePipelineGameOverrideSetting_NoRegister()
	{
		return UMoviePipelineGameOverrideSetting::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewDistanceScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ViewDistanceScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideViewDistanceScale_MetaData[];
#endif
		static void NewProp_bOverrideViewDistanceScale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideViewDistanceScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadowRadiusThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShadowRadiusThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadowDistanceScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ShadowDistanceScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseHighQualityShadows_MetaData[];
#endif
		static void NewProp_bUseHighQualityShadows_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseHighQualityShadows;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableHLODs_MetaData[];
#endif
		static void NewProp_bDisableHLODs_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableHLODs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseLODZero_MetaData[];
#endif
		static void NewProp_bUseLODZero_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseLODZero;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureStreaming_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TextureStreaming;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TextureStreaming_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCinematicQualitySettings_MetaData[];
#endif
		static void NewProp_bCinematicQualitySettings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCinematicQualitySettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameModeOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GameModeOverride;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMoviePipelineSetting,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MoviePipelineGameOverrideSetting.h" },
		{ "ModuleRelativePath", "Public/MoviePipelineGameOverrideSetting.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_ViewDistanceScale_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Controls the view distance scale. A primitive's MaxDrawDistance is scaled by this value. */" },
		{ "EditCondition", "bOverrideViewDistanceScale" },
		{ "ModuleRelativePath", "Public/MoviePipelineGameOverrideSetting.h" },
		{ "ToolTip", "Controls the view distance scale. A primitive's MaxDrawDistance is scaled by this value." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_ViewDistanceScale = { "ViewDistanceScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMoviePipelineGameOverrideSetting, ViewDistanceScale), METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_ViewDistanceScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_ViewDistanceScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bOverrideViewDistanceScale_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Should we override the View Distance Scale? Can be used in situations where MaxDrawDistance has been set before for in-game performance. */" },
		{ "ModuleRelativePath", "Public/MoviePipelineGameOverrideSetting.h" },
		{ "ToolTip", "Should we override the View Distance Scale? Can be used in situations where MaxDrawDistance has been set before for in-game performance." },
	};
#endif
	void Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bOverrideViewDistanceScale_SetBit(void* Obj)
	{
		((UMoviePipelineGameOverrideSetting*)Obj)->bOverrideViewDistanceScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bOverrideViewDistanceScale = { "bOverrideViewDistanceScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMoviePipelineGameOverrideSetting), &Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bOverrideViewDistanceScale_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bOverrideViewDistanceScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bOverrideViewDistanceScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_ShadowRadiusThreshold_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Cull shadow casters if they are too small, value is the minimal screen space bounding sphere radius */" },
		{ "EditCondition", "bUseHighQualityShadows" },
		{ "ModuleRelativePath", "Public/MoviePipelineGameOverrideSetting.h" },
		{ "ToolTip", "Cull shadow casters if they are too small, value is the minimal screen space bounding sphere radius" },
		{ "UIMin", "0.001000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_ShadowRadiusThreshold = { "ShadowRadiusThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMoviePipelineGameOverrideSetting, ShadowRadiusThreshold), METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_ShadowRadiusThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_ShadowRadiusThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_ShadowDistanceScale_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ClampMin", "0.100000" },
		{ "Comment", "/** Scalability option to trade shadow distance versus performance for directional lights  */" },
		{ "EditCondition", "bUseHighQualityShadows" },
		{ "ModuleRelativePath", "Public/MoviePipelineGameOverrideSetting.h" },
		{ "ToolTip", "Scalability option to trade shadow distance versus performance for directional lights" },
		{ "UIMax", "10" },
		{ "UIMin", "0.100000" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_ShadowDistanceScale = { "ShadowDistanceScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMoviePipelineGameOverrideSetting, ShadowDistanceScale), METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_ShadowDistanceScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_ShadowDistanceScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bUseHighQualityShadows_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Should we override shadow-related CVars with some high quality preset settings? */" },
		{ "ModuleRelativePath", "Public/MoviePipelineGameOverrideSetting.h" },
		{ "ToolTip", "Should we override shadow-related CVars with some high quality preset settings?" },
	};
#endif
	void Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bUseHighQualityShadows_SetBit(void* Obj)
	{
		((UMoviePipelineGameOverrideSetting*)Obj)->bUseHighQualityShadows = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bUseHighQualityShadows = { "bUseHighQualityShadows", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMoviePipelineGameOverrideSetting), &Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bUseHighQualityShadows_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bUseHighQualityShadows_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bUseHighQualityShadows_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bDisableHLODs_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Should we disable Hierarchical LODs and instead use their real meshes regardless of distance? */" },
		{ "ModuleRelativePath", "Public/MoviePipelineGameOverrideSetting.h" },
		{ "ToolTip", "Should we disable Hierarchical LODs and instead use their real meshes regardless of distance?" },
	};
#endif
	void Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bDisableHLODs_SetBit(void* Obj)
	{
		((UMoviePipelineGameOverrideSetting*)Obj)->bDisableHLODs = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bDisableHLODs = { "bDisableHLODs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMoviePipelineGameOverrideSetting), &Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bDisableHLODs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bDisableHLODs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bDisableHLODs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bUseLODZero_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Should we try to use the highest quality LOD for meshes and particle systems regardless of distance? */" },
		{ "ModuleRelativePath", "Public/MoviePipelineGameOverrideSetting.h" },
		{ "ToolTip", "Should we try to use the highest quality LOD for meshes and particle systems regardless of distance?" },
	};
#endif
	void Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bUseLODZero_SetBit(void* Obj)
	{
		((UMoviePipelineGameOverrideSetting*)Obj)->bUseLODZero = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bUseLODZero = { "bUseLODZero", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMoviePipelineGameOverrideSetting), &Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bUseLODZero_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bUseLODZero_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bUseLODZero_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_TextureStreaming_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Defines which If true, when using texture streaming fully load the required textures each frame instead of loading them in over time. This solves objects being blurry after camera cuts. */" },
		{ "ModuleRelativePath", "Public/MoviePipelineGameOverrideSetting.h" },
		{ "ToolTip", "Defines which If true, when using texture streaming fully load the required textures each frame instead of loading them in over time. This solves objects being blurry after camera cuts." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_TextureStreaming = { "TextureStreaming", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMoviePipelineGameOverrideSetting, TextureStreaming), Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineTextureStreamingMethod, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_TextureStreaming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_TextureStreaming_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_TextureStreaming_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bCinematicQualitySettings_MetaData[] = {
		{ "Category", "Game" },
		{ "Comment", "/** If true, automatically set the engine to the Cinematic Scalability quality settings during render. See the Scalability Reference documentation for information on how to edit cvars to add/change default quality values.*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineGameOverrideSetting.h" },
		{ "ToolTip", "If true, automatically set the engine to the Cinematic Scalability quality settings during render. See the Scalability Reference documentation for information on how to edit cvars to add/change default quality values." },
	};
#endif
	void Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bCinematicQualitySettings_SetBit(void* Obj)
	{
		((UMoviePipelineGameOverrideSetting*)Obj)->bCinematicQualitySettings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bCinematicQualitySettings = { "bCinematicQualitySettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMoviePipelineGameOverrideSetting), &Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bCinematicQualitySettings_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bCinematicQualitySettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bCinematicQualitySettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_GameModeOverride_MetaData[] = {
		{ "Category", "Game" },
		{ "Comment", "/** Optional Game Mode to override the map's default game mode with. This can be useful if the game's normal mode displays UI elements or loading screens that you don't want captured. */" },
		{ "ModuleRelativePath", "Public/MoviePipelineGameOverrideSetting.h" },
		{ "ToolTip", "Optional Game Mode to override the map's default game mode with. This can be useful if the game's normal mode displays UI elements or loading screens that you don't want captured." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_GameModeOverride = { "GameModeOverride", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMoviePipelineGameOverrideSetting, GameModeOverride), Z_Construct_UClass_AGameModeBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_GameModeOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_GameModeOverride_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_ViewDistanceScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bOverrideViewDistanceScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_ShadowRadiusThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_ShadowDistanceScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bUseHighQualityShadows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bDisableHLODs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bUseLODZero,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_TextureStreaming,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_TextureStreaming_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_bCinematicQualitySettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::NewProp_GameModeOverride,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineGameOverrideSetting>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::ClassParams = {
		&UMoviePipelineGameOverrideSetting::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoviePipelineGameOverrideSetting()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMoviePipelineGameOverrideSetting_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMoviePipelineGameOverrideSetting, 3719045914);
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMoviePipelineGameOverrideSetting>()
	{
		return UMoviePipelineGameOverrideSetting::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMoviePipelineGameOverrideSetting(Z_Construct_UClass_UMoviePipelineGameOverrideSetting, &UMoviePipelineGameOverrideSetting::StaticClass, TEXT("/Script/MovieRenderPipelineCore"), TEXT("UMoviePipelineGameOverrideSetting"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineGameOverrideSetting);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
