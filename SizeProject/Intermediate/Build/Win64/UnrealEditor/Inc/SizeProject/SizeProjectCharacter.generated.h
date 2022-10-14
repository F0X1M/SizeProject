// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIZEPROJECT_SizeProjectCharacter_generated_h
#error "SizeProjectCharacter.generated.h already included, missing '#pragma once' in SizeProjectCharacter.h"
#endif
#define SIZEPROJECT_SizeProjectCharacter_generated_h

#define FID_SizeProject_Source_SizeProject_SizeProjectCharacter_h_19_DELEGATE \
static inline void FOnUseItem_DelegateWrapper(const FMulticastScriptDelegate& OnUseItem) \
{ \
	OnUseItem.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_SizeProject_Source_SizeProject_SizeProjectCharacter_h_24_SPARSE_DATA
#define FID_SizeProject_Source_SizeProject_SizeProjectCharacter_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnAction);


#define FID_SizeProject_Source_SizeProject_SizeProjectCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnAction);


#define FID_SizeProject_Source_SizeProject_SizeProjectCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASizeProjectCharacter(); \
	friend struct Z_Construct_UClass_ASizeProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(ASizeProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SizeProject"), NO_API) \
	DECLARE_SERIALIZER(ASizeProjectCharacter)


#define FID_SizeProject_Source_SizeProject_SizeProjectCharacter_h_24_INCLASS \
private: \
	static void StaticRegisterNativesASizeProjectCharacter(); \
	friend struct Z_Construct_UClass_ASizeProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(ASizeProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SizeProject"), NO_API) \
	DECLARE_SERIALIZER(ASizeProjectCharacter)


#define FID_SizeProject_Source_SizeProject_SizeProjectCharacter_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASizeProjectCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASizeProjectCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASizeProjectCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASizeProjectCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASizeProjectCharacter(ASizeProjectCharacter&&); \
	NO_API ASizeProjectCharacter(const ASizeProjectCharacter&); \
public:


#define FID_SizeProject_Source_SizeProject_SizeProjectCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASizeProjectCharacter(ASizeProjectCharacter&&); \
	NO_API ASizeProjectCharacter(const ASizeProjectCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASizeProjectCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASizeProjectCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASizeProjectCharacter)


#define FID_SizeProject_Source_SizeProject_SizeProjectCharacter_h_21_PROLOG
#define FID_SizeProject_Source_SizeProject_SizeProjectCharacter_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SizeProject_Source_SizeProject_SizeProjectCharacter_h_24_SPARSE_DATA \
	FID_SizeProject_Source_SizeProject_SizeProjectCharacter_h_24_RPC_WRAPPERS \
	FID_SizeProject_Source_SizeProject_SizeProjectCharacter_h_24_INCLASS \
	FID_SizeProject_Source_SizeProject_SizeProjectCharacter_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SizeProject_Source_SizeProject_SizeProjectCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SizeProject_Source_SizeProject_SizeProjectCharacter_h_24_SPARSE_DATA \
	FID_SizeProject_Source_SizeProject_SizeProjectCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SizeProject_Source_SizeProject_SizeProjectCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_SizeProject_Source_SizeProject_SizeProjectCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIZEPROJECT_API UClass* StaticClass<class ASizeProjectCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SizeProject_Source_SizeProject_SizeProjectCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
