// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Patrones_Bomberman01/Patrones_Bomberman01GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePatrones_Bomberman01GameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
PATRONES_BOMBERMAN01_API UClass* Z_Construct_UClass_ADirectorLaberinto_NoRegister();
PATRONES_BOMBERMAN01_API UClass* Z_Construct_UClass_ALaberintoBuilder_NoRegister();
PATRONES_BOMBERMAN01_API UClass* Z_Construct_UClass_APatrones_Bomberman01GameMode();
PATRONES_BOMBERMAN01_API UClass* Z_Construct_UClass_APatrones_Bomberman01GameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Patrones_Bomberman01();
// End Cross Module References

// Begin Class APatrones_Bomberman01GameMode
void APatrones_Bomberman01GameMode::StaticRegisterNativesAPatrones_Bomberman01GameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APatrones_Bomberman01GameMode);
UClass* Z_Construct_UClass_APatrones_Bomberman01GameMode_NoRegister()
{
	return APatrones_Bomberman01GameMode::StaticClass();
}
struct Z_Construct_UClass_APatrones_Bomberman01GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Patrones_Bomberman01GameMode.h" },
		{ "ModuleRelativePath", "Patrones_Bomberman01GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectorLab_MetaData[] = {
		{ "Category", "GameModeBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//El actor constructor\n" },
#endif
		{ "ModuleRelativePath", "Patrones_Bomberman01GameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "El actor constructor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuilderLab_MetaData[] = {
		{ "Category", "GameModeBase" },
		{ "ModuleRelativePath", "Patrones_Bomberman01GameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DirectorLab;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BuilderLab;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APatrones_Bomberman01GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APatrones_Bomberman01GameMode_Statics::NewProp_DirectorLab = { "DirectorLab", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APatrones_Bomberman01GameMode, DirectorLab), Z_Construct_UClass_ADirectorLaberinto_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectorLab_MetaData), NewProp_DirectorLab_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APatrones_Bomberman01GameMode_Statics::NewProp_BuilderLab = { "BuilderLab", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APatrones_Bomberman01GameMode, BuilderLab), Z_Construct_UClass_ALaberintoBuilder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuilderLab_MetaData), NewProp_BuilderLab_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APatrones_Bomberman01GameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APatrones_Bomberman01GameMode_Statics::NewProp_DirectorLab,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APatrones_Bomberman01GameMode_Statics::NewProp_BuilderLab,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APatrones_Bomberman01GameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APatrones_Bomberman01GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Patrones_Bomberman01,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APatrones_Bomberman01GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APatrones_Bomberman01GameMode_Statics::ClassParams = {
	&APatrones_Bomberman01GameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APatrones_Bomberman01GameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APatrones_Bomberman01GameMode_Statics::PropPointers),
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APatrones_Bomberman01GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_APatrones_Bomberman01GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APatrones_Bomberman01GameMode()
{
	if (!Z_Registration_Info_UClass_APatrones_Bomberman01GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APatrones_Bomberman01GameMode.OuterSingleton, Z_Construct_UClass_APatrones_Bomberman01GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APatrones_Bomberman01GameMode.OuterSingleton;
}
template<> PATRONES_BOMBERMAN01_API UClass* StaticClass<APatrones_Bomberman01GameMode>()
{
	return APatrones_Bomberman01GameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APatrones_Bomberman01GameMode);
APatrones_Bomberman01GameMode::~APatrones_Bomberman01GameMode() {}
// End Class APatrones_Bomberman01GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Patrones_Bomberman01GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APatrones_Bomberman01GameMode, APatrones_Bomberman01GameMode::StaticClass, TEXT("APatrones_Bomberman01GameMode"), &Z_Registration_Info_UClass_APatrones_Bomberman01GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APatrones_Bomberman01GameMode), 3584622882U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Patrones_Bomberman01GameMode_h_2097456705(TEXT("/Script/Patrones_Bomberman01"),
	Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Patrones_Bomberman01GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Patrones_Bomberman01GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
