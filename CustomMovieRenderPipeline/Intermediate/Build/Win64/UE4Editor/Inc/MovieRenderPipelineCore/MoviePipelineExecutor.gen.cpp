// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieRenderPipelineCore/Public/MoviePipelineExecutor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoviePipelineExecutor() {}
// Cross Module References
	MOVIERENDERPIPELINECORE_API UFunction* Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorErrored__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineCore();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipeline_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineExecutorBase_NoRegister();
	MOVIERENDERPIPELINECORE_API UFunction* Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorFinished__DelegateSignature();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineExecutorBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineQueue_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorErrored__DelegateSignature_Statics
	{
		struct _Script_MovieRenderPipelineCore_eventOnMoviePipelineExecutorErrored_Parms
		{
			UMoviePipelineExecutorBase* PipelineExecutor;
			UMoviePipeline* PipelineWithError;
			bool bIsFatal;
			FText ErrorText;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ErrorText;
		static void NewProp_bIsFatal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFatal;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PipelineWithError;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PipelineExecutor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorErrored__DelegateSignature_Statics::NewProp_ErrorText = { "ErrorText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_MovieRenderPipelineCore_eventOnMoviePipelineExecutorErrored_Parms, ErrorText), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorErrored__DelegateSignature_Statics::NewProp_bIsFatal_SetBit(void* Obj)
	{
		((_Script_MovieRenderPipelineCore_eventOnMoviePipelineExecutorErrored_Parms*)Obj)->bIsFatal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorErrored__DelegateSignature_Statics::NewProp_bIsFatal = { "bIsFatal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_MovieRenderPipelineCore_eventOnMoviePipelineExecutorErrored_Parms), &Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorErrored__DelegateSignature_Statics::NewProp_bIsFatal_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorErrored__DelegateSignature_Statics::NewProp_PipelineWithError = { "PipelineWithError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_MovieRenderPipelineCore_eventOnMoviePipelineExecutorErrored_Parms, PipelineWithError), Z_Construct_UClass_UMoviePipeline_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorErrored__DelegateSignature_Statics::NewProp_PipelineExecutor = { "PipelineExecutor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_MovieRenderPipelineCore_eventOnMoviePipelineExecutorErrored_Parms, PipelineExecutor), Z_Construct_UClass_UMoviePipelineExecutorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorErrored__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorErrored__DelegateSignature_Statics::NewProp_ErrorText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorErrored__DelegateSignature_Statics::NewProp_bIsFatal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorErrored__DelegateSignature_Statics::NewProp_PipelineWithError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorErrored__DelegateSignature_Statics::NewProp_PipelineExecutor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorErrored__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MoviePipelineExecutor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorErrored__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore, nullptr, "OnMoviePipelineExecutorErrored__DelegateSignature", nullptr, nullptr, sizeof(_Script_MovieRenderPipelineCore_eventOnMoviePipelineExecutorErrored_Parms), Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorErrored__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorErrored__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorErrored__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorErrored__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorErrored__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorErrored__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorFinished__DelegateSignature_Statics
	{
		struct _Script_MovieRenderPipelineCore_eventOnMoviePipelineExecutorFinished_Parms
		{
			UMoviePipelineExecutorBase* PipelineExecutor;
			bool bSuccess;
		};
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PipelineExecutor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorFinished__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((_Script_MovieRenderPipelineCore_eventOnMoviePipelineExecutorFinished_Parms*)Obj)->bSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorFinished__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_MovieRenderPipelineCore_eventOnMoviePipelineExecutorFinished_Parms), &Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorFinished__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorFinished__DelegateSignature_Statics::NewProp_PipelineExecutor = { "PipelineExecutor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_MovieRenderPipelineCore_eventOnMoviePipelineExecutorFinished_Parms, PipelineExecutor), Z_Construct_UClass_UMoviePipelineExecutorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorFinished__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorFinished__DelegateSignature_Statics::NewProp_bSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorFinished__DelegateSignature_Statics::NewProp_PipelineExecutor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorFinished__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MoviePipelineExecutor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorFinished__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore, nullptr, "OnMoviePipelineExecutorFinished__DelegateSignature", nullptr, nullptr, sizeof(_Script_MovieRenderPipelineCore_eventOnMoviePipelineExecutorFinished_Parms), Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorFinished__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorFinished__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorFinished__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorFinished__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorFinished__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorFinished__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UMoviePipelineExecutorBase::execExecute)
	{
		P_GET_OBJECT(UMoviePipelineQueue,Z_Param_InPipelineQueue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Execute(Z_Param_InPipelineQueue);
		P_NATIVE_END;
	}
	void UMoviePipelineExecutorBase::StaticRegisterNativesUMoviePipelineExecutorBase()
	{
		UClass* Class = UMoviePipelineExecutorBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Execute", &UMoviePipelineExecutorBase::execExecute },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMoviePipelineExecutorBase_Execute_Statics
	{
		struct MoviePipelineExecutorBase_eventExecute_Parms
		{
			UMoviePipelineQueue* InPipelineQueue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InPipelineQueue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineExecutorBase_Execute_Statics::NewProp_InPipelineQueue = { "InPipelineQueue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MoviePipelineExecutorBase_eventExecute_Parms, InPipelineQueue), Z_Construct_UClass_UMoviePipelineQueue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineExecutorBase_Execute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineExecutorBase_Execute_Statics::NewProp_InPipelineQueue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineExecutorBase_Execute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "ModuleRelativePath", "Public/MoviePipelineExecutor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineExecutorBase_Execute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineExecutorBase, nullptr, "Execute", nullptr, nullptr, sizeof(MoviePipelineExecutorBase_eventExecute_Parms), Z_Construct_UFunction_UMoviePipelineExecutorBase_Execute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorBase_Execute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineExecutorBase_Execute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorBase_Execute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineExecutorBase_Execute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMoviePipelineExecutorBase_Execute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMoviePipelineExecutorBase_NoRegister()
	{
		return UMoviePipelineExecutorBase::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelineExecutorBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetPipelineClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_TargetPipelineClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnExecutorErroredDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnExecutorErroredDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnExecutorFinishedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnExecutorFinishedDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelineExecutorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMoviePipelineExecutorBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMoviePipelineExecutorBase_Execute, "Execute" }, // 1929482513
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineExecutorBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* A Movie Pipeline Executor is responsible for executing an array of Movie Pipelines,\n* and (optionally) reporting progress back for the movie pipelines. The entire array\n* is passed at once to allow the implementations to choose how to split up the work.\n* By default we provide a local execution (UMoviePipelineLocalExecutor) which works\n* on them serially, but you can create an implementation of this class, change the \n* default in the Project Settings and use your own distribution logic. For example,\n* you may want to distribute the work to multiple computers over a network, which\n* may involve running command line options on each machine to sync the latest content\n* from the project before the execution starts.\n*/" },
		{ "IncludePath", "MoviePipelineExecutor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MoviePipelineExecutor.h" },
		{ "ToolTip", "A Movie Pipeline Executor is responsible for executing an array of Movie Pipelines,\nand (optionally) reporting progress back for the movie pipelines. The entire array\nis passed at once to allow the implementations to choose how to split up the work.\nBy default we provide a local execution (UMoviePipelineLocalExecutor) which works\non them serially, but you can create an implementation of this class, change the\ndefault in the Project Settings and use your own distribution logic. For example,\nyou may want to distribute the work to multiple computers over a network, which\nmay involve running command line options on each machine to sync the latest content\nfrom the project before the execution starts." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineExecutorBase_Statics::NewProp_TargetPipelineClass_MetaData[] = {
		{ "Comment", "/** Which Pipeline Class should be created by this Executor. May be null. */" },
		{ "ModuleRelativePath", "Public/MoviePipelineExecutor.h" },
		{ "ToolTip", "Which Pipeline Class should be created by this Executor. May be null." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMoviePipelineExecutorBase_Statics::NewProp_TargetPipelineClass = { "TargetPipelineClass", nullptr, (EPropertyFlags)0x0024080000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMoviePipelineExecutorBase, TargetPipelineClass), Z_Construct_UClass_UMoviePipeline_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineExecutorBase_Statics::NewProp_TargetPipelineClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineExecutorBase_Statics::NewProp_TargetPipelineClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineExecutorBase_Statics::NewProp_OnExecutorErroredDelegate_MetaData[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/**\n\x09* Called when an individual job reports a warning/error. Jobs are considered fatal\n\x09* if the severity was bad enough to abort the job (missing sequence, write failure, etc.)\n\x09*\n\x09* Exposed for Blueprints/Python. Called at the same time as the native one.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineExecutor.h" },
		{ "ToolTip", "Called when an individual job reports a warning/error. Jobs are considered fatal\nif the severity was bad enough to abort the job (missing sequence, write failure, etc.)\n\nExposed for Blueprints/Python. Called at the same time as the native one." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMoviePipelineExecutorBase_Statics::NewProp_OnExecutorErroredDelegate = { "OnExecutorErroredDelegate", nullptr, (EPropertyFlags)0x0040000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMoviePipelineExecutorBase, OnExecutorErroredDelegate), Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorErrored__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineExecutorBase_Statics::NewProp_OnExecutorErroredDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineExecutorBase_Statics::NewProp_OnExecutorErroredDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineExecutorBase_Statics::NewProp_OnExecutorFinishedDelegate_MetaData[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/** \n\x09* Called when the Executor has finished all jobs. Reports success if no jobs\n\x09* had fatal errors. Subscribe to the error delegate for more information about\n\x09* any errors.\n\x09*\n\x09* Exposed for Blueprints/Python. Called at the same time as the native one.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineExecutor.h" },
		{ "ToolTip", "Called when the Executor has finished all jobs. Reports success if no jobs\nhad fatal errors. Subscribe to the error delegate for more information about\nany errors.\n\nExposed for Blueprints/Python. Called at the same time as the native one." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMoviePipelineExecutorBase_Statics::NewProp_OnExecutorFinishedDelegate = { "OnExecutorFinishedDelegate", nullptr, (EPropertyFlags)0x0040000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMoviePipelineExecutorBase, OnExecutorFinishedDelegate), Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorFinished__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineExecutorBase_Statics::NewProp_OnExecutorFinishedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineExecutorBase_Statics::NewProp_OnExecutorFinishedDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoviePipelineExecutorBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineExecutorBase_Statics::NewProp_TargetPipelineClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineExecutorBase_Statics::NewProp_OnExecutorErroredDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineExecutorBase_Statics::NewProp_OnExecutorFinishedDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelineExecutorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineExecutorBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineExecutorBase_Statics::ClassParams = {
		&UMoviePipelineExecutorBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMoviePipelineExecutorBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineExecutorBase_Statics::PropPointers),
		0,
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineExecutorBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineExecutorBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoviePipelineExecutorBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMoviePipelineExecutorBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMoviePipelineExecutorBase, 3255538139);
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMoviePipelineExecutorBase>()
	{
		return UMoviePipelineExecutorBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMoviePipelineExecutorBase(Z_Construct_UClass_UMoviePipelineExecutorBase, &UMoviePipelineExecutorBase::StaticClass, TEXT("/Script/MovieRenderPipelineCore"), TEXT("UMoviePipelineExecutorBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineExecutorBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
