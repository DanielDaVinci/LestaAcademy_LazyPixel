// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/Player/Components/AbilityComponent.h"

#include "Character/Player/BasePlayerController.h"
#include "Character/Player/PlayerCharacter.h"
#include "GameFramework/Character.h"

UAbilityComponent::UAbilityComponent()
{
    PrimaryComponentTick.bCanEverTick = false;
}


void UAbilityComponent::BeginPlay()
{
    Super::BeginPlay();

    BindInput();
}

void UAbilityComponent::BindInput()
{
    const auto charater = Cast<ACharacter>(GetOwner());
    if (!charater)
        return;

    const auto playerController = Cast<ABasePlayerController>(charater->GetController());
    if (!playerController)
        return;

    playerController->OnDash.AddUObject(this, &UAbilityComponent::UseDash);
}

void UAbilityComponent::UseDash()
{
    const auto character = Cast<APlayerCharacter>(GetOwner());
    if (!character)
        return;

    character->LaunchCharacter(character->GetMesh()->GetRightVector() * 2000.0f, true, false);
}
