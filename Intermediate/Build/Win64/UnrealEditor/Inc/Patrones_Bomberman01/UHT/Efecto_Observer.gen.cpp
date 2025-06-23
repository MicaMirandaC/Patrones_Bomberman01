// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Patrones_Bomberman01/Public/Efecto_Observer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEfecto_Observer() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
PATRONES_BOMBERMAN01_API UClass* Z_Construct_UClass_AEfecto_Observer();
PATRONES_BOMBERMAN01_API UClass* Z_Construct_UClass_AEfecto_Observer_NoRegister();
PATRONES_BOMBERMAN01_API UClass* Z_Construct_UClass_UISuscriptor_NoRegister();
UPackage* Z_Construct_UPackage__Script_Patrones_Bomberman01();
// End Cross Module References

// Begin Class AEfecto_Observer
void AEfecto_Observer::StaticRegisterNativesAEfecto_Observer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEfecto_Observer);
UClass* Z_Construct_UClass_AEfecto_Observer_NoRegister()
{
	return AEfecto_Observer::StaticClass();
}
struct Z_Construct_UClass_AEfecto_Observer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Efecto_Observer.h" },
		{ "ModuleRelativePath", "Public/Efecto_Observer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Particulas_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Efecto\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Efecto_Observer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Efecto" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Particulas;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEfecto_Observer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEfecto_Observer_Statics::NewProp_Particulas = { "Particulas", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEfecto_Observer, Particulas), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Particulas_MetaData), NewProp_Particulas_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEfecto_Observer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEfecto_Observer_Statics::NewProp_Particulas,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEfecto_Observer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEfecto_Observer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Patrones_Bomberman01,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEfecto_Observer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEfecto_Observer_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UISuscriptor_NoRegister, (int32)VTABLE_OFFSET(AEfecto_Observer, IISuscriptor), false },  // 3496428570
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEfecto_Observer_Statics::ClassParams = {
	&AEfecto_Observer::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AEfecto_Observer_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AEfecto_Observer_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEfecto_Observer_Statics::Class_MetaDataParams), Z_Construct_UClass_AEfecto_Observer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEfecto_Observer()
{
	if (!Z_Registration_Info_UClass_AEfecto_Observer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEfecto_Observer.OuterSingleton, Z_Construct_UClass_AEfecto_Observer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEfecto_Observer.OuterSingleton;
}
template<> PATRONES_BOMBERMAN01_API UClass* StaticClass<AEfecto_Observer>()
{
	return AEfecto_Observer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEfecto_Observer);
AEfecto_Observer::~AEfecto_Observer() {}
// End Class AEfecto_Observer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_Efecto_Observer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEfecto_Observer, AEfecto_Observer::StaticClass, TEXT("AEfecto_Observer"), &Z_Registration_Info_UClass_AEfecto_Observer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEfecto_Observer), 3819404617U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_Efecto_Observer_h_3602260527(TEXT("/Script/Patrones_Bomberman01"),
	Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_Efecto_Observer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_Efecto_Observer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
