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
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PosicionInicial_MetaData[] = {
		{ "Category", "Enemigo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Datos de movimiento\n" },
#endif
		{ "ModuleRelativePath", "Public/Enemigo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Datos de movimiento" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanciaMaxima_MetaData[] = {
		{ "Category", "Enemigo" },
		{ "ModuleRelativePath", "Public/Enemigo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAvanzandoHaciaLimite_MetaData[] = {
		{ "Category", "Enemigo" },
		{ "ModuleRelativePath", "Public/Enemigo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direccion_MetaData[] = {
		{ "Category", "Enemigo" },
		{ "ModuleRelativePath", "Public/Enemigo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EstrategiaMovimiento_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Estrategia de movimiento (usando TScriptInterface para evitar puntero UObject directo)\n// Puntero a estrategia de movimiento\n" },
#endif
		{ "ModuleRelativePath", "Public/Enemigo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Estrategia de movimiento (usando TScriptInterface para evitar puntero UObject directo)\nPuntero a estrategia de movimiento" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MallaEnemigo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PosicionInicial;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanciaMaxima;
	static void NewProp_bAvanzandoHaciaLimite_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAvanzandoHaciaLimite;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Direccion_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Direccion;
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEnemigo_Statics::NewProp_PosicionInicial = { "PosicionInicial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemigo, PosicionInicial), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PosicionInicial_MetaData), NewProp_PosicionInicial_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemigo_Statics::NewProp_DistanciaMaxima = { "DistanciaMaxima", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemigo, DistanciaMaxima), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanciaMaxima_MetaData), NewProp_DistanciaMaxima_MetaData) };
void Z_Construct_UClass_AEnemigo_Statics::NewProp_bAvanzandoHaciaLimite_SetBit(void* Obj)
{
	((AEnemigo*)Obj)->bAvanzandoHaciaLimite = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEnemigo_Statics::NewProp_bAvanzandoHaciaLimite = { "bAvanzandoHaciaLimite", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AEnemigo), &Z_Construct_UClass_AEnemigo_Statics::NewProp_bAvanzandoHaciaLimite_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAvanzandoHaciaLimite_MetaData), NewProp_bAvanzandoHaciaLimite_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AEnemigo_Statics::NewProp_Direccion_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AEnemigo_Statics::NewProp_Direccion = { "Direccion", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemigo, Direccion), Z_Construct_UEnum_Patrones_Bomberman01_EDireccionMovimiento, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direccion_MetaData), NewProp_Direccion_MetaData) }; // 2685240802
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_AEnemigo_Statics::NewProp_EstrategiaMovimiento = { "EstrategiaMovimiento", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemigo, EstrategiaMovimiento), Z_Construct_UClass_UIMovimientoEstrategia_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EstrategiaMovimiento_MetaData), NewProp_EstrategiaMovimiento_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemigo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigo_Statics::NewProp_MallaEnemigo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigo_Statics::NewProp_PosicionInicial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigo_Statics::NewProp_DistanciaMaxima,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigo_Statics::NewProp_bAvanzandoHaciaLimite,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigo_Statics::NewProp_Direccion_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigo_Statics::NewProp_Direccion,
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
		{ Z_Construct_UClass_AEnemigo, AEnemigo::StaticClass, TEXT("AEnemigo"), &Z_Registration_Info_UClass_AEnemigo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemigo), 1969786964U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_Enemigo_h_1144530992(TEXT("/Script/Patrones_Bomberman01"),
	Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_Enemigo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_Enemigo_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_Enemigo_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_Enemigo_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
