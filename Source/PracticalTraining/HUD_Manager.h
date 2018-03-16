// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/HUD.h"
#include "MainMenu_Widget.h"
#include "HUD_Manager.generated.h"

UCLASS()
class PRACTICALTRAINING_API AHUD_Manager : public AHUD
{
	GENERATED_BODY()

	//Constructor
	AHUD_Manager(const FObjectInitializer &ObjectInitializer);
	
	//BeginPlay called when the game starts!
	virtual void BeginPlay() override;

	////MainMenu
	
	//refrence to MainMenu_Widget class (this will be added to viewPort)
	UMainMenu_Widget *MainMenu_Widget;

	//refrence to MainMenuBp_Widget (which is subclass of MainMenu_Widget class)
	TAssetSubclassOf<UMainMenu_Widget> MainMenuBp_Widget;	

};
