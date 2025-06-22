// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Patrones_Bomberman01/Public/MovimientoAtaque.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovimientoAtaque() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
PATRONES_BOMBERMAN01_API UClass* Z_Construct_UClass_UIMovimientoEstrategia_NoRegister();
PATRONES_BOMBERMAN01_API UClass* Z_Construct_UClass_UMovimientoAtaque();
PATRONES_BOMBERMAN01_API UClass* Z_Construct_UClass_UMovimientoAtaque_NoRegister();
UPackage* Z_Construct_UPackage__Script_Patrones_Bomberman01();
// End Cross Module References

// Begin Class UMovimientoAtaque
void UMovimientoAtaque::StaticRegisterNativesUMovimientoAtaque()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovimientoAtaque);
UClass* Z_Construct_UClass_UMovimientoAtaque_NoRegister()
{
	return UMovimientoAtaque::StaticClass();
}
struct Z_Construct_UClass_UMovimientoAtaque_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MovimientoAtaque.h" },
		{ "ModuleRelativePath", "Public/MovimientoAtaque.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovimientoAtaque>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovimientoAtaque_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Patrones_Bomberman01,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovimientoAtaque_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovimientoAtaque_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIMovimientoEstrategia_NoRegister, (int32)VTABLE_OFFSET(UMovimientoAtaque, IIMovimientoEstrategia), false },  // 3915941674
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovimientoAtaque_Statics::ClassParams = {
	&UMovimientoAtaque::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovimientoAtaque_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovimientoAtaque_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovimientoAtaque()
{
	if (!Z_Registration_Info_UClass_UMovimientoAtaque.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovimientoAtaque.OuterSingleton, Z_Construct_UClass_UMovimientoAtaque_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovimientoAtaque.OuterSingleton;
}
template<> PATRONES_BOMBERMAN01_API UClass* StaticClass<UMovimientoAtaque>()
{
	return UMovimientoAtaque::StaticClass();
}
UMovimientoAtaque::UMovimientoAtaque(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovimientoAtaque);
UMovimientoAtaque::~UMovimientoAtaque() {}
// End Class UMovimientoAtaque

// Begin Registration
struct Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_MovimientoAtaque_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovimientoAtaque, UMovimientoAtaque::StaticClass, TEXT("UMovimientoAtaque"), &Z_Registration_Info_UClass_UMovimientoAtaque, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovimientoAtaque), 4158750881U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_MovimientoAtaque_h_3641794801(TEXT("/Script/Patrones_Bomberman01"),
	Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_MovimientoAtaque_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_MovimientoAtaque_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
