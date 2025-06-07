// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Patrones_Bomberman01/Public/EnemigoFacade.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigoFacade() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
PATRONES_BOMBERMAN01_API UClass* Z_Construct_UClass_AEnemigoFacade();
PATRONES_BOMBERMAN01_API UClass* Z_Construct_UClass_AEnemigoFacade_NoRegister();
UPackage* Z_Construct_UPackage__Script_Patrones_Bomberman01();
// End Cross Module References

// Begin Class AEnemigoFacade
void AEnemigoFacade::StaticRegisterNativesAEnemigoFacade()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemigoFacade);
UClass* Z_Construct_UClass_AEnemigoFacade_NoRegister()
{
	return AEnemigoFacade::StaticClass();
}
struct Z_Construct_UClass_AEnemigoFacade_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EnemigoFacade.h" },
		{ "ModuleRelativePath", "Public/EnemigoFacade.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoFacade>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AEnemigoFacade_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Patrones_Bomberman01,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoFacade_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoFacade_Statics::ClassParams = {
	&AEnemigoFacade::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoFacade_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemigoFacade_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemigoFacade()
{
	if (!Z_Registration_Info_UClass_AEnemigoFacade.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemigoFacade.OuterSingleton, Z_Construct_UClass_AEnemigoFacade_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemigoFacade.OuterSingleton;
}
template<> PATRONES_BOMBERMAN01_API UClass* StaticClass<AEnemigoFacade>()
{
	return AEnemigoFacade::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigoFacade);
AEnemigoFacade::~AEnemigoFacade() {}
// End Class AEnemigoFacade

// Begin Registration
struct Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_EnemigoFacade_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemigoFacade, AEnemigoFacade::StaticClass, TEXT("AEnemigoFacade"), &Z_Registration_Info_UClass_AEnemigoFacade, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemigoFacade), 278075170U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_EnemigoFacade_h_1906353600(TEXT("/Script/Patrones_Bomberman01"),
	Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_EnemigoFacade_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_EnemigoFacade_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
