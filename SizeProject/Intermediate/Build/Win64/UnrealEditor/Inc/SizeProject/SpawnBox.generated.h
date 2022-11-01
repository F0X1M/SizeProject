// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIZEPROJECT_SpawnBox_generated_h
#error "SpawnBox.generated.h already included, missing '#pragma once' in SpawnBox.h"
#endif
#define SIZEPROJECT_SpawnBox_generated_h

#define FID_SizeProject_Source_SizeProject_SpawnBox_h_13_SPARSE_DATA
#define FID_SizeProject_Source_SizeProject_SpawnBox_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSpawnActor);


#define FID_SizeProject_Source_SizeProject_SpawnBox_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSpawnActor);


#define FID_SizeProject_Source_SizeProject_SpawnBox_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpawnBox(); \
	friend struct Z_Construct_UClass_ASpawnBox_Statics; \
public: \
	DECLARE_CLASS(ASpawnBox, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SizeProject"), NO_API) \
	DECLARE_SERIALIZER(ASpawnBox)


#define FID_SizeProject_Source_SizeProject_SpawnBox_h_13_INCLASS \
private: \
	static void StaticRegisterNativesASpawnBox(); \
	friend struct Z_Construct_UClass_ASpawnBox_Statics; \
public: \
	DECLARE_CLASS(ASpawnBox, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SizeProject"), NO_API) \
	DECLARE_SERIALIZER(ASpawnBox)


#define FID_SizeProject_Source_SizeProject_SpawnBox_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpawnBox(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpawnBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpawnBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpawnBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpawnBox(ASpawnBox&&); \
	NO_API ASpawnBox(const ASpawnBox&); \
public:


#define FID_SizeProject_Source_SizeProject_SpawnBox_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpawnBox(ASpawnBox&&); \
	NO_API ASpawnBox(const ASpawnBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpawnBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpawnBox); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpawnBox)


#define FID_SizeProject_Source_SizeProject_SpawnBox_h_10_PROLOG
#define FID_SizeProject_Source_SizeProject_SpawnBox_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SizeProject_Source_SizeProject_SpawnBox_h_13_SPARSE_DATA \
	FID_SizeProject_Source_SizeProject_SpawnBox_h_13_RPC_WRAPPERS \
	FID_SizeProject_Source_SizeProject_SpawnBox_h_13_INCLASS \
	FID_SizeProject_Source_SizeProject_SpawnBox_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SizeProject_Source_SizeProject_SpawnBox_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SizeProject_Source_SizeProject_SpawnBox_h_13_SPARSE_DATA \
	FID_SizeProject_Source_SizeProject_SpawnBox_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SizeProject_Source_SizeProject_SpawnBox_h_13_INCLASS_NO_PURE_DECLS \
	FID_SizeProject_Source_SizeProject_SpawnBox_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIZEPROJECT_API UClass* StaticClass<class ASpawnBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SizeProject_Source_SizeProject_SpawnBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
