// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Patrones_Bomberman01/Public/BloqueMov.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueMov() {}

// Begin Cross Module References
PATRONES_BOMBERMAN01_API UClass* Z_Construct_UClass_ABloque();
PATRONES_BOMBERMAN01_API UClass* Z_Construct_UClass_ABloqueMov();
PATRONES_BOMBERMAN01_API UClass* Z_Construct_UClass_ABloqueMov_NoRegister();
UPackage* Z_Construct_UPackage__Script_Patrones_Bomberman01();
// End Cross Module References

// Begin Class ABloqueMov
void ABloqueMov::StaticRegisterNativesABloqueMov()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloqueMov);
UClass* Z_Construct_UClass_ABloqueMov_NoRegister()
{
	return ABloqueMov::StaticClass();
}
struct Z_Construct_UClass_ABloqueMov_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BloqueMov.h" },
		{ "ModuleRelativePath", "Public/BloqueMov.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueMov>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABloqueMov_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABloque,
	(UObject* (*)())Z_Construct_UPackage__Script_Patrones_Bomberman01,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueMov_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloqueMov_Statics::ClassParams = {
	&ABloqueMov::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueMov_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloqueMov_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloqueMov()
{
	if (!Z_Registration_Info_UClass_ABloqueMov.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloqueMov.OuterSingleton, Z_Construct_UClass_ABloqueMov_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloqueMov.OuterSingleton;
}
template<> PATRONES_BOMBERMAN01_API UClass* StaticClass<ABloqueMov>()
{
	return ABloqueMov::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueMov);
ABloqueMov::~ABloqueMov() {}
// End Class ABloqueMov

// Begin Registration
struct Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_BloqueMov_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloqueMov, ABloqueMov::StaticClass, TEXT("ABloqueMov"), &Z_Registration_Info_UClass_ABloqueMov, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloqueMov), 4222597064U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_BloqueMov_h_3213250045(TEXT("/Script/Patrones_Bomberman01"),
	Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_BloqueMov_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_BloqueMov_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
