// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DungeonRaiderProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef DUNGEONRAIDER_DungeonRaiderProjectile_generated_h
#error "DungeonRaiderProjectile.generated.h already included, missing '#pragma once' in DungeonRaiderProjectile.h"
#endif
#define DUNGEONRAIDER_DungeonRaiderProjectile_generated_h

#define FID_Unreal_Projects_DungeonRaider_Unreal_Shishir_DungeonRaider_Source_DungeonRaider_DungeonRaiderProjectile_h_15_SPARSE_DATA
#define FID_Unreal_Projects_DungeonRaider_Unreal_Shishir_DungeonRaider_Source_DungeonRaider_DungeonRaiderProjectile_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_Projects_DungeonRaider_Unreal_Shishir_DungeonRaider_Source_DungeonRaider_DungeonRaiderProjectile_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_Projects_DungeonRaider_Unreal_Shishir_DungeonRaider_Source_DungeonRaider_DungeonRaiderProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_Unreal_Projects_DungeonRaider_Unreal_Shishir_DungeonRaider_Source_DungeonRaider_DungeonRaiderProjectile_h_15_ACCESSORS
#define FID_Unreal_Projects_DungeonRaider_Unreal_Shishir_DungeonRaider_Source_DungeonRaider_DungeonRaiderProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADungeonRaiderProjectile(); \
	friend struct Z_Construct_UClass_ADungeonRaiderProjectile_Statics; \
public: \
	DECLARE_CLASS(ADungeonRaiderProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DungeonRaider"), NO_API) \
	DECLARE_SERIALIZER(ADungeonRaiderProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Unreal_Projects_DungeonRaider_Unreal_Shishir_DungeonRaider_Source_DungeonRaider_DungeonRaiderProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADungeonRaiderProjectile(ADungeonRaiderProjectile&&); \
	NO_API ADungeonRaiderProjectile(const ADungeonRaiderProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADungeonRaiderProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADungeonRaiderProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADungeonRaiderProjectile) \
	NO_API virtual ~ADungeonRaiderProjectile();


#define FID_Unreal_Projects_DungeonRaider_Unreal_Shishir_DungeonRaider_Source_DungeonRaider_DungeonRaiderProjectile_h_12_PROLOG
#define FID_Unreal_Projects_DungeonRaider_Unreal_Shishir_DungeonRaider_Source_DungeonRaider_DungeonRaiderProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_DungeonRaider_Unreal_Shishir_DungeonRaider_Source_DungeonRaider_DungeonRaiderProjectile_h_15_SPARSE_DATA \
	FID_Unreal_Projects_DungeonRaider_Unreal_Shishir_DungeonRaider_Source_DungeonRaider_DungeonRaiderProjectile_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_Projects_DungeonRaider_Unreal_Shishir_DungeonRaider_Source_DungeonRaider_DungeonRaiderProjectile_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_Projects_DungeonRaider_Unreal_Shishir_DungeonRaider_Source_DungeonRaider_DungeonRaiderProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_DungeonRaider_Unreal_Shishir_DungeonRaider_Source_DungeonRaider_DungeonRaiderProjectile_h_15_ACCESSORS \
	FID_Unreal_Projects_DungeonRaider_Unreal_Shishir_DungeonRaider_Source_DungeonRaider_DungeonRaiderProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_DungeonRaider_Unreal_Shishir_DungeonRaider_Source_DungeonRaider_DungeonRaiderProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONRAIDER_API UClass* StaticClass<class ADungeonRaiderProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_DungeonRaider_Unreal_Shishir_DungeonRaider_Source_DungeonRaider_DungeonRaiderProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
