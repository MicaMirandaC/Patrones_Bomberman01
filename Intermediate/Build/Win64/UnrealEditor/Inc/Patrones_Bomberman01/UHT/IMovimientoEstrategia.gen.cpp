// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Patrones_Bomberman01/Public/IMovimientoEstrategia.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIMovimientoEstrategia() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
PATRONES_BOMBERMAN01_API UClass* Z_Construct_UClass_UIMovimientoEstrategia();
PATRONES_BOMBERMAN01_API UClass* Z_Construct_UClass_UIMovimientoEstrategia_NoRegister();
UPackage* Z_Construct_UPackage__Script_Patrones_Bomberman01();
// End Cross Module References

// Begin Interface UIMovimientoEstrategia
void UIMovimientoEstrategia::StaticRegisterNativesUIMovimientoEstrategia()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIMovimientoEstrategia);
UClass* Z_Construct_UClass_UIMovimientoEstrategia_NoRegister()
{
	return UIMovimientoEstrategia::StaticClass();
}
struct Z_Construct_UClass_UIMovimientoEstrategia_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IMovimientoEstrategia.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIMovimientoEstrategia>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIMovimientoEstrategia_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Patrones_Bomberman01,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIMovimientoEstrategia_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIMovimientoEstrategia_Statics::ClassParams = {
	&UIMovimientoEstrategia::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIMovimientoEstrategia_Statics::Class_MetaDataParams), Z_Construct_UClass_UIMovimientoEstrategia_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIMovimientoEstrategia()
{
	if (!Z_Registration_Info_UClass_UIMovimientoEstrategia.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIMovimientoEstrategia.OuterSingleton, Z_Construct_UClass_UIMovimientoEstrategia_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIMovimientoEstrategia.OuterSingleton;
}
template<> PATRONES_BOMBERMAN01_API UClass* StaticClass<UIMovimientoEstrategia>()
{
	return UIMovimientoEstrategia::StaticClass();
}
UIMovimientoEstrategia::UIMovimientoEstrategia(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIMovimientoEstrategia);
UIMovimientoEstrategia::~UIMovimientoEstrategia() {}
// End Interface UIMovimientoEstrategia

// Begin Registration
struct Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_IMovimientoEstrategia_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIMovimientoEstrategia, UIMovimientoEstrategia::StaticClass, TEXT("UIMovimientoEstrategia"), &Z_Registration_Info_UClass_UIMovimientoEstrategia, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIMovimientoEstrategia), 3915941674U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_IMovimientoEstrategia_h_2833831071(TEXT("/Script/Patrones_Bomberman01"),
	Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_IMovimientoEstrategia_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_IMovimientoEstrategia_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
