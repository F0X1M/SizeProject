// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSizeProject_init() {}
	SIZEPROJECT_API UFunction* Z_Construct_UDelegateFunction_SizeProject_OnPickUp__DelegateSignature();
	SIZEPROJECT_API UFunction* Z_Construct_UDelegateFunction_SizeProject_OnUseItem__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SizeProject;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SizeProject()
	{
		if (!Z_Registration_Info_UPackage__Script_SizeProject.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_SizeProject_OnPickUp__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SizeProject_OnUseItem__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SizeProject",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x336D2E1B,
				0x88DAF57B,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SizeProject.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SizeProject.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SizeProject(Z_Construct_UPackage__Script_SizeProject, TEXT("/Script/SizeProject"), Z_Registration_Info_UPackage__Script_SizeProject, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x336D2E1B, 0x88DAF57B));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
