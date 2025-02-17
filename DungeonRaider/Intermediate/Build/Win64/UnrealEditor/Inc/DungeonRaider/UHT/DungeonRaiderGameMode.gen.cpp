// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonRaider/DungeonRaiderGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonRaiderGameMode() {}
// Cross Module References
	DUNGEONRAIDER_API UClass* Z_Construct_UClass_ADungeonRaiderGameMode();
	DUNGEONRAIDER_API UClass* Z_Construct_UClass_ADungeonRaiderGameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_DungeonRaider();
// End Cross Module References
	void ADungeonRaiderGameMode::StaticRegisterNativesADungeonRaiderGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADungeonRaiderGameMode);
	UClass* Z_Construct_UClass_ADungeonRaiderGameMode_NoRegister()
	{
		return ADungeonRaiderGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ADungeonRaiderGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADungeonRaiderGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonRaider,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonRaiderGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonRaiderGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "DungeonRaiderGameMode.h" },
		{ "ModuleRelativePath", "DungeonRaiderGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADungeonRaiderGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADungeonRaiderGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADungeonRaiderGameMode_Statics::ClassParams = {
		&ADungeonRaiderGameMode::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonRaiderGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ADungeonRaiderGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ADungeonRaiderGameMode()
	{
		if (!Z_Registration_Info_UClass_ADungeonRaiderGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADungeonRaiderGameMode.OuterSingleton, Z_Construct_UClass_ADungeonRaiderGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADungeonRaiderGameMode.OuterSingleton;
	}
	template<> DUNGEONRAIDER_API UClass* StaticClass<ADungeonRaiderGameMode>()
	{
		return ADungeonRaiderGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADungeonRaiderGameMode);
	ADungeonRaiderGameMode::~ADungeonRaiderGameMode() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_DungeonRaider_Unreal_Shishir_DungeonRaider_Source_DungeonRaider_DungeonRaiderGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_DungeonRaider_Unreal_Shishir_DungeonRaider_Source_DungeonRaider_DungeonRaiderGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADungeonRaiderGameMode, ADungeonRaiderGameMode::StaticClass, TEXT("ADungeonRaiderGameMode"), &Z_Registration_Info_UClass_ADungeonRaiderGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADungeonRaiderGameMode), 3396162313U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_DungeonRaider_Unreal_Shishir_DungeonRaider_Source_DungeonRaider_DungeonRaiderGameMode_h_2500663334(TEXT("/Script/DungeonRaider"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_DungeonRaider_Unreal_Shishir_DungeonRaider_Source_DungeonRaider_DungeonRaiderGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_DungeonRaider_Unreal_Shishir_DungeonRaider_Source_DungeonRaider_DungeonRaiderGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
