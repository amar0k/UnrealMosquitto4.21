// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MQTT_mqttBPLibrary_generated_h
#error "mqttBPLibrary.generated.h already included, missing '#pragma once' in mqttBPLibrary.h"
#endif
#define MQTT_mqttBPLibrary_generated_h

#define Backup_Plugins_mqtt_Source_mqtt_Public_mqttBPLibrary_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execmqttSampleFunction) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Param); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UmqttBPLibrary::mqttSampleFunction(Z_Param_Param); \
		P_NATIVE_END; \
	}


#define Backup_Plugins_mqtt_Source_mqtt_Public_mqttBPLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execmqttSampleFunction) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Param); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UmqttBPLibrary::mqttSampleFunction(Z_Param_Param); \
		P_NATIVE_END; \
	}


#define Backup_Plugins_mqtt_Source_mqtt_Public_mqttBPLibrary_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUmqttBPLibrary(); \
	friend struct Z_Construct_UClass_UmqttBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UmqttBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/mqtt"), NO_API) \
	DECLARE_SERIALIZER(UmqttBPLibrary)


#define Backup_Plugins_mqtt_Source_mqtt_Public_mqttBPLibrary_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUmqttBPLibrary(); \
	friend struct Z_Construct_UClass_UmqttBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UmqttBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/mqtt"), NO_API) \
	DECLARE_SERIALIZER(UmqttBPLibrary)


#define Backup_Plugins_mqtt_Source_mqtt_Public_mqttBPLibrary_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UmqttBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UmqttBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UmqttBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UmqttBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UmqttBPLibrary(UmqttBPLibrary&&); \
	NO_API UmqttBPLibrary(const UmqttBPLibrary&); \
public:


#define Backup_Plugins_mqtt_Source_mqtt_Public_mqttBPLibrary_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UmqttBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UmqttBPLibrary(UmqttBPLibrary&&); \
	NO_API UmqttBPLibrary(const UmqttBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UmqttBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UmqttBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UmqttBPLibrary)


#define Backup_Plugins_mqtt_Source_mqtt_Public_mqttBPLibrary_h_28_PRIVATE_PROPERTY_OFFSET
#define Backup_Plugins_mqtt_Source_mqtt_Public_mqttBPLibrary_h_25_PROLOG
#define Backup_Plugins_mqtt_Source_mqtt_Public_mqttBPLibrary_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Backup_Plugins_mqtt_Source_mqtt_Public_mqttBPLibrary_h_28_PRIVATE_PROPERTY_OFFSET \
	Backup_Plugins_mqtt_Source_mqtt_Public_mqttBPLibrary_h_28_RPC_WRAPPERS \
	Backup_Plugins_mqtt_Source_mqtt_Public_mqttBPLibrary_h_28_INCLASS \
	Backup_Plugins_mqtt_Source_mqtt_Public_mqttBPLibrary_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Backup_Plugins_mqtt_Source_mqtt_Public_mqttBPLibrary_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Backup_Plugins_mqtt_Source_mqtt_Public_mqttBPLibrary_h_28_PRIVATE_PROPERTY_OFFSET \
	Backup_Plugins_mqtt_Source_mqtt_Public_mqttBPLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	Backup_Plugins_mqtt_Source_mqtt_Public_mqttBPLibrary_h_28_INCLASS_NO_PURE_DECLS \
	Backup_Plugins_mqtt_Source_mqtt_Public_mqttBPLibrary_h_28_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class mqttBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Backup_Plugins_mqtt_Source_mqtt_Public_mqttBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
