// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MMC_SKEE_BALL_Skee_master_generated_h
#error "Skee_master.generated.h already included, missing '#pragma once' in Skee_master.h"
#endif
#define MMC_SKEE_BALL_Skee_master_generated_h

#define MMC_Skee_Ball_git_Source_MMC_Skee_Ball_Skee_master_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCalculateScore) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CalculateScore(); \
		P_NATIVE_END; \
	}


#define MMC_Skee_Ball_git_Source_MMC_Skee_Ball_Skee_master_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCalculateScore) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CalculateScore(); \
		P_NATIVE_END; \
	}


#define MMC_Skee_Ball_git_Source_MMC_Skee_Ball_Skee_master_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASkee_master(); \
	friend MMC_SKEE_BALL_API class UClass* Z_Construct_UClass_ASkee_master(); \
public: \
	DECLARE_CLASS(ASkee_master, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MMC_Skee_Ball"), NO_API) \
	DECLARE_SERIALIZER(ASkee_master) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MMC_Skee_Ball_git_Source_MMC_Skee_Ball_Skee_master_h_19_INCLASS \
private: \
	static void StaticRegisterNativesASkee_master(); \
	friend MMC_SKEE_BALL_API class UClass* Z_Construct_UClass_ASkee_master(); \
public: \
	DECLARE_CLASS(ASkee_master, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MMC_Skee_Ball"), NO_API) \
	DECLARE_SERIALIZER(ASkee_master) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MMC_Skee_Ball_git_Source_MMC_Skee_Ball_Skee_master_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASkee_master(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASkee_master) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASkee_master); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASkee_master); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASkee_master(ASkee_master&&); \
	NO_API ASkee_master(const ASkee_master&); \
public:


#define MMC_Skee_Ball_git_Source_MMC_Skee_Ball_Skee_master_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASkee_master(ASkee_master&&); \
	NO_API ASkee_master(const ASkee_master&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASkee_master); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASkee_master); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASkee_master)


#define MMC_Skee_Ball_git_Source_MMC_Skee_Ball_Skee_master_h_19_PRIVATE_PROPERTY_OFFSET
#define MMC_Skee_Ball_git_Source_MMC_Skee_Ball_Skee_master_h_16_PROLOG
#define MMC_Skee_Ball_git_Source_MMC_Skee_Ball_Skee_master_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MMC_Skee_Ball_git_Source_MMC_Skee_Ball_Skee_master_h_19_PRIVATE_PROPERTY_OFFSET \
	MMC_Skee_Ball_git_Source_MMC_Skee_Ball_Skee_master_h_19_RPC_WRAPPERS \
	MMC_Skee_Ball_git_Source_MMC_Skee_Ball_Skee_master_h_19_INCLASS \
	MMC_Skee_Ball_git_Source_MMC_Skee_Ball_Skee_master_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MMC_Skee_Ball_git_Source_MMC_Skee_Ball_Skee_master_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MMC_Skee_Ball_git_Source_MMC_Skee_Ball_Skee_master_h_19_PRIVATE_PROPERTY_OFFSET \
	MMC_Skee_Ball_git_Source_MMC_Skee_Ball_Skee_master_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	MMC_Skee_Ball_git_Source_MMC_Skee_Ball_Skee_master_h_19_INCLASS_NO_PURE_DECLS \
	MMC_Skee_Ball_git_Source_MMC_Skee_Ball_Skee_master_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MMC_Skee_Ball_git_Source_MMC_Skee_Ball_Skee_master_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
