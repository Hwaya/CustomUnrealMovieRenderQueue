// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieRenderPipelineSettings/Public/MoviePipelineConsoleVariableSetting.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoviePipelineConsoleVariableSetting() {}
// Cross Module References
	MOVIERENDERPIPELINESETTINGS_API UClass* Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_NoRegister();
	MOVIERENDERPIPELINESETTINGS_API UClass* Z_Construct_UClass_UMoviePipelineConsoleVariableSetting();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineSetting();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineSettings();
// End Cross Module References
	void UMoviePipelineConsoleVariableSetting::StaticRegisterNativesUMoviePipelineConsoleVariableSetting()
	{
	}
	UClass* Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_NoRegister()
	{
		return UMoviePipelineConsoleVariableSetting::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndConsoleCommands_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EndConsoleCommands;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EndConsoleCommands_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartConsoleCommands_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StartConsoleCommands;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StartConsoleCommands_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConsoleVariables_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ConsoleVariables;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ConsoleVariables_Key_KeyProp;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ConsoleVariables_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMoviePipelineSetting,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MoviePipelineConsoleVariableSetting.h" },
		{ "ModuleRelativePath", "Public/MoviePipelineConsoleVariableSetting.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::NewProp_EndConsoleCommands_MetaData[] = {
		{ "Category", "Game" },
		{ "Comment", "/**\n\x09* An array of console commands to execute when this shot is finished. Used to restore changes made by\n\x09* StartConsoleCommands.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineConsoleVariableSetting.h" },
		{ "ToolTip", "An array of console commands to execute when this shot is finished. Used to restore changes made by\nStartConsoleCommands." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::NewProp_EndConsoleCommands = { "EndConsoleCommands", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMoviePipelineConsoleVariableSetting, EndConsoleCommands), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::NewProp_EndConsoleCommands_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::NewProp_EndConsoleCommands_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::NewProp_EndConsoleCommands_Inner = { "EndConsoleCommands", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::NewProp_StartConsoleCommands_MetaData[] = {
		{ "Category", "Game" },
		{ "Comment", "/**\n\x09* An array of console commands to execute when this shot is started. If you need to restore the value \n\x09* after the shot, add a matching entry in the EndConsoleCommands array. Because they are commands\n\x09* and not values we cannot save the preivous value automatically.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineConsoleVariableSetting.h" },
		{ "ToolTip", "An array of console commands to execute when this shot is started. If you need to restore the value\nafter the shot, add a matching entry in the EndConsoleCommands array. Because they are commands\nand not values we cannot save the preivous value automatically." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::NewProp_StartConsoleCommands = { "StartConsoleCommands", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMoviePipelineConsoleVariableSetting, StartConsoleCommands), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::NewProp_StartConsoleCommands_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::NewProp_StartConsoleCommands_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::NewProp_StartConsoleCommands_Inner = { "StartConsoleCommands", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::NewProp_ConsoleVariables_MetaData[] = {
		{ "Category", "Game" },
		{ "Comment", "/** \n\x09* An array of key/value pairs for console variable name and the value you wish to set for that cvar.\n\x09* The existing value will automatically be cached and restored afterwards.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineConsoleVariableSetting.h" },
		{ "ToolTip", "An array of key/value pairs for console variable name and the value you wish to set for that cvar.\nThe existing value will automatically be cached and restored afterwards." },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::NewProp_ConsoleVariables = { "ConsoleVariables", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMoviePipelineConsoleVariableSetting, ConsoleVariables), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::NewProp_ConsoleVariables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::NewProp_ConsoleVariables_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::NewProp_ConsoleVariables_Key_KeyProp = { "ConsoleVariables_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::NewProp_ConsoleVariables_ValueProp = { "ConsoleVariables", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::NewProp_EndConsoleCommands,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::NewProp_EndConsoleCommands_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::NewProp_StartConsoleCommands,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::NewProp_StartConsoleCommands_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::NewProp_ConsoleVariables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::NewProp_ConsoleVariables_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::NewProp_ConsoleVariables_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineConsoleVariableSetting>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::ClassParams = {
		&UMoviePipelineConsoleVariableSetting::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoviePipelineConsoleVariableSetting()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMoviePipelineConsoleVariableSetting, 765374878);
	template<> MOVIERENDERPIPELINESETTINGS_API UClass* StaticClass<UMoviePipelineConsoleVariableSetting>()
	{
		return UMoviePipelineConsoleVariableSetting::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMoviePipelineConsoleVariableSetting(Z_Construct_UClass_UMoviePipelineConsoleVariableSetting, &UMoviePipelineConsoleVariableSetting::StaticClass, TEXT("/Script/MovieRenderPipelineSettings"), TEXT("UMoviePipelineConsoleVariableSetting"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineConsoleVariableSetting);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
