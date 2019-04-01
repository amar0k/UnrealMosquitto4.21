// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "mqtt/Public/UnrealMosquitto.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealMosquitto() {}
// Cross Module References
	MQTT_API UClass* Z_Construct_UClass_AUnrealMosquitto_NoRegister();
	MQTT_API UClass* Z_Construct_UClass_AUnrealMosquitto();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_mqtt();
	MQTT_API UFunction* Z_Construct_UFunction_AUnrealMosquitto_OnConnect();
	MQTT_API UFunction* Z_Construct_UFunction_AUnrealMosquitto_OnDisconnect();
	MQTT_API UFunction* Z_Construct_UFunction_AUnrealMosquitto_OnMessage();
	MQTT_API UClass* Z_Construct_UClass_UMQTTMessage_NoRegister();
	MQTT_API UFunction* Z_Construct_UFunction_AUnrealMosquitto_OnPublish();
	MQTT_API UFunction* Z_Construct_UFunction_AUnrealMosquitto_OnSubscribe();
	MQTT_API UFunction* Z_Construct_UFunction_AUnrealMosquitto_OnUnsubscribe();
	MQTT_API UFunction* Z_Construct_UFunction_AUnrealMosquitto_PublishString();
	MQTT_API UFunction* Z_Construct_UFunction_AUnrealMosquitto_Subscribe();
	MQTT_API UFunction* Z_Construct_UFunction_AUnrealMosquitto_Unsubscribe();
// End Cross Module References
	static FName NAME_AUnrealMosquitto_OnConnect = FName(TEXT("OnConnect"));
	void AUnrealMosquitto::OnConnect()
	{
		ProcessEvent(FindFunctionChecked(NAME_AUnrealMosquitto_OnConnect),NULL);
	}
	static FName NAME_AUnrealMosquitto_OnDisconnect = FName(TEXT("OnDisconnect"));
	void AUnrealMosquitto::OnDisconnect()
	{
		ProcessEvent(FindFunctionChecked(NAME_AUnrealMosquitto_OnDisconnect),NULL);
	}
	static FName NAME_AUnrealMosquitto_OnMessage = FName(TEXT("OnMessage"));
	void AUnrealMosquitto::OnMessage(const UMQTTMessage* message)
	{
		UnrealMosquitto_eventOnMessage_Parms Parms;
		Parms.message=message;
		ProcessEvent(FindFunctionChecked(NAME_AUnrealMosquitto_OnMessage),&Parms);
	}
	static FName NAME_AUnrealMosquitto_OnPublish = FName(TEXT("OnPublish"));
	void AUnrealMosquitto::OnPublish(int32 mid)
	{
		UnrealMosquitto_eventOnPublish_Parms Parms;
		Parms.mid=mid;
		ProcessEvent(FindFunctionChecked(NAME_AUnrealMosquitto_OnPublish),&Parms);
	}
	static FName NAME_AUnrealMosquitto_OnSubscribe = FName(TEXT("OnSubscribe"));
	void AUnrealMosquitto::OnSubscribe(int32 mid, TArray<int32> const& qos)
	{
		UnrealMosquitto_eventOnSubscribe_Parms Parms;
		Parms.mid=mid;
		Parms.qos=qos;
		ProcessEvent(FindFunctionChecked(NAME_AUnrealMosquitto_OnSubscribe),&Parms);
	}
	static FName NAME_AUnrealMosquitto_OnUnsubscribe = FName(TEXT("OnUnsubscribe"));
	void AUnrealMosquitto::OnUnsubscribe(int32 mid)
	{
		UnrealMosquitto_eventOnUnsubscribe_Parms Parms;
		Parms.mid=mid;
		ProcessEvent(FindFunctionChecked(NAME_AUnrealMosquitto_OnUnsubscribe),&Parms);
	}
	void AUnrealMosquitto::StaticRegisterNativesAUnrealMosquitto()
	{
		UClass* Class = AUnrealMosquitto::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PublishString", &AUnrealMosquitto::execPublishString },
			{ "Subscribe", &AUnrealMosquitto::execSubscribe },
			{ "Unsubscribe", &AUnrealMosquitto::execUnsubscribe },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AUnrealMosquitto_OnConnect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnrealMosquitto_OnConnect_Statics::Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
		{ "ModuleRelativePath", "Public/UnrealMosquitto.h" },
		{ "ToolTip", "Events" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnrealMosquitto_OnConnect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnrealMosquitto, "OnConnect", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUnrealMosquitto_OnConnect_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AUnrealMosquitto_OnConnect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUnrealMosquitto_OnConnect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUnrealMosquitto_OnConnect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUnrealMosquitto_OnDisconnect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnrealMosquitto_OnDisconnect_Statics::Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
		{ "ModuleRelativePath", "Public/UnrealMosquitto.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnrealMosquitto_OnDisconnect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnrealMosquitto, "OnDisconnect", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUnrealMosquitto_OnDisconnect_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AUnrealMosquitto_OnDisconnect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUnrealMosquitto_OnDisconnect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUnrealMosquitto_OnDisconnect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUnrealMosquitto_OnMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_message_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_message;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnrealMosquitto_OnMessage_Statics::NewProp_message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUnrealMosquitto_OnMessage_Statics::NewProp_message = { UE4CodeGen_Private::EPropertyClass::Object, "message", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(UnrealMosquitto_eventOnMessage_Parms, message), Z_Construct_UClass_UMQTTMessage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AUnrealMosquitto_OnMessage_Statics::NewProp_message_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AUnrealMosquitto_OnMessage_Statics::NewProp_message_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUnrealMosquitto_OnMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnrealMosquitto_OnMessage_Statics::NewProp_message,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnrealMosquitto_OnMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
		{ "ModuleRelativePath", "Public/UnrealMosquitto.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnrealMosquitto_OnMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnrealMosquitto, "OnMessage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(UnrealMosquitto_eventOnMessage_Parms), Z_Construct_UFunction_AUnrealMosquitto_OnMessage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AUnrealMosquitto_OnMessage_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUnrealMosquitto_OnMessage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AUnrealMosquitto_OnMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUnrealMosquitto_OnMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUnrealMosquitto_OnMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUnrealMosquitto_OnPublish_Statics
	{
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_mid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AUnrealMosquitto_OnPublish_Statics::NewProp_mid = { UE4CodeGen_Private::EPropertyClass::Int, "mid", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UnrealMosquitto_eventOnPublish_Parms, mid), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUnrealMosquitto_OnPublish_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnrealMosquitto_OnPublish_Statics::NewProp_mid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnrealMosquitto_OnPublish_Statics::Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
		{ "ModuleRelativePath", "Public/UnrealMosquitto.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnrealMosquitto_OnPublish_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnrealMosquitto, "OnPublish", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(UnrealMosquitto_eventOnPublish_Parms), Z_Construct_UFunction_AUnrealMosquitto_OnPublish_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AUnrealMosquitto_OnPublish_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUnrealMosquitto_OnPublish_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AUnrealMosquitto_OnPublish_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUnrealMosquitto_OnPublish()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUnrealMosquitto_OnPublish_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUnrealMosquitto_OnSubscribe_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_qos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_qos;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_qos_Inner;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_mid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnrealMosquitto_OnSubscribe_Statics::NewProp_qos_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AUnrealMosquitto_OnSubscribe_Statics::NewProp_qos = { UE4CodeGen_Private::EPropertyClass::Array, "qos", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(UnrealMosquitto_eventOnSubscribe_Parms, qos), METADATA_PARAMS(Z_Construct_UFunction_AUnrealMosquitto_OnSubscribe_Statics::NewProp_qos_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AUnrealMosquitto_OnSubscribe_Statics::NewProp_qos_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AUnrealMosquitto_OnSubscribe_Statics::NewProp_qos_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "qos", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AUnrealMosquitto_OnSubscribe_Statics::NewProp_mid = { UE4CodeGen_Private::EPropertyClass::Int, "mid", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UnrealMosquitto_eventOnSubscribe_Parms, mid), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUnrealMosquitto_OnSubscribe_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnrealMosquitto_OnSubscribe_Statics::NewProp_qos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnrealMosquitto_OnSubscribe_Statics::NewProp_qos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnrealMosquitto_OnSubscribe_Statics::NewProp_mid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnrealMosquitto_OnSubscribe_Statics::Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
		{ "ModuleRelativePath", "Public/UnrealMosquitto.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnrealMosquitto_OnSubscribe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnrealMosquitto, "OnSubscribe", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08420800, sizeof(UnrealMosquitto_eventOnSubscribe_Parms), Z_Construct_UFunction_AUnrealMosquitto_OnSubscribe_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AUnrealMosquitto_OnSubscribe_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUnrealMosquitto_OnSubscribe_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AUnrealMosquitto_OnSubscribe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUnrealMosquitto_OnSubscribe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUnrealMosquitto_OnSubscribe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUnrealMosquitto_OnUnsubscribe_Statics
	{
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_mid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AUnrealMosquitto_OnUnsubscribe_Statics::NewProp_mid = { UE4CodeGen_Private::EPropertyClass::Int, "mid", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UnrealMosquitto_eventOnUnsubscribe_Parms, mid), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUnrealMosquitto_OnUnsubscribe_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnrealMosquitto_OnUnsubscribe_Statics::NewProp_mid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnrealMosquitto_OnUnsubscribe_Statics::Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
		{ "ModuleRelativePath", "Public/UnrealMosquitto.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnrealMosquitto_OnUnsubscribe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnrealMosquitto, "OnUnsubscribe", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(UnrealMosquitto_eventOnUnsubscribe_Parms), Z_Construct_UFunction_AUnrealMosquitto_OnUnsubscribe_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AUnrealMosquitto_OnUnsubscribe_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUnrealMosquitto_OnUnsubscribe_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AUnrealMosquitto_OnUnsubscribe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUnrealMosquitto_OnUnsubscribe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUnrealMosquitto_OnUnsubscribe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUnrealMosquitto_PublishString_Statics
	{
		struct UnrealMosquitto_eventPublishString_Parms
		{
			FString message;
			FString topic;
			int32 qos;
			bool retain;
		};
		static void NewProp_retain_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_retain;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_qos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_topic_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_topic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_message;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AUnrealMosquitto_PublishString_Statics::NewProp_retain_SetBit(void* Obj)
	{
		((UnrealMosquitto_eventPublishString_Parms*)Obj)->retain = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUnrealMosquitto_PublishString_Statics::NewProp_retain = { UE4CodeGen_Private::EPropertyClass::Bool, "retain", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UnrealMosquitto_eventPublishString_Parms), &Z_Construct_UFunction_AUnrealMosquitto_PublishString_Statics::NewProp_retain_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AUnrealMosquitto_PublishString_Statics::NewProp_qos = { UE4CodeGen_Private::EPropertyClass::Int, "qos", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UnrealMosquitto_eventPublishString_Parms, qos), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnrealMosquitto_PublishString_Statics::NewProp_topic_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUnrealMosquitto_PublishString_Statics::NewProp_topic = { UE4CodeGen_Private::EPropertyClass::Str, "topic", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UnrealMosquitto_eventPublishString_Parms, topic), METADATA_PARAMS(Z_Construct_UFunction_AUnrealMosquitto_PublishString_Statics::NewProp_topic_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AUnrealMosquitto_PublishString_Statics::NewProp_topic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnrealMosquitto_PublishString_Statics::NewProp_message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUnrealMosquitto_PublishString_Statics::NewProp_message = { UE4CodeGen_Private::EPropertyClass::Str, "message", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UnrealMosquitto_eventPublishString_Parms, message), METADATA_PARAMS(Z_Construct_UFunction_AUnrealMosquitto_PublishString_Statics::NewProp_message_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AUnrealMosquitto_PublishString_Statics::NewProp_message_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUnrealMosquitto_PublishString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnrealMosquitto_PublishString_Statics::NewProp_retain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnrealMosquitto_PublishString_Statics::NewProp_qos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnrealMosquitto_PublishString_Statics::NewProp_topic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnrealMosquitto_PublishString_Statics::NewProp_message,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnrealMosquitto_PublishString_Statics::Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
		{ "CPP_Default_qos", "0" },
		{ "CPP_Default_retain", "false" },
		{ "ModuleRelativePath", "Public/UnrealMosquitto.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnrealMosquitto_PublishString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnrealMosquitto, "PublishString", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(UnrealMosquitto_eventPublishString_Parms), Z_Construct_UFunction_AUnrealMosquitto_PublishString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AUnrealMosquitto_PublishString_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUnrealMosquitto_PublishString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AUnrealMosquitto_PublishString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUnrealMosquitto_PublishString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUnrealMosquitto_PublishString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUnrealMosquitto_Subscribe_Statics
	{
		struct UnrealMosquitto_eventSubscribe_Parms
		{
			FString topic;
			int32 qos;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_qos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_topic_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_topic;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AUnrealMosquitto_Subscribe_Statics::NewProp_qos = { UE4CodeGen_Private::EPropertyClass::Int, "qos", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UnrealMosquitto_eventSubscribe_Parms, qos), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnrealMosquitto_Subscribe_Statics::NewProp_topic_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUnrealMosquitto_Subscribe_Statics::NewProp_topic = { UE4CodeGen_Private::EPropertyClass::Str, "topic", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UnrealMosquitto_eventSubscribe_Parms, topic), METADATA_PARAMS(Z_Construct_UFunction_AUnrealMosquitto_Subscribe_Statics::NewProp_topic_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AUnrealMosquitto_Subscribe_Statics::NewProp_topic_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUnrealMosquitto_Subscribe_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnrealMosquitto_Subscribe_Statics::NewProp_qos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnrealMosquitto_Subscribe_Statics::NewProp_topic,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnrealMosquitto_Subscribe_Statics::Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
		{ "CPP_Default_qos", "0" },
		{ "ModuleRelativePath", "Public/UnrealMosquitto.h" },
		{ "ToolTip", "Methods" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnrealMosquitto_Subscribe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnrealMosquitto, "Subscribe", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(UnrealMosquitto_eventSubscribe_Parms), Z_Construct_UFunction_AUnrealMosquitto_Subscribe_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AUnrealMosquitto_Subscribe_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUnrealMosquitto_Subscribe_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AUnrealMosquitto_Subscribe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUnrealMosquitto_Subscribe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUnrealMosquitto_Subscribe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUnrealMosquitto_Unsubscribe_Statics
	{
		struct UnrealMosquitto_eventUnsubscribe_Parms
		{
			FString topic;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_topic_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_topic;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnrealMosquitto_Unsubscribe_Statics::NewProp_topic_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUnrealMosquitto_Unsubscribe_Statics::NewProp_topic = { UE4CodeGen_Private::EPropertyClass::Str, "topic", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UnrealMosquitto_eventUnsubscribe_Parms, topic), METADATA_PARAMS(Z_Construct_UFunction_AUnrealMosquitto_Unsubscribe_Statics::NewProp_topic_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AUnrealMosquitto_Unsubscribe_Statics::NewProp_topic_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUnrealMosquitto_Unsubscribe_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnrealMosquitto_Unsubscribe_Statics::NewProp_topic,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnrealMosquitto_Unsubscribe_Statics::Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
		{ "ModuleRelativePath", "Public/UnrealMosquitto.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnrealMosquitto_Unsubscribe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnrealMosquitto, "Unsubscribe", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(UnrealMosquitto_eventUnsubscribe_Parms), Z_Construct_UFunction_AUnrealMosquitto_Unsubscribe_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AUnrealMosquitto_Unsubscribe_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUnrealMosquitto_Unsubscribe_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AUnrealMosquitto_Unsubscribe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUnrealMosquitto_Unsubscribe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUnrealMosquitto_Unsubscribe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AUnrealMosquitto_NoRegister()
	{
		return AUnrealMosquitto::StaticClass();
	}
	struct Z_Construct_UClass_AUnrealMosquitto_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ClientName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Password;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Username_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Username;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Port;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Host_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Host;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnrealMosquitto_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_mqtt,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AUnrealMosquitto_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AUnrealMosquitto_OnConnect, "OnConnect" }, // 2588805431
		{ &Z_Construct_UFunction_AUnrealMosquitto_OnDisconnect, "OnDisconnect" }, // 3350683049
		{ &Z_Construct_UFunction_AUnrealMosquitto_OnMessage, "OnMessage" }, // 135981418
		{ &Z_Construct_UFunction_AUnrealMosquitto_OnPublish, "OnPublish" }, // 4215103751
		{ &Z_Construct_UFunction_AUnrealMosquitto_OnSubscribe, "OnSubscribe" }, // 3427511924
		{ &Z_Construct_UFunction_AUnrealMosquitto_OnUnsubscribe, "OnUnsubscribe" }, // 411584937
		{ &Z_Construct_UFunction_AUnrealMosquitto_PublishString, "PublishString" }, // 576922556
		{ &Z_Construct_UFunction_AUnrealMosquitto_Subscribe, "Subscribe" }, // 2520372475
		{ &Z_Construct_UFunction_AUnrealMosquitto_Unsubscribe, "Unsubscribe" }, // 2049361634
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealMosquitto_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UnrealMosquitto.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UnrealMosquitto.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealMosquitto_Statics::NewProp_ClientName_MetaData[] = {
		{ "Category", "MQTT" },
		{ "ModuleRelativePath", "Public/UnrealMosquitto.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AUnrealMosquitto_Statics::NewProp_ClientName = { UE4CodeGen_Private::EPropertyClass::Str, "ClientName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010005, 1, nullptr, STRUCT_OFFSET(AUnrealMosquitto, ClientName), METADATA_PARAMS(Z_Construct_UClass_AUnrealMosquitto_Statics::NewProp_ClientName_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUnrealMosquitto_Statics::NewProp_ClientName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealMosquitto_Statics::NewProp_Password_MetaData[] = {
		{ "Category", "MQTT" },
		{ "ModuleRelativePath", "Public/UnrealMosquitto.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AUnrealMosquitto_Statics::NewProp_Password = { UE4CodeGen_Private::EPropertyClass::Str, "Password", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010005, 1, nullptr, STRUCT_OFFSET(AUnrealMosquitto, Password), METADATA_PARAMS(Z_Construct_UClass_AUnrealMosquitto_Statics::NewProp_Password_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUnrealMosquitto_Statics::NewProp_Password_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealMosquitto_Statics::NewProp_Username_MetaData[] = {
		{ "Category", "MQTT" },
		{ "ModuleRelativePath", "Public/UnrealMosquitto.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AUnrealMosquitto_Statics::NewProp_Username = { UE4CodeGen_Private::EPropertyClass::Str, "Username", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010005, 1, nullptr, STRUCT_OFFSET(AUnrealMosquitto, Username), METADATA_PARAMS(Z_Construct_UClass_AUnrealMosquitto_Statics::NewProp_Username_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUnrealMosquitto_Statics::NewProp_Username_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealMosquitto_Statics::NewProp_Port_MetaData[] = {
		{ "Category", "MQTT" },
		{ "ModuleRelativePath", "Public/UnrealMosquitto.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AUnrealMosquitto_Statics::NewProp_Port = { UE4CodeGen_Private::EPropertyClass::Int, "Port", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010005, 1, nullptr, STRUCT_OFFSET(AUnrealMosquitto, Port), METADATA_PARAMS(Z_Construct_UClass_AUnrealMosquitto_Statics::NewProp_Port_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUnrealMosquitto_Statics::NewProp_Port_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealMosquitto_Statics::NewProp_Host_MetaData[] = {
		{ "Category", "MQTT" },
		{ "ModuleRelativePath", "Public/UnrealMosquitto.h" },
		{ "ToolTip", "Properties" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AUnrealMosquitto_Statics::NewProp_Host = { UE4CodeGen_Private::EPropertyClass::Str, "Host", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010005, 1, nullptr, STRUCT_OFFSET(AUnrealMosquitto, Host), METADATA_PARAMS(Z_Construct_UClass_AUnrealMosquitto_Statics::NewProp_Host_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUnrealMosquitto_Statics::NewProp_Host_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUnrealMosquitto_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnrealMosquitto_Statics::NewProp_ClientName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnrealMosquitto_Statics::NewProp_Password,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnrealMosquitto_Statics::NewProp_Username,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnrealMosquitto_Statics::NewProp_Port,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnrealMosquitto_Statics::NewProp_Host,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnrealMosquitto_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnrealMosquitto>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUnrealMosquitto_Statics::ClassParams = {
		&AUnrealMosquitto::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AUnrealMosquitto_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AUnrealMosquitto_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AUnrealMosquitto_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AUnrealMosquitto_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnrealMosquitto()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUnrealMosquitto_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUnrealMosquitto, 1679959233);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUnrealMosquitto(Z_Construct_UClass_AUnrealMosquitto, &AUnrealMosquitto::StaticClass, TEXT("/Script/mqtt"), TEXT("AUnrealMosquitto"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnrealMosquitto);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
