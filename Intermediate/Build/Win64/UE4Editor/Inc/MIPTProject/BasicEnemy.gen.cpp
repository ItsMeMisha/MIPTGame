// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MIPTProject/Public/BasicEnemy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasicEnemy() {}
// Cross Module References
	MIPTPROJECT_API UClass* Z_Construct_UClass_ABasicEnemy_NoRegister();
	MIPTPROJECT_API UClass* Z_Construct_UClass_ABasicEnemy();
	PAPER2D_API UClass* Z_Construct_UClass_APaperCharacter();
	UPackage* Z_Construct_UPackage__Script_MIPTProject();
	MIPTPROJECT_API UClass* Z_Construct_UClass_AProjectile_NoRegister();
	MIPTPROJECT_API UClass* Z_Construct_UClass_UHealthComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UPawnSensingComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABasicEnemy::execRecieveDamage)
	{
		P_GET_OBJECT(AProjectile,Z_Param_Projectile);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RecieveDamage(Z_Param_Projectile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABasicEnemy::execDie)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Die();
		P_NATIVE_END;
	}
	void ABasicEnemy::StaticRegisterNativesABasicEnemy()
	{
		UClass* Class = ABasicEnemy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Die", &ABasicEnemy::execDie },
			{ "RecieveDamage", &ABasicEnemy::execRecieveDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABasicEnemy_Die_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABasicEnemy_Die_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BasicEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasicEnemy_Die_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABasicEnemy, nullptr, "Die", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABasicEnemy_Die_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasicEnemy_Die_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABasicEnemy_Die()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABasicEnemy_Die_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABasicEnemy_RecieveDamage_Statics
	{
		struct BasicEnemy_eventRecieveDamage_Parms
		{
			AProjectile* Projectile;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Projectile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABasicEnemy_RecieveDamage_Statics::NewProp_Projectile = { "Projectile", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BasicEnemy_eventRecieveDamage_Parms, Projectile), Z_Construct_UClass_AProjectile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABasicEnemy_RecieveDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABasicEnemy_RecieveDamage_Statics::NewProp_Projectile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABasicEnemy_RecieveDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BasicEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasicEnemy_RecieveDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABasicEnemy, nullptr, "RecieveDamage", nullptr, nullptr, sizeof(BasicEnemy_eventRecieveDamage_Parms), Z_Construct_UFunction_ABasicEnemy_RecieveDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasicEnemy_RecieveDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABasicEnemy_RecieveDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasicEnemy_RecieveDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABasicEnemy_RecieveDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABasicEnemy_RecieveDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABasicEnemy_NoRegister()
	{
		return ABasicEnemy::StaticClass();
	}
	struct Z_Construct_UClass_ABasicEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HealthComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SensingComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SensingComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABasicEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APaperCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_MIPTProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABasicEnemy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABasicEnemy_Die, "Die" }, // 3992196172
		{ &Z_Construct_UFunction_ABasicEnemy_RecieveDamage, "RecieveDamage" }, // 2180542683
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicEnemy_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BasicEnemy.h" },
		{ "ModuleRelativePath", "Public/BasicEnemy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicEnemy_Statics::NewProp_HealthComponent_MetaData[] = {
		{ "Category", "Stats" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BasicEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasicEnemy_Statics::NewProp_HealthComponent = { "HealthComponent", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasicEnemy, HealthComponent), Z_Construct_UClass_UHealthComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABasicEnemy_Statics::NewProp_HealthComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicEnemy_Statics::NewProp_HealthComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicEnemy_Statics::NewProp_SensingComponent_MetaData[] = {
		{ "Category", "Sensing" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BasicEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasicEnemy_Statics::NewProp_SensingComponent = { "SensingComponent", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasicEnemy, SensingComponent), Z_Construct_UClass_UPawnSensingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABasicEnemy_Statics::NewProp_SensingComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicEnemy_Statics::NewProp_SensingComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABasicEnemy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicEnemy_Statics::NewProp_HealthComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicEnemy_Statics::NewProp_SensingComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABasicEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABasicEnemy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABasicEnemy_Statics::ClassParams = {
		&ABasicEnemy::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABasicEnemy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABasicEnemy_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABasicEnemy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicEnemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABasicEnemy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABasicEnemy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABasicEnemy, 3741468236);
	template<> MIPTPROJECT_API UClass* StaticClass<ABasicEnemy>()
	{
		return ABasicEnemy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABasicEnemy(Z_Construct_UClass_ABasicEnemy, &ABasicEnemy::StaticClass, TEXT("/Script/MIPTProject"), TEXT("ABasicEnemy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABasicEnemy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
