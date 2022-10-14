// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SizeProject/SizeProjectGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSizeProjectGameMode() {}
// Cross Module References
	SIZEPROJECT_API UClass* Z_Construct_UClass_ASizeProjectGameMode_NoRegister();
	SIZEPROJECT_API UClass* Z_Construct_UClass_ASizeProjectGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_SizeProject();
// End Cross Module References
	void ASizeProjectGameMode::StaticRegisterNativesASizeProjectGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASizeProjectGameMode);
	UClass* Z_Construct_UClass_ASizeProjectGameMode_NoRegister()
	{
		return ASizeProjectGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ASizeProjectGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASizeProjectGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SizeProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASizeProjectGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SizeProjectGameMode.h" },
		{ "ModuleRelativePath", "SizeProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASizeProjectGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASizeProjectGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASizeProjectGameMode_Statics::ClassParams = {
		&ASizeProjectGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASizeProjectGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASizeProjectGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASizeProjectGameMode()
	{
		if (!Z_Registration_Info_UClass_ASizeProjectGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASizeProjectGameMode.OuterSingleton, Z_Construct_UClass_ASizeProjectGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASizeProjectGameMode.OuterSingleton;
	}
	template<> SIZEPROJECT_API UClass* StaticClass<ASizeProjectGameMode>()
	{
		return ASizeProjectGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASizeProjectGameMode);
	struct Z_CompiledInDeferFile_FID_SizeProject_Source_SizeProject_SizeProjectGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SizeProject_Source_SizeProject_SizeProjectGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASizeProjectGameMode, ASizeProjectGameMode::StaticClass, TEXT("ASizeProjectGameMode"), &Z_Registration_Info_UClass_ASizeProjectGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASizeProjectGameMode), 3031108540U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SizeProject_Source_SizeProject_SizeProjectGameMode_h_126541780(TEXT("/Script/SizeProject"),
		Z_CompiledInDeferFile_FID_SizeProject_Source_SizeProject_SizeProjectGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SizeProject_Source_SizeProject_SizeProjectGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
