// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef SIZEPROJECT_SizeProjectProjectile_generated_h
#error "SizeProjectProjectile.generated.h already included, missing '#pragma once' in SizeProjectProjectile.h"
#endif
#define SIZEPROJECT_SizeProjectProjectile_generated_h

#define FID_SizeProject_Source_SizeProject_SizeProjectProjectile_h_15_SPARSE_DATA
#define FID_SizeProject_Source_SizeProject_SizeProjectProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_SizeProject_Source_SizeProject_SizeProjectProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_SizeProject_Source_SizeProject_SizeProjectProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASizeProjectProjectile(); \
	friend struct Z_Construct_UClass_ASizeProjectProjectile_Statics; \
public: \
	DECLARE_CLASS(ASizeProjectProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SizeProject"), NO_API) \
	DECLARE_SERIALIZER(ASizeProjectProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_SizeProject_Source_SizeProject_SizeProjectProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASizeProjectProjectile(); \
	friend struct Z_Construct_UClass_ASizeProjectProjectile_Statics; \
public: \
	DECLARE_CLASS(ASizeProjectProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SizeProject"), NO_API) \
	DECLARE_SERIALIZER(ASizeProjectProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_SizeProject_Source_SizeProject_SizeProjectProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASizeProjectProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASizeProjectProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASizeProjectProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASizeProjectProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASizeProjectProjectile(ASizeProjectProjectile&&); \
	NO_API ASizeProjectProjectile(const ASizeProjectProjectile&); \
public:


#define FID_SizeProject_Source_SizeProject_SizeProjectProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASizeProjectProjectile(ASizeProjectProjectile&&); \
	NO_API ASizeProjectProjectile(const ASizeProjectProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASizeProjectProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASizeProjectProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASizeProjectProjectile)


#define FID_SizeProject_Source_SizeProject_SizeProjectProjectile_h_12_PROLOG
#define FID_SizeProject_Source_SizeProject_SizeProjectProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SizeProject_Source_SizeProject_SizeProjectProjectile_h_15_SPARSE_DATA \
	FID_SizeProject_Source_SizeProject_SizeProjectProjectile_h_15_RPC_WRAPPERS \
	FID_SizeProject_Source_SizeProject_SizeProjectProjectile_h_15_INCLASS \
	FID_SizeProject_Source_SizeProject_SizeProjectProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SizeProject_Source_SizeProject_SizeProjectProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SizeProject_Source_SizeProject_SizeProjectProjectile_h_15_SPARSE_DATA \
	FID_SizeProject_Source_SizeProject_SizeProjectProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SizeProject_Source_SizeProject_SizeProjectProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_SizeProject_Source_SizeProject_SizeProjectProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIZEPROJECT_API UClass* StaticClass<class ASizeProjectProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SizeProject_Source_SizeProject_SizeProjectProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
