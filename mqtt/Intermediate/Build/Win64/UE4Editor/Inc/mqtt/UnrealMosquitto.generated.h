// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMQTTMessage;
#ifdef MQTT_UnrealMosquitto_generated_h
#error "UnrealMosquitto.generated.h already included, missing '#pragma once' in UnrealMosquitto.h"
#endif
#define MQTT_UnrealMosquitto_generated_h

#define Backup_Plugins_mqtt_Source_mqtt_Public_UnrealMosquitto_h_157_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPublishString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_message); \
		P_GET_PROPERTY(UStrProperty,Z_Param_topic); \
		P_GET_PROPERTY(UIntProperty,Z_Param_qos); \
		P_GET_UBOOL(Z_Param_retain); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PublishString(Z_Param_message,Z_Param_topic,Z_Param_qos,Z_Param_retain); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnsubscribe) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_topic); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Unsubscribe(Z_Param_topic); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubscribe) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_topic); \
		P_GET_PROPERTY(UIntProperty,Z_Param_qos); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Subscribe(Z_Param_topic,Z_Param_qos); \
		P_NATIVE_END; \
	}


#define Backup_Plugins_mqtt_Source_mqtt_Public_UnrealMosquitto_h_157_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPublishString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_message); \
		P_GET_PROPERTY(UStrProperty,Z_Param_topic); \
		P_GET_PROPERTY(UIntProperty,Z_Param_qos); \
		P_GET_UBOOL(Z_Param_retain); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PublishString(Z_Param_message,Z_Param_topic,Z_Param_qos,Z_Param_retain); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnsubscribe) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_topic); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Unsubscribe(Z_Param_topic); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubscribe) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_topic); \
		P_GET_PROPERTY(UIntProperty,Z_Param_qos); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Subscribe(Z_Param_topic,Z_Param_qos); \
		P_NATIVE_END; \
	}


#define Backup_Plugins_mqtt_Source_mqtt_Public_UnrealMosquitto_h_157_EVENT_PARMS \
	struct UnrealMosquitto_eventOnMessage_Parms \
	{ \
		const UMQTTMessage* message; \
	}; \
	struct UnrealMosquitto_eventOnPublish_Parms \
	{ \
		int32 mid; \
	}; \
	struct UnrealMosquitto_eventOnSubscribe_Parms \
	{ \
		int32 mid; \
		TArray<int32> qos; \
	}; \
	struct UnrealMosquitto_eventOnUnsubscribe_Parms \
	{ \
		int32 mid; \
	};


#define Backup_Plugins_mqtt_Source_mqtt_Public_UnrealMosquitto_h_157_CALLBACK_WRAPPERS
#define Backup_Plugins_mqtt_Source_mqtt_Public_UnrealMosquitto_h_157_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUnrealMosquitto(); \
	friend struct Z_Construct_UClass_AUnrealMosquitto_Statics; \
public: \
	DECLARE_CLASS(AUnrealMosquitto, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/mqtt"), NO_API) \
	DECLARE_SERIALIZER(AUnrealMosquitto)


#define Backup_Plugins_mqtt_Source_mqtt_Public_UnrealMosquitto_h_157_INCLASS \
private: \
	static void StaticRegisterNativesAUnrealMosquitto(); \
	friend struct Z_Construct_UClass_AUnrealMosquitto_Statics; \
public: \
	DECLARE_CLASS(AUnrealMosquitto, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/mqtt"), NO_API) \
	DECLARE_SERIALIZER(AUnrealMosquitto)


#define Backup_Plugins_mqtt_Source_mqtt_Public_UnrealMosquitto_h_157_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUnrealMosquitto(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUnrealMosquitto) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUnrealMosquitto); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUnrealMosquitto); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUnrealMosquitto(AUnrealMosquitto&&); \
	NO_API AUnrealMosquitto(const AUnrealMosquitto&); \
public:


#define Backup_Plugins_mqtt_Source_mqtt_Public_UnrealMosquitto_h_157_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUnrealMosquitto(AUnrealMosquitto&&); \
	NO_API AUnrealMosquitto(const AUnrealMosquitto&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUnrealMosquitto); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUnrealMosquitto); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUnrealMosquitto)


#define Backup_Plugins_mqtt_Source_mqtt_Public_UnrealMosquitto_h_157_PRIVATE_PROPERTY_OFFSET
#define Backup_Plugins_mqtt_Source_mqtt_Public_UnrealMosquitto_h_154_PROLOG \
	Backup_Plugins_mqtt_Source_mqtt_Public_UnrealMosquitto_h_157_EVENT_PARMS


#define Backup_Plugins_mqtt_Source_mqtt_Public_UnrealMosquitto_h_157_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Backup_Plugins_mqtt_Source_mqtt_Public_UnrealMosquitto_h_157_PRIVATE_PROPERTY_OFFSET \
	Backup_Plugins_mqtt_Source_mqtt_Public_UnrealMosquitto_h_157_RPC_WRAPPERS \
	Backup_Plugins_mqtt_Source_mqtt_Public_UnrealMosquitto_h_157_CALLBACK_WRAPPERS \
	Backup_Plugins_mqtt_Source_mqtt_Public_UnrealMosquitto_h_157_INCLASS \
	Backup_Plugins_mqtt_Source_mqtt_Public_UnrealMosquitto_h_157_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Backup_Plugins_mqtt_Source_mqtt_Public_UnrealMosquitto_h_157_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Backup_Plugins_mqtt_Source_mqtt_Public_UnrealMosquitto_h_157_PRIVATE_PROPERTY_OFFSET \
	Backup_Plugins_mqtt_Source_mqtt_Public_UnrealMosquitto_h_157_RPC_WRAPPERS_NO_PURE_DECLS \
	Backup_Plugins_mqtt_Source_mqtt_Public_UnrealMosquitto_h_157_CALLBACK_WRAPPERS \
	Backup_Plugins_mqtt_Source_mqtt_Public_UnrealMosquitto_h_157_INCLASS_NO_PURE_DECLS \
	Backup_Plugins_mqtt_Source_mqtt_Public_UnrealMosquitto_h_157_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Backup_Plugins_mqtt_Source_mqtt_Public_UnrealMosquitto_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
