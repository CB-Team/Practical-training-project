// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Blueprint/UserWidget.h"
#include "MainMenu_Widget.generated.h"


 
UCLASS()
class PRACTICALTRAINING_API UMainMenu_Widget : public UUserWidget
{
	GENERATED_BODY()

public:

	//Constructor
	UMainMenu_Widget(const FObjectInitializer &ObjectInitislizer);

	////MenuItems Functions
	UFUNCTION(BlueprintCallable, category = "UMG_C++", meta = (WorldContext = "WorldContextObject"))
	void _StartGame();

	UFUNCTION(BlueprintCallable, category = "UMG_C++", meta = (WorldContext = "WorldContextObject"))
	void _Options();

	UFUNCTION(BlueprintCallable, category = "UMG_C++", meta = (WorldContext = "WorldContextObject"))
	void _Credits();

	UFUNCTION(BlueprintCallable, category = "UMG_C++", meta = (WorldContext = "WorldContextObject"))
	void _EXITGame();

	//MainMenuBp_UMG refrence
	TAssetSubclassOf<UMainMenu_Widget> MainMenuBp_Widget;

	UFUNCTION()
	void SetMainMenuBp_Widget(UClass *MainMenu_UMG);

};
