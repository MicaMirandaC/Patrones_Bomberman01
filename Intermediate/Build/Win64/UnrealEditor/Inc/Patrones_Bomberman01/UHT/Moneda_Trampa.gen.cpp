// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Patrones_Bomberman01/Public/Moneda_Trampa.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoneda_Trampa() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
PATRONES_BOMBERMAN01_API UClass* Z_Construct_UClass_AMoneda_Trampa();
PATRONES_BOMBERMAN01_API UClass* Z_Construct_UClass_AMoneda_Trampa_NoRegister();
PATRONES_BOMBERMAN01_API UClass* Z_Construct_UClass_ANotificador();
UPackage* Z_Construct_UPackage__Script_Patrones_Bomberman01();
// End Cross Module References

// Begin Class AMoneda_Trampa Function ActivarSiJugadorCerca
struct Z_Construct_UFunction_AMoneda_Trampa_ActivarSiJugadorCerca_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Moneda_Trampa.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMoneda_Trampa_ActivarSiJugadorCerca_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMoneda_Trampa, nullptr, "ActivarSiJugadorCerca", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMoneda_Trampa_ActivarSiJugadorCerca_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMoneda_Trampa_ActivarSiJugadorCerca_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMoneda_Trampa_ActivarSiJugadorCerca()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMoneda_Trampa_ActivarSiJugadorCerca_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMoneda_Trampa::execActivarSiJugadorCerca)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ActivarSiJugadorCerca();
	P_NATIVE_END;
}
// End Class AMoneda_Trampa Function ActivarSiJugadorCerca

// Begin Class AMoneda_Trampa
void AMoneda_Trampa::StaticRegisterNativesAMoneda_Trampa()
{
	UClass* Class = AMoneda_Trampa::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ActivarSiJugadorCerca", &AMoneda_Trampa::execActivarSiJugadorCerca },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMoneda_Trampa);
UClass* Z_Construct_UClass_AMoneda_Trampa_NoRegister()
{
	return AMoneda_Trampa::StaticClass();
}
struct Z_Construct_UClass_AMoneda_Trampa_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Moneda_Trampa.h" },
		{ "ModuleRelativePath", "Public/Moneda_Trampa.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
		{ "Category", "Moneda_Trampa" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Moneda_Trampa.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Jugador_MetaData[] = {
		{ "ModuleRelativePath", "Public/Moneda_Trampa.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanciaActivacion_MetaData[] = {
		{ "Category", "Moneda_Trampa" },
		{ "ModuleRelativePath", "Public/Moneda_Trampa.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Jugador;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanciaActivacion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMoneda_Trampa_ActivarSiJugadorCerca, "ActivarSiJugadorCerca" }, // 2568721001
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMoneda_Trampa>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoneda_Trampa_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoneda_Trampa, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponent_MetaData), NewProp_MeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoneda_Trampa_Statics::NewProp_Jugador = { "Jugador", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoneda_Trampa, Jugador), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Jugador_MetaData), NewProp_Jugador_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMoneda_Trampa_Statics::NewProp_DistanciaActivacion = { "DistanciaActivacion", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoneda_Trampa, DistanciaActivacion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanciaActivacion_MetaData), NewProp_DistanciaActivacion_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMoneda_Trampa_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoneda_Trampa_Statics::NewProp_MeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoneda_Trampa_Statics::NewProp_Jugador,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoneda_Trampa_Statics::NewProp_DistanciaActivacion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMoneda_Trampa_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMoneda_Trampa_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ANotificador,
	(UObject* (*)())Z_Construct_UPackage__Script_Patrones_Bomberman01,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMoneda_Trampa_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMoneda_Trampa_Statics::ClassParams = {
	&AMoneda_Trampa::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMoneda_Trampa_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMoneda_Trampa_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMoneda_Trampa_Statics::Class_MetaDataParams), Z_Construct_UClass_AMoneda_Trampa_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMoneda_Trampa()
{
	if (!Z_Registration_Info_UClass_AMoneda_Trampa.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMoneda_Trampa.OuterSingleton, Z_Construct_UClass_AMoneda_Trampa_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMoneda_Trampa.OuterSingleton;
}
template<> PATRONES_BOMBERMAN01_API UClass* StaticClass<AMoneda_Trampa>()
{
	return AMoneda_Trampa::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMoneda_Trampa);
AMoneda_Trampa::~AMoneda_Trampa() {}
// End Class AMoneda_Trampa

// Begin Registration
struct Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_Moneda_Trampa_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMoneda_Trampa, AMoneda_Trampa::StaticClass, TEXT("AMoneda_Trampa"), &Z_Registration_Info_UClass_AMoneda_Trampa, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMoneda_Trampa), 3490314581U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_Moneda_Trampa_h_1013678177(TEXT("/Script/Patrones_Bomberman01"),
	Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_Moneda_Trampa_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_Moneda_Trampa_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
