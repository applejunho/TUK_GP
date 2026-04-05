// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TUKProjectGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class TUKPROJECT_API ATUKProjectGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	virtual void StartPlay() override;
	
};
