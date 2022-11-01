// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SizeProject/SpawnBox.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawnBox() {}
// Cross Module References
	SIZEPROJECT_API UClass* Z_Construct_UClass_ASpawnBox_NoRegister();
	SIZEPROJECT_API UClass* Z_Construct_UClass_ASpawnBox();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SizeProject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASpawnBox::execSpawnActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnActor();
		P_NATIVE_END;
	}
	void ASpawnBox::StaticRegisterNativesASpawnBox()
	{
		UClass* Class = ASpawnBox::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnActor", &ASpawnBox::execSpawnActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASpawnBox_SpawnActor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpawnBox_SpawnActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SpawnBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpawnBox_SpawnActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpawnBox, nullptr, "SpawnActor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpawnBox_SpawnActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnBox_SpawnActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpawnBox_SpawnActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpawnBox_SpawnActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpawnBox);
	UClass* Z_Construct_UClass_ASpawnBox_NoRegister()
	{
		return ASpawnBox::StaticClass();
	}
	struct Z_Construct_UClass_ASpawnBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ObjectsToSpawn_ValueProp;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ObjectsToSpawn_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectsToSpawn_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ObjectsToSpawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnBox;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpawnBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SizeProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASpawnBox_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASpawnBox_SpawnActor, "SpawnActor" }, // 2859789888
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnBox_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SpawnBox.h" },
		{ "ModuleRelativePath", "SpawnBox.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASpawnBox_Statics::NewProp_ObjectsToSpawn_ValueProp = { "ObjectsToSpawn", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpawnBox_Statics::NewProp_ObjectsToSpawn_Key_KeyProp = { "ObjectsToSpawn_Key", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnBox_Statics::NewProp_ObjectsToSpawn_MetaData[] = {
		{ "Category", "SpawnBox" },
		{ "ModuleRelativePath", "SpawnBox.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ASpawnBox_Statics::NewProp_ObjectsToSpawn = { "ObjectsToSpawn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpawnBox, ObjectsToSpawn), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASpawnBox_Statics::NewProp_ObjectsToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnBox_Statics::NewProp_ObjectsToSpawn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnBox_Statics::NewProp_SpawnBox_MetaData[] = {
		{ "Category", "SpawnBox" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpawnBox.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpawnBox_Statics::NewProp_SpawnBox = { "SpawnBox", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpawnBox, SpawnBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpawnBox_Statics::NewProp_SpawnBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnBox_Statics::NewProp_SpawnBox_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpawnBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnBox_Statics::NewProp_ObjectsToSpawn_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnBox_Statics::NewProp_ObjectsToSpawn_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnBox_Statics::NewProp_ObjectsToSpawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnBox_Statics::NewProp_SpawnBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpawnBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpawnBox>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpawnBox_Statics::ClassParams = {
		&ASpawnBox::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASpawnBox_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnBox_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASpawnBox_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpawnBox()
	{
		if (!Z_Registration_Info_UClass_ASpawnBox.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpawnBox.OuterSingleton, Z_Construct_UClass_ASpawnBox_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASpawnBox.OuterSingleton;
	}
	template<> SIZEPROJECT_API UClass* StaticClass<ASpawnBox>()
	{
		return ASpawnBox::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpawnBox);
	struct Z_CompiledInDeferFile_FID_SizeProject_Source_SizeProject_SpawnBox_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SizeProject_Source_SizeProject_SpawnBox_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASpawnBox, ASpawnBox::StaticClass, TEXT("ASpawnBox"), &Z_Registration_Info_UClass_ASpawnBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpawnBox), 1951881428U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SizeProject_Source_SizeProject_SpawnBox_h_498685607(TEXT("/Script/SizeProject"),
		Z_CompiledInDeferFile_FID_SizeProject_Source_SizeProject_SpawnBox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SizeProject_Source_SizeProject_SpawnBox_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
