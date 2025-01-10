// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMenuSys_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MenuSys;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MenuSys()
	{
		if (!Z_Registration_Info_UPackage__Script_MenuSys.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MenuSys",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x81097239,
				0x7DCC4499,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MenuSys.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MenuSys.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MenuSys(Z_Construct_UPackage__Script_MenuSys, TEXT("/Script/MenuSys"), Z_Registration_Info_UPackage__Script_MenuSys, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x81097239, 0x7DCC4499));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
