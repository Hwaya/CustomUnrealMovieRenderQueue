// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieRenderPipelineCore/Public/MoviePipelineQueue.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoviePipelineQueue() {}
// Cross Module References
	MOVIERENDERPIPELINECORE_API UEnum* Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineExecutorJobStatus();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineCore();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineExecutorJob_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineExecutorJob();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineMasterConfig_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineQueue_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineQueue();
// End Cross Module References
	static UEnum* EMoviePipelineExecutorJobStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineExecutorJobStatus, Z_Construct_UPackage__Script_MovieRenderPipelineCore(), TEXT("EMoviePipelineExecutorJobStatus"));
		}
		return Singleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UEnum* StaticEnum<EMoviePipelineExecutorJobStatus>()
	{
		return EMoviePipelineExecutorJobStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMoviePipelineExecutorJobStatus(EMoviePipelineExecutorJobStatus_StaticEnum, TEXT("/Script/MovieRenderPipelineCore"), TEXT("EMoviePipelineExecutorJobStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineExecutorJobStatus_Hash() { return 3527694630U; }
	UEnum* Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineExecutorJobStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMoviePipelineExecutorJobStatus"), 0, Get_Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineExecutorJobStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMoviePipelineExecutorJobStatus::Uninitialized", (int64)EMoviePipelineExecutorJobStatus::Uninitialized },
				{ "EMoviePipelineExecutorJobStatus::ReadyToStart", (int64)EMoviePipelineExecutorJobStatus::ReadyToStart },
				{ "EMoviePipelineExecutorJobStatus::InProgress", (int64)EMoviePipelineExecutorJobStatus::InProgress },
				{ "EMoviePipelineExecutorJobStatus::Finished", (int64)EMoviePipelineExecutorJobStatus::Finished },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Finished.Name", "EMoviePipelineExecutorJobStatus::Finished" },
				{ "InProgress.Name", "EMoviePipelineExecutorJobStatus::InProgress" },
				{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
				{ "ReadyToStart.Name", "EMoviePipelineExecutorJobStatus::ReadyToStart" },
				{ "Uninitialized.Name", "EMoviePipelineExecutorJobStatus::Uninitialized" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
				nullptr,
				"EMoviePipelineExecutorJobStatus",
				"EMoviePipelineExecutorJobStatus",
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
	DEFINE_FUNCTION(UMoviePipelineExecutorJob::execSetConfiguration)
	{
		P_GET_OBJECT(UMoviePipelineMasterConfig,Z_Param_InPreset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetConfiguration(Z_Param_InPreset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineExecutorJob::execGetConfiguration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMoviePipelineMasterConfig**)Z_Param__Result=P_THIS->GetConfiguration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineExecutorJob::execGetPresetOrigin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMoviePipelineMasterConfig**)Z_Param__Result=P_THIS->GetPresetOrigin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineExecutorJob::execSetPresetOrigin)
	{
		P_GET_OBJECT(UMoviePipelineMasterConfig,Z_Param_InPreset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPresetOrigin(Z_Param_InPreset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineExecutorJob::execHasFinished)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasFinished();
		P_NATIVE_END;
	}
	void UMoviePipelineExecutorJob::StaticRegisterNativesUMoviePipelineExecutorJob()
	{
		UClass* Class = UMoviePipelineExecutorJob::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetConfiguration", &UMoviePipelineExecutorJob::execGetConfiguration },
			{ "GetPresetOrigin", &UMoviePipelineExecutorJob::execGetPresetOrigin },
			{ "HasFinished", &UMoviePipelineExecutorJob::execHasFinished },
			{ "SetConfiguration", &UMoviePipelineExecutorJob::execSetConfiguration },
			{ "SetPresetOrigin", &UMoviePipelineExecutorJob::execSetPresetOrigin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMoviePipelineExecutorJob_GetConfiguration_Statics
	{
		struct MoviePipelineExecutorJob_eventGetConfiguration_Parms
		{
			UMoviePipelineMasterConfig* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineExecutorJob_GetConfiguration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MoviePipelineExecutorJob_eventGetConfiguration_Parms, ReturnValue), Z_Construct_UClass_UMoviePipelineMasterConfig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineExecutorJob_GetConfiguration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineExecutorJob_GetConfiguration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineExecutorJob_GetConfiguration_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineExecutorJob_GetConfiguration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineExecutorJob, nullptr, "GetConfiguration", nullptr, nullptr, sizeof(MoviePipelineExecutorJob_eventGetConfiguration_Parms), Z_Construct_UFunction_UMoviePipelineExecutorJob_GetConfiguration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorJob_GetConfiguration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineExecutorJob_GetConfiguration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorJob_GetConfiguration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineExecutorJob_GetConfiguration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMoviePipelineExecutorJob_GetConfiguration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineExecutorJob_GetPresetOrigin_Statics
	{
		struct MoviePipelineExecutorJob_eventGetPresetOrigin_Parms
		{
			UMoviePipelineMasterConfig* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineExecutorJob_GetPresetOrigin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MoviePipelineExecutorJob_eventGetPresetOrigin_Parms, ReturnValue), Z_Construct_UClass_UMoviePipelineMasterConfig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineExecutorJob_GetPresetOrigin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineExecutorJob_GetPresetOrigin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineExecutorJob_GetPresetOrigin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineExecutorJob_GetPresetOrigin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineExecutorJob, nullptr, "GetPresetOrigin", nullptr, nullptr, sizeof(MoviePipelineExecutorJob_eventGetPresetOrigin_Parms), Z_Construct_UFunction_UMoviePipelineExecutorJob_GetPresetOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorJob_GetPresetOrigin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineExecutorJob_GetPresetOrigin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorJob_GetPresetOrigin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineExecutorJob_GetPresetOrigin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMoviePipelineExecutorJob_GetPresetOrigin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineExecutorJob_HasFinished_Statics
	{
		struct MoviePipelineExecutorJob_eventHasFinished_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMoviePipelineExecutorJob_HasFinished_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MoviePipelineExecutorJob_eventHasFinished_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoviePipelineExecutorJob_HasFinished_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MoviePipelineExecutorJob_eventHasFinished_Parms), &Z_Construct_UFunction_UMoviePipelineExecutorJob_HasFinished_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineExecutorJob_HasFinished_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineExecutorJob_HasFinished_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineExecutorJob_HasFinished_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineExecutorJob_HasFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineExecutorJob, nullptr, "HasFinished", nullptr, nullptr, sizeof(MoviePipelineExecutorJob_eventHasFinished_Parms), Z_Construct_UFunction_UMoviePipelineExecutorJob_HasFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorJob_HasFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineExecutorJob_HasFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorJob_HasFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineExecutorJob_HasFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMoviePipelineExecutorJob_HasFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineExecutorJob_SetConfiguration_Statics
	{
		struct MoviePipelineExecutorJob_eventSetConfiguration_Parms
		{
			UMoviePipelineMasterConfig* InPreset;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InPreset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineExecutorJob_SetConfiguration_Statics::NewProp_InPreset = { "InPreset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MoviePipelineExecutorJob_eventSetConfiguration_Parms, InPreset), Z_Construct_UClass_UMoviePipelineMasterConfig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineExecutorJob_SetConfiguration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineExecutorJob_SetConfiguration_Statics::NewProp_InPreset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineExecutorJob_SetConfiguration_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineExecutorJob_SetConfiguration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineExecutorJob, nullptr, "SetConfiguration", nullptr, nullptr, sizeof(MoviePipelineExecutorJob_eventSetConfiguration_Parms), Z_Construct_UFunction_UMoviePipelineExecutorJob_SetConfiguration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorJob_SetConfiguration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineExecutorJob_SetConfiguration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorJob_SetConfiguration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineExecutorJob_SetConfiguration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMoviePipelineExecutorJob_SetConfiguration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineExecutorJob_SetPresetOrigin_Statics
	{
		struct MoviePipelineExecutorJob_eventSetPresetOrigin_Parms
		{
			UMoviePipelineMasterConfig* InPreset;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InPreset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineExecutorJob_SetPresetOrigin_Statics::NewProp_InPreset = { "InPreset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MoviePipelineExecutorJob_eventSetPresetOrigin_Parms, InPreset), Z_Construct_UClass_UMoviePipelineMasterConfig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineExecutorJob_SetPresetOrigin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineExecutorJob_SetPresetOrigin_Statics::NewProp_InPreset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineExecutorJob_SetPresetOrigin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineExecutorJob_SetPresetOrigin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineExecutorJob, nullptr, "SetPresetOrigin", nullptr, nullptr, sizeof(MoviePipelineExecutorJob_eventSetPresetOrigin_Parms), Z_Construct_UFunction_UMoviePipelineExecutorJob_SetPresetOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorJob_SetPresetOrigin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineExecutorJob_SetPresetOrigin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorJob_SetPresetOrigin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineExecutorJob_SetPresetOrigin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMoviePipelineExecutorJob_SetPresetOrigin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMoviePipelineExecutorJob_NoRegister()
	{
		return UMoviePipelineExecutorJob::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelineExecutorJob_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadedSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LoadedSequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PresetOrigin_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_PresetOrigin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Configuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Configuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Author_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Author;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JobStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_JobStatus;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_JobStatus_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Map_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Map;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Sequence;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMoviePipelineExecutorJob_GetConfiguration, "GetConfiguration" }, // 1382933140
		{ &Z_Construct_UFunction_UMoviePipelineExecutorJob_GetPresetOrigin, "GetPresetOrigin" }, // 2226006382
		{ &Z_Construct_UFunction_UMoviePipelineExecutorJob_HasFinished, "HasFinished" }, // 2505788580
		{ &Z_Construct_UFunction_UMoviePipelineExecutorJob_SetConfiguration, "SetConfiguration" }, // 2108840216
		{ &Z_Construct_UFunction_UMoviePipelineExecutorJob_SetPresetOrigin, "SetPresetOrigin" }, // 1257071995
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* A particular job within the Queue\n*/" },
		{ "IncludePath", "MoviePipelineQueue.h" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
		{ "ToolTip", "A particular job within the Queue" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_LoadedSequence_MetaData[] = {
		{ "Comment", "/** Cache our loaded sequence after the first time someone tries to retrieve information from this job that requires the Sequence. */" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
		{ "ToolTip", "Cache our loaded sequence after the first time someone tries to retrieve information from this job that requires the Sequence." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_LoadedSequence = { "LoadedSequence", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMoviePipelineExecutorJob, LoadedSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_LoadedSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_LoadedSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_PresetOrigin_MetaData[] = {
		{ "Comment", "/**\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_PresetOrigin = { "PresetOrigin", nullptr, (EPropertyFlags)0x0044000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMoviePipelineExecutorJob, PresetOrigin), Z_Construct_UClass_UMoviePipelineMasterConfig_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_PresetOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_PresetOrigin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_Configuration_MetaData[] = {
		{ "Comment", "/** \n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_Configuration = { "Configuration", nullptr, (EPropertyFlags)0x0042000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMoviePipelineExecutorJob, Configuration), Z_Construct_UClass_UMoviePipelineMasterConfig_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_Configuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_Configuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_Author_MetaData[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/** (Optional) Name of the person who submitted the job. Can be shown in burn in as a first point of contact about the content. */" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
		{ "ToolTip", "(Optional) Name of the person who submitted the job. Can be shown in burn in as a first point of contact about the content." },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_Author = { "Author", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMoviePipelineExecutorJob, Author), METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_Author_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_Author_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_JobStatus_MetaData[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/** What state is this particular job instance currently in? */" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
		{ "ToolTip", "What state is this particular job instance currently in?" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_JobStatus = { "JobStatus", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMoviePipelineExecutorJob, JobStatus), Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineExecutorJobStatus, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_JobStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_JobStatus_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_JobStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_Map_MetaData[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/** Which map should this job render on */" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
		{ "ToolTip", "Which map should this job render on" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_Map = { "Map", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMoviePipelineExecutorJob, Map), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_Map_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_Map_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_Sequence_MetaData[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/** Which sequence should this job render? */" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
		{ "ToolTip", "Which sequence should this job render?" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMoviePipelineExecutorJob, Sequence), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_Sequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_Sequence_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_LoadedSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_PresetOrigin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_Configuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_Author,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_JobStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_JobStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_Map,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::NewProp_Sequence,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineExecutorJob>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::ClassParams = {
		&UMoviePipelineExecutorJob::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoviePipelineExecutorJob()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMoviePipelineExecutorJob_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMoviePipelineExecutorJob, 817024653);
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMoviePipelineExecutorJob>()
	{
		return UMoviePipelineExecutorJob::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMoviePipelineExecutorJob(Z_Construct_UClass_UMoviePipelineExecutorJob, &UMoviePipelineExecutorJob::StaticClass, TEXT("/Script/MovieRenderPipelineCore"), TEXT("UMoviePipelineExecutorJob"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineExecutorJob);
	DEFINE_FUNCTION(UMoviePipelineQueue::execGetJobs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UMoviePipelineExecutorJob*>*)Z_Param__Result=P_THIS->GetJobs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineQueue::execDuplicateJob)
	{
		P_GET_OBJECT(UMoviePipelineExecutorJob,Z_Param_InJob);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMoviePipelineExecutorJob**)Z_Param__Result=P_THIS->DuplicateJob(Z_Param_InJob);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineQueue::execDeleteJob)
	{
		P_GET_OBJECT(UMoviePipelineExecutorJob,Z_Param_InJob);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteJob(Z_Param_InJob);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineQueue::execAllocateNewJob)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMoviePipelineExecutorJob**)Z_Param__Result=P_THIS->AllocateNewJob();
		P_NATIVE_END;
	}
	void UMoviePipelineQueue::StaticRegisterNativesUMoviePipelineQueue()
	{
		UClass* Class = UMoviePipelineQueue::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AllocateNewJob", &UMoviePipelineQueue::execAllocateNewJob },
			{ "DeleteJob", &UMoviePipelineQueue::execDeleteJob },
			{ "DuplicateJob", &UMoviePipelineQueue::execDuplicateJob },
			{ "GetJobs", &UMoviePipelineQueue::execGetJobs },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMoviePipelineQueue_AllocateNewJob_Statics
	{
		struct MoviePipelineQueue_eventAllocateNewJob_Parms
		{
			UMoviePipelineExecutorJob* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineQueue_AllocateNewJob_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MoviePipelineQueue_eventAllocateNewJob_Parms, ReturnValue), Z_Construct_UClass_UMoviePipelineExecutorJob_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineQueue_AllocateNewJob_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineQueue_AllocateNewJob_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineQueue_AllocateNewJob_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline|Queue" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineQueue_AllocateNewJob_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineQueue, nullptr, "AllocateNewJob", nullptr, nullptr, sizeof(MoviePipelineQueue_eventAllocateNewJob_Parms), Z_Construct_UFunction_UMoviePipelineQueue_AllocateNewJob_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineQueue_AllocateNewJob_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineQueue_AllocateNewJob_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineQueue_AllocateNewJob_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineQueue_AllocateNewJob()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMoviePipelineQueue_AllocateNewJob_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineQueue_DeleteJob_Statics
	{
		struct MoviePipelineQueue_eventDeleteJob_Parms
		{
			UMoviePipelineExecutorJob* InJob;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InJob;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineQueue_DeleteJob_Statics::NewProp_InJob = { "InJob", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MoviePipelineQueue_eventDeleteJob_Parms, InJob), Z_Construct_UClass_UMoviePipelineExecutorJob_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineQueue_DeleteJob_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineQueue_DeleteJob_Statics::NewProp_InJob,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineQueue_DeleteJob_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline|Queue" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineQueue_DeleteJob_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineQueue, nullptr, "DeleteJob", nullptr, nullptr, sizeof(MoviePipelineQueue_eventDeleteJob_Parms), Z_Construct_UFunction_UMoviePipelineQueue_DeleteJob_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineQueue_DeleteJob_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineQueue_DeleteJob_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineQueue_DeleteJob_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineQueue_DeleteJob()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMoviePipelineQueue_DeleteJob_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineQueue_DuplicateJob_Statics
	{
		struct MoviePipelineQueue_eventDuplicateJob_Parms
		{
			UMoviePipelineExecutorJob* InJob;
			UMoviePipelineExecutorJob* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InJob;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineQueue_DuplicateJob_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MoviePipelineQueue_eventDuplicateJob_Parms, ReturnValue), Z_Construct_UClass_UMoviePipelineExecutorJob_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineQueue_DuplicateJob_Statics::NewProp_InJob = { "InJob", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MoviePipelineQueue_eventDuplicateJob_Parms, InJob), Z_Construct_UClass_UMoviePipelineExecutorJob_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineQueue_DuplicateJob_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineQueue_DuplicateJob_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineQueue_DuplicateJob_Statics::NewProp_InJob,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineQueue_DuplicateJob_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline|Queue" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineQueue_DuplicateJob_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineQueue, nullptr, "DuplicateJob", nullptr, nullptr, sizeof(MoviePipelineQueue_eventDuplicateJob_Parms), Z_Construct_UFunction_UMoviePipelineQueue_DuplicateJob_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineQueue_DuplicateJob_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineQueue_DuplicateJob_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineQueue_DuplicateJob_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineQueue_DuplicateJob()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMoviePipelineQueue_DuplicateJob_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineQueue_GetJobs_Statics
	{
		struct MoviePipelineQueue_eventGetJobs_Parms
		{
			TArray<UMoviePipelineExecutorJob*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMoviePipelineQueue_GetJobs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MoviePipelineQueue_eventGetJobs_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineQueue_GetJobs_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMoviePipelineExecutorJob_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineQueue_GetJobs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineQueue_GetJobs_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineQueue_GetJobs_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineQueue_GetJobs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline|Queue" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineQueue_GetJobs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineQueue, nullptr, "GetJobs", nullptr, nullptr, sizeof(MoviePipelineQueue_eventGetJobs_Parms), Z_Construct_UFunction_UMoviePipelineQueue_GetJobs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineQueue_GetJobs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineQueue_GetJobs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineQueue_GetJobs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineQueue_GetJobs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMoviePipelineQueue_GetJobs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMoviePipelineQueue_NoRegister()
	{
		return UMoviePipelineQueue::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelineQueue_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Jobs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Jobs;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Jobs_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelineQueue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMoviePipelineQueue_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMoviePipelineQueue_AllocateNewJob, "AllocateNewJob" }, // 1329944567
		{ &Z_Construct_UFunction_UMoviePipelineQueue_DeleteJob, "DeleteJob" }, // 388844117
		{ &Z_Construct_UFunction_UMoviePipelineQueue_DuplicateJob, "DuplicateJob" }, // 1557732825
		{ &Z_Construct_UFunction_UMoviePipelineQueue_GetJobs, "GetJobs" }, // 1391823918
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineQueue_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* A queue is a list of jobs that have been executed, are executing and are waiting to be executed. These can be saved\n* to specific assets to allow \n*/" },
		{ "IncludePath", "MoviePipelineQueue.h" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
		{ "ToolTip", "A queue is a list of jobs that have been executed, are executing and are waiting to be executed. These can be saved\nto specific assets to allow" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineQueue_Statics::NewProp_Jobs_MetaData[] = {
		{ "ModuleRelativePath", "Public/MoviePipelineQueue.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMoviePipelineQueue_Statics::NewProp_Jobs = { "Jobs", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMoviePipelineQueue, Jobs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineQueue_Statics::NewProp_Jobs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineQueue_Statics::NewProp_Jobs_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMoviePipelineQueue_Statics::NewProp_Jobs_Inner = { "Jobs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMoviePipelineExecutorJob_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoviePipelineQueue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineQueue_Statics::NewProp_Jobs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineQueue_Statics::NewProp_Jobs_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelineQueue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineQueue>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineQueue_Statics::ClassParams = {
		&UMoviePipelineQueue::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMoviePipelineQueue_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineQueue_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineQueue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineQueue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoviePipelineQueue()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMoviePipelineQueue_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMoviePipelineQueue, 762955789);
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMoviePipelineQueue>()
	{
		return UMoviePipelineQueue::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMoviePipelineQueue(Z_Construct_UClass_UMoviePipelineQueue, &UMoviePipelineQueue::StaticClass, TEXT("/Script/MovieRenderPipelineCore"), TEXT("UMoviePipelineQueue"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineQueue);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
