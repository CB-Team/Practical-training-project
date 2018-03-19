// Fill out your copyright notice in the Description page of Project Settings.

#include "PracticalTraining.h"
#include "HUD_Manager.h"

AHUD_Manager::AHUD_Manager(const FObjectInitializer &ObjectInitializer) :Super(ObjectInitializer)
{
	////MainMenu_Widget
		//get a refrence for MainMenuBp_Widget(UMG) 
		ConstructorHelpers::FClassFinder<UMainMenu_Widget> MainMenuUMG_refrence (TEXT("WidgetBlueprint'/Game/UMG/MainMenuBp_Widget.MainMenuBp_Widget_C'"));

		//check if MainMenuBp_Widget Refrence (which is stored in MainMenuUMG_refrence) if valid
		if (MainMenuUMG_refrence.Succeeded()) {MainMenuBp_Widget = MainMenuUMG_refrence.Class;}

}

void AHUD_Manager::BeginPlay()
{
	Super::BeginPlay();

	////MainMenu_Widget
		//Create a refrence to MainMenu_Widget class
		if (!MainMenu_Widget)
		{
			MainMenu_Widget = CreateWidget<UMainMenu_Widget>(GetWorld()->GetFirstPlayerController(), MainMenuBp_Widget.LoadSynchronous());
			MainMenu_Widget->AddToViewport();
			
			//Set the mouseCursor To be visible
			GetWorld()->GetFirstPlayerController()->bShowMouseCursor = true;
		}
		
		if (MainMenu_Widget && MainMenuBp_Widget)
		{
			MainMenu_Widget->SetMainMenuBp_Widget(MainMenuBp_Widget.LoadSynchronous());
		}
}