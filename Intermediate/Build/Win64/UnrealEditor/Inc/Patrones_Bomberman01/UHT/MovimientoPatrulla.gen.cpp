// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Patrones_Bomberman01/Public/MovimientoPatrulla.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovimientoPatrulla() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
PATRONES_BOMBERMAN01_API UClass* Z_Construct_UClass_UIMovimientoEstrategia_NoRegister();
PATRONES_BOMBERMAN01_API UClass* Z_Construct_UClass_UMovimientoPatrulla();
PATRONES_BOMBERMAN01_API UClass* Z_Construct_UClass_UMovimientoPatrulla_NoRegister();
UPackage* Z_Construct_UPackage__Script_Patrones_Bomberman01();
// End Cross Module References

// Begin Class UMovimientoPatrulla
void UMovimientoPatrulla::StaticRegisterNativesUMovimientoPatrulla()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovimientoPatrulla);
UClass* Z_Construct_UClass_UMovimientoPatrulla_NoRegister()
{
	return UMovimientoPatrulla::StaticClass();
}
struct Z_Construct_UClass_UMovimientoPatrulla_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MovimientoPatrulla.h" },
		{ "ModuleRelativePath", "Public/MovimientoPatrulla.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovimientoPatrulla>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovimientoPatrulla_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Patrones_Bomberman01,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovimientoPatrulla_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovimientoPatrulla_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIMovimientoEstrategia_NoRegister, (int32)VTABLE_OFFSET(UMovimientoPatrulla, IIMovimientoEstrategia), false },  // 3915941674
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovimientoPatrulla_Statics::ClassParams = {
	&UMovimientoPatrulla::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovimientoPatrulla_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovimientoPatrulla_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovimientoPatrulla()
{
	if (!Z_Registration_Info_UClass_UMovimientoPatrulla.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovimientoPatrulla.OuterSingleton, Z_Construct_UClass_UMovimientoPatrulla_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovimientoPatrulla.OuterSingleton;
}
template<> PATRONES_BOMBERMAN01_API UClass* StaticClass<UMovimientoPatrulla>()
{
	return UMovimientoPatrulla::StaticClass();
}
UMovimientoPatrulla::UMovimientoPatrulla(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovimientoPatrulla);
UMovimientoPatrulla::~UMovimientoPatrulla() {}
// End Class UMovimientoPatrulla

// Begin Registration
struct Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_MovimientoPatrulla_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovimientoPatrulla, UMovimientoPatrulla::StaticClass, TEXT("UMovimientoPatrulla"), &Z_Registration_Info_UClass_UMovimientoPatrulla, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovimientoPatrulla), 3529425932U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_MovimientoPatrulla_h_1655381397(TEXT("/Script/Patrones_Bomberman01"),
	Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_MovimientoPatrulla_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_MovimientoPatrulla_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
