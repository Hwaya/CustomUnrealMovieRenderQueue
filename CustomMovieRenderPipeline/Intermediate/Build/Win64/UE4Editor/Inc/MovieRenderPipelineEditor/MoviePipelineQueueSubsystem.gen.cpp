// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieRenderPipelineEditor/Public/MoviePipelineQueueSubsystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoviePipelineQueueSubsystem() {}
// Cross Module References
	MOVIERENDERPIPELINEEDITOR_API UClass* Z_Construct_UClass_UMoviePipelineQueueSubsystem_NoRegister();
	MOVIERENDERPIPELINEEDITOR_API UClass* Z_Construct_UClass_UMoviePipelineQueueSubsystem();
	EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineEditor();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineExecutorBase_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineQueue_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	DEFINE_FUNCTION(UMoviePipelineQueueSubsystem::execIsRendering)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRendering();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineQueueSubsystem::execRenderQueueWithExecutor)
	{
		P_GET_OBJECT(UClass,Z_Param_InExecutorType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMoviePipelineExecutorBase**)Z_Param__Result=P_THIS->RenderQueueWithExecutor(Z_Param_InExecutorType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineQueueSubsystem::execGetActiveExecutor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMoviePipelineExecutorBase**)Z_Param__Result=P_THIS->GetActiveExecutor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineQueueSubsystem::execGetQueue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMoviePipelineQueue**)Z_Param__Result=P_THIS->GetQueue();
		P_NATIVE_END;
	}
	void UMoviePipelineQueueSubsystem::StaticRegisterNativesUMoviePipelineQueueSubsystem()
	{
		UClass* Class = UMoviePipelineQueueSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActiveExecutor", &UMoviePipelineQueueSubsystem::execGetActiveExecutor },
			{ "GetQueue", &UMoviePipelineQueueSubsystem::execGetQueue },
			{ "IsRendering", &UMoviePipelineQueueSubsystem::execIsRendering },
			{ "RenderQueueWithExecutor", &UMoviePipelineQueueSubsystem::execRenderQueueWithExecutor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMoviePipelineQueueSubsystem_GetActiveExecutor_Statics
	{
		struct MoviePipelineQueueSubsystem_eventGetActiveExecutor_Parms
		{
			UMoviePipelineExecutorBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineQueueSubsystem_GetActiveExecutor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MoviePipelineQueueSubsystem_eventGetActiveExecutor_Parms, ReturnValue), Z_Construct_UClass_UMoviePipelineExecutorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineQueueSubsystem_GetActiveExecutor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineQueueSubsystem_GetActiveExecutor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineQueueSubsystem_GetActiveExecutor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/** Returns the active executor (if there is one). This can be used to subscribe to events on an already in-progress render. May be null. */" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueueSubsystem.h" },
		{ "ToolTip", "Returns the active executor (if there is one). This can be used to subscribe to events on an already in-progress render. May be null." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineQueueSubsystem_GetActiveExecutor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineQueueSubsystem, nullptr, "GetActiveExecutor", nullptr, nullptr, sizeof(MoviePipelineQueueSubsystem_eventGetActiveExecutor_Parms), Z_Construct_UFunction_UMoviePipelineQueueSubsystem_GetActiveExecutor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineQueueSubsystem_GetActiveExecutor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineQueueSubsystem_GetActiveExecutor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineQueueSubsystem_GetActiveExecutor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineQueueSubsystem_GetActiveExecutor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMoviePipelineQueueSubsystem_GetActiveExecutor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineQueueSubsystem_GetQueue_Statics
	{
		struct MoviePipelineQueueSubsystem_eventGetQueue_Parms
		{
			UMoviePipelineQueue* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineQueueSubsystem_GetQueue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MoviePipelineQueueSubsystem_eventGetQueue_Parms, ReturnValue), Z_Construct_UClass_UMoviePipelineQueue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineQueueSubsystem_GetQueue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineQueueSubsystem_GetQueue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineQueueSubsystem_GetQueue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/** Returns the queue of Movie Pipelines that need to be rendered. */" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueueSubsystem.h" },
		{ "ToolTip", "Returns the queue of Movie Pipelines that need to be rendered." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineQueueSubsystem_GetQueue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineQueueSubsystem, nullptr, "GetQueue", nullptr, nullptr, sizeof(MoviePipelineQueueSubsystem_eventGetQueue_Parms), Z_Construct_UFunction_UMoviePipelineQueueSubsystem_GetQueue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineQueueSubsystem_GetQueue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineQueueSubsystem_GetQueue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineQueueSubsystem_GetQueue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineQueueSubsystem_GetQueue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMoviePipelineQueueSubsystem_GetQueue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineQueueSubsystem_IsRendering_Statics
	{
		struct MoviePipelineQueueSubsystem_eventIsRendering_Parms
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
	void Z_Construct_UFunction_UMoviePipelineQueueSubsystem_IsRendering_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MoviePipelineQueueSubsystem_eventIsRendering_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoviePipelineQueueSubsystem_IsRendering_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MoviePipelineQueueSubsystem_eventIsRendering_Parms), &Z_Construct_UFunction_UMoviePipelineQueueSubsystem_IsRendering_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineQueueSubsystem_IsRendering_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineQueueSubsystem_IsRendering_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineQueueSubsystem_IsRendering_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline|Rendering" },
		{ "Comment", "/**\n\x09* Returns true if there is an active executor working on producing a movie. This could be actively rendering frames,\n\x09* or working on post processing (finalizing file writes, etc.). Use GetActiveExecutor() and query it directly for\n\x09* more information, progress updates, etc.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueueSubsystem.h" },
		{ "ToolTip", "Returns true if there is an active executor working on producing a movie. This could be actively rendering frames,\nor working on post processing (finalizing file writes, etc.). Use GetActiveExecutor() and query it directly for\nmore information, progress updates, etc." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineQueueSubsystem_IsRendering_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineQueueSubsystem, nullptr, "IsRendering", nullptr, nullptr, sizeof(MoviePipelineQueueSubsystem_eventIsRendering_Parms), Z_Construct_UFunction_UMoviePipelineQueueSubsystem_IsRendering_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineQueueSubsystem_IsRendering_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineQueueSubsystem_IsRendering_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineQueueSubsystem_IsRendering_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineQueueSubsystem_IsRendering()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMoviePipelineQueueSubsystem_IsRendering_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineQueueSubsystem_RenderQueueWithExecutor_Statics
	{
		struct MoviePipelineQueueSubsystem_eventRenderQueueWithExecutor_Parms
		{
			TSubclassOf<UMoviePipelineExecutorBase>  InExecutorType;
			UMoviePipelineExecutorBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_InExecutorType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineQueueSubsystem_RenderQueueWithExecutor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MoviePipelineQueueSubsystem_eventRenderQueueWithExecutor_Parms, ReturnValue), Z_Construct_UClass_UMoviePipelineExecutorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMoviePipelineQueueSubsystem_RenderQueueWithExecutor_Statics::NewProp_InExecutorType = { "InExecutorType", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MoviePipelineQueueSubsystem_eventRenderQueueWithExecutor_Parms, InExecutorType), Z_Construct_UClass_UMoviePipelineExecutorBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineQueueSubsystem_RenderQueueWithExecutor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineQueueSubsystem_RenderQueueWithExecutor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineQueueSubsystem_RenderQueueWithExecutor_Statics::NewProp_InExecutorType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineQueueSubsystem_RenderQueueWithExecutor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline|Rendering" },
		{ "Comment", "/** \n\x09* Starts processing the current queue with the supplied executor class. This starts an async process which\n\x09* may or may not run in a separate process (or on separate machines), determined by the executor implementation.\n\x09* The executor should report progress for jobs depending on the implementation.\n\x09*\n\x09* @param InExecutorType\x09""A subclass of UMoviePipelineExecutorBase. An instance of this class is created and started.\n\x09* @return A pointer to the instance of the class created. This instance will be kept alive by the Queue Subsystem\n\x09\x09\x09  until it has finished (or been canceled). Register for progress reports and various callbacks on this instance.\n\x09*/" },
		{ "DeterminesOutputType", "InExecutorType" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueueSubsystem.h" },
		{ "ToolTip", "Starts processing the current queue with the supplied executor class. This starts an async process which\nmay or may not run in a separate process (or on separate machines), determined by the executor implementation.\nThe executor should report progress for jobs depending on the implementation.\n\n@param InExecutorType A subclass of UMoviePipelineExecutorBase. An instance of this class is created and started.\n@return A pointer to the instance of the class created. This instance will be kept alive by the Queue Subsystem\n                         until it has finished (or been canceled). Register for progress reports and various callbacks on this instance." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineQueueSubsystem_RenderQueueWithExecutor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineQueueSubsystem, nullptr, "RenderQueueWithExecutor", nullptr, nullptr, sizeof(MoviePipelineQueueSubsystem_eventRenderQueueWithExecutor_Parms), Z_Construct_UFunction_UMoviePipelineQueueSubsystem_RenderQueueWithExecutor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineQueueSubsystem_RenderQueueWithExecutor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineQueueSubsystem_RenderQueueWithExecutor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineQueueSubsystem_RenderQueueWithExecutor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineQueueSubsystem_RenderQueueWithExecutor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMoviePipelineQueueSubsystem_RenderQueueWithExecutor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMoviePipelineQueueSubsystem_NoRegister()
	{
		return UMoviePipelineQueueSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelineQueueSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentQueue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentQueue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveExecutor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActiveExecutor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelineQueueSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMoviePipelineQueueSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMoviePipelineQueueSubsystem_GetActiveExecutor, "GetActiveExecutor" }, // 2098422555
		{ &Z_Construct_UFunction_UMoviePipelineQueueSubsystem_GetQueue, "GetQueue" }, // 4201189504
		{ &Z_Construct_UFunction_UMoviePipelineQueueSubsystem_IsRendering, "IsRendering" }, // 3704275340
		{ &Z_Construct_UFunction_UMoviePipelineQueueSubsystem_RenderQueueWithExecutor, "RenderQueueWithExecutor" }, // 1868324977
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineQueueSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MoviePipelineQueueSubsystem.h" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueueSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineQueueSubsystem_Statics::NewProp_CurrentQueue_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueueSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMoviePipelineQueueSubsystem_Statics::NewProp_CurrentQueue = { "CurrentQueue", nullptr, (EPropertyFlags)0x0042000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMoviePipelineQueueSubsystem, CurrentQueue), Z_Construct_UClass_UMoviePipelineQueue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineQueueSubsystem_Statics::NewProp_CurrentQueue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineQueueSubsystem_Statics::NewProp_CurrentQueue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineQueueSubsystem_Statics::NewProp_ActiveExecutor_MetaData[] = {
		{ "ModuleRelativePath", "Public/MoviePipelineQueueSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMoviePipelineQueueSubsystem_Statics::NewProp_ActiveExecutor = { "ActiveExecutor", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMoviePipelineQueueSubsystem, ActiveExecutor), Z_Construct_UClass_UMoviePipelineExecutorBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineQueueSubsystem_Statics::NewProp_ActiveExecutor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineQueueSubsystem_Statics::NewProp_ActiveExecutor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoviePipelineQueueSubsystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineQueueSubsystem_Statics::NewProp_CurrentQueue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineQueueSubsystem_Statics::NewProp_ActiveExecutor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelineQueueSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineQueueSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineQueueSubsystem_Statics::ClassParams = {
		&UMoviePipelineQueueSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMoviePipelineQueueSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineQueueSubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineQueueSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineQueueSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoviePipelineQueueSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMoviePipelineQueueSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMoviePipelineQueueSubsystem, 818790443);
	template<> MOVIERENDERPIPELINEEDITOR_API UClass* StaticClass<UMoviePipelineQueueSubsystem>()
	{
		return UMoviePipelineQueueSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMoviePipelineQueueSubsystem(Z_Construct_UClass_UMoviePipelineQueueSubsystem, &UMoviePipelineQueueSubsystem::StaticClass, TEXT("/Script/MovieRenderPipelineEditor"), TEXT("UMoviePipelineQueueSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineQueueSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
