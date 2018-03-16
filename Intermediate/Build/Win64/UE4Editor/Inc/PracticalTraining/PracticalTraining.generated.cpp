// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Boilerplate C++ definitions for a single module.
	This is automatically generated by UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "PracticalTraining.h"
#include "PracticalTraining.generated.dep.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1PracticalTraining() {}
	void UMainMenu_Widget::StaticRegisterNativesUMainMenu_Widget()
	{
		FNativeFunctionRegistrar::RegisterFunction(UMainMenu_Widget::StaticClass(), "_Credits",(Native)&UMainMenu_Widget::exec_Credits);
		FNativeFunctionRegistrar::RegisterFunction(UMainMenu_Widget::StaticClass(), "_EXITGame",(Native)&UMainMenu_Widget::exec_EXITGame);
		FNativeFunctionRegistrar::RegisterFunction(UMainMenu_Widget::StaticClass(), "_Options",(Native)&UMainMenu_Widget::exec_Options);
		FNativeFunctionRegistrar::RegisterFunction(UMainMenu_Widget::StaticClass(), "_StartGame",(Native)&UMainMenu_Widget::exec_StartGame);
	}
	IMPLEMENT_CLASS(UMainMenu_Widget, 3365274673);
	void AHUD_Manager::StaticRegisterNativesAHUD_Manager()
	{
	}
	IMPLEMENT_CLASS(AHUD_Manager, 3030013212);
	void AMainGameMode::StaticRegisterNativesAMainGameMode()
	{
	}
	IMPLEMENT_CLASS(AMainGameMode, 1045276953);
	void APracticalTrainingGameMode::StaticRegisterNativesAPracticalTrainingGameMode()
	{
	}
	IMPLEMENT_CLASS(APracticalTrainingGameMode, 2807383384);
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	UMG_API class UClass* Z_Construct_UClass_UUserWidget();
	ENGINE_API class UClass* Z_Construct_UClass_AHUD();
	ENGINE_API class UClass* Z_Construct_UClass_AGameMode();

	PRACTICALTRAINING_API class UFunction* Z_Construct_UFunction_UMainMenu_Widget__Credits();
	PRACTICALTRAINING_API class UFunction* Z_Construct_UFunction_UMainMenu_Widget__EXITGame();
	PRACTICALTRAINING_API class UFunction* Z_Construct_UFunction_UMainMenu_Widget__Options();
	PRACTICALTRAINING_API class UFunction* Z_Construct_UFunction_UMainMenu_Widget__StartGame();
	PRACTICALTRAINING_API class UClass* Z_Construct_UClass_UMainMenu_Widget_NoRegister();
	PRACTICALTRAINING_API class UClass* Z_Construct_UClass_UMainMenu_Widget();
	PRACTICALTRAINING_API class UClass* Z_Construct_UClass_AHUD_Manager_NoRegister();
	PRACTICALTRAINING_API class UClass* Z_Construct_UClass_AHUD_Manager();
	PRACTICALTRAINING_API class UClass* Z_Construct_UClass_AMainGameMode_NoRegister();
	PRACTICALTRAINING_API class UClass* Z_Construct_UClass_AMainGameMode();
	PRACTICALTRAINING_API class UClass* Z_Construct_UClass_APracticalTrainingGameMode_NoRegister();
	PRACTICALTRAINING_API class UClass* Z_Construct_UClass_APracticalTrainingGameMode();
	PRACTICALTRAINING_API class UPackage* Z_Construct_UPackage__Script_PracticalTraining();
	UFunction* Z_Construct_UFunction_UMainMenu_Widget__Credits()
	{
		UObject* Outer=Z_Construct_UClass_UMainMenu_Widget();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("_Credits"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("UMG_C++"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("MainMenu_Widget.h"));
			MetaData->SetValue(ReturnFunction, TEXT("WorldContext"), TEXT("WorldContextObject"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMainMenu_Widget__EXITGame()
	{
		UObject* Outer=Z_Construct_UClass_UMainMenu_Widget();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("_EXITGame"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("UMG_C++"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("MainMenu_Widget.h"));
			MetaData->SetValue(ReturnFunction, TEXT("WorldContext"), TEXT("WorldContextObject"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMainMenu_Widget__Options()
	{
		UObject* Outer=Z_Construct_UClass_UMainMenu_Widget();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("_Options"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("UMG_C++"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("MainMenu_Widget.h"));
			MetaData->SetValue(ReturnFunction, TEXT("WorldContext"), TEXT("WorldContextObject"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMainMenu_Widget__StartGame()
	{
		UObject* Outer=Z_Construct_UClass_UMainMenu_Widget();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("_StartGame"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("UMG_C++"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("MainMenu_Widget.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("/MenuItems Functions"));
			MetaData->SetValue(ReturnFunction, TEXT("WorldContext"), TEXT("WorldContextObject"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMainMenu_Widget_NoRegister()
	{
		return UMainMenu_Widget::StaticClass();
	}
	UClass* Z_Construct_UClass_UMainMenu_Widget()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UUserWidget();
			Z_Construct_UPackage__Script_PracticalTraining();
			OuterClass = UMainMenu_Widget::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20901080;

				OuterClass->LinkChild(Z_Construct_UFunction_UMainMenu_Widget__Credits());
				OuterClass->LinkChild(Z_Construct_UFunction_UMainMenu_Widget__EXITGame());
				OuterClass->LinkChild(Z_Construct_UFunction_UMainMenu_Widget__Options());
				OuterClass->LinkChild(Z_Construct_UFunction_UMainMenu_Widget__StartGame());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMainMenu_Widget__Credits(), "_Credits"); // 1260011603
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMainMenu_Widget__EXITGame(), "_EXITGame"); // 2640133820
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMainMenu_Widget__Options(), "_Options"); // 2999172145
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMainMenu_Widget__StartGame(), "_StartGame"); // 3704276796
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MainMenu_Widget.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("MainMenu_Widget.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMainMenu_Widget(Z_Construct_UClass_UMainMenu_Widget, &UMainMenu_Widget::StaticClass, TEXT("UMainMenu_Widget"), false, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMainMenu_Widget);
	UClass* Z_Construct_UClass_AHUD_Manager_NoRegister()
	{
		return AHUD_Manager::StaticClass();
	}
	UClass* Z_Construct_UClass_AHUD_Manager()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AHUD();
			Z_Construct_UPackage__Script_PracticalTraining();
			OuterClass = AHUD_Manager::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x2090028C;


				OuterClass->ClassConfigName = FName(TEXT("Game"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Rendering Actor Input Replication"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("HUD_Manager.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("HUD_Manager.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHUD_Manager(Z_Construct_UClass_AHUD_Manager, &AHUD_Manager::StaticClass, TEXT("AHUD_Manager"), false, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHUD_Manager);
	UClass* Z_Construct_UClass_AMainGameMode_NoRegister()
	{
		return AMainGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_AMainGameMode()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameMode();
			Z_Construct_UPackage__Script_PracticalTraining();
			OuterClass = AMainGameMode::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x2090028C;


				OuterClass->ClassConfigName = FName(TEXT("Game"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MainGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("MainGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMainGameMode(Z_Construct_UClass_AMainGameMode, &AMainGameMode::StaticClass, TEXT("AMainGameMode"), false, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMainGameMode);
	UClass* Z_Construct_UClass_APracticalTrainingGameMode_NoRegister()
	{
		return APracticalTrainingGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_APracticalTrainingGameMode()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameMode();
			Z_Construct_UPackage__Script_PracticalTraining();
			OuterClass = APracticalTrainingGameMode::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x2090028C;


				OuterClass->ClassConfigName = FName(TEXT("Game"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("PracticalTrainingGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("PracticalTrainingGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APracticalTrainingGameMode(Z_Construct_UClass_APracticalTrainingGameMode, &APracticalTrainingGameMode::StaticClass, TEXT("APracticalTrainingGameMode"), false, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APracticalTrainingGameMode);
	UPackage* Z_Construct_UPackage__Script_PracticalTraining()
	{
		static UPackage* ReturnPackage = NULL;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), NULL, FName(TEXT("/Script/PracticalTraining")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0xC99545CE;
			Guid.B = 0x44423FDA;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif

PRAGMA_ENABLE_DEPRECATION_WARNINGS