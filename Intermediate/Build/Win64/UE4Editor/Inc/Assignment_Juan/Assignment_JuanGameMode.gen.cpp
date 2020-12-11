// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Assignment_Juan/Assignment_JuanGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssignment_JuanGameMode() {}
// Cross Module References
	ASSIGNMENT_JUAN_API UClass* Z_Construct_UClass_AAssignment_JuanGameMode_NoRegister();
	ASSIGNMENT_JUAN_API UClass* Z_Construct_UClass_AAssignment_JuanGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Assignment_Juan();
// End Cross Module References
	void AAssignment_JuanGameMode::StaticRegisterNativesAAssignment_JuanGameMode()
	{
	}
	UClass* Z_Construct_UClass_AAssignment_JuanGameMode_NoRegister()
	{
		return AAssignment_JuanGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AAssignment_JuanGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAssignment_JuanGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Assignment_Juan,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAssignment_JuanGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Assignment_JuanGameMode.h" },
		{ "ModuleRelativePath", "Assignment_JuanGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAssignment_JuanGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAssignment_JuanGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAssignment_JuanGameMode_Statics::ClassParams = {
		&AAssignment_JuanGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AAssignment_JuanGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAssignment_JuanGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAssignment_JuanGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAssignment_JuanGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAssignment_JuanGameMode, 475275757);
	template<> ASSIGNMENT_JUAN_API UClass* StaticClass<AAssignment_JuanGameMode>()
	{
		return AAssignment_JuanGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAssignment_JuanGameMode(Z_Construct_UClass_AAssignment_JuanGameMode, &AAssignment_JuanGameMode::StaticClass, TEXT("/Script/Assignment_Juan"), TEXT("AAssignment_JuanGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAssignment_JuanGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
