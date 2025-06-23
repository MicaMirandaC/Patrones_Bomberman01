// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Patrones_Bomberman01/Public/GrupoPastillas_Composide.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrupoPastillas_Composide() {}

// Begin Cross Module References
PATRONES_BOMBERMAN01_API UClass* Z_Construct_UClass_AGrupoPastillas_Composide();
PATRONES_BOMBERMAN01_API UClass* Z_Construct_UClass_AGrupoPastillas_Composide_NoRegister();
PATRONES_BOMBERMAN01_API UClass* Z_Construct_UClass_APastillaBase();
PATRONES_BOMBERMAN01_API UClass* Z_Construct_UClass_APastillaBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_Patrones_Bomberman01();
// End Cross Module References

// Begin Class AGrupoPastillas_Composide
void AGrupoPastillas_Composide::StaticRegisterNativesAGrupoPastillas_Composide()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGrupoPastillas_Composide);
UClass* Z_Construct_UClass_AGrupoPastillas_Composide_NoRegister()
{
	return AGrupoPastillas_Composide::StaticClass();
}
struct Z_Construct_UClass_AGrupoPastillas_Composide_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GrupoPastillas_Composide.h" },
		{ "ModuleRelativePath", "Public/GrupoPastillas_Composide.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pastillas_MetaData[] = {
		{ "ModuleRelativePath", "Public/GrupoPastillas_Composide.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Pastillas_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Pastillas;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGrupoPastillas_Composide>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGrupoPastillas_Composide_Statics::NewProp_Pastillas_Inner = { "Pastillas", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APastillaBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGrupoPastillas_Composide_Statics::NewProp_Pastillas = { "Pastillas", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGrupoPastillas_Composide, Pastillas), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pastillas_MetaData), NewProp_Pastillas_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGrupoPastillas_Composide_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrupoPastillas_Composide_Statics::NewProp_Pastillas_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrupoPastillas_Composide_Statics::NewProp_Pastillas,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGrupoPastillas_Composide_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGrupoPastillas_Composide_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APastillaBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Patrones_Bomberman01,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGrupoPastillas_Composide_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGrupoPastillas_Composide_Statics::ClassParams = {
	&AGrupoPastillas_Composide::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGrupoPastillas_Composide_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGrupoPastillas_Composide_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGrupoPastillas_Composide_Statics::Class_MetaDataParams), Z_Construct_UClass_AGrupoPastillas_Composide_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGrupoPastillas_Composide()
{
	if (!Z_Registration_Info_UClass_AGrupoPastillas_Composide.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGrupoPastillas_Composide.OuterSingleton, Z_Construct_UClass_AGrupoPastillas_Composide_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGrupoPastillas_Composide.OuterSingleton;
}
template<> PATRONES_BOMBERMAN01_API UClass* StaticClass<AGrupoPastillas_Composide>()
{
	return AGrupoPastillas_Composide::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGrupoPastillas_Composide);
AGrupoPastillas_Composide::~AGrupoPastillas_Composide() {}
// End Class AGrupoPastillas_Composide

// Begin Registration
struct Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_GrupoPastillas_Composide_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGrupoPastillas_Composide, AGrupoPastillas_Composide::StaticClass, TEXT("AGrupoPastillas_Composide"), &Z_Registration_Info_UClass_AGrupoPastillas_Composide, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGrupoPastillas_Composide), 482984372U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_GrupoPastillas_Composide_h_3527522308(TEXT("/Script/Patrones_Bomberman01"),
	Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_GrupoPastillas_Composide_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_GrupoPastillas_Composide_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
