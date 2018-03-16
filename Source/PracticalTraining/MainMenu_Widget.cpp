// Fill out your copyright notice in the Description page of Project Settings.

#include "PracticalTraining.h"
#include "MainMenu_Widget.h"

UMainMenu_Widget::UMainMenu_Widget(const FObjectInitializer &ObjectInitializer):Super(ObjectInitializer)
{
}

void UMainMenu_Widget::_StartGame()
{
	GEngine->AddOnScreenDebugMessage(-1, 15, FColor::Red, TEXT("StartGame"));
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