// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieRenderPipelineCore/Private/MovieRenderDebugWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieRenderDebugWidget() {}
// Cross Module References
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieRenderDebugWidget_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieRenderDebugWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineCore();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipeline_NoRegister();
// End Cross Module References
	static FName NAME_UMovieRenderDebugWidget_OnInitializedForPipeline = FName(TEXT("OnInitializedForPipeline"));
	void UMovieRenderDebugWidget::OnInitializedForPipeline(UMoviePipeline* ForPipeline)
	{
		MovieRenderDebugWidget_eventOnInitializedForPipeline_Parms Parms;
		Parms.ForPipeline=ForPipeline;
		ProcessEvent(FindFunctionChecked(NAME_UMovieRenderDebugWidget_OnInitializedForPipeline),&Parms);
	}
	void UMovieRenderDebugWidget::StaticRegisterNativesUMovieRenderDebugWidget()
	{
	}
	struct Z_Construct_UFunction_UMovieRenderDebugWidget_OnInitializedForPipeline_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ForPipeline;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieRenderDebugWidget_OnInitializedForPipeline_Statics::NewProp_ForPipeline = { "ForPipeline", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieRenderDebugWidget_eventOnInitializedForPipeline_Parms, ForPipeline), Z_Construct_UClass_UMoviePipeline_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieRenderDebugWidget_OnInitializedForPipeline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieRenderDebugWidget_OnInitializedForPipeline_Statics::NewProp_ForPipeline,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieRenderDebugWidget_OnInitializedForPipeline_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MovieRenderDebugWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieRenderDebugWidget_OnInitializedForPipeline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieRenderDebugWidget, nullptr, "OnInitializedForPipeline", nullptr, nullptr, sizeof(MovieRenderDebugWidget_eventOnInitializedForPipeline_Parms), Z_Construct_UFunction_UMovieRenderDebugWidget_OnInitializedForPipeline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieRenderDebugWidget_OnInitializedForPipeline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieRenderDebugWidget_OnInitializedForPipeline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieRenderDebugWidget_OnInitializedForPipeline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieRenderDebugWidget_OnInitializedForPipeline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieRenderDebugWidget_OnInitializedForPipeline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMovieRenderDebugWidget_NoRegister()
	{
		return UMovieRenderDebugWidget::StaticClass();
	}
	struct Z_Construct_UClass_UMovieRenderDebugWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieRenderDebugWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMovieRenderDebugWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieRenderDebugWidget_OnInitializedForPipeline, "OnInitializedForPipeline" }, // 2336265683
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieRenderDebugWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* C++ Base Class for the debug widget that is drawn onto the game viewport\n* (but not burned into the output files) that allow us to easily visualize\n* the current state of the pipeline.\n*/" },
		{ "IncludePath", "MovieRenderDebugWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/MovieRenderDebugWidget.h" },
		{ "ToolTip", "C++ Base Class for the debug widget that is drawn onto the game viewport\n(but not burned into the output files) that allow us to easily visualize\nthe current state of the pipeline." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieRenderDebugWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieRenderDebugWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieRenderDebugWidget_Statics::ClassParams = {
		&UMovieRenderDebugWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieRenderDebugWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieRenderDebugWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieRenderDebugWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieRenderDebugWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieRenderDebugWidget, 932889375);
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMovieRenderDebugWidget>()
	{
		return UMovieRenderDebugWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieRenderDebugWidget(Z_Construct_UClass_UMovieRenderDebugWidget, &UMovieRenderDebugWidget::StaticClass, TEXT("/Script/MovieRenderPipelineCore"), TEXT("UMovieRenderDebugWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieRenderDebugWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
