// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "NavePlayerController.generated.h"

/**
 * 
 */
UCLASS()
class STARFIGHTERLAB2_API ANavePlayerController : public APlayerController
{
	GENERATED_BODY()

	ANavePlayerController();

	UFUNCTION()
		virtual void SetupInputComponent() override;


protected:

	virtual void BeginPlay()override;
	void Move(float _AxisValue);
	
};
