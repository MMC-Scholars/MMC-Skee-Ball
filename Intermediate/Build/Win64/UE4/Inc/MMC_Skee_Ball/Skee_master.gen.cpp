// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Skee_master.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkee_master() {}
// Cross Module References
	MMC_SKEE_BALL_API UFunction* Z_Construct_UFunction_ASkee_master_CalculateScore();
	MMC_SKEE_BALL_API UClass* Z_Construct_UClass_ASkee_master();
	MMC_SKEE_BALL_API UClass* Z_Construct_UClass_ASkee_master_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MMC_Skee_Ball();
// End Cross Module References
	void ASkee_master::StaticRegisterNativesASkee_master()
	{
		UClass* Class = ASkee_master::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "CalculateScore", (Native)&ASkee_master::execCalculateScore },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_ASkee_master_CalculateScore()
	{
		UObject* Outer = Z_Construct_UClass_ASkee_master();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CalculateScore"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("skee_master"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Skee_master.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("TO-DO: Call methods to figure out which triggers have been\nhit, add them up, and append them to score."));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASkee_master_NoRegister()
	{
		return ASkee_master::StaticClass();
	}
	UClass* Z_Construct_UClass_ASkee_master()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_MMC_Skee_Ball();
			OuterClass = ASkee_master::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;

				OuterClass->LinkChild(Z_Construct_UFunction_ASkee_master_CalculateScore());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ASkee_master_CalculateScore(), "CalculateScore"); // 1930504675
				static TCppClassTypeInfo<TCppClassTypeTraits<ASkee_master> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Skee_master.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Skee_master.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASkee_master, 1944932022);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASkee_master(Z_Construct_UClass_ASkee_master, &ASkee_master::StaticClass, TEXT("/Script/MMC_Skee_Ball"), TEXT("ASkee_master"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASkee_master);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
