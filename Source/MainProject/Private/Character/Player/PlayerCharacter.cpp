// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/Player/PlayerCharacter.h"

#include "Camera/CameraComponent.h"
#include "Character/Player/Components/AbilityComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Character/Player/Components/WeaponComponent.h"

APlayerCharacter::APlayerCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

    pSpringArmComponent = CreateDefaultSubobject<USpringArmComponent>("SpringArmComponent");
    pSpringArmComponent->SetupAttachment(GetRootComponent());
    pSpringArmComponent->SetRelativeRotation(FRotator(-45.0f, 0.0f, 0.0f));

    pCameraComponent = CreateDefaultSubobject<UCameraComponent>("CameraComponent");
    pCameraComponent->SetupAttachment(pSpringArmComponent);

    pAbilityComponent = CreateDefaultSubobject<UAbilityComponent>("AbilityComponent");

    pWeaponComponent = CreateDefaultSubobject<UWeaponComponent>("WeaponComponent");
}

void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

