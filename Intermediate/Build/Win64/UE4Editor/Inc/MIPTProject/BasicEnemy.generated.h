// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AProjectile;
#ifdef MIPTPROJECT_BasicEnemy_generated_h
#error "BasicEnemy.generated.h already included, missing '#pragma once' in BasicEnemy.h"
#endif
#define MIPTPROJECT_BasicEnemy_generated_h

#define MIPTProject_Source_MIPTProject_Public_BasicEnemy_h_18_SPARSE_DATA
#define MIPTProject_Source_MIPTProject_Public_BasicEnemy_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRecieveDamage); \
	DECLARE_FUNCTION(execDie);


#define MIPTProject_Source_MIPTProject_Public_BasicEnemy_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRecieveDamage); \
	DECLARE_FUNCTION(execDie);


#define MIPTProject_Source_MIPTProject_Public_BasicEnemy_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABasicEnemy(); \
	friend struct Z_Construct_UClass_ABasicEnemy_Statics; \
public: \
	DECLARE_CLASS(ABasicEnemy, APaperCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MIPTProject"), NO_API) \
	DECLARE_SERIALIZER(ABasicEnemy)


#define MIPTProject_Source_MIPTProject_Public_BasicEnemy_h_18_INCLASS \
private: \
	static void StaticRegisterNativesABasicEnemy(); \
	friend struct Z_Construct_UClass_ABasicEnemy_Statics; \
public: \
	DECLARE_CLASS(ABasicEnemy, APaperCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MIPTProject"), NO_API) \
	DECLARE_SERIALIZER(ABasicEnemy)


#define MIPTProject_Source_MIPTProject_Public_BasicEnemy_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABasicEnemy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABasicEnemy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasicEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasicEnemy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasicEnemy(ABasicEnemy&&); \
	NO_API ABasicEnemy(const ABasicEnemy&); \
public:


#define MIPTProject_Source_MIPTProject_Public_BasicEnemy_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasicEnemy(ABasicEnemy&&); \
	NO_API ABasicEnemy(const ABasicEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasicEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasicEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABasicEnemy)


#define MIPTProject_Source_MIPTProject_Public_BasicEnemy_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HealthComponent() { return STRUCT_OFFSET(ABasicEnemy, HealthComponent); } \
	FORCEINLINE static uint32 __PPO__SensingComponent() { return STRUCT_OFFSET(ABasicEnemy, SensingComponent); }


#define MIPTProject_Source_MIPTProject_Public_BasicEnemy_h_15_PROLOG
#define MIPTProject_Source_MIPTProject_Public_BasicEnemy_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MIPTProject_Source_MIPTProject_Public_BasicEnemy_h_18_PRIVATE_PROPERTY_OFFSET \
	MIPTProject_Source_MIPTProject_Public_BasicEnemy_h_18_SPARSE_DATA \
	MIPTProject_Source_MIPTProject_Public_BasicEnemy_h_18_RPC_WRAPPERS \
	MIPTProject_Source_MIPTProject_Public_BasicEnemy_h_18_INCLASS \
	MIPTProject_Source_MIPTProject_Public_BasicEnemy_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MIPTProject_Source_MIPTProject_Public_BasicEnemy_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MIPTProject_Source_MIPTProject_Public_BasicEnemy_h_18_PRIVATE_PROPERTY_OFFSET \
	MIPTProject_Source_MIPTProject_Public_BasicEnemy_h_18_SPARSE_DATA \
	MIPTProject_Source_MIPTProject_Public_BasicEnemy_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	MIPTProject_Source_MIPTProject_Public_BasicEnemy_h_18_INCLASS_NO_PURE_DECLS \
	MIPTProject_Source_MIPTProject_Public_BasicEnemy_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MIPTPROJECT_API UClass* StaticClass<class ABasicEnemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MIPTProject_Source_MIPTProject_Public_BasicEnemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
