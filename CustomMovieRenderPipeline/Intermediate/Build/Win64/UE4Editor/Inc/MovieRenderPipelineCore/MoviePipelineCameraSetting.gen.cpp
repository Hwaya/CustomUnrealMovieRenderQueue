// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieRenderPipelineCore/Public/MoviePipelineCameraSetting.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoviePipelineCameraSetting() {}
// Cross Module References
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineCameraSetting_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineCameraSetting();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineSetting();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineCore();
	MOVIERENDERPIPELINECORE_API UEnum* Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineShutterTiming();
// End Cross Module References
	void UMoviePipelineCameraSetting::StaticRegisterNativesUMoviePipelineCameraSetting()
	{
	}
	UClass* Z_Construct_UClass_UMoviePipelineCameraSetting_NoRegister()
	{
		return UMoviePipelineCameraSetting::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelineCameraSetting_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExposureCompensation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExposureCompensation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bManualExposure_MetaData[];
#endif
		static void NewProp_bManualExposure_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bManualExposure;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShutterTiming_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ShutterTiming;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ShutterTiming_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraShutterAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CameraShutterAngle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelineCameraSetting_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMoviePipelineSetting,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineCameraSetting_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MoviePipelineCameraSetting.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MoviePipelineCameraSetting.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineCameraSetting_Statics::NewProp_ExposureCompensation_MetaData[] = {
		{ "Category", "Movie Pipeline" },
		{ "Comment", "/**\n\x09* What exposure should we use when using Manual Exposure? Same behavior as the Post Processing volume.\n\x09*/" },
		{ "EditCondition", "bManualExposure" },
		{ "ModuleRelativePath", "Public/MoviePipelineCameraSetting.h" },
		{ "ToolTip", "What exposure should we use when using Manual Exposure? Same behavior as the Post Processing volume." },
		{ "UIMax", "10" },
		{ "UIMin", "-10" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMoviePipelineCameraSetting_Statics::NewProp_ExposureCompensation = { "ExposureCompensation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMoviePipelineCameraSetting, ExposureCompensation), METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineCameraSetting_Statics::NewProp_ExposureCompensation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineCameraSetting_Statics::NewProp_ExposureCompensation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineCameraSetting_Statics::NewProp_bManualExposure_MetaData[] = {
		{ "Category", "Movie Pipeline" },
		{ "ClampMax", "360" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09* Should we override the exposure on the camera to use a fixed value? This is required for high res screenshots to use consistent\n\x09* exposure between the different tiles of the image. Leaving this off lets the camera determine based on the previous frame rendered,\n\x09* which can require long warm up times between shots to allow the exposure to settle.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineCameraSetting.h" },
		{ "ToolTip", "Should we override the exposure on the camera to use a fixed value? This is required for high res screenshots to use consistent\nexposure between the different tiles of the image. Leaving this off lets the camera determine based on the previous frame rendered,\nwhich can require long warm up times between shots to allow the exposure to settle." },
		{ "UIMax", "360" },
		{ "UIMin", "0" },
	};
#endif
	void Z_Construct_UClass_UMoviePipelineCameraSetting_Statics::NewProp_bManualExposure_SetBit(void* Obj)
	{
		((UMoviePipelineCameraSetting*)Obj)->bManualExposure = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoviePipelineCameraSetting_Statics::NewProp_bManualExposure = { "bManualExposure", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMoviePipelineCameraSetting), &Z_Construct_UClass_UMoviePipelineCameraSetting_Statics::NewProp_bManualExposure_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineCameraSetting_Statics::NewProp_bManualExposure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineCameraSetting_Statics::NewProp_bManualExposure_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineCameraSetting_Statics::NewProp_ShutterTiming_MetaData[] = {
		{ "Category", "Movie Pipeline" },
		{ "ClampMax", "360" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09* Shutter Timing allows you to bias the timing of your shutter angle to either be before, during, or after\n\x09* a frame. When set to FrameClose, it means that the motion gathered up to produce frame N comes from \n\x09* before and right up to frame N. When set to FrameCenter, the motion represents half the time before the\n\x09* frame and half the time after the frame. When set to FrameOpen, the motion represents the time from \n\x09* Frame N onwards.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineCameraSetting.h" },
		{ "ToolTip", "Shutter Timing allows you to bias the timing of your shutter angle to either be before, during, or after\na frame. When set to FrameClose, it means that the motion gathered up to produce frame N comes from\nbefore and right up to frame N. When set to FrameCenter, the motion represents half the time before the\nframe and half the time after the frame. When set to FrameOpen, the motion represents the time from\nFrame N onwards." },
		{ "UIMax", "360" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMoviePipelineCameraSetting_Statics::NewProp_ShutterTiming = { "ShutterTiming", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMoviePipelineCameraSetting, ShutterTiming), Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineShutterTiming, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineCameraSetting_Statics::NewProp_ShutterTiming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineCameraSetting_Statics::NewProp_ShutterTiming_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMoviePipelineCameraSetting_Statics::NewProp_ShutterTiming_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineCameraSetting_Statics::NewProp_CameraShutterAngle_MetaData[] = {
		{ "Category", "Movie Pipeline" },
		{ "ClampMax", "360" },
		{ "ClampMin", "0" },
		{ "Comment", "/** \n\x09* The camera shutter angle determines how much of a given frame the accumulation frames span.\n\x09* For example, a 24fps film with a shutter angle of 180 will spread the accumulation frames\n\x09* out over (180/360) percent of the frame (1/24th of a second). With 2 accumulation frames,\n\x09* the first one will be at the very start of the frame and the second accumulation frame will\n\x09* be land on the half way point between the start of this frame and the start of the next.\n\x09*\n\x09* A shutter angle of 360 means continuous movement, while a shutter angle of zero means no\n\x09* motion blur.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineCameraSetting.h" },
		{ "ToolTip", "The camera shutter angle determines how much of a given frame the accumulation frames span.\nFor example, a 24fps film with a shutter angle of 180 will spread the accumulation frames\nout over (180/360) percent of the frame (1/24th of a second). With 2 accumulation frames,\nthe first one will be at the very start of the frame and the second accumulation frame will\nbe land on the half way point between the start of this frame and the start of the next.\n\nA shutter angle of 360 means continuous movement, while a shutter angle of zero means no\nmotion blur." },
		{ "UIMax", "360" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMoviePipelineCameraSetting_Statics::NewProp_CameraShutterAngle = { "CameraShutterAngle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMoviePipelineCameraSetting, CameraShutterAngle), METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineCameraSetting_Statics::NewProp_CameraShutterAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineCameraSetting_Statics::NewProp_CameraShutterAngle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoviePipelineCameraSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineCameraSetting_Statics::NewProp_ExposureCompensation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineCameraSetting_Statics::NewProp_bManualExposure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineCameraSetting_Statics::NewProp_ShutterTiming,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineCameraSetting_Statics::NewProp_ShutterTiming_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineCameraSetting_Statics::NewProp_CameraShutterAngle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelineCameraSetting_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineCameraSetting>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineCameraSetting_Statics::ClassParams = {
		&UMoviePipelineCameraSetting::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMoviePipelineCameraSetting_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineCameraSetting_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineCameraSetting_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineCameraSetting_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoviePipelineCameraSetting()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMoviePipelineCameraSetting_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMoviePipelineCameraSetting, 3530712882);
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMoviePipelineCameraSetting>()
	{
		return UMoviePipelineCameraSetting::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMoviePipelineCameraSetting(Z_Construct_UClass_UMoviePipelineCameraSetting, &UMoviePipelineCameraSetting::StaticClass, TEXT("/Script/MovieRenderPipelineCore"), TEXT("UMoviePipelineCameraSetting"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineCameraSetting);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
