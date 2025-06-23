// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Patrones_Bomberman01/Public/PastillaVidas.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePastillaVidas() {}

// Begin Cross Module References
PATRONES_BOMBERMAN01_API UClass* Z_Construct_UClass_APastillaBase();
PATRONES_BOMBERMAN01_API UClass* Z_Construct_UClass_APastillaVidas();
PATRONES_BOMBERMAN01_API UClass* Z_Construct_UClass_APastillaVidas_NoRegister();
UPackage* Z_Construct_UPackage__Script_Patrones_Bomberman01();
// End Cross Module References

// Begin Class APastillaVidas
void APastillaVidas::StaticRegisterNativesAPastillaVidas()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APastillaVidas);
UClass* Z_Construct_UClass_APastillaVidas_NoRegister()
{
	return APastillaVidas::StaticClass();
}
struct Z_Construct_UClass_APastillaVidas_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "PastillaVidas.h" },
		{ "ModuleRelativePath", "Public/PastillaVidas.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APastillaVidas>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APastillaVidas_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APastillaBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Patrones_Bomberman01,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APastillaVidas_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APastillaVidas_Statics::ClassParams = {
	&APastillaVidas::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APastillaVidas_Statics::Class_MetaDataParams), Z_Construct_UClass_APastillaVidas_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APastillaVidas()
{
	if (!Z_Registration_Info_UClass_APastillaVidas.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APastillaVidas.OuterSingleton, Z_Construct_UClass_APastillaVidas_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APastillaVidas.OuterSingleton;
}
template<> PATRONES_BOMBERMAN01_API UClass* StaticClass<APastillaVidas>()
{
	return APastillaVidas::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APastillaVidas);
APastillaVidas::~APastillaVidas() {}
// End Class APastillaVidas

// Begin Registration
struct Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_PastillaVidas_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APastillaVidas, APastillaVidas::StaticClass, TEXT("APastillaVidas"), &Z_Registration_Info_UClass_APastillaVidas, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APastillaVidas), 3523493944U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_PastillaVidas_h_3251670570(TEXT("/Script/Patrones_Bomberman01"),
	Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_PastillaVidas_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_PastillaVidas_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
