// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Patrones_Bomberman01/Public/EnemigoTerrestre2.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigoTerrestre2() {}

// Begin Cross Module References
PATRONES_BOMBERMAN01_API UClass* Z_Construct_UClass_AEnemigo();
PATRONES_BOMBERMAN01_API UClass* Z_Construct_UClass_AEnemigoTerrestre2();
PATRONES_BOMBERMAN01_API UClass* Z_Construct_UClass_AEnemigoTerrestre2_NoRegister();
UPackage* Z_Construct_UPackage__Script_Patrones_Bomberman01();
// End Cross Module References

// Begin Class AEnemigoTerrestre2
void AEnemigoTerrestre2::StaticRegisterNativesAEnemigoTerrestre2()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemigoTerrestre2);
UClass* Z_Construct_UClass_AEnemigoTerrestre2_NoRegister()
{
	return AEnemigoTerrestre2::StaticClass();
}
struct Z_Construct_UClass_AEnemigoTerrestre2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "EnemigoTerrestre2.h" },
		{ "ModuleRelativePath", "Public/EnemigoTerrestre2.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoTerrestre2>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AEnemigoTerrestre2_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AEnemigo,
	(UObject* (*)())Z_Construct_UPackage__Script_Patrones_Bomberman01,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoTerrestre2_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoTerrestre2_Statics::ClassParams = {
	&AEnemigoTerrestre2::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoTerrestre2_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemigoTerrestre2_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemigoTerrestre2()
{
	if (!Z_Registration_Info_UClass_AEnemigoTerrestre2.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemigoTerrestre2.OuterSingleton, Z_Construct_UClass_AEnemigoTerrestre2_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemigoTerrestre2.OuterSingleton;
}
template<> PATRONES_BOMBERMAN01_API UClass* StaticClass<AEnemigoTerrestre2>()
{
	return AEnemigoTerrestre2::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigoTerrestre2);
AEnemigoTerrestre2::~AEnemigoTerrestre2() {}
// End Class AEnemigoTerrestre2

// Begin Registration
struct Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_EnemigoTerrestre2_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemigoTerrestre2, AEnemigoTerrestre2::StaticClass, TEXT("AEnemigoTerrestre2"), &Z_Registration_Info_UClass_AEnemigoTerrestre2, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemigoTerrestre2), 1717094153U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_EnemigoTerrestre2_h_1836772136(TEXT("/Script/Patrones_Bomberman01"),
	Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_EnemigoTerrestre2_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_EnemigoTerrestre2_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
