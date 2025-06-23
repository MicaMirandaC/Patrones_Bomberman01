// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Patrones_Bomberman01/Public/PastillaBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePastillaBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
PATRONES_BOMBERMAN01_API UClass* Z_Construct_UClass_APastillaBase();
PATRONES_BOMBERMAN01_API UClass* Z_Construct_UClass_APastillaBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_Patrones_Bomberman01();
// End Cross Module References

// Begin Class APastillaBase
void APastillaBase::StaticRegisterNativesAPastillaBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APastillaBase);
UClass* Z_Construct_UClass_APastillaBase_NoRegister()
{
	return APastillaBase::StaticClass();
}
struct Z_Construct_UClass_APastillaBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PastillaBase.h" },
		{ "ModuleRelativePath", "Public/PastillaBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MallaPastilla_MetaData[] = {
		{ "Category", "Componentes" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PastillaBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MallaPastilla;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APastillaBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APastillaBase_Statics::NewProp_MallaPastilla = { "MallaPastilla", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APastillaBase, MallaPastilla), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MallaPastilla_MetaData), NewProp_MallaPastilla_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APastillaBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APastillaBase_Statics::NewProp_MallaPastilla,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APastillaBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APastillaBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Patrones_Bomberman01,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APastillaBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APastillaBase_Statics::ClassParams = {
	&APastillaBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APastillaBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APastillaBase_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APastillaBase_Statics::Class_MetaDataParams), Z_Construct_UClass_APastillaBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APastillaBase()
{
	if (!Z_Registration_Info_UClass_APastillaBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APastillaBase.OuterSingleton, Z_Construct_UClass_APastillaBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APastillaBase.OuterSingleton;
}
template<> PATRONES_BOMBERMAN01_API UClass* StaticClass<APastillaBase>()
{
	return APastillaBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APastillaBase);
APastillaBase::~APastillaBase() {}
// End Class APastillaBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_PastillaBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APastillaBase, APastillaBase::StaticClass, TEXT("APastillaBase"), &Z_Registration_Info_UClass_APastillaBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APastillaBase), 2875224670U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_PastillaBase_h_1962985863(TEXT("/Script/Patrones_Bomberman01"),
	Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_PastillaBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_PastillaBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
