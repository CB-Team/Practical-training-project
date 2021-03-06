// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PRACTICALTRAINING_HUD_Manager_generated_h
#error "HUD_Manager.generated.h already included, missing '#pragma once' in HUD_Manager.h"
#endif
#define PRACTICALTRAINING_HUD_Manager_generated_h

#define PracticalTraining_Source_PracticalTraining_HUD_Manager_h_12_RPC_WRAPPERS
#define PracticalTraining_Source_PracticalTraining_HUD_Manager_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define PracticalTraining_Source_PracticalTraining_HUD_Manager_h_12_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesAHUD_Manager(); \
	friend PRACTICALTRAINING_API class UClass* Z_Construct_UClass_AHUD_Manager(); \
	public: \
	DECLARE_CLASS(AHUD_Manager, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, TEXT("/Script/PracticalTraining"), NO_API) \
	DECLARE_SERIALIZER(AHUD_Manager) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define PracticalTraining_Source_PracticalTraining_HUD_Manager_h_12_INCLASS \
	private: \
	static void StaticRegisterNativesAHUD_Manager(); \
	friend PRACTICALTRAINING_API class UClass* Z_Construct_UClass_AHUD_Manager(); \
	public: \
	DECLARE_CLASS(AHUD_Manager, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, TEXT("/Script/PracticalTraining"), NO_API) \
	DECLARE_SERIALIZER(AHUD_Manager) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define PracticalTraining_Source_PracticalTraining_HUD_Manager_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHUD_Manager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHUD_Manager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHUD_Manager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHUD_Manager); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AHUD_Manager(const AHUD_Manager& InCopy); \
public:


#define PracticalTraining_Source_PracticalTraining_HUD_Manager_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AHUD_Manager(const AHUD_Manager& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHUD_Manager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHUD_Manager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHUD_Manager)


#define PracticalTraining_Source_PracticalTraining_HUD_Manager_h_9_PROLOG
#define PracticalTraining_Source_PracticalTraining_HUD_Manager_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PracticalTraining_Source_PracticalTraining_HUD_Manager_h_12_RPC_WRAPPERS \
	PracticalTraining_Source_PracticalTraining_HUD_Manager_h_12_INCLASS \
	PracticalTraining_Source_PracticalTraining_HUD_Manager_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PracticalTraining_Source_PracticalTraining_HUD_Manager_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PracticalTraining_Source_PracticalTraining_HUD_Manager_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PracticalTraining_Source_PracticalTraining_HUD_Manager_h_12_INCLASS_NO_PURE_DECLS \
	PracticalTraining_Source_PracticalTraining_HUD_Manager_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PracticalTraining_Source_PracticalTraining_HUD_Manager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
