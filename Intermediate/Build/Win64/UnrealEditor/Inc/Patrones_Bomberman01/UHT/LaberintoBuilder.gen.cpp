// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Patrones_Bomberman01/Public/LaberintoBuilder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLaberintoBuilder() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
PATRONES_BOMBERMAN01_API UClass* Z_Construct_UClass_ALaberintoBuilder();
PATRONES_BOMBERMAN01_API UClass* Z_Construct_UClass_ALaberintoBuilder_NoRegister();
PATRONES_BOMBERMAN01_API UClass* Z_Construct_UClass_UILaberinto_NoRegister();
UPackage* Z_Construct_UPackage__Script_Patrones_Bomberman01();
// End Cross Module References

// Begin Class ALaberintoBuilder
void ALaberintoBuilder::StaticRegisterNativesALaberintoBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALaberintoBuilder);
UClass* Z_Construct_UClass_ALaberintoBuilder_NoRegister()
{
	return ALaberintoBuilder::StaticClass();
}
struct Z_Construct_UClass_ALaberintoBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LaberintoBuilder.h" },
		{ "ModuleRelativePath", "Public/LaberintoBuilder.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALaberintoBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ALaberintoBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Patrones_Bomberman01,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALaberintoBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALaberintoBuilder_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UILaberinto_NoRegister, (int32)VTABLE_OFFSET(ALaberintoBuilder, IILaberinto), false },  // 3937360819
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALaberintoBuilder_Statics::ClassParams = {
	&ALaberintoBuilder::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALaberintoBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_ALaberintoBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALaberintoBuilder()
{
	if (!Z_Registration_Info_UClass_ALaberintoBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALaberintoBuilder.OuterSingleton, Z_Construct_UClass_ALaberintoBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALaberintoBuilder.OuterSingleton;
}
template<> PATRONES_BOMBERMAN01_API UClass* StaticClass<ALaberintoBuilder>()
{
	return ALaberintoBuilder::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALaberintoBuilder);
ALaberintoBuilder::~ALaberintoBuilder() {}
// End Class ALaberintoBuilder

// Begin Registration
struct Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_LaberintoBuilder_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALaberintoBuilder, ALaberintoBuilder::StaticClass, TEXT("ALaberintoBuilder"), &Z_Registration_Info_UClass_ALaberintoBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALaberintoBuilder), 3108393086U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_LaberintoBuilder_h_1626472662(TEXT("/Script/Patrones_Bomberman01"),
	Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_LaberintoBuilder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_LaberintoBuilder_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
