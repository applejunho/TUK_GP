// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "KillerHUD.generated.h"

/**
 * 
 */
UCLASS()
class TUKPROJECT_API AKillerHUD : public AHUD
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	UTexture2D* CrosshairTexture;

public:
	virtual void DrawHUD()override;
};
