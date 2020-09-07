// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieRenderPipelineCore/Public/MovieRenderPipelineDataTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieRenderPipelineDataTypes() {}
// Cross Module References
	MOVIERENDERPIPELINECORE_API UEnum* Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineShutterTiming();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineCore();
	MOVIERENDERPIPELINECORE_API UEnum* Z_Construct_UEnum_MovieRenderPipelineCore_EStereoState();
	MOVIERENDERPIPELINECORE_API UEnum* Z_Construct_UEnum_MovieRenderPipelineCore_EMovieRenderShotState();
	MOVIERENDERPIPELINECORE_API UEnum* Z_Construct_UEnum_MovieRenderPipelineCore_EMovieRenderPipelineState();
	MOVIERENDERPIPELINECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMoviePipelineShotInfo();
	MOVIERENDERPIPELINECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMoviePipelineCameraCutInfo();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCinematicShotSection_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineShotConfig_NoRegister();
	MOVIERENDERPIPELINECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics();
// End Cross Module References
	static UEnum* EMoviePipelineShutterTiming_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineShutterTiming, Z_Construct_UPackage__Script_MovieRenderPipelineCore(), TEXT("EMoviePipelineShutterTiming"));
		}
		return Singleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UEnum* StaticEnum<EMoviePipelineShutterTiming>()
	{
		return EMoviePipelineShutterTiming_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMoviePipelineShutterTiming(EMoviePipelineShutterTiming_StaticEnum, TEXT("/Script/MovieRenderPipelineCore"), TEXT("EMoviePipelineShutterTiming"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineShutterTiming_Hash() { return 3801714029U; }
	UEnum* Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineShutterTiming()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMoviePipelineShutterTiming"), 0, Get_Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineShutterTiming_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMoviePipelineShutterTiming::FrameOpen", (int64)EMoviePipelineShutterTiming::FrameOpen },
				{ "EMoviePipelineShutterTiming::FrameCenter", (int64)EMoviePipelineShutterTiming::FrameCenter },
				{ "EMoviePipelineShutterTiming::FrameClose", (int64)EMoviePipelineShutterTiming::FrameClose },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "FrameCenter.Name", "EMoviePipelineShutterTiming::FrameCenter" },
				{ "FrameClose.Name", "EMoviePipelineShutterTiming::FrameClose" },
				{ "FrameOpen.Name", "EMoviePipelineShutterTiming::FrameOpen" },
				{ "ModuleRelativePath", "Public/MovieRenderPipelineDataTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
				nullptr,
				"EMoviePipelineShutterTiming",
				"EMoviePipelineShutterTiming",
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
	static UEnum* EStereoState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MovieRenderPipelineCore_EStereoState, Z_Construct_UPackage__Script_MovieRenderPipelineCore(), TEXT("EStereoState"));
		}
		return Singleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UEnum* StaticEnum<EStereoState>()
	{
		return EStereoState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EStereoState(EStereoState_StaticEnum, TEXT("/Script/MovieRenderPipelineCore"), TEXT("EStereoState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MovieRenderPipelineCore_EStereoState_Hash() { return 843239670U; }
	UEnum* Z_Construct_UEnum_MovieRenderPipelineCore_EStereoState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EStereoState"), 0, Get_Z_Construct_UEnum_MovieRenderPipelineCore_EStereoState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EStereoState::None", (int64)EStereoState::None },
				{ "EStereoState::Origin", (int64)EStereoState::Origin },
				{ "EStereoState::Left", (int64)EStereoState::Left },
				{ "EStereoState::Right", (int64)EStereoState::Right },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Left.Name", "EStereoState::Left" },
				{ "ModuleRelativePath", "Public/MovieRenderPipelineDataTypes.h" },
				{ "None.Name", "EStereoState::None" },
				{ "Origin.Name", "EStereoState::Origin" },
				{ "Right.Name", "EStereoState::Right" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
				nullptr,
				"EStereoState",
				"EStereoState",
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
	static UEnum* EMovieRenderShotState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MovieRenderPipelineCore_EMovieRenderShotState, Z_Construct_UPackage__Script_MovieRenderPipelineCore(), TEXT("EMovieRenderShotState"));
		}
		return Singleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UEnum* StaticEnum<EMovieRenderShotState>()
	{
		return EMovieRenderShotState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMovieRenderShotState(EMovieRenderShotState_StaticEnum, TEXT("/Script/MovieRenderPipelineCore"), TEXT("EMovieRenderShotState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MovieRenderPipelineCore_EMovieRenderShotState_Hash() { return 906112591U; }
	UEnum* Z_Construct_UEnum_MovieRenderPipelineCore_EMovieRenderShotState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMovieRenderShotState"), 0, Get_Z_Construct_UEnum_MovieRenderPipelineCore_EMovieRenderShotState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMovieRenderShotState::Uninitialized", (int64)EMovieRenderShotState::Uninitialized },
				{ "EMovieRenderShotState::WarmingUp", (int64)EMovieRenderShotState::WarmingUp },
				{ "EMovieRenderShotState::MotionBlur", (int64)EMovieRenderShotState::MotionBlur },
				{ "EMovieRenderShotState::Rendering", (int64)EMovieRenderShotState::Rendering },
				{ "EMovieRenderShotState::Finished", (int64)EMovieRenderShotState::Finished },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n* What is the current state of a shot? States are processed in order from first to last but not\n* all states are required, ie: WarmUp and MotionBlur can be disabled and the shot will never\n* pass through this state.\n*/" },
				{ "Finished.Comment", "/*\n\x09* The shot has produced all frames it will produce. No more evaluation should be\n\x09* done for this shot once it reaches this state.\n\x09*/" },
				{ "Finished.Name", "EMovieRenderShotState::Finished" },
				{ "Finished.ToolTip", "* The shot has produced all frames it will produce. No more evaluation should be\n* done for this shot once it reaches this state." },
				{ "ModuleRelativePath", "Public/MovieRenderPipelineDataTypes.h" },
				{ "MotionBlur.Comment", "/*\n\x09* The shot is doing additional pre-roll for motion blur. No frames are being produced,\n\x09* but the rendering pipeline is being run to seed histories.\n\x09*/" },
				{ "MotionBlur.Name", "EMovieRenderShotState::MotionBlur" },
				{ "MotionBlur.ToolTip", "* The shot is doing additional pre-roll for motion blur. No frames are being produced,\n* but the rendering pipeline is being run to seed histories." },
				{ "Rendering.Comment", "/*\n\x09* The shot is working on producing frames and may be currently doing a sub-frame or\n\x09* a whole frame.\n\x09*/" },
				{ "Rendering.Name", "EMovieRenderShotState::Rendering" },
				{ "Rendering.ToolTip", "* The shot is working on producing frames and may be currently doing a sub-frame or\n* a whole frame." },
				{ "ToolTip", "What is the current state of a shot? States are processed in order from first to last but not\nall states are required, ie: WarmUp and MotionBlur can be disabled and the shot will never\npass through this state." },
				{ "Uninitialized.Comment", "/** The shot has not been initialized yet.*/" },
				{ "Uninitialized.Name", "EMovieRenderShotState::Uninitialized" },
				{ "Uninitialized.ToolTip", "The shot has not been initialized yet." },
				{ "WarmingUp.Comment", "/** The shot is warming up. Engine ticks are passing but no frames are being produced. */" },
				{ "WarmingUp.Name", "EMovieRenderShotState::WarmingUp" },
				{ "WarmingUp.ToolTip", "The shot is warming up. Engine ticks are passing but no frames are being produced." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
				nullptr,
				"EMovieRenderShotState",
				"EMovieRenderShotState",
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
	static UEnum* EMovieRenderPipelineState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MovieRenderPipelineCore_EMovieRenderPipelineState, Z_Construct_UPackage__Script_MovieRenderPipelineCore(), TEXT("EMovieRenderPipelineState"));
		}
		return Singleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UEnum* StaticEnum<EMovieRenderPipelineState>()
	{
		return EMovieRenderPipelineState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMovieRenderPipelineState(EMovieRenderPipelineState_StaticEnum, TEXT("/Script/MovieRenderPipelineCore"), TEXT("EMovieRenderPipelineState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MovieRenderPipelineCore_EMovieRenderPipelineState_Hash() { return 4085808677U; }
	UEnum* Z_Construct_UEnum_MovieRenderPipelineCore_EMovieRenderPipelineState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMovieRenderPipelineState"), 0, Get_Z_Construct_UEnum_MovieRenderPipelineCore_EMovieRenderPipelineState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMovieRenderPipelineState::Uninitialized", (int64)EMovieRenderPipelineState::Uninitialized },
				{ "EMovieRenderPipelineState::ProducingFrames", (int64)EMovieRenderPipelineState::ProducingFrames },
				{ "EMovieRenderPipelineState::Finalize", (int64)EMovieRenderPipelineState::Finalize },
				{ "EMovieRenderPipelineState::Export", (int64)EMovieRenderPipelineState::Export },
				{ "EMovieRenderPipelineState::Finished", (int64)EMovieRenderPipelineState::Finished },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n* What is the current overall state of the Pipeline? States are processed in order from first to\n* last and all states will be hit (though there is no guarantee the state will not be transitioned\n* away from on the same frame it entered it). Used to help track overall progress and validate\n* code flow.\n*/" },
				{ "Export.Comment", "/** All outputs have finished writing to disk or otherwise processing. Additional exports that may have needed information about the produced file can now be run. */" },
				{ "Export.Name", "EMovieRenderPipelineState::Export" },
				{ "Export.ToolTip", "All outputs have finished writing to disk or otherwise processing. Additional exports that may have needed information about the produced file can now be run." },
				{ "Finalize.Comment", "/** All desired frames have been produced. Audio is already finalized. Outputs have a chance to finish long processing tasks. */" },
				{ "Finalize.Name", "EMovieRenderPipelineState::Finalize" },
				{ "Finalize.ToolTip", "All desired frames have been produced. Audio is already finalized. Outputs have a chance to finish long processing tasks." },
				{ "Finished.Comment", "/** The pipeline has been shut down. It is an error to shut it down again. */" },
				{ "Finished.Name", "EMovieRenderPipelineState::Finished" },
				{ "Finished.ToolTip", "The pipeline has been shut down. It is an error to shut it down again." },
				{ "ModuleRelativePath", "Public/MovieRenderPipelineDataTypes.h" },
				{ "ProducingFrames.Comment", "/** The pipeline has been initialized and is now controlling time and working on producing frames. */" },
				{ "ProducingFrames.Name", "EMovieRenderPipelineState::ProducingFrames" },
				{ "ProducingFrames.ToolTip", "The pipeline has been initialized and is now controlling time and working on producing frames." },
				{ "ToolTip", "What is the current overall state of the Pipeline? States are processed in order from first to\nlast and all states will be hit (though there is no guarantee the state will not be transitioned\naway from on the same frame it entered it). Used to help track overall progress and validate\ncode flow." },
				{ "Uninitialized.Comment", "/** The pipeline has not been initialized yet. Only valid operation is to call Initialize. */" },
				{ "Uninitialized.Name", "EMovieRenderPipelineState::Uninitialized" },
				{ "Uninitialized.ToolTip", "The pipeline has not been initialized yet. Only valid operation is to call Initialize." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
				nullptr,
				"EMovieRenderPipelineState",
				"EMovieRenderPipelineState",
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
class UScriptStruct* FMoviePipelineShotInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIERENDERPIPELINECORE_API uint32 Get_Z_Construct_UScriptStruct_FMoviePipelineShotInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMoviePipelineShotInfo, Z_Construct_UPackage__Script_MovieRenderPipelineCore(), TEXT("MoviePipelineShotInfo"), sizeof(FMoviePipelineShotInfo), Get_Z_Construct_UScriptStruct_FMoviePipelineShotInfo_Hash());
	}
	return Singleton;
}
template<> MOVIERENDERPIPELINECORE_API UScriptStruct* StaticStruct<FMoviePipelineShotInfo>()
{
	return FMoviePipelineShotInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMoviePipelineShotInfo(FMoviePipelineShotInfo::StaticStruct, TEXT("/Script/MovieRenderPipelineCore"), TEXT("MoviePipelineShotInfo"), false, nullptr, nullptr);
static struct FScriptStruct_MovieRenderPipelineCore_StaticRegisterNativesFMoviePipelineShotInfo
{
	FScriptStruct_MovieRenderPipelineCore_StaticRegisterNativesFMoviePipelineShotInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MoviePipelineShotInfo")),new UScriptStruct::TCppStructOps<FMoviePipelineShotInfo>);
	}
} ScriptStruct_MovieRenderPipelineCore_StaticRegisterNativesFMoviePipelineShotInfo;
	struct Z_Construct_UScriptStruct_FMoviePipelineShotInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentCameraCutIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentCameraCutIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraCuts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CameraCuts;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraCuts_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CinematicShotSection_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_CinematicShotSection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShotOverrideConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShotOverrideConfig;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoviePipelineShotInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Pre-calculated information about a shot we are going to produce. This lets us build\n* the expected output at the start of the process and just read from it later. Having\n* all information in advanced aids in debugging and visualization of progress.\n*/" },
		{ "ModuleRelativePath", "Public/MovieRenderPipelineDataTypes.h" },
		{ "ToolTip", "Pre-calculated information about a shot we are going to produce. This lets us build\nthe expected output at the start of the process and just read from it later. Having\nall information in advanced aids in debugging and visualization of progress." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMoviePipelineShotInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMoviePipelineShotInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoviePipelineShotInfo_Statics::NewProp_CurrentCameraCutIndex_MetaData[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "ModuleRelativePath", "Public/MovieRenderPipelineDataTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMoviePipelineShotInfo_Statics::NewProp_CurrentCameraCutIndex = { "CurrentCameraCutIndex", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMoviePipelineShotInfo, CurrentCameraCutIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FMoviePipelineShotInfo_Statics::NewProp_CurrentCameraCutIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelineShotInfo_Statics::NewProp_CurrentCameraCutIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoviePipelineShotInfo_Statics::NewProp_CameraCuts_MetaData[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "ModuleRelativePath", "Public/MovieRenderPipelineDataTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMoviePipelineShotInfo_Statics::NewProp_CameraCuts = { "CameraCuts", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMoviePipelineShotInfo, CameraCuts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMoviePipelineShotInfo_Statics::NewProp_CameraCuts_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelineShotInfo_Statics::NewProp_CameraCuts_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMoviePipelineShotInfo_Statics::NewProp_CameraCuts_Inner = { "CameraCuts", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMoviePipelineCameraCutInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoviePipelineShotInfo_Statics::NewProp_CinematicShotSection_MetaData[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "ModuleRelativePath", "Public/MovieRenderPipelineDataTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FMoviePipelineShotInfo_Statics::NewProp_CinematicShotSection = { "CinematicShotSection", nullptr, (EPropertyFlags)0x001400000008201c, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMoviePipelineShotInfo, CinematicShotSection), Z_Construct_UClass_UMovieSceneCinematicShotSection_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMoviePipelineShotInfo_Statics::NewProp_CinematicShotSection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelineShotInfo_Statics::NewProp_CinematicShotSection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoviePipelineShotInfo_Statics::NewProp_ShotOverrideConfig_MetaData[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "ModuleRelativePath", "Public/MovieRenderPipelineDataTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMoviePipelineShotInfo_Statics::NewProp_ShotOverrideConfig = { "ShotOverrideConfig", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMoviePipelineShotInfo, ShotOverrideConfig), Z_Construct_UClass_UMoviePipelineShotConfig_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMoviePipelineShotInfo_Statics::NewProp_ShotOverrideConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelineShotInfo_Statics::NewProp_ShotOverrideConfig_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMoviePipelineShotInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoviePipelineShotInfo_Statics::NewProp_CurrentCameraCutIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoviePipelineShotInfo_Statics::NewProp_CameraCuts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoviePipelineShotInfo_Statics::NewProp_CameraCuts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoviePipelineShotInfo_Statics::NewProp_CinematicShotSection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoviePipelineShotInfo_Statics::NewProp_ShotOverrideConfig,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMoviePipelineShotInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
		nullptr,
		&NewStructOps,
		"MoviePipelineShotInfo",
		sizeof(FMoviePipelineShotInfo),
		alignof(FMoviePipelineShotInfo),
		Z_Construct_UScriptStruct_FMoviePipelineShotInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelineShotInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMoviePipelineShotInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelineShotInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMoviePipelineShotInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMoviePipelineShotInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MoviePipelineShotInfo"), sizeof(FMoviePipelineShotInfo), Get_Z_Construct_UScriptStruct_FMoviePipelineShotInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMoviePipelineShotInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMoviePipelineShotInfo_Hash() { return 2061419086U; }
class UScriptStruct* FMoviePipelineCameraCutInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIERENDERPIPELINECORE_API uint32 Get_Z_Construct_UScriptStruct_FMoviePipelineCameraCutInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMoviePipelineCameraCutInfo, Z_Construct_UPackage__Script_MovieRenderPipelineCore(), TEXT("MoviePipelineCameraCutInfo"), sizeof(FMoviePipelineCameraCutInfo), Get_Z_Construct_UScriptStruct_FMoviePipelineCameraCutInfo_Hash());
	}
	return Singleton;
}
template<> MOVIERENDERPIPELINECORE_API UScriptStruct* StaticStruct<FMoviePipelineCameraCutInfo>()
{
	return FMoviePipelineCameraCutInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMoviePipelineCameraCutInfo(FMoviePipelineCameraCutInfo::StaticStruct, TEXT("/Script/MovieRenderPipelineCore"), TEXT("MoviePipelineCameraCutInfo"), false, nullptr, nullptr);
static struct FScriptStruct_MovieRenderPipelineCore_StaticRegisterNativesFMoviePipelineCameraCutInfo
{
	FScriptStruct_MovieRenderPipelineCore_StaticRegisterNativesFMoviePipelineCameraCutInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MoviePipelineCameraCutInfo")),new UScriptStruct::TCppStructOps<FMoviePipelineCameraCutInfo>);
	}
} ScriptStruct_MovieRenderPipelineCore_StaticRegisterNativesFMoviePipelineCameraCutInfo;
	struct Z_Construct_UScriptStruct_FMoviePipelineCameraCutInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoviePipelineCameraCutInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ToDo: Rename this to segment.\n" },
		{ "ModuleRelativePath", "Public/MovieRenderPipelineDataTypes.h" },
		{ "ToolTip", "ToDo: Rename this to segment." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMoviePipelineCameraCutInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMoviePipelineCameraCutInfo>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMoviePipelineCameraCutInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
		nullptr,
		&NewStructOps,
		"MoviePipelineCameraCutInfo",
		sizeof(FMoviePipelineCameraCutInfo),
		alignof(FMoviePipelineCameraCutInfo),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMoviePipelineCameraCutInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelineCameraCutInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMoviePipelineCameraCutInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMoviePipelineCameraCutInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MoviePipelineCameraCutInfo"), sizeof(FMoviePipelineCameraCutInfo), Get_Z_Construct_UScriptStruct_FMoviePipelineCameraCutInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMoviePipelineCameraCutInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMoviePipelineCameraCutInfo_Hash() { return 3069711770U; }
class UScriptStruct* FMoviePipelineSegmentWorkMetrics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIERENDERPIPELINECORE_API uint32 Get_Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics, Z_Construct_UPackage__Script_MovieRenderPipelineCore(), TEXT("MoviePipelineSegmentWorkMetrics"), sizeof(FMoviePipelineSegmentWorkMetrics), Get_Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Hash());
	}
	return Singleton;
}
template<> MOVIERENDERPIPELINECORE_API UScriptStruct* StaticStruct<FMoviePipelineSegmentWorkMetrics>()
{
	return FMoviePipelineSegmentWorkMetrics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMoviePipelineSegmentWorkMetrics(FMoviePipelineSegmentWorkMetrics::StaticStruct, TEXT("/Script/MovieRenderPipelineCore"), TEXT("MoviePipelineSegmentWorkMetrics"), false, nullptr, nullptr);
static struct FScriptStruct_MovieRenderPipelineCore_StaticRegisterNativesFMoviePipelineSegmentWorkMetrics
{
	FScriptStruct_MovieRenderPipelineCore_StaticRegisterNativesFMoviePipelineSegmentWorkMetrics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MoviePipelineSegmentWorkMetrics")),new UScriptStruct::TCppStructOps<FMoviePipelineSegmentWorkMetrics>);
	}
} ScriptStruct_MovieRenderPipelineCore_StaticRegisterNativesFMoviePipelineSegmentWorkMetrics;
	struct Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalEngineWarmUpFrameCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalEngineWarmUpFrameCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EngineWarmUpFrameIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EngineWarmUpFrameIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalSubSampleCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalSubSampleCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputSubSampleIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutputSubSampleIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalOutputFrameCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalOutputFrameCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputFrameIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutputFrameIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SegmentName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SegmentName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MovieRenderPipelineDataTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMoviePipelineSegmentWorkMetrics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::NewProp_TotalEngineWarmUpFrameCount_MetaData[] = {
		{ "Category", "Pipeline Segment" },
		{ "Comment", "/** The total number of engine warm up frames for this segment. */" },
		{ "ModuleRelativePath", "Public/MovieRenderPipelineDataTypes.h" },
		{ "ToolTip", "The total number of engine warm up frames for this segment." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::NewProp_TotalEngineWarmUpFrameCount = { "TotalEngineWarmUpFrameCount", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMoviePipelineSegmentWorkMetrics, TotalEngineWarmUpFrameCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::NewProp_TotalEngineWarmUpFrameCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::NewProp_TotalEngineWarmUpFrameCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::NewProp_EngineWarmUpFrameIndex_MetaData[] = {
		{ "Category", "Pipeline Segment" },
		{ "Comment", "/** The index of the engine warm up frame that we are working on. No rendering samples are produced for these. */" },
		{ "ModuleRelativePath", "Public/MovieRenderPipelineDataTypes.h" },
		{ "ToolTip", "The index of the engine warm up frame that we are working on. No rendering samples are produced for these." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::NewProp_EngineWarmUpFrameIndex = { "EngineWarmUpFrameIndex", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMoviePipelineSegmentWorkMetrics, EngineWarmUpFrameIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::NewProp_EngineWarmUpFrameIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::NewProp_EngineWarmUpFrameIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::NewProp_TotalSubSampleCount_MetaData[] = {
		{ "Category", "Pipeline Segment" },
		{ "Comment", "/** The total number of samples we will have to build to render this output frame. */" },
		{ "ModuleRelativePath", "Public/MovieRenderPipelineDataTypes.h" },
		{ "ToolTip", "The total number of samples we will have to build to render this output frame." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::NewProp_TotalSubSampleCount = { "TotalSubSampleCount", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMoviePipelineSegmentWorkMetrics, TotalSubSampleCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::NewProp_TotalSubSampleCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::NewProp_TotalSubSampleCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::NewProp_OutputSubSampleIndex_MetaData[] = {
		{ "Category", "Pipeline Segment" },
		{ "Comment", "/** Which temporal/spatial sub sample are we working on right now. This counts temporal, spatial, and tile samples to accurately reflect how much work is needed for this output frame. */" },
		{ "ModuleRelativePath", "Public/MovieRenderPipelineDataTypes.h" },
		{ "ToolTip", "Which temporal/spatial sub sample are we working on right now. This counts temporal, spatial, and tile samples to accurately reflect how much work is needed for this output frame." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::NewProp_OutputSubSampleIndex = { "OutputSubSampleIndex", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMoviePipelineSegmentWorkMetrics, OutputSubSampleIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::NewProp_OutputSubSampleIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::NewProp_OutputSubSampleIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::NewProp_TotalOutputFrameCount_MetaData[] = {
		{ "Category", "Pipeline Segment" },
		{ "Comment", "/** The number of output frames we expect to make for this segment. */" },
		{ "ModuleRelativePath", "Public/MovieRenderPipelineDataTypes.h" },
		{ "ToolTip", "The number of output frames we expect to make for this segment." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::NewProp_TotalOutputFrameCount = { "TotalOutputFrameCount", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMoviePipelineSegmentWorkMetrics, TotalOutputFrameCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::NewProp_TotalOutputFrameCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::NewProp_TotalOutputFrameCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::NewProp_OutputFrameIndex_MetaData[] = {
		{ "Category", "Pipeline Segment" },
		{ "Comment", "/** Index of the output frame we are working on right now. */" },
		{ "ModuleRelativePath", "Public/MovieRenderPipelineDataTypes.h" },
		{ "ToolTip", "Index of the output frame we are working on right now." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::NewProp_OutputFrameIndex = { "OutputFrameIndex", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMoviePipelineSegmentWorkMetrics, OutputFrameIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::NewProp_OutputFrameIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::NewProp_OutputFrameIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::NewProp_SegmentName_MetaData[] = {
		{ "Category", "Pipeline Segment" },
		{ "Comment", "/** The name of the segment (if any) */" },
		{ "ModuleRelativePath", "Public/MovieRenderPipelineDataTypes.h" },
		{ "ToolTip", "The name of the segment (if any)" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::NewProp_SegmentName = { "SegmentName", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMoviePipelineSegmentWorkMetrics, SegmentName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::NewProp_SegmentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::NewProp_SegmentName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::NewProp_TotalEngineWarmUpFrameCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::NewProp_EngineWarmUpFrameIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::NewProp_TotalSubSampleCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::NewProp_OutputSubSampleIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::NewProp_TotalOutputFrameCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::NewProp_OutputFrameIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::NewProp_SegmentName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
		nullptr,
		&NewStructOps,
		"MoviePipelineSegmentWorkMetrics",
		sizeof(FMoviePipelineSegmentWorkMetrics),
		alignof(FMoviePipelineSegmentWorkMetrics),
		Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MoviePipelineSegmentWorkMetrics"), sizeof(FMoviePipelineSegmentWorkMetrics), Get_Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Hash() { return 3148412898U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
