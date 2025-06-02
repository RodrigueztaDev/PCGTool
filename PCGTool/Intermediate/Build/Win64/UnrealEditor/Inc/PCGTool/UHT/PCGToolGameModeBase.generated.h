// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCGToolGameModeBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PCGTOOL_PCGToolGameModeBase_generated_h
#error "PCGToolGameModeBase.generated.h already included, missing '#pragma once' in PCGToolGameModeBase.h"
#endif
#define PCGTOOL_PCGToolGameModeBase_generated_h

#define FID_PCGTool_Source_PCGTool_PCGToolGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPCGToolGameModeBase(); \
	friend struct Z_Construct_UClass_APCGToolGameModeBase_Statics; \
public: \
	DECLARE_CLASS(APCGToolGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/PCGTool"), NO_API) \
	DECLARE_SERIALIZER(APCGToolGameModeBase)


#define FID_PCGTool_Source_PCGTool_PCGToolGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APCGToolGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APCGToolGameModeBase(APCGToolGameModeBase&&); \
	APCGToolGameModeBase(const APCGToolGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APCGToolGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APCGToolGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APCGToolGameModeBase) \
	NO_API virtual ~APCGToolGameModeBase();


#define FID_PCGTool_Source_PCGTool_PCGToolGameModeBase_h_12_PROLOG
#define FID_PCGTool_Source_PCGTool_PCGToolGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PCGTool_Source_PCGTool_PCGToolGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_PCGTool_Source_PCGTool_PCGToolGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PCGTOOL_API UClass* StaticClass<class APCGToolGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PCGTool_Source_PCGTool_PCGToolGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
