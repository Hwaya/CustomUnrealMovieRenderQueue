// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieRenderPipelineCore/Public/MoviePipelineMasterConfig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoviePipelineMasterConfig() {}
// Cross Module References
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineMasterConfig_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineMasterConfig();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineConfigBase();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineCore();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineSetting_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineOutputSetting_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineShotConfig_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UMoviePipelineMasterConfig::execGetEffectiveFrameRate)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_InSequence);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFrameRate*)Z_Param__Result=P_THIS->GetEffectiveFrameRate(Z_Param_InSequence);
		P_NATIVE_END;
	}
	void UMoviePipelineMasterConfig::StaticRegisterNativesUMoviePipelineMasterConfig()
	{
		UClass* Class = UMoviePipelineMasterConfig::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEffectiveFrameRate", &UMoviePipelineMasterConfig::execGetEffectiveFrameRate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMoviePipelineMasterConfig_GetEffectiveFrameRate_Statics
	{
		struct FFrameRate
		{
			int32 Numerator;
			int32 Denominator;
		};

		struct MoviePipelineMasterConfig_eventGetEffectiveFrameRate_Parms
		{
			const ULevelSequence* InSequence;
			FFrameRate ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InSequence;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoviePipelineMasterConfig_GetEffectiveFrameRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MoviePipelineMasterConfig_eventGetEffectiveFrameRate_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineMasterConfig_GetEffectiveFrameRate_Statics::NewProp_InSequence_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineMasterConfig_GetEffectiveFrameRate_Statics::NewProp_InSequence = { "InSequence", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MoviePipelineMasterConfig_eventGetEffectiveFrameRate_Parms, InSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineMasterConfig_GetEffectiveFrameRate_Statics::NewProp_InSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineMasterConfig_GetEffectiveFrameRate_Statics::NewProp_InSequence_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineMasterConfig_GetEffectiveFrameRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineMasterConfig_GetEffectiveFrameRate_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineMasterConfig_GetEffectiveFrameRate_Statics::NewProp_InSequence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineMasterConfig_GetEffectiveFrameRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/**\n\x09* Returns the frame rate override from the Master Configuration (if any) or the Sequence frame rate if no override is specified.\n\x09* This should be treated as the actual output framerate of the overall Pipeline.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineMasterConfig.h" },
		{ "ToolTip", "Returns the frame rate override from the Master Configuration (if any) or the Sequence frame rate if no override is specified.\nThis should be treated as the actual output framerate of the overall Pipeline." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineMasterConfig_GetEffectiveFrameRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineMasterConfig, nullptr, "GetEffectiveFrameRate", nullptr, nullptr, sizeof(MoviePipelineMasterConfig_eventGetEffectiveFrameRate_Parms), Z_Construct_UFunction_UMoviePipelineMasterConfig_GetEffectiveFrameRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineMasterConfig_GetEffectiveFrameRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineMasterConfig_GetEffectiveFrameRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineMasterConfig_GetEffectiveFrameRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineMasterConfig_GetEffectiveFrameRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMoviePipelineMasterConfig_GetEffectiveFrameRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMoviePipelineMasterConfig_NoRegister()
	{
		return UMoviePipelineMasterConfig::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelineMasterConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransientSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TransientSettings;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TransientSettings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputSetting_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutputSetting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerShotConfigMapping_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_PerShotConfigMapping;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PerShotConfigMapping_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerShotConfigMapping_ValueProp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PerShotConfigMapping_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelineMasterConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMoviePipelineConfigBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMoviePipelineMasterConfig_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMoviePipelineMasterConfig_GetEffectiveFrameRate, "GetEffectiveFrameRate" }, // 1635395683
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineMasterConfig_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* This class describes the main configuration for a Movie Render Pipeline.\n* Only settings that apply to the entire output should be stored here,\n* anything that is changed on a per-shot basis should be stored inside of \n* UMovieRenderShotConfig instead.\n*\n* THIS CLASS SHOULD BE IMMUTABLE ONCE PASSED TO THE PIPELINE FOR PROCESSING.\n* (Otherwise you will be modifying the instance that exists in the UI)\n*/" },
		{ "IncludePath", "MoviePipelineMasterConfig.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MoviePipelineMasterConfig.h" },
		{ "ToolTip", "This class describes the main configuration for a Movie Render Pipeline.\nOnly settings that apply to the entire output should be stored here,\nanything that is changed on a per-shot basis should be stored inside of\nUMovieRenderShotConfig instead.\n\nTHIS CLASS SHOULD BE IMMUTABLE ONCE PASSED TO THE PIPELINE FOR PROCESSING.\n(Otherwise you will be modifying the instance that exists in the UI)" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineMasterConfig_Statics::NewProp_TransientSettings_MetaData[] = {
		{ "Comment", "/** An array of settings that are available in the engine and have not been edited by the user. */" },
		{ "ModuleRelativePath", "Public/MoviePipelineMasterConfig.h" },
		{ "ToolTip", "An array of settings that are available in the engine and have not been edited by the user." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMoviePipelineMasterConfig_Statics::NewProp_TransientSettings = { "TransientSettings", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMoviePipelineMasterConfig, TransientSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineMasterConfig_Statics::NewProp_TransientSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineMasterConfig_Statics::NewProp_TransientSettings_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMoviePipelineMasterConfig_Statics::NewProp_TransientSettings_Inner = { "TransientSettings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMoviePipelineSetting_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineMasterConfig_Statics::NewProp_OutputSetting_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MoviePipelineMasterConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMoviePipelineMasterConfig_Statics::NewProp_OutputSetting = { "OutputSetting", nullptr, (EPropertyFlags)0x0042000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMoviePipelineMasterConfig, OutputSetting), Z_Construct_UClass_UMoviePipelineOutputSetting_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineMasterConfig_Statics::NewProp_OutputSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineMasterConfig_Statics::NewProp_OutputSetting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineMasterConfig_Statics::NewProp_PerShotConfigMapping_MetaData[] = {
		{ "Comment", "/** A mapping of Shot Name -> Shot Config to use for rendering specific shots with specific configs. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MoviePipelineMasterConfig.h" },
		{ "ToolTip", "A mapping of Shot Name -> Shot Config to use for rendering specific shots with specific configs." },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMoviePipelineMasterConfig_Statics::NewProp_PerShotConfigMapping = { "PerShotConfigMapping", nullptr, (EPropertyFlags)0x0010008000000008, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMoviePipelineMasterConfig, PerShotConfigMapping), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineMasterConfig_Statics::NewProp_PerShotConfigMapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineMasterConfig_Statics::NewProp_PerShotConfigMapping_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMoviePipelineMasterConfig_Statics::NewProp_PerShotConfigMapping_Key_KeyProp = { "PerShotConfigMapping_Key", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineMasterConfig_Statics::NewProp_PerShotConfigMapping_ValueProp_MetaData[] = {
		{ "Comment", "/** A mapping of Shot Name -> Shot Config to use for rendering specific shots with specific configs. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MoviePipelineMasterConfig.h" },
		{ "ToolTip", "A mapping of Shot Name -> Shot Config to use for rendering specific shots with specific configs." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMoviePipelineMasterConfig_Statics::NewProp_PerShotConfigMapping_ValueProp = { "PerShotConfigMapping", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UMoviePipelineShotConfig_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineMasterConfig_Statics::NewProp_PerShotConfigMapping_ValueProp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineMasterConfig_Statics::NewProp_PerShotConfigMapping_ValueProp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoviePipelineMasterConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineMasterConfig_Statics::NewProp_TransientSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineMasterConfig_Statics::NewProp_TransientSettings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineMasterConfig_Statics::NewProp_OutputSetting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineMasterConfig_Statics::NewProp_PerShotConfigMapping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineMasterConfig_Statics::NewProp_PerShotConfigMapping_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineMasterConfig_Statics::NewProp_PerShotConfigMapping_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelineMasterConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineMasterConfig>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineMasterConfig_Statics::ClassParams = {
		&UMoviePipelineMasterConfig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMoviePipelineMasterConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineMasterConfig_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineMasterConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineMasterConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoviePipelineMasterConfig()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMoviePipelineMasterConfig_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMoviePipelineMasterConfig, 4072909779);
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMoviePipelineMasterConfig>()
	{
		return UMoviePipelineMasterConfig::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMoviePipelineMasterConfig(Z_Construct_UClass_UMoviePipelineMasterConfig, &UMoviePipelineMasterConfig::StaticClass, TEXT("/Script/MovieRenderPipelineCore"), TEXT("UMoviePipelineMasterConfig"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineMasterConfig);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
