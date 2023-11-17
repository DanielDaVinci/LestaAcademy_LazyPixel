// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/Player/Components/PCMovementComponent.h"

#include "Character/BaseCharacter.h"
#include "Character/Player/BasePlayerController.h"

UPCMovementComponent::UPCMovementComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}


void UPCMovementComponent::BeginPlay()
{
	Super::BeginPlay();

    BindInput();
}

void UPCMovementComponent::BindInput()
{
    const auto playerController = Cast<ABasePlayerController>(GetOwner());
    if (!playerController)
        return;

    playerController->OnMoveForward.AddUObject(this, &UPCMovementComponent::MoveForward);
    playerController->OnMoveRight.AddUObject(this, &UPCMovementComponent::MoveRight);
}

void UPCMovementComponent::MoveForward(float Amount)
{
    const auto character = GetCharacter();
    if (!character)
        return;
    
    character->AddMovementInput(character->GetActorForwardVector(), Amount);
}

void UPCMovementComponent::MoveRight(float Amount)
{
    const auto character = GetCharacter();
    if (!character)
        return;
    
    character->AddMovementInput(character->GetActorRightVector(), Amount);
}

ACharacter* UPCMovementComponent::GetCharacter() const
{
    const auto playerController = Cast<ABasePlayerController>(GetOwner());
    return playerController ? playerController->GetCharacter() : nullptr;
}

