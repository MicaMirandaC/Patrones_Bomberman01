// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Patrones_Bomberman01/Public/EnemigoAereo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigoAereo() {}

// Begin Cross Module References
PATRONES_BOMBERMAN01_API UClass* Z_Construct_UClass_AEnemigo();
PATRONES_BOMBERMAN01_API UClass* Z_Construct_UClass_AEnemigoAereo();
PATRONES_BOMBERMAN01_API UClass* Z_Construct_UClass_AEnemigoAereo_NoRegister();
UPackage* Z_Construct_UPackage__Script_Patrones_Bomberman01();
// End Cross Module References

// Begin Class AEnemigoAereo
void AEnemigoAereo::StaticRegisterNativesAEnemigoAereo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemigoAereo);
UClass* Z_Construct_UClass_AEnemigoAereo_NoRegister()
{
	return AEnemigoAereo::StaticClass();
}
struct Z_Construct_UClass_AEnemigoAereo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "EnemigoAereo.h" },
		{ "ModuleRelativePath", "Public/EnemigoAereo.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoAereo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AEnemigoAereo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AEnemigo,
	(UObject* (*)())Z_Construct_UPackage__Script_Patrones_Bomberman01,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoAereo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoAereo_Statics::ClassParams = {
	&AEnemigoAereo::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoAereo_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemigoAereo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemigoAereo()
{
	if (!Z_Registration_Info_UClass_AEnemigoAereo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemigoAereo.OuterSingleton, Z_Construct_UClass_AEnemigoAereo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemigoAereo.OuterSingleton;
}
template<> PATRONES_BOMBERMAN01_API UClass* StaticClass<AEnemigoAereo>()
{
	return AEnemigoAereo::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigoAereo);
AEnemigoAereo::~AEnemigoAereo() {}
// End Class AEnemigoAereo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_EnemigoAereo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemigoAereo, AEnemigoAereo::StaticClass, TEXT("AEnemigoAereo"), &Z_Registration_Info_UClass_AEnemigoAereo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemigoAereo), 312052302U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_EnemigoAereo_h_2668433298(TEXT("/Script/Patrones_Bomberman01"),
	Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_EnemigoAereo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_EnemigoAereo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
