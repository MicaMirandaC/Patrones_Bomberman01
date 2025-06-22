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
ENGINE_API UClass* Z_Construct_UClass_AActor();
PATRONES_BOMBERMAN01_API UClass* Z_Construct_UClass_AEnemigo_NoRegister();
PATRONES_BOMBERMAN01_API UClass* Z_Construct_UClass_AEnemigoFacade();
PATRONES_BOMBERMAN01_API UClass* Z_Construct_UClass_AEnemigoFacade_NoRegister();
PATRONES_BOMBERMAN01_API UClass* Z_Construct_UClass_UMovimientoAtaque_NoRegister();
PATRONES_BOMBERMAN01_API UClass* Z_Construct_UClass_UMovimientoPatrulla_NoRegister();
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EstrategiaPatrulla_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Estrategias\n" },
#endif
		{ "ModuleRelativePath", "Public/EnemigoFacade.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Estrategias" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EstrategiaAtaque_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnemigoFacade.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseTerrestre_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Enemigos base (uno por tipo)\n" },
#endif
		{ "ModuleRelativePath", "Public/EnemigoFacade.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enemigos base (uno por tipo)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseTerrestre2_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnemigoFacade.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseAereo_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnemigoFacade.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EstrategiaPatrulla;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EstrategiaAtaque;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseTerrestre;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseTerrestre2;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseAereo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoFacade>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemigoFacade_Statics::NewProp_EstrategiaPatrulla = { "EstrategiaPatrulla", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemigoFacade, EstrategiaPatrulla), Z_Construct_UClass_UMovimientoPatrulla_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EstrategiaPatrulla_MetaData), NewProp_EstrategiaPatrulla_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemigoFacade_Statics::NewProp_EstrategiaAtaque = { "EstrategiaAtaque", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemigoFacade, EstrategiaAtaque), Z_Construct_UClass_UMovimientoAtaque_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EstrategiaAtaque_MetaData), NewProp_EstrategiaAtaque_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemigoFacade_Statics::NewProp_BaseTerrestre = { "BaseTerrestre", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemigoFacade, BaseTerrestre), Z_Construct_UClass_AEnemigo_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseTerrestre_MetaData), NewProp_BaseTerrestre_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemigoFacade_Statics::NewProp_BaseTerrestre2 = { "BaseTerrestre2", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemigoFacade, BaseTerrestre2), Z_Construct_UClass_AEnemigo_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseTerrestre2_MetaData), NewProp_BaseTerrestre2_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemigoFacade_Statics::NewProp_BaseAereo = { "BaseAereo", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemigoFacade, BaseAereo), Z_Construct_UClass_AEnemigo_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseAereo_MetaData), NewProp_BaseAereo_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemigoFacade_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigoFacade_Statics::NewProp_EstrategiaPatrulla,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigoFacade_Statics::NewProp_EstrategiaAtaque,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigoFacade_Statics::NewProp_BaseTerrestre,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigoFacade_Statics::NewProp_BaseTerrestre2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigoFacade_Statics::NewProp_BaseAereo,
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
		{ Z_Construct_UClass_AEnemigoFacade, AEnemigoFacade::StaticClass, TEXT("AEnemigoFacade"), &Z_Registration_Info_UClass_AEnemigoFacade, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemigoFacade), 550729985U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_EnemigoFacade_h_3877901671(TEXT("/Script/Patrones_Bomberman01"),
	Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_EnemigoFacade_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_EnemigoFacade_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
