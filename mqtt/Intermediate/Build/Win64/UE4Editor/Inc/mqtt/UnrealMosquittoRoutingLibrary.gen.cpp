// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "mqtt/Public/UnrealMosquittoRoutingLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealMosquittoRoutingLibrary() {}
// Cross Module References
	MQTT_API UClass* Z_Construct_UClass_UUnrealMosquittoRoutingLibrary_NoRegister();
	MQTT_API UClass* Z_Construct_UClass_UUnrealMosquittoRoutingLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_mqtt();
	MQTT_API UFunction* Z_Construct_UFunction_UUnrealMosquittoRoutingLibrary_RoutingNotMatched();
// End Cross Module References
	void UUnrealMosquittoRoutingLibrary::StaticRegisterNativesUUnrealMosquittoRoutingLibrary()
	{
		UClass* Class = UUnrealMosquittoRoutingLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RoutingNotMatched", &UUnrealMosquittoRoutingLibrary::execRoutingNotMatched },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUnrealMosquittoRoutingLibrary_RoutingNotMatched_Statics
	{
		struct UnrealMosquittoRoutingLibrary_eventRoutingNotMatched_Parms
		{
			FString A;
			FString B;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_B;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUnrealMosquittoRoutingLibrary_RoutingNotMatched_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UnrealMosquittoRoutingLibrary_eventRoutingNotMatched_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUnrealMosquittoRoutingLibrary_RoutingNotMatched_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UnrealMosquittoRoutingLibrary_eventRoutingNotMatched_Parms), &Z_Construct_UFunction_UUnrealMosquittoRoutingLibrary_RoutingNotMatched_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealMosquittoRoutingLibrary_RoutingNotMatched_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUnrealMosquittoRoutingLibrary_RoutingNotMatched_Statics::NewProp_B = { UE4CodeGen_Private::EPropertyClass::Str, "B", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UnrealMosquittoRoutingLibrary_eventRoutingNotMatched_Parms, B), METADATA_PARAMS(Z_Construct_UFunction_UUnrealMosquittoRoutingLibrary_RoutingNotMatched_Statics::NewProp_B_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UUnrealMosquittoRoutingLibrary_RoutingNotMatched_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealMosquittoRoutingLibrary_RoutingNotMatched_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUnrealMosquittoRoutingLibrary_RoutingNotMatched_Statics::NewProp_A = { UE4CodeGen_Private::EPropertyClass::Str, "A", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UnrealMosquittoRoutingLibrary_eventRoutingNotMatched_Parms, A), METADATA_PARAMS(Z_Construct_UFunction_UUnrealMosquittoRoutingLibrary_RoutingNotMatched_Statics::NewProp_A_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UUnrealMosquittoRoutingLibrary_RoutingNotMatched_Statics::NewProp_A_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnrealMosquittoRoutingLibrary_RoutingNotMatched_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealMosquittoRoutingLibrary_RoutingNotMatched_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealMosquittoRoutingLibrary_RoutingNotMatched_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealMosquittoRoutingLibrary_RoutingNotMatched_Statics::NewProp_A,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealMosquittoRoutingLibrary_RoutingNotMatched_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Routing" },
		{ "DisplayName", "Routing not matched (string)" },
		{ "ModuleRelativePath", "Public/UnrealMosquittoRoutingLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnrealMosquittoRoutingLibrary_RoutingNotMatched_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnrealMosquittoRoutingLibrary, "RoutingNotMatched", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14042401, sizeof(UnrealMosquittoRoutingLibrary_eventRoutingNotMatched_Parms), Z_Construct_UFunction_UUnrealMosquittoRoutingLibrary_RoutingNotMatched_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UUnrealMosquittoRoutingLibrary_RoutingNotMatched_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnrealMosquittoRoutingLibrary_RoutingNotMatched_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUnrealMosquittoRoutingLibrary_RoutingNotMatched_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnrealMosquittoRoutingLibrary_RoutingNotMatched()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUnrealMosquittoRoutingLibrary_RoutingNotMatched_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUnrealMosquittoRoutingLibrary_NoRegister()
	{
		return UUnrealMosquittoRoutingLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UUnrealMosquittoRoutingLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUnrealMosquittoRoutingLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_mqtt,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUnrealMosquittoRoutingLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUnrealMosquittoRoutingLibrary_RoutingNotMatched, "RoutingNotMatched" }, // 4262564341
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnrealMosquittoRoutingLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UnrealMosquittoRoutingLibrary.h" },
		{ "ModuleRelativePath", "Public/UnrealMosquittoRoutingLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUnrealMosquittoRoutingLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUnrealMosquittoRoutingLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUnrealMosquittoRoutingLibrary_Statics::ClassParams = {
		&UUnrealMosquittoRoutingLibrary::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UUnrealMosquittoRoutingLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UUnrealMosquittoRoutingLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUnrealMosquittoRoutingLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUnrealMosquittoRoutingLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUnrealMosquittoRoutingLibrary, 3237669346);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUnrealMosquittoRoutingLibrary(Z_Construct_UClass_UUnrealMosquittoRoutingLibrary, &UUnrealMosquittoRoutingLibrary::StaticClass, TEXT("/Script/mqtt"), TEXT("UUnrealMosquittoRoutingLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUnrealMosquittoRoutingLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
