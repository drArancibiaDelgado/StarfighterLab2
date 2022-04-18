// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveBlend.h"
#include "GameFramework/FloatingPawnMovement.h"
#include"Components/StaticMeshComponent.h"



// Sets default values
ANaveBlend::ANaveBlend()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	SM_Nave =CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SM Nave"));
	RootComponent = SM_Nave;

	SM_Nave->SetEnableGravity(false);
	SM_Nave->SetConstraintMode(EDOFMode::XZPlane);
	SM_Nave->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	SM_Nave->SetCollisionProfileName(TEXT("PhisycActor"));


	FloatingMovement = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("Floating pawn movement"));

}

// Called when the game starts or when spawned
void ANaveBlend::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANaveBlend::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ANaveBlend::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ANaveBlend::Move(float _AxisValue)
{
	AddMovementInput(FVector(_AxisValue, 0.0f, 0.0f), 1.0f, false);
}

