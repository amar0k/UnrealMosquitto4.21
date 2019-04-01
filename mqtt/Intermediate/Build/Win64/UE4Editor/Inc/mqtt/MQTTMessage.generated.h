// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MQTT_MQTTMessage_generated_h
#error "MQTTMessage.generated.h already included, missing '#pragma once' in MQTTMessage.h"
#endif
#define MQTT_MQTTMessage_generated_h

#define Backup_Plugins_mqtt_Source_mqtt_Public_MQTTMessage_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUMQTTMessagePayload_Statics; \
	MQTT_API static class UScriptStruct* StaticStruct();


#define Backup_Plugins_mqtt_Source_mqtt_Public_MQTTMessage_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPayloadAsString) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetPayloadAsString(); \
		P_NATIVE_END; \
	}


#define Backup_Plugins_mqtt_Source_mqtt_Public_MQTTMessage_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPayloadAsString) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetPayloadAsString(); \
		P_NATIVE_END; \
	}


#define Backup_Plugins_mqtt_Source_mqtt_Public_MQTTMessage_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMQTTMessage(); \
	friend struct Z_Construct_UClass_UMQTTMessage_Statics; \
public: \
	DECLARE_CLASS(UMQTTMessage, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/mqtt"), NO_API) \
	DECLARE_SERIALIZER(UMQTTMessage)


#define Backup_Plugins_mqtt_Source_mqtt_Public_MQTTMessage_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUMQTTMessage(); \
	friend struct Z_Construct_UClass_UMQTTMessage_Statics; \
public: \
	DECLARE_CLASS(UMQTTMessage, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/mqtt"), NO_API) \
	DECLARE_SERIALIZER(UMQTTMessage)


#define Backup_Plugins_mqtt_Source_mqtt_Public_MQTTMessage_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMQTTMessage(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMQTTMessage) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMQTTMessage); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMQTTMessage); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMQTTMessage(UMQTTMessage&&); \
	NO_API UMQTTMessage(const UMQTTMessage&); \
public:


#define Backup_Plugins_mqtt_Source_mqtt_Public_MQTTMessage_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMQTTMessage(UMQTTMessage&&); \
	NO_API UMQTTMessage(const UMQTTMessage&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMQTTMessage); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMQTTMessage); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMQTTMessage)


#define Backup_Plugins_mqtt_Source_mqtt_Public_MQTTMessage_h_25_PRIVATE_PROPERTY_OFFSET
#define Backup_Plugins_mqtt_Source_mqtt_Public_MQTTMessage_h_22_PROLOG
#define Backup_Plugins_mqtt_Source_mqtt_Public_MQTTMessage_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Backup_Plugins_mqtt_Source_mqtt_Public_MQTTMessage_h_25_PRIVATE_PROPERTY_OFFSET \
	Backup_Plugins_mqtt_Source_mqtt_Public_MQTTMessage_h_25_RPC_WRAPPERS \
	Backup_Plugins_mqtt_Source_mqtt_Public_MQTTMessage_h_25_INCLASS \
	Backup_Plugins_mqtt_Source_mqtt_Public_MQTTMessage_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Backup_Plugins_mqtt_Source_mqtt_Public_MQTTMessage_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Backup_Plugins_mqtt_Source_mqtt_Public_MQTTMessage_h_25_PRIVATE_PROPERTY_OFFSET \
	Backup_Plugins_mqtt_Source_mqtt_Public_MQTTMessage_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	Backup_Plugins_mqtt_Source_mqtt_Public_MQTTMessage_h_25_INCLASS_NO_PURE_DECLS \
	Backup_Plugins_mqtt_Source_mqtt_Public_MQTTMessage_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Backup_Plugins_mqtt_Source_mqtt_Public_MQTTMessage_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
