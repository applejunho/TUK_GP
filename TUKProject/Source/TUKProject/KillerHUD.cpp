// Fill out your copyright notice in the Description page of Project Settings.


#include "KillerHUD.h"
#include "Engine/Canvas.h"

void AKillerHUD::DrawHUD()
{
	Super::DrawHUD();

	if (CrosshairTexture)
	{
		FVector2D Center(Canvas->ClipX * 0.5f, Canvas->ClipY * 0.5f);

		FCanvasIcon CrosshairIcon = UCanvas::MakeIcon(CrosshairTexture);

		Canvas->DrawIcon(
			CrosshairIcon,
			Center.X - (CrosshairIcon.UL * 0.5f),
			Center.Y - (CrosshairIcon.VL * 0.5f),
			1.0f
		);
	}
}