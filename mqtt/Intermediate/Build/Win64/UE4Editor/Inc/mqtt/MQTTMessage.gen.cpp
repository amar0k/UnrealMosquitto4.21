// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "mqtt/Public/MQTTMessage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMQTTMessage() {}
// Cross Module References
	MQTT_API UScriptStruct* Z_Construct_UScriptStruct_FUMQTTMessagePayload();
	UPackage* Z_Construct_UPackage__Script_mqtt();
	MQTT_API UClass* Z_Construct_UClass_UMQTTMessage_NoRegister();
	MQTT_API UClass* Z_Construct_UClass_UMQTTMessage();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MQTT_API UFunction* Z_Construct_UFunction_UMQTTMessage_GetPayloadAsString();
// End Cross Module References
class UScriptStruct* FUMQTTMessagePayload::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MQTT_API uint32 Get_Z_Construct_UScriptStruct_FUMQTTMessagePayload_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUMQTTMessagePayload, Z_Construct_UPackage__Script_mqtt(), TEXT("UMQTTMessagePayload"), sizeof(FUMQTTMessagePayload), Get_Z_Construct_UScriptStruct_FUMQTTMessagePayload_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUMQTTMessagePayload(FUMQTTMessagePayload::StaticStruct, TEXT("/Script/mqtt"), TEXT("UMQTTMessagePayload"), false, nullptr, nullptr);
static struct FScriptStruct_mqtt_StaticRegisterNativesFUMQTTMessagePayload
{
	FScriptStruct_mqtt_StaticRegisterNativesFUMQTTMessagePayload()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("UMQTTMessagePayload")),new UScriptStruct::TCppStructOps<FUMQTTMessagePayload>);
	}
} ScriptStruct_mqtt_StaticRegisterNativesFUMQTTMessagePayload;
	struct Z_Construct_UScriptStruct_FUMQTTMessagePayload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUMQTTMessagePayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MQTTMessage.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUMQTTMessagePayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUMQTTMessagePayload>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUMQTTMessagePayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_mqtt,
		nullptr,
		&NewStructOps,
		"UMQTTMessagePayload",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FUMQTTMessagePayload),
		alignof(FUMQTTMessagePayload),
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUMQTTMessagePayload_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FUMQTTMessagePayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUMQTTMessagePayload()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUMQTTMessagePayload_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_mqtt();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UMQTTMessagePayload"), sizeof(FUMQTTMessagePayload), Get_Z_Construct_UScriptStruct_FUMQTTMessagePayload_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUMQTTMessagePayload_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUMQTTMessagePayload_CRC() { return 257221996U; }
	void UMQTTMessage::StaticRegisterNativesUMQTTMessage()
	{
		UClass* Class = UMQTTMessage::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPayloadAsString", &UMQTTMessage::execGetPayloadAsString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMQTTMessage_GetPayloadAsString_Statics
	{
		struct MQTTMessage_eventGetPayloadAsString_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMQTTMessage_GetPayloadAsString_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MQTTMessage_eventGetPayloadAsString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMQTTMessage_GetPayloadAsString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMQTTMessage_GetPayloadAsString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMQTTMessage_GetPayloadAsString_Statics::Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
		{ "ModuleRelativePath", "Public/MQTTMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMQTTMessage_GetPayloadAsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMQTTMessage, "GetPayloadAsString", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MQTTMessage_eventGetPayloadAsString_Parms), Z_Construct_UFunction_UMQTTMessage_GetPayloadAsString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMQTTMessage_GetPayloadAsString_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMQTTMessage_GetPayloadAsString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMQTTMessage_GetPayloadAsString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMQTTMessage_GetPayloadAsString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMQTTMessage_GetPayloadAsString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMQTTMessage_NoRegister()
	{
		return UMQTTMessage::StaticClass();
	}
	struct Z_Construct_UClass_UMQTTMessage_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Payload;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PayloadLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_PayloadLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Retain_MetaData[];
#endif
		static void NewProp_Retain_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Retain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QOS_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_QOS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Topic_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Topic;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMQTTMessage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_mqtt,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMQTTMessage_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMQTTMessage_GetPayloadAsString, "GetPayloadAsString" }, // 1837929898
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMQTTMessage_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MQTTMessage.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MQTTMessage.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMQTTMessage_Statics::NewProp_Payload_MetaData[] = {
		{ "Category", "MQTT" },
		{ "ModuleRelativePath", "Public/MQTTMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMQTTMessage_Statics::NewProp_Payload = { UE4CodeGen_Private::EPropertyClass::Struct, "Payload", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UMQTTMessage, Payload), Z_Construct_UScriptStruct_FUMQTTMessagePayload, METADATA_PARAMS(Z_Construct_UClass_UMQTTMessage_Statics::NewProp_Payload_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMQTTMessage_Statics::NewProp_Payload_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMQTTMessage_Statics::NewProp_PayloadLength_MetaData[] = {
		{ "Category", "MQTT" },
		{ "ModuleRelativePath", "Public/MQTTMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UMQTTMessage_Statics::NewProp_PayloadLength = { UE4CodeGen_Private::EPropertyClass::Int, "PayloadLength", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UMQTTMessage, PayloadLength), METADATA_PARAMS(Z_Construct_UClass_UMQTTMessage_Statics::NewProp_PayloadLength_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMQTTMessage_Statics::NewProp_PayloadLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMQTTMessage_Statics::NewProp_Retain_MetaData[] = {
		{ "Category", "MQTT" },
		{ "ModuleRelativePath", "Public/MQTTMessage.h" },
	};
#endif
	void Z_Construct_UClass_UMQTTMessage_Statics::NewProp_Retain_SetBit(void* Obj)
	{
		((UMQTTMessage*)Obj)->Retain = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMQTTMessage_Statics::NewProp_Retain = { UE4CodeGen_Private::EPropertyClass::Bool, "Retain", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMQTTMessage), &Z_Construct_UClass_UMQTTMessage_Statics::NewProp_Retain_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMQTTMessage_Statics::NewProp_Retain_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMQTTMessage_Statics::NewProp_Retain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMQTTMessage_Statics::NewProp_QOS_MetaData[] = {
		{ "Category", "MQTT" },
		{ "ModuleRelativePath", "Public/MQTTMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UMQTTMessage_Statics::NewProp_QOS = { UE4CodeGen_Private::EPropertyClass::Int, "QOS", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UMQTTMessage, QOS), METADATA_PARAMS(Z_Construct_UClass_UMQTTMessage_Statics::NewProp_QOS_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMQTTMessage_Statics::NewProp_QOS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMQTTMessage_Statics::NewProp_Topic_MetaData[] = {
		{ "Category", "MQTT" },
		{ "ModuleRelativePath", "Public/MQTTMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMQTTMessage_Statics::NewProp_Topic = { UE4CodeGen_Private::EPropertyClass::Str, "Topic", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UMQTTMessage, Topic), METADATA_PARAMS(Z_Construct_UClass_UMQTTMessage_Statics::NewProp_Topic_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMQTTMessage_Statics::NewProp_Topic_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMQTTMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMQTTMessage_Statics::NewProp_Payload,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMQTTMessage_Statics::NewProp_PayloadLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMQTTMessage_Statics::NewProp_Retain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMQTTMessage_Statics::NewProp_QOS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMQTTMessage_Statics::NewProp_Topic,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMQTTMessage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMQTTMessage>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMQTTMessage_Statics::ClassParams = {
		&UMQTTMessage::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UMQTTMessage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UMQTTMessage_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMQTTMessage_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMQTTMessage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMQTTMessage()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMQTTMessage_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMQTTMessage, 1848149767);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMQTTMessage(Z_Construct_UClass_UMQTTMessage, &UMQTTMessage::StaticClass, TEXT("/Script/mqtt"), TEXT("UMQTTMessage"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMQTTMessage);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
