// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Patrones_Bomberman01/Public/Enemigo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigo() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
PATRONES_BOMBERMAN01_API UClass* Z_Construct_UClass_AEnemigo();
PATRONES_BOMBERMAN01_API UClass* Z_Construct_UClass_AEnemigo_NoRegister();
PATRONES_BOMBERMAN01_API UClass* Z_Construct_UClass_UIMovimientoEstrategia_NoRegister();
PATRONES_BOMBERMAN01_API UClass* Z_Construct_UClass_UIPrototype_NoRegister();
PATRONES_BOMBERMAN01_API UEnum* Z_Construct_UEnum_Patrones_Bomberman01_EDireccionMovimiento();
UPackage* Z_Construct_UPackage__Script_Patrones_Bomberman01();
// End Cross Module References

// Begin Enum EDireccionMovimiento
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDireccionMovimiento;
static UEnum* EDireccionMovimiento_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDireccionMovimiento.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDireccionMovimiento.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Patrones_Bomberman01_EDireccionMovimiento, (UObject*)Z_Construct_UPackage__Script_Patrones_Bomberman01(), TEXT("EDireccionMovimiento"));
	}
	return Z_Registration_Info_UEnum_EDireccionMovimiento.OuterSingleton;
}
template<> PATRONES_BOMBERMAN01_API UEnum* StaticEnum<EDireccionMovimiento>()
{
	return EDireccionMovimiento_StaticEnum();
}
struct Z_Construct_UEnum_Patrones_Bomberman01_EDireccionMovimiento_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Enum es enumeracion que define los tipos de movimiento que puede tener un enemigo.\n" },
#endif
		{ "ElevarZ.Name", "EDireccionMovimiento::ElevarZ" },
		{ "ModuleRelativePath", "Public/Enemigo.h" },
		{ "MoverX.Name", "EDireccionMovimiento::MoverX" },
		{ "MoverX_ElevarZ.Name", "EDireccionMovimiento::MoverX_ElevarZ" },
		{ "MoverY.Name", "EDireccionMovimiento::MoverY" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enum es enumeracion que define los tipos de movimiento que puede tener un enemigo." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDireccionMovimiento::MoverX", (int64)EDireccionMovimiento::MoverX },
		{ "EDireccionMovimiento::MoverY", (int64)EDireccionMovimiento::MoverY },
		{ "EDireccionMovimiento::ElevarZ", (int64)EDireccionMovimiento::ElevarZ },
		{ "EDireccionMovimiento::MoverX_ElevarZ", (int64)EDireccionMovimiento::MoverX_ElevarZ },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Patrones_Bomberman01_EDireccionMovimiento_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Patrones_Bomberman01,
	nullptr,
	"EDireccionMovimiento",
	"EDireccionMovimiento",
	Z_Construct_UEnum_Patrones_Bomberman01_EDireccionMovimiento_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Patrones_Bomberman01_EDireccionMovimiento_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Patrones_Bomberman01_EDireccionMovimiento_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Patrones_Bomberman01_EDireccionMovimiento_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Patrones_Bomberman01_EDireccionMovimiento()
{
	if (!Z_Registration_Info_UEnum_EDireccionMovimiento.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDireccionMovimiento.InnerSingleton, Z_Construct_UEnum_Patrones_Bomberman01_EDireccionMovimiento_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDireccionMovimiento.InnerSingleton;
}
// End Enum EDireccionMovimiento

// Begin Class AEnemigo
void AEnemigo::StaticRegisterNativesAEnemigo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemigo);
UClass* Z_Construct_UClass_AEnemigo_NoRegister()
{
	return AEnemigo::StaticClass();
}
struct Z_Construct_UClass_AEnemigo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Enemigo.h" },
		{ "ModuleRelativePath", "Public/Enemigo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MallaEnemigo_MetaData[] = {
		{ "Category", "Componentes" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Enemigo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEsBase_MetaData[] = {
		{ "ModuleRelativePath", "Public/Enemigo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EstrategiaMovimiento_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Referencia a la estrategia inyectada\n" },
#endif
		{ "ModuleRelativePath", "Public/Enemigo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Referencia a la estrategia inyectada" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MallaEnemigo;
	static void NewProp_bEsBase_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEsBase;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_EstrategiaMovimiento;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemigo_Statics::NewProp_MallaEnemigo = { "MallaEnemigo", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemigo, MallaEnemigo), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MallaEnemigo_MetaData), NewProp_MallaEnemigo_MetaData) };
void Z_Construct_UClass_AEnemigo_Statics::NewProp_bEsBase_SetBit(void* Obj)
{
	((AEnemigo*)Obj)->bEsBase = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEnemigo_Statics::NewProp_bEsBase = { "bEsBase", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AEnemigo), &Z_Construct_UClass_AEnemigo_Statics::NewProp_bEsBase_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEsBase_MetaData), NewProp_bEsBase_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_AEnemigo_Statics::NewProp_EstrategiaMovimiento = { "EstrategiaMovimiento", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemigo, EstrategiaMovimiento), Z_Construct_UClass_UIMovimientoEstrategia_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EstrategiaMovimiento_MetaData), NewProp_EstrategiaMovimiento_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemigo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigo_Statics::NewProp_MallaEnemigo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigo_Statics::NewProp_bEsBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigo_Statics::NewProp_EstrategiaMovimiento,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigo_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEnemigo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Patrones_Bomberman01,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEnemigo_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIPrototype_NoRegister, (int32)VTABLE_OFFSET(AEnemigo, IIPrototype), false },  // 1531953477
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemigo_Statics::ClassParams = {
	&AEnemigo::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AEnemigo_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigo_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigo_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemigo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemigo()
{
	if (!Z_Registration_Info_UClass_AEnemigo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemigo.OuterSingleton, Z_Construct_UClass_AEnemigo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemigo.OuterSingleton;
}
template<> PATRONES_BOMBERMAN01_API UClass* StaticClass<AEnemigo>()
{
	return AEnemigo::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigo);
AEnemigo::~AEnemigo() {}
// End Class AEnemigo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_Enemigo_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDireccionMovimiento_StaticEnum, TEXT("EDireccionMovimiento"), &Z_Registration_Info_UEnum_EDireccionMovimiento, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2685240802U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemigo, AEnemigo::StaticClass, TEXT("AEnemigo"), &Z_Registration_Info_UClass_AEnemigo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemigo), 2330561856U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_Enemigo_h_31004010(TEXT("/Script/Patrones_Bomberman01"),
	Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_Enemigo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_Enemigo_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_Enemigo_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_Enemigo_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
