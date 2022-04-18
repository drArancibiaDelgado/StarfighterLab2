// Fill out your copyright notice in the Description page of Project Settings.


#include "NavePlayerController.h"
#include "Kismet/GameplayStatics.h"
#include "Camera/CameraActor.h"
#include"NaveBlend.h"


ANavePlayerController::ANavePlayerController()
{
}

void ANavePlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	EnableInput(this);


	InputComponent->BindAxis("Move",this,&ANavePlayerController::Move);
}

void ANavePlayerController::BeginPlay()
{
	TArray<AActor*>CameraActors;

	UGameplayStatics::GetAllActorsOfClass(GetWorld(),ACameraActor::StaticClass(), CameraActors);

	FViewTargetTransitionParams Params;
	SetViewTarget(CameraActors[0], Params);
}

void ANavePlayerController::Move(float _AxisValue)
{
	auto MyPawn = Cast<ANaveBlend>(GetPawn());

	if (MyPawn)
	{
		MyPawn->Move(_AxisValue);
	}
}
