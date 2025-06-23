// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Patrones_Bomberman01/Public/Obstaculo_Observer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObstaculo_Observer() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
PATRONES_BOMBERMAN01_API UClass* Z_Construct_UClass_AMoneda_Trampa_NoRegister();
PATRONES_BOMBERMAN01_API UClass* Z_Construct_UClass_AObstaculo_Observer();
PATRONES_BOMBERMAN01_API UClass* Z_Construct_UClass_AObstaculo_Observer_NoRegister();
PATRONES_BOMBERMAN01_API UClass* Z_Construct_UClass_UISuscriptor_NoRegister();
UPackage* Z_Construct_UPackage__Script_Patrones_Bomberman01();
// End Cross Module References

// Begin Class AObstaculo_Observer
void AObstaculo_Observer::StaticRegisterNativesAObstaculo_Observer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AObstaculo_Observer);
UClass* Z_Construct_UClass_AObstaculo_Observer_NoRegister()
{
	return AObstaculo_Observer::StaticClass();
}
struct Z_Construct_UClass_AObstaculo_Observer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Obstaculo_Observer.h" },
		{ "ModuleRelativePath", "Public/Obstaculo_Observer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MonedaTrampa_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//La Moneda de este suscriptor\n" },
#endif
		{ "ModuleRelativePath", "Public/Obstaculo_Observer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "La Moneda de este suscriptor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
		{ "Category", "Obstaculo_Observer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Obstaculo_Observer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MonedaTrampa;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObstaculo_Observer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AObstaculo_Observer_Statics::NewProp_MonedaTrampa = { "MonedaTrampa", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AObstaculo_Observer, MonedaTrampa), Z_Construct_UClass_AMoneda_Trampa_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MonedaTrampa_MetaData), NewProp_MonedaTrampa_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AObstaculo_Observer_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AObstaculo_Observer, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponent_MetaData), NewProp_MeshComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AObstaculo_Observer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObstaculo_Observer_Statics::NewProp_MonedaTrampa,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObstaculo_Observer_Statics::NewProp_MeshComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AObstaculo_Observer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AObstaculo_Observer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Patrones_Bomberman01,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AObstaculo_Observer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AObstaculo_Observer_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UISuscriptor_NoRegister, (int32)VTABLE_OFFSET(AObstaculo_Observer, IISuscriptor), false },  // 3496428570
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AObstaculo_Observer_Statics::ClassParams = {
	&AObstaculo_Observer::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AObstaculo_Observer_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AObstaculo_Observer_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AObstaculo_Observer_Statics::Class_MetaDataParams), Z_Construct_UClass_AObstaculo_Observer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AObstaculo_Observer()
{
	if (!Z_Registration_Info_UClass_AObstaculo_Observer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AObstaculo_Observer.OuterSingleton, Z_Construct_UClass_AObstaculo_Observer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AObstaculo_Observer.OuterSingleton;
}
template<> PATRONES_BOMBERMAN01_API UClass* StaticClass<AObstaculo_Observer>()
{
	return AObstaculo_Observer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AObstaculo_Observer);
AObstaculo_Observer::~AObstaculo_Observer() {}
// End Class AObstaculo_Observer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_Obstaculo_Observer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AObstaculo_Observer, AObstaculo_Observer::StaticClass, TEXT("AObstaculo_Observer"), &Z_Registration_Info_UClass_AObstaculo_Observer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AObstaculo_Observer), 3811320370U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_Obstaculo_Observer_h_2102861389(TEXT("/Script/Patrones_Bomberman01"),
	Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_Obstaculo_Observer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_Obstaculo_Observer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
