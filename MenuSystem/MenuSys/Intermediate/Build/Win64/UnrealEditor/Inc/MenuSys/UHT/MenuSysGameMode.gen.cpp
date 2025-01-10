// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MenuSys/MenuSysGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMenuSysGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	MENUSYS_API UClass* Z_Construct_UClass_AMenuSysGameMode();
	MENUSYS_API UClass* Z_Construct_UClass_AMenuSysGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MenuSys();
// End Cross Module References
	void AMenuSysGameMode::StaticRegisterNativesAMenuSysGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMenuSysGameMode);
	UClass* Z_Construct_UClass_AMenuSysGameMode_NoRegister()
	{
		return AMenuSysGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMenuSysGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMenuSysGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MenuSys,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMenuSysGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMenuSysGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MenuSysGameMode.h" },
		{ "ModuleRelativePath", "MenuSysGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMenuSysGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMenuSysGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMenuSysGameMode_Statics::ClassParams = {
		&AMenuSysGameMode::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMenuSysGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AMenuSysGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AMenuSysGameMode()
	{
		if (!Z_Registration_Info_UClass_AMenuSysGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMenuSysGameMode.OuterSingleton, Z_Construct_UClass_AMenuSysGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMenuSysGameMode.OuterSingleton;
	}
	template<> MENUSYS_API UClass* StaticClass<AMenuSysGameMode>()
	{
		return AMenuSysGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMenuSysGameMode);
	AMenuSysGameMode::~AMenuSysGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_tgvm1_OneDrive_Documentos_Programming_Unreal_Engine_UE5_Cpp_Multiplayer_Shooter_UE5FPSCpp_MenuSystem_MenuSys_Source_MenuSys_MenuSysGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_tgvm1_OneDrive_Documentos_Programming_Unreal_Engine_UE5_Cpp_Multiplayer_Shooter_UE5FPSCpp_MenuSystem_MenuSys_Source_MenuSys_MenuSysGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMenuSysGameMode, AMenuSysGameMode::StaticClass, TEXT("AMenuSysGameMode"), &Z_Registration_Info_UClass_AMenuSysGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMenuSysGameMode), 874447728U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_tgvm1_OneDrive_Documentos_Programming_Unreal_Engine_UE5_Cpp_Multiplayer_Shooter_UE5FPSCpp_MenuSystem_MenuSys_Source_MenuSys_MenuSysGameMode_h_4284786742(TEXT("/Script/MenuSys"),
		Z_CompiledInDeferFile_FID_Users_tgvm1_OneDrive_Documentos_Programming_Unreal_Engine_UE5_Cpp_Multiplayer_Shooter_UE5FPSCpp_MenuSystem_MenuSys_Source_MenuSys_MenuSysGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_tgvm1_OneDrive_Documentos_Programming_Unreal_Engine_UE5_Cpp_Multiplayer_Shooter_UE5FPSCpp_MenuSystem_MenuSys_Source_MenuSys_MenuSysGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
