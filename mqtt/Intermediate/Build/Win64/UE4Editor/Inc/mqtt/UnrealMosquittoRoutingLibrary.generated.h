// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MQTT_UnrealMosquittoRoutingLibrary_generated_h
#error "UnrealMosquittoRoutingLibrary.generated.h already included, missing '#pragma once' in UnrealMosquittoRoutingLibrary.h"
#endif
#define MQTT_UnrealMosquittoRoutingLibrary_generated_h

#define Backup_Plugins_mqtt_Source_mqtt_Public_UnrealMosquittoRoutingLibrary_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRoutingNotMatched) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_A); \
		P_GET_PROPERTY(UStrProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UUnrealMosquittoRoutingLibrary::RoutingNotMatched(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	}


#define Backup_Plugins_mqtt_Source_mqtt_Public_UnrealMosquittoRoutingLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRoutingNotMatched) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_A); \
		P_GET_PROPERTY(UStrProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UUnrealMosquittoRoutingLibrary::RoutingNotMatched(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	}


#define Backup_Plugins_mqtt_Source_mqtt_Public_UnrealMosquittoRoutingLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUnrealMosquittoRoutingLibrary(); \
	friend struct Z_Construct_UClass_UUnrealMosquittoRoutingLibrary_Statics; \
public: \
	DECLARE_CLASS(UUnrealMosquittoRoutingLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/mqtt"), NO_API) \
	DECLARE_SERIALIZER(UUnrealMosquittoRoutingLibrary)


#define Backup_Plugins_mqtt_Source_mqtt_Public_UnrealMosquittoRoutingLibrary_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUUnrealMosquittoRoutingLibrary(); \
	friend struct Z_Construct_UClass_UUnrealMosquittoRoutingLibrary_Statics; \
public: \
	DECLARE_CLASS(UUnrealMosquittoRoutingLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/mqtt"), NO_API) \
	DECLARE_SERIALIZER(UUnrealMosquittoRoutingLibrary)


#define Backup_Plugins_mqtt_Source_mqtt_Public_UnrealMosquittoRoutingLibrary_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUnrealMosquittoRoutingLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUnrealMosquittoRoutingLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUnrealMosquittoRoutingLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUnrealMosquittoRoutingLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUnrealMosquittoRoutingLibrary(UUnrealMosquittoRoutingLibrary&&); \
	NO_API UUnrealMosquittoRoutingLibrary(const UUnrealMosquittoRoutingLibrary&); \
public:


#define Backup_Plugins_mqtt_Source_mqtt_Public_UnrealMosquittoRoutingLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUnrealMosquittoRoutingLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUnrealMosquittoRoutingLibrary(UUnrealMosquittoRoutingLibrary&&); \
	NO_API UUnrealMosquittoRoutingLibrary(const UUnrealMosquittoRoutingLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUnrealMosquittoRoutingLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUnrealMosquittoRoutingLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUnrealMosquittoRoutingLibrary)


#define Backup_Plugins_mqtt_Source_mqtt_Public_UnrealMosquittoRoutingLibrary_h_15_PRIVATE_PROPERTY_OFFSET
#define Backup_Plugins_mqtt_Source_mqtt_Public_UnrealMosquittoRoutingLibrary_h_12_PROLOG
#define Backup_Plugins_mqtt_Source_mqtt_Public_UnrealMosquittoRoutingLibrary_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Backup_Plugins_mqtt_Source_mqtt_Public_UnrealMosquittoRoutingLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	Backup_Plugins_mqtt_Source_mqtt_Public_UnrealMosquittoRoutingLibrary_h_15_RPC_WRAPPERS \
	Backup_Plugins_mqtt_Source_mqtt_Public_UnrealMosquittoRoutingLibrary_h_15_INCLASS \
	Backup_Plugins_mqtt_Source_mqtt_Public_UnrealMosquittoRoutingLibrary_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Backup_Plugins_mqtt_Source_mqtt_Public_UnrealMosquittoRoutingLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Backup_Plugins_mqtt_Source_mqtt_Public_UnrealMosquittoRoutingLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	Backup_Plugins_mqtt_Source_mqtt_Public_UnrealMosquittoRoutingLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Backup_Plugins_mqtt_Source_mqtt_Public_UnrealMosquittoRoutingLibrary_h_15_INCLASS_NO_PURE_DECLS \
	Backup_Plugins_mqtt_Source_mqtt_Public_UnrealMosquittoRoutingLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Backup_Plugins_mqtt_Source_mqtt_Public_UnrealMosquittoRoutingLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
