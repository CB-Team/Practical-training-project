// Fill out your copyright notice in the Description page of Project Settings.

#include "PracticalTraining.h"
#include "MainMenu_Widget.h"

UMainMenu_Widget::UMainMenu_Widget(const FObjectInitializer &ObjectInitializer):Super(ObjectInitializer)
{	
}

void UMainMenu_Widget::_StartGame()
{ 
	//Remove the MainMenu from the viewPort
	RemoveFromParent();

	//hide the mouse cursor
	GetWorld()->GetFirstPlayerController()->bShowMouseCursor = false;

	//Load Level01 by defualt
	UGameplayStatics::LoadStreamLevel(this, "Level02", true, true, FLatentActionInfo());
	
}

void UMainMenu_Widget::_Options()
{
	GEngine->AddOnScreenDebugMessage(-1, 15, FColor::Red, TEXT("Options"));
}

void UMainMenu_Widget::_Credits()
{
	GEngine->AddOnScreenDebugMessage(-1, 15, FColor::Red, TEXT("Credits"));
}

void UMainMenu_Widget::_EXITGame()
{
	GetWorld()->GetFirstPlayerController()->ConsoleCommand("EXIT");
}

void UMainMenu_Widget::SetMainMenuBp_Widget(UClass *MainMenu_UMG)
{
	MainMenuBp_Widget = MainMenu_UMG;
}