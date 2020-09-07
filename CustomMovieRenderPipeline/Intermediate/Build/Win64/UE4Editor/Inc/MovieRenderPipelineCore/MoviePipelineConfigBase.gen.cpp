// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieRenderPipelineCore/Public/MoviePipelineConfigBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoviePipelineConfigBase() {}
// Cross Module References
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineConfigBase_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineConfigBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineCore();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineSetting_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	DEFINE_FUNCTION(UMoviePipelineConfigBase::execFindOrAddSettingByClass)
	{
		P_GET_OBJECT(UClass,Z_Param_InClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMoviePipelineSetting**)Z_Param__Result=P_THIS->FindOrAddSettingByClass(Z_Param_InClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineConfigBase::execFindSettingByClass)
	{
		P_GET_OBJECT(UClass,Z_Param_InClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMoviePipelineSetting**)Z_Param__Result=P_THIS->FindSettingByClass(Z_Param_InClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineConfigBase::execRemoveSetting)
	{
		P_GET_OBJECT(UMoviePipelineSetting,Z_Param_InSetting);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveSetting(Z_Param_InSetting);
		P_NATIVE_END;
	}
	void UMoviePipelineConfigBase::StaticRegisterNativesUMoviePipelineConfigBase()
	{
		UClass* Class = UMoviePipelineConfigBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindOrAddSettingByClass", &UMoviePipelineConfigBase::execFindOrAddSettingByClass },
			{ "FindSettingByClass", &UMoviePipelineConfigBase::execFindSettingByClass },
			{ "RemoveSetting", &UMoviePipelineConfigBase::execRemoveSetting },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMoviePipelineConfigBase_FindOrAddSettingByClass_Statics
	{
		struct MoviePipelineConfigBase_eventFindOrAddSettingByClass_Parms
		{
			TSubclassOf<UMoviePipelineSetting>  InClass;
			UMoviePipelineSetting* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_InClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineConfigBase_FindOrAddSettingByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MoviePipelineConfigBase_eventFindOrAddSettingByClass_Parms, ReturnValue), Z_Construct_UClass_UMoviePipelineSetting_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMoviePipelineConfigBase_FindOrAddSettingByClass_Statics::NewProp_InClass = { "InClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MoviePipelineConfigBase_eventFindOrAddSettingByClass_Parms, InClass), Z_Construct_UClass_UMoviePipelineSetting_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineConfigBase_FindOrAddSettingByClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineConfigBase_FindOrAddSettingByClass_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineConfigBase_FindOrAddSettingByClass_Statics::NewProp_InClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineConfigBase_FindOrAddSettingByClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/**\n\x09* Finds a setting of a particular type for this pipeline config, adding it if it doesn't already exist.\n\x09* @param InClass - Class you wish to find or create the setting object for.\n\x09* @return An instance of this class as a setting on this config.\n\x09*/" },
		{ "DeterminesOutputType", "InClass" },
		{ "ModuleRelativePath", "Public/MoviePipelineConfigBase.h" },
		{ "ToolTip", "Finds a setting of a particular type for this pipeline config, adding it if it doesn't already exist.\n@param InClass - Class you wish to find or create the setting object for.\n@return An instance of this class as a setting on this config." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineConfigBase_FindOrAddSettingByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineConfigBase, nullptr, "FindOrAddSettingByClass", nullptr, nullptr, sizeof(MoviePipelineConfigBase_eventFindOrAddSettingByClass_Parms), Z_Construct_UFunction_UMoviePipelineConfigBase_FindOrAddSettingByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineConfigBase_FindOrAddSettingByClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineConfigBase_FindOrAddSettingByClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineConfigBase_FindOrAddSettingByClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineConfigBase_FindOrAddSettingByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMoviePipelineConfigBase_FindOrAddSettingByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineConfigBase_FindSettingByClass_Statics
	{
		struct MoviePipelineConfigBase_eventFindSettingByClass_Parms
		{
			TSubclassOf<UMoviePipelineSetting>  InClass;
			UMoviePipelineSetting* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_InClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineConfigBase_FindSettingByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MoviePipelineConfigBase_eventFindSettingByClass_Parms, ReturnValue), Z_Construct_UClass_UMoviePipelineSetting_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMoviePipelineConfigBase_FindSettingByClass_Statics::NewProp_InClass = { "InClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MoviePipelineConfigBase_eventFindSettingByClass_Parms, InClass), Z_Construct_UClass_UMoviePipelineSetting_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineConfigBase_FindSettingByClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineConfigBase_FindSettingByClass_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineConfigBase_FindSettingByClass_Statics::NewProp_InClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineConfigBase_FindSettingByClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/**\n\x09* Find a setting of a particular type for this config.\n\x09* @param InClass - Class that you wish to find the setting object for.\n\x09* @return An instance of this class if it already exists as a setting on this config, otherwise null.\n\x09*/" },
		{ "DeterminesOutputType", "InClass" },
		{ "ModuleRelativePath", "Public/MoviePipelineConfigBase.h" },
		{ "ToolTip", "Find a setting of a particular type for this config.\n@param InClass - Class that you wish to find the setting object for.\n@return An instance of this class if it already exists as a setting on this config, otherwise null." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineConfigBase_FindSettingByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineConfigBase, nullptr, "FindSettingByClass", nullptr, nullptr, sizeof(MoviePipelineConfigBase_eventFindSettingByClass_Parms), Z_Construct_UFunction_UMoviePipelineConfigBase_FindSettingByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineConfigBase_FindSettingByClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineConfigBase_FindSettingByClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineConfigBase_FindSettingByClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineConfigBase_FindSettingByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMoviePipelineConfigBase_FindSettingByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineConfigBase_RemoveSetting_Statics
	{
		struct MoviePipelineConfigBase_eventRemoveSetting_Parms
		{
			UMoviePipelineSetting* InSetting;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InSetting;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineConfigBase_RemoveSetting_Statics::NewProp_InSetting = { "InSetting", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MoviePipelineConfigBase_eventRemoveSetting_Parms, InSetting), Z_Construct_UClass_UMoviePipelineSetting_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineConfigBase_RemoveSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineConfigBase_RemoveSetting_Statics::NewProp_InSetting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineConfigBase_RemoveSetting_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/** Removes the specific instance from our Setting list. */" },
		{ "ModuleRelativePath", "Public/MoviePipelineConfigBase.h" },
		{ "ToolTip", "Removes the specific instance from our Setting list." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineConfigBase_RemoveSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineConfigBase, nullptr, "RemoveSetting", nullptr, nullptr, sizeof(MoviePipelineConfigBase_eventRemoveSetting_Parms), Z_Construct_UFunction_UMoviePipelineConfigBase_RemoveSetting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineConfigBase_RemoveSetting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineConfigBase_RemoveSetting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineConfigBase_RemoveSetting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineConfigBase_RemoveSetting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMoviePipelineConfigBase_RemoveSetting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMoviePipelineConfigBase_NoRegister()
	{
		return UMoviePipelineConfigBase::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelineConfigBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Settings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Settings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelineConfigBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMoviePipelineConfigBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMoviePipelineConfigBase_FindOrAddSettingByClass, "FindOrAddSettingByClass" }, // 2608719733
		{ &Z_Construct_UFunction_UMoviePipelineConfigBase_FindSettingByClass, "FindSettingByClass" }, // 15568641
		{ &Z_Construct_UFunction_UMoviePipelineConfigBase_RemoveSetting, "RemoveSetting" }, // 3014587178
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineConfigBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MoviePipelineConfigBase.h" },
		{ "ModuleRelativePath", "Public/MoviePipelineConfigBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineConfigBase_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "Movie Pipeline" },
		{ "Comment", "/** Array of settings classes that affect various parts of the output pipeline. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MoviePipelineConfigBase.h" },
		{ "ToolTip", "Array of settings classes that affect various parts of the output pipeline." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMoviePipelineConfigBase_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0020088000020009, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMoviePipelineConfigBase, Settings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineConfigBase_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineConfigBase_Statics::NewProp_Settings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineConfigBase_Statics::NewProp_Settings_Inner_MetaData[] = {
		{ "Category", "Movie Pipeline" },
		{ "Comment", "/** Array of settings classes that affect various parts of the output pipeline. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MoviePipelineConfigBase.h" },
		{ "ToolTip", "Array of settings classes that affect various parts of the output pipeline." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMoviePipelineConfigBase_Statics::NewProp_Settings_Inner = { "Settings", nullptr, (EPropertyFlags)0x00020000000a0008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMoviePipelineSetting_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineConfigBase_Statics::NewProp_Settings_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineConfigBase_Statics::NewProp_Settings_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineConfigBase_Statics::NewProp_DisplayName_MetaData[] = {
		{ "ModuleRelativePath", "Public/MoviePipelineConfigBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMoviePipelineConfigBase_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMoviePipelineConfigBase, DisplayName), METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineConfigBase_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineConfigBase_Statics::NewProp_DisplayName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoviePipelineConfigBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineConfigBase_Statics::NewProp_Settings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineConfigBase_Statics::NewProp_Settings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineConfigBase_Statics::NewProp_DisplayName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelineConfigBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineConfigBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineConfigBase_Statics::ClassParams = {
		&UMoviePipelineConfigBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMoviePipelineConfigBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineConfigBase_Statics::PropPointers),
		0,
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineConfigBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineConfigBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoviePipelineConfigBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMoviePipelineConfigBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMoviePipelineConfigBase, 704384011);
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMoviePipelineConfigBase>()
	{
		return UMoviePipelineConfigBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMoviePipelineConfigBase(Z_Construct_UClass_UMoviePipelineConfigBase, &UMoviePipelineConfigBase::StaticClass, TEXT("/Script/MovieRenderPipelineCore"), TEXT("UMoviePipelineConfigBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineConfigBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
