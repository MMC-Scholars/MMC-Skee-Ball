// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
#ifdef MMC_SKEE_BALL_GoalPad_generated_h
#error "GoalPad.generated.h already included, missing '#pragma once' in GoalPad.h"
#endif
#define MMC_SKEE_BALL_GoalPad_generated_h

#define MMC_Skee_Ball_git_Source_MMC_Skee_Ball_GoalPad_h_33_RPC_WRAPPERS
#define MMC_Skee_Ball_git_Source_MMC_Skee_Ball_GoalPad_h_33_RPC_WRAPPERS_NO_PURE_DECLS
#define MMC_Skee_Ball_git_Source_MMC_Skee_Ball_GoalPad_h_33_EVENT_PARMS \
	struct GoalPad_eventBeginOverlap_Parms \
	{ \
		AActor* OtherActor; \
		UPrimitiveComponent* OtherComp; \
		int32 OtherBodyIndex; \
	};


#define MMC_Skee_Ball_git_Source_MMC_Skee_Ball_GoalPad_h_33_CALLBACK_WRAPPERS
#define MMC_Skee_Ball_git_Source_MMC_Skee_Ball_GoalPad_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGoalPad(); \
	friend MMC_SKEE_BALL_API class UClass* Z_Construct_UClass_AGoalPad(); \
public: \
	DECLARE_CLASS(AGoalPad, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MMC_Skee_Ball"), NO_API) \
	DECLARE_SERIALIZER(AGoalPad) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MMC_Skee_Ball_git_Source_MMC_Skee_Ball_GoalPad_h_33_INCLASS \
private: \
	static void StaticRegisterNativesAGoalPad(); \
	friend MMC_SKEE_BALL_API class UClass* Z_Construct_UClass_AGoalPad(); \
public: \
	DECLARE_CLASS(AGoalPad, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MMC_Skee_Ball"), NO_API) \
	DECLARE_SERIALIZER(AGoalPad) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MMC_Skee_Ball_git_Source_MMC_Skee_Ball_GoalPad_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGoalPad(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGoalPad) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGoalPad); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGoalPad); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGoalPad(AGoalPad&&); \
	NO_API AGoalPad(const AGoalPad&); \
public:


#define MMC_Skee_Ball_git_Source_MMC_Skee_Ball_GoalPad_h_33_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGoalPad(AGoalPad&&); \
	NO_API AGoalPad(const AGoalPad&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGoalPad); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGoalPad); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGoalPad)


#define MMC_Skee_Ball_git_Source_MMC_Skee_Ball_GoalPad_h_33_PRIVATE_PROPERTY_OFFSET
#define MMC_Skee_Ball_git_Source_MMC_Skee_Ball_GoalPad_h_30_PROLOG \
	MMC_Skee_Ball_git_Source_MMC_Skee_Ball_GoalPad_h_33_EVENT_PARMS


#define MMC_Skee_Ball_git_Source_MMC_Skee_Ball_GoalPad_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MMC_Skee_Ball_git_Source_MMC_Skee_Ball_GoalPad_h_33_PRIVATE_PROPERTY_OFFSET \
	MMC_Skee_Ball_git_Source_MMC_Skee_Ball_GoalPad_h_33_RPC_WRAPPERS \
	MMC_Skee_Ball_git_Source_MMC_Skee_Ball_GoalPad_h_33_CALLBACK_WRAPPERS \
	MMC_Skee_Ball_git_Source_MMC_Skee_Ball_GoalPad_h_33_INCLASS \
	MMC_Skee_Ball_git_Source_MMC_Skee_Ball_GoalPad_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MMC_Skee_Ball_git_Source_MMC_Skee_Ball_GoalPad_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MMC_Skee_Ball_git_Source_MMC_Skee_Ball_GoalPad_h_33_PRIVATE_PROPERTY_OFFSET \
	MMC_Skee_Ball_git_Source_MMC_Skee_Ball_GoalPad_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	MMC_Skee_Ball_git_Source_MMC_Skee_Ball_GoalPad_h_33_CALLBACK_WRAPPERS \
	MMC_Skee_Ball_git_Source_MMC_Skee_Ball_GoalPad_h_33_INCLASS_NO_PURE_DECLS \
	MMC_Skee_Ball_git_Source_MMC_Skee_Ball_GoalPad_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MMC_Skee_Ball_git_Source_MMC_Skee_Ball_GoalPad_h


#define FOREACH_ENUM_GOALHIT(op) \
	op(GoalHit::ZeroPoints) \
	op(GoalHit::TenPoints) \
	op(GoalHit::TwentyPoints) \
	op(GoalHit::ThirtyPoints) \
	op(GoalHit::FortyPoints) \
	op(GoalHit::FiftyPoints) \
	op(GoalHit::HundredPoints) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
