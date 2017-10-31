// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "GoalPad.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGoalPad() {}
// Cross Module References
	MMC_SKEE_BALL_API UEnum* Z_Construct_UEnum_MMC_Skee_Ball_GoalHit();
	UPackage* Z_Construct_UPackage__Script_MMC_Skee_Ball();
	MMC_SKEE_BALL_API UFunction* Z_Construct_UFunction_AGoalPad_BeginOverlap();
	MMC_SKEE_BALL_API UClass* Z_Construct_UClass_AGoalPad();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	MMC_SKEE_BALL_API UClass* Z_Construct_UClass_AGoalPad_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
// End Cross Module References
static UEnum* GoalHit_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_MMC_Skee_Ball_GoalHit, Z_Construct_UPackage__Script_MMC_Skee_Ball(), TEXT("GoalHit"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_GoalHit(GoalHit_StaticEnum, TEXT("/Script/MMC_Skee_Ball"), TEXT("GoalHit"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_MMC_Skee_Ball_GoalHit()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_MMC_Skee_Ball();
		extern uint32 Get_Z_Construct_UEnum_MMC_Skee_Ball_GoalHit_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("GoalHit"), 0, Get_Z_Construct_UEnum_MMC_Skee_Ball_GoalHit_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GoalHit"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("GoalHit::ZeroPoints"), 0);
			EnumNames.Emplace(TEXT("GoalHit::TenPoints"), 1);
			EnumNames.Emplace(TEXT("GoalHit::TwentyPoints"), 2);
			EnumNames.Emplace(TEXT("GoalHit::ThirtyPoints"), 3);
			EnumNames.Emplace(TEXT("GoalHit::FortyPoints"), 4);
			EnumNames.Emplace(TEXT("GoalHit::FiftyPoints"), 5);
			EnumNames.Emplace(TEXT("GoalHit::HundredPoints"), 6);
			EnumNames.Emplace(TEXT("GoalHit::GoalHit_MAX"), 7);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("GoalHit");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("FiftyPoints.DisplayName"), TEXT("FiftyPoints"));
			MetaData->SetValue(ReturnEnum, TEXT("FortyPoints.DisplayName"), TEXT("FortyPoints"));
			MetaData->SetValue(ReturnEnum, TEXT("HundredPoints.DisplayName"), TEXT("HundredPoints"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("GoalPad.h"));
			MetaData->SetValue(ReturnEnum, TEXT("TenPoints.DisplayName"), TEXT("TenPoints"));
			MetaData->SetValue(ReturnEnum, TEXT("ThirtyPoints.DisplayName"), TEXT("ThirtyPoints"));
			MetaData->SetValue(ReturnEnum, TEXT("TwentyPoints.DisplayName"), TEXT("TwentyPoints"));
			MetaData->SetValue(ReturnEnum, TEXT("ZeroPoints.DisplayName"), TEXT("ZeroPoints"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_MMC_Skee_Ball_GoalHit_CRC() { return 4230826453U; }
	static FName NAME_AGoalPad_BeginOverlap = FName(TEXT("BeginOverlap"));
	void AGoalPad::BeginOverlap(AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
	{
		GoalPad_eventBeginOverlap_Parms Parms;
		Parms.OtherActor=OtherActor;
		Parms.OtherComp=OtherComp;
		Parms.OtherBodyIndex=OtherBodyIndex;
		ProcessEvent(FindFunctionChecked(NAME_AGoalPad_BeginOverlap),&Parms);
	}
	void AGoalPad::StaticRegisterNativesAGoalPad()
	{
	}
	UFunction* Z_Construct_UFunction_AGoalPad_BeginOverlap()
	{
		UObject* Outer = Z_Construct_UClass_AGoalPad();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("BeginOverlap"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x08020800, 65535, sizeof(GoalPad_eventBeginOverlap_Parms));
			UProperty* NewProp_OtherBodyIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherBodyIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(OtherBodyIndex, GoalPad_eventBeginOverlap_Parms), 0x0010000000000080);
			UProperty* NewProp_OtherComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherComp, GoalPad_eventBeginOverlap_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_OtherActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherActor, GoalPad_eventBeginOverlap_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("GoalPad"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("GoalPad.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Called when object overlaps goal pad"));
			MetaData->SetValue(NewProp_OtherComp, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGoalPad_NoRegister()
	{
		return AGoalPad::StaticClass();
	}
	UClass* Z_Construct_UClass_AGoalPad()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_MMC_Skee_Ball();
			OuterClass = AGoalPad::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;

				OuterClass->LinkChild(Z_Construct_UFunction_AGoalPad_BeginOverlap());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AGoalPad_BeginOverlap(), "BeginOverlap"); // 3868618326
				static TCppClassTypeInfo<TCppClassTypeTraits<AGoalPad> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("GoalPad.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("GoalPad.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGoalPad, 1197927522);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGoalPad(Z_Construct_UClass_AGoalPad, &AGoalPad::StaticClass, TEXT("/Script/MMC_Skee_Ball"), TEXT("AGoalPad"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGoalPad);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
