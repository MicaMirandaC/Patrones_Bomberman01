// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Patrones_Bomberman01/Public/PastillaPuntaje.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePastillaPuntaje() {}

// Begin Cross Module References
PATRONES_BOMBERMAN01_API UClass* Z_Construct_UClass_APastillaBase();
PATRONES_BOMBERMAN01_API UClass* Z_Construct_UClass_APastillaPuntaje();
PATRONES_BOMBERMAN01_API UClass* Z_Construct_UClass_APastillaPuntaje_NoRegister();
UPackage* Z_Construct_UPackage__Script_Patrones_Bomberman01();
// End Cross Module References

// Begin Class APastillaPuntaje
void APastillaPuntaje::StaticRegisterNativesAPastillaPuntaje()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APastillaPuntaje);
UClass* Z_Construct_UClass_APastillaPuntaje_NoRegister()
{
	return APastillaPuntaje::StaticClass();
}
struct Z_Construct_UClass_APastillaPuntaje_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "PastillaPuntaje.h" },
		{ "ModuleRelativePath", "Public/PastillaPuntaje.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APastillaPuntaje>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APastillaPuntaje_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APastillaBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Patrones_Bomberman01,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APastillaPuntaje_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APastillaPuntaje_Statics::ClassParams = {
	&APastillaPuntaje::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APastillaPuntaje_Statics::Class_MetaDataParams), Z_Construct_UClass_APastillaPuntaje_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APastillaPuntaje()
{
	if (!Z_Registration_Info_UClass_APastillaPuntaje.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APastillaPuntaje.OuterSingleton, Z_Construct_UClass_APastillaPuntaje_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APastillaPuntaje.OuterSingleton;
}
template<> PATRONES_BOMBERMAN01_API UClass* StaticClass<APastillaPuntaje>()
{
	return APastillaPuntaje::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APastillaPuntaje);
APastillaPuntaje::~APastillaPuntaje() {}
// End Class APastillaPuntaje

// Begin Registration
struct Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_PastillaPuntaje_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APastillaPuntaje, APastillaPuntaje::StaticClass, TEXT("APastillaPuntaje"), &Z_Registration_Info_UClass_APastillaPuntaje, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APastillaPuntaje), 1676199009U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_PastillaPuntaje_h_3973960287(TEXT("/Script/Patrones_Bomberman01"),
	Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_PastillaPuntaje_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_PastillaPuntaje_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
