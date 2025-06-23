// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Patrones_Bomberman01/Public/ISuscriptor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeISuscriptor() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
PATRONES_BOMBERMAN01_API UClass* Z_Construct_UClass_UISuscriptor();
PATRONES_BOMBERMAN01_API UClass* Z_Construct_UClass_UISuscriptor_NoRegister();
UPackage* Z_Construct_UPackage__Script_Patrones_Bomberman01();
// End Cross Module References

// Begin Interface UISuscriptor
void UISuscriptor::StaticRegisterNativesUISuscriptor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UISuscriptor);
UClass* Z_Construct_UClass_UISuscriptor_NoRegister()
{
	return UISuscriptor::StaticClass();
}
struct Z_Construct_UClass_UISuscriptor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ISuscriptor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IISuscriptor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UISuscriptor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Patrones_Bomberman01,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UISuscriptor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UISuscriptor_Statics::ClassParams = {
	&UISuscriptor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UISuscriptor_Statics::Class_MetaDataParams), Z_Construct_UClass_UISuscriptor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UISuscriptor()
{
	if (!Z_Registration_Info_UClass_UISuscriptor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UISuscriptor.OuterSingleton, Z_Construct_UClass_UISuscriptor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UISuscriptor.OuterSingleton;
}
template<> PATRONES_BOMBERMAN01_API UClass* StaticClass<UISuscriptor>()
{
	return UISuscriptor::StaticClass();
}
UISuscriptor::UISuscriptor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UISuscriptor);
UISuscriptor::~UISuscriptor() {}
// End Interface UISuscriptor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_ISuscriptor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UISuscriptor, UISuscriptor::StaticClass, TEXT("UISuscriptor"), &Z_Registration_Info_UClass_UISuscriptor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UISuscriptor), 3496428570U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_ISuscriptor_h_1470774158(TEXT("/Script/Patrones_Bomberman01"),
	Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_ISuscriptor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_ISuscriptor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
