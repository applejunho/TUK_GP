// Fill out your copyright notice in the Description page of Project Settings.


#include "TUKProjectGameModeBase.h"


void ATUKProjectGameModeBase::StartPlay()
{
	Super::StartPlay();
	

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("GAME MODE BASE"));
	}
	
}