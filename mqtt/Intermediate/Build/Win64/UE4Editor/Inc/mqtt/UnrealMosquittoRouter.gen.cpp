// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "mqtt/Public/UnrealMosquittoRouter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealMosquittoRouter() {}
// Cross Module References
	MQTT_API UClass* Z_Construct_UClass_UUnrealMosquittoRouter_NoRegister();
	MQTT_API UClass* Z_Construct_UClass_UUnrealMosquittoRouter();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_Switch();
	UPackage* Z_Construct_UPackage__Script_mqtt();
// End Cross Module References
	void UUnrealMosquittoRouter::StaticRegisterNativesUUnrealMosquittoRouter()
	{
	}
	UClass* Z_Construct_UClass_UUnrealMosquittoRouter_NoRegister()
	{
		return UUnrealMosquittoRouter::StaticClass();
	}
	struct Z_Construct_UClass_UUnrealMosquittoRouter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Routes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Routes;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Routes_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUnrealMosquittoRouter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_Switch,
		(UObject* (*)())Z_Construct_UPackage__Script_mqtt,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnrealMosquittoRouter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UnrealMosquittoRouter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UnrealMosquittoRouter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnrealMosquittoRouter_Statics::NewProp_Routes_MetaData[] = {
		{ "Category", "RouteOptions" },
		{ "ModuleRelativePath", "Public/UnrealMosquittoRouter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUnrealMosquittoRouter_Statics::NewProp_Routes = { UE4CodeGen_Private::EPropertyClass::Array, "Routes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UUnrealMosquittoRouter, Routes), METADATA_PARAMS(Z_Construct_UClass_UUnrealMosquittoRouter_Statics::NewProp_Routes_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUnrealMosquittoRouter_Statics::NewProp_Routes_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUnrealMosquittoRouter_Statics::NewProp_Routes_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "Routes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUnrealMosquittoRouter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnrealMosquittoRouter_Statics::NewProp_Routes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnrealMosquittoRouter_Statics::NewProp_Routes_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUnrealMosquittoRouter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUnrealMosquittoRouter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUnrealMosquittoRouter_Statics::ClassParams = {
		&UUnrealMosquittoRouter::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		Z_Construct_UClass_UUnrealMosquittoRouter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UUnrealMosquittoRouter_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UUnrealMosquittoRouter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UUnrealMosquittoRouter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUnrealMosquittoRouter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUnrealMosquittoRouter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUnrealMosquittoRouter, 1032238988);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUnrealMosquittoRouter(Z_Construct_UClass_UUnrealMosquittoRouter, &UUnrealMosquittoRouter::StaticClass, TEXT("/Script/mqtt"), TEXT("UUnrealMosquittoRouter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUnrealMosquittoRouter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
