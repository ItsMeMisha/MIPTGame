// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MIPTProject/MIPTProjectGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMIPTProjectGameMode() {}
// Cross Module References
	MIPTPROJECT_API UClass* Z_Construct_UClass_AMIPTProjectGameMode_NoRegister();
	MIPTPROJECT_API UClass* Z_Construct_UClass_AMIPTProjectGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MIPTProject();
// End Cross Module References
	void AMIPTProjectGameMode::StaticRegisterNativesAMIPTProjectGameMode()
	{
	}
	UClass* Z_Construct_UClass_AMIPTProjectGameMode_NoRegister()
	{
		return AMIPTProjectGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMIPTProjectGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMIPTProjectGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MIPTProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMIPTProjectGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The GameMode defines the game being played. It governs the game rules, scoring, what actors\n * are allowed to exist in this game type, and who may enter the game.\n *\n * This game mode just sets the default pawn to be the MyCharacter asset, which is a subclass of MIPTProjectCharacter\n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MIPTProjectGameMode.h" },
		{ "ModuleRelativePath", "MIPTProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "The GameMode defines the game being played. It governs the game rules, scoring, what actors\nare allowed to exist in this game type, and who may enter the game.\n\nThis game mode just sets the default pawn to be the MyCharacter asset, which is a subclass of MIPTProjectCharacter" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMIPTProjectGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMIPTProjectGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMIPTProjectGameMode_Statics::ClassParams = {
		&AMIPTProjectGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMIPTProjectGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMIPTProjectGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMIPTProjectGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMIPTProjectGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMIPTProjectGameMode, 799443299);
	template<> MIPTPROJECT_API UClass* StaticClass<AMIPTProjectGameMode>()
	{
		return AMIPTProjectGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMIPTProjectGameMode(Z_Construct_UClass_AMIPTProjectGameMode, &AMIPTProjectGameMode::StaticClass, TEXT("/Script/MIPTProject"), TEXT("AMIPTProjectGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMIPTProjectGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
