// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Patrones_Bomberman01/Public/EnemigoFacade.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigoFacade() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
PATRONES_BOMBERMAN01_API UClass* Z_Construct_UClass_AEnemigoFacade();
PATRONES_BOMBERMAN01_API UClass* Z_Construct_UClass_AEnemigoFacade_NoRegister();
UPackage* Z_Construct_UPackage__Script_Patrones_Bomberman01();
// End Cross Module References

// Begin Class AEnemigoFacade
void AEnemigoFacade::StaticRegisterNativesAEnemigoFacade()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemigoFacade);
UClass* Z_Construct_UClass_AEnemigoFacade_NoRegister()
{
	return AEnemigoFacade::StaticClass();
}
struct Z_Construct_UClass_AEnemigoFacade_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EnemigoFacade.h" },
		{ "ModuleRelativePath", "Public/EnemigoFacade.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClasePatrulla_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Estrategias reutilizables\n//Se usan para crear objetos con NewObject en tiempo de ejecuci\xef\xbf\xbdn\n" },
#endif
		{ "ModuleRelativePath", "Public/EnemigoFacade.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Estrategias reutilizables\nSe usan para crear objetos con NewObject en tiempo de ejecuci\xef\xbf\xbdn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClaseAtaque_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnemigoFacade.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ClasePatrulla;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ClaseAtaque;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoFacade>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEnemigoFacade_Statics::NewProp_ClasePatrulla = { "ClasePatrulla", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemigoFacade, ClasePatrulla), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClasePatrulla_MetaData), NewProp_ClasePatrulla_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEnemigoFacade_Statics::NewProp_ClaseAtaque = { "ClaseAtaque", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemigoFacade, ClaseAtaque), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClaseAtaque_MetaData), NewProp_ClaseAtaque_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemigoFacade_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigoFacade_Statics::NewProp_ClasePatrulla,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigoFacade_Statics::NewProp_ClaseAtaque,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoFacade_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEnemigoFacade_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Patrones_Bomberman01,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoFacade_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoFacade_Statics::ClassParams = {
	&AEnemigoFacade::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AEnemigoFacade_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoFacade_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoFacade_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemigoFacade_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemigoFacade()
{
	if (!Z_Registration_Info_UClass_AEnemigoFacade.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemigoFacade.OuterSingleton, Z_Construct_UClass_AEnemigoFacade_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemigoFacade.OuterSingleton;
}
template<> PATRONES_BOMBERMAN01_API UClass* StaticClass<AEnemigoFacade>()
{
	return AEnemigoFacade::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigoFacade);
AEnemigoFacade::~AEnemigoFacade() {}
// End Class AEnemigoFacade

// Begin Registration
struct Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_EnemigoFacade_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemigoFacade, AEnemigoFacade::StaticClass, TEXT("AEnemigoFacade"), &Z_Registration_Info_UClass_AEnemigoFacade, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemigoFacade), 874482169U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_EnemigoFacade_h_3042379185(TEXT("/Script/Patrones_Bomberman01"),
	Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_EnemigoFacade_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_EnemigoFacade_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
