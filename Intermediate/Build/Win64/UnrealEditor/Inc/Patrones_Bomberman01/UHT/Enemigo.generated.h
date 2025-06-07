// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Enemigo.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PATRONES_BOMBERMAN01_Enemigo_generated_h
#error "Enemigo.generated.h already included, missing '#pragma once' in Enemigo.h"
#endif
#define PATRONES_BOMBERMAN01_Enemigo_generated_h

#define FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_Enemigo_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemigo(); \
	friend struct Z_Construct_UClass_AEnemigo_Statics; \
public: \
	DECLARE_CLASS(AEnemigo, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Patrones_Bomberman01"), NO_API) \
	DECLARE_SERIALIZER(AEnemigo)


#define FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_Enemigo_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AEnemigo(AEnemigo&&); \
	AEnemigo(const AEnemigo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemigo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemigo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemigo) \
	NO_API virtual ~AEnemigo();


#define FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_Enemigo_h_13_PROLOG
#define FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_Enemigo_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_Enemigo_h_16_INCLASS_NO_PURE_DECLS \
	FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_Enemigo_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PATRONES_BOMBERMAN01_API UClass* StaticClass<class AEnemigo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Patrones_Bomberman01_Source_Patrones_Bomberman01_Public_Enemigo_h


#define FOREACH_ENUM_EDIRECCIONMOVIMIENTO(op) \
	op(EDireccionMovimiento::MoverX) \
	op(EDireccionMovimiento::MoverY) \
	op(EDireccionMovimiento::ElevarZ) \
	op(EDireccionMovimiento::MoverX_ElevarZ) 

enum class EDireccionMovimiento : uint8;
template<> struct TIsUEnumClass<EDireccionMovimiento> { enum { Value = true }; };
template<> PATRONES_BOMBERMAN01_API UEnum* StaticEnum<EDireccionMovimiento>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
