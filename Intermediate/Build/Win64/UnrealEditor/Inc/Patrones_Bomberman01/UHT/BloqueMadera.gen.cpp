// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Patrones_Bomberman01/Public/BloqueMadera.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueMadera() {}

// Begin Cross Module References
PATRONES_BOMBERMAN01_API UClass* Z_Construct_UClass_ABloque();
PATRONES_BOMBERMAN01_API UClass* Z_Construct_UClass_ABloqueMadera();
PATRONES_BOMBERMAN01_API UClass* Z_Construct_UClass_ABloqueMadera_NoRegister();
UPackage* Z_Construct_UPackage__Script_Patrones_Bomberman01();
// End Cross Module References

// Begin Class ABloqueMadera
void ABloqueMadera::StaticRegisterNativesABloqueMadera()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloqueMadera);
UClass* Z_Construct_UClass_ABloqueMadera_NoRegister()
{
	return ABloqueMadera::StaticClass();
}
struct Z_Construct_UClass_ABloqueMadera_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BloqueMadera.h" },
		{ "ModuleRelativePath", "Public/BloqueMadera.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueMadera>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABloqueMadera_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABloque,
	(UObject* (*)())Z_Construct_UPackage__Script_Patrones_Bomberman01,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueMadera_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloqueMadera_Statics::ClassParams = {
	&ABloqueMadera::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueMadera_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloqueMadera_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloqueMadera()
{
	if (!Z_Registration_Info_UClass_ABloqueMadera.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloqueMadera.OuterSingleton, Z_Construct_UClass_ABloqueMadera_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloqueMadera.OuterSingleton;
}
template<> PATRONES_BOMBERMAN01_API UClass* StaticClass<ABloqueMadera>()
{
	return ABloqueMadera::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueMadera);
ABloqueMadera::~ABloqueMadera() {}
// End Class ABloqueMadera

// Begin Registration
struct Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_BloqueMadera_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloqueMadera, ABloqueMadera::StaticClass, TEXT("ABloqueMadera"), &Z_Registration_Info_UClass_ABloqueMadera, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloqueMadera), 1331772215U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_BloqueMadera_h_2419540960(TEXT("/Script/Patrones_Bomberman01"),
	Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_BloqueMadera_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_BloqueMadera_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
