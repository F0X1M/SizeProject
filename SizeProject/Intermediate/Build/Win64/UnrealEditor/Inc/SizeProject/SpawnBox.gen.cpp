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
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASpawnBox::execSpawnActorScheduled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnActorScheduled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpawnBox::execEnableActorSpawning)
	{
		P_GET_UBOOL(Z_Param_Enable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableActorSpawning(Z_Param_Enable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpawnBox::execSpawnActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SpawnActor();
		P_NATIVE_END;
	}
	void ASpawnBox::StaticRegisterNativesASpawnBox()
	{
		UClass* Class = ASpawnBox::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnableActorSpawning", &ASpawnBox::execEnableActorSpawning },
			{ "SpawnActor", &ASpawnBox::execSpawnActor },
			{ "SpawnActorScheduled", &ASpawnBox::execSpawnActorScheduled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASpawnBox_EnableActorSpawning_Statics
	{
		struct SpawnBox_eventEnableActorSpawning_Parms
		{
			bool Enable;
		};
		static void NewProp_Enable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Enable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASpawnBox_EnableActorSpawning_Statics::NewProp_Enable_SetBit(void* Obj)
	{
		((SpawnBox_eventEnableActorSpawning_Parms*)Obj)->Enable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASpawnBox_EnableActorSpawning_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SpawnBox_eventEnableActorSpawning_Parms), &Z_Construct_UFunction_ASpawnBox_EnableActorSpawning_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpawnBox_EnableActorSpawning_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawnBox_EnableActorSpawning_Statics::NewProp_Enable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpawnBox_EnableActorSpawning_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SpawnBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpawnBox_EnableActorSpawning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpawnBox, nullptr, "EnableActorSpawning", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASpawnBox_EnableActorSpawning_Statics::SpawnBox_eventEnableActorSpawning_Parms), Z_Construct_UFunction_ASpawnBox_EnableActorSpawning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnBox_EnableActorSpawning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpawnBox_EnableActorSpawning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnBox_EnableActorSpawning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpawnBox_EnableActorSpawning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpawnBox_EnableActorSpawning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpawnBox_SpawnActor_Statics
	{
		struct SpawnBox_eventSpawnActor_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASpawnBox_SpawnActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SpawnBox_eventSpawnActor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASpawnBox_SpawnActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SpawnBox_eventSpawnActor_Parms), &Z_Construct_UFunction_ASpawnBox_SpawnActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpawnBox_SpawnActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawnBox_SpawnActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpawnBox_SpawnActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SpawnBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpawnBox_SpawnActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpawnBox, nullptr, "SpawnActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASpawnBox_SpawnActor_Statics::SpawnBox_eventSpawnActor_Parms), Z_Construct_UFunction_ASpawnBox_SpawnActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnBox_SpawnActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpawnBox_SpawnActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnBox_SpawnActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpawnBox_SpawnActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpawnBox_SpawnActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpawnBox_SpawnActorScheduled_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpawnBox_SpawnActorScheduled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SpawnBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpawnBox_SpawnActorScheduled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpawnBox, nullptr, "SpawnActorScheduled", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpawnBox_SpawnActorScheduled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnBox_SpawnActorScheduled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpawnBox_SpawnActorScheduled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpawnBox_SpawnActorScheduled_Statics::FuncParams);
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvgSpawnTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AvgSpawnTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomSpawnTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RandomSpawnTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorClassToSpawn_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClassToSpawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShouldSpawn_MetaData[];
#endif
		static void NewProp_ShouldSpawn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ShouldSpawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpawnBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SizeProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASpawnBox_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASpawnBox_EnableActorSpawning, "EnableActorSpawning" }, // 2099609946
		{ &Z_Construct_UFunction_ASpawnBox_SpawnActor, "SpawnActor" }, // 3237117081
		{ &Z_Construct_UFunction_ASpawnBox_SpawnActorScheduled, "SpawnActorScheduled" }, // 1012874172
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnBox_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SpawnBox.h" },
		{ "ModuleRelativePath", "SpawnBox.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnBox_Statics::NewProp_AvgSpawnTime_MetaData[] = {
		{ "Category", "SpawnBox" },
		{ "ModuleRelativePath", "SpawnBox.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpawnBox_Statics::NewProp_AvgSpawnTime = { "AvgSpawnTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpawnBox, AvgSpawnTime), METADATA_PARAMS(Z_Construct_UClass_ASpawnBox_Statics::NewProp_AvgSpawnTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnBox_Statics::NewProp_AvgSpawnTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnBox_Statics::NewProp_RandomSpawnTime_MetaData[] = {
		{ "Category", "SpawnBox" },
		{ "ModuleRelativePath", "SpawnBox.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpawnBox_Statics::NewProp_RandomSpawnTime = { "RandomSpawnTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpawnBox, RandomSpawnTime), METADATA_PARAMS(Z_Construct_UClass_ASpawnBox_Statics::NewProp_RandomSpawnTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnBox_Statics::NewProp_RandomSpawnTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnBox_Statics::NewProp_SpawnBox_MetaData[] = {
		{ "Category", "SpawnBox" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpawnBox.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpawnBox_Statics::NewProp_SpawnBox = { "SpawnBox", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpawnBox, SpawnBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpawnBox_Statics::NewProp_SpawnBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnBox_Statics::NewProp_SpawnBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnBox_Statics::NewProp_ActorClassToSpawn_MetaData[] = {
		{ "Category", "SpawnBox" },
		{ "ModuleRelativePath", "SpawnBox.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpawnBox_Statics::NewProp_ActorClassToSpawn = { "ActorClassToSpawn", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpawnBox, ActorClassToSpawn), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASpawnBox_Statics::NewProp_ActorClassToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnBox_Statics::NewProp_ActorClassToSpawn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnBox_Statics::NewProp_ShouldSpawn_MetaData[] = {
		{ "Category", "SpawnBox" },
		{ "Comment", "//Zmieni? na Tablic? obiekt?w do spawnowania.\n" },
		{ "ModuleRelativePath", "SpawnBox.h" },
		{ "ToolTip", "Zmieni? na Tablic? obiekt?w do spawnowania." },
	};
#endif
	void Z_Construct_UClass_ASpawnBox_Statics::NewProp_ShouldSpawn_SetBit(void* Obj)
	{
		((ASpawnBox*)Obj)->ShouldSpawn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASpawnBox_Statics::NewProp_ShouldSpawn = { "ShouldSpawn", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASpawnBox), &Z_Construct_UClass_ASpawnBox_Statics::NewProp_ShouldSpawn_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASpawnBox_Statics::NewProp_ShouldSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnBox_Statics::NewProp_ShouldSpawn_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpawnBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnBox_Statics::NewProp_AvgSpawnTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnBox_Statics::NewProp_RandomSpawnTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnBox_Statics::NewProp_SpawnBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnBox_Statics::NewProp_ActorClassToSpawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnBox_Statics::NewProp_ShouldSpawn,
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
		{ Z_Construct_UClass_ASpawnBox, ASpawnBox::StaticClass, TEXT("ASpawnBox"), &Z_Registration_Info_UClass_ASpawnBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpawnBox), 4156319523U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SizeProject_Source_SizeProject_SpawnBox_h_3049102475(TEXT("/Script/SizeProject"),
		Z_CompiledInDeferFile_FID_SizeProject_Source_SizeProject_SpawnBox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SizeProject_Source_SizeProject_SpawnBox_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
