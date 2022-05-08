// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AProjectile;
#ifdef MIPTPROJECT_MIPTProjectCharacter_generated_h
#error "MIPTProjectCharacter.generated.h already included, missing '#pragma once' in MIPTProjectCharacter.h"
#endif
#define MIPTPROJECT_MIPTProjectCharacter_generated_h

#define MIPTProject_Source_MIPTProject_MIPTProjectCharacter_h_23_SPARSE_DATA
#define MIPTProject_Source_MIPTProject_MIPTProjectCharacter_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRecieveDamage);


#define MIPTProject_Source_MIPTProject_MIPTProjectCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRecieveDamage);


#define MIPTProject_Source_MIPTProject_MIPTProjectCharacter_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMIPTProjectCharacter(); \
	friend struct Z_Construct_UClass_AMIPTProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(AMIPTProjectCharacter, APaperCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MIPTProject"), NO_API) \
	DECLARE_SERIALIZER(AMIPTProjectCharacter)


#define MIPTProject_Source_MIPTProject_MIPTProjectCharacter_h_23_INCLASS \
private: \
	static void StaticRegisterNativesAMIPTProjectCharacter(); \
	friend struct Z_Construct_UClass_AMIPTProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(AMIPTProjectCharacter, APaperCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MIPTProject"), NO_API) \
	DECLARE_SERIALIZER(AMIPTProjectCharacter)


#define MIPTProject_Source_MIPTProject_MIPTProjectCharacter_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMIPTProjectCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMIPTProjectCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMIPTProjectCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMIPTProjectCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMIPTProjectCharacter(AMIPTProjectCharacter&&); \
	NO_API AMIPTProjectCharacter(const AMIPTProjectCharacter&); \
public:


#define MIPTProject_Source_MIPTProject_MIPTProjectCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMIPTProjectCharacter(AMIPTProjectCharacter&&); \
	NO_API AMIPTProjectCharacter(const AMIPTProjectCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMIPTProjectCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMIPTProjectCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMIPTProjectCharacter)


#define MIPTProject_Source_MIPTProject_MIPTProjectCharacter_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SideViewCameraComponent() { return STRUCT_OFFSET(AMIPTProjectCharacter, SideViewCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AMIPTProjectCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__RunningAnimation() { return STRUCT_OFFSET(AMIPTProjectCharacter, RunningAnimation); } \
	FORCEINLINE static uint32 __PPO__IdleAnimation() { return STRUCT_OFFSET(AMIPTProjectCharacter, IdleAnimation); } \
	FORCEINLINE static uint32 __PPO__HealthComponent() { return STRUCT_OFFSET(AMIPTProjectCharacter, HealthComponent); } \
	FORCEINLINE static uint32 __PPO__ProjectileClass() { return STRUCT_OFFSET(AMIPTProjectCharacter, ProjectileClass); }


#define MIPTProject_Source_MIPTProject_MIPTProjectCharacter_h_20_PROLOG
#define MIPTProject_Source_MIPTProject_MIPTProjectCharacter_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MIPTProject_Source_MIPTProject_MIPTProjectCharacter_h_23_PRIVATE_PROPERTY_OFFSET \
	MIPTProject_Source_MIPTProject_MIPTProjectCharacter_h_23_SPARSE_DATA \
	MIPTProject_Source_MIPTProject_MIPTProjectCharacter_h_23_RPC_WRAPPERS \
	MIPTProject_Source_MIPTProject_MIPTProjectCharacter_h_23_INCLASS \
	MIPTProject_Source_MIPTProject_MIPTProjectCharacter_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MIPTProject_Source_MIPTProject_MIPTProjectCharacter_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MIPTProject_Source_MIPTProject_MIPTProjectCharacter_h_23_PRIVATE_PROPERTY_OFFSET \
	MIPTProject_Source_MIPTProject_MIPTProjectCharacter_h_23_SPARSE_DATA \
	MIPTProject_Source_MIPTProject_MIPTProjectCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	MIPTProject_Source_MIPTProject_MIPTProjectCharacter_h_23_INCLASS_NO_PURE_DECLS \
	MIPTProject_Source_MIPTProject_MIPTProjectCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MIPTPROJECT_API UClass* StaticClass<class AMIPTProjectCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MIPTProject_Source_MIPTProject_MIPTProjectCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
