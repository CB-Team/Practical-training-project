// Fill out your copyright notice in the Description page of Project Settings.

#include "PracticalTraining.h"
#include "PracticalTrainingGameMode.h"

APracticalTrainingGameMode::APracticalTrainingGameMode(const FObjectInitializer & ObjectInitializer):Super(ObjectInitializer)
{

	//Set the defualt HUD_Manager Class
	this->HUDClass = AHUD_Manager::StaticClass();

}
