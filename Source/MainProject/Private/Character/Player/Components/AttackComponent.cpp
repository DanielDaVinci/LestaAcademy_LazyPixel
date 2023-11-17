// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/Player/Components/AttackComponent.h"

#include "Character/Player/BasePlayerController.h"

UAttackComponent::UAttackComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}


void UAttackComponent::BeginPlay()
{
	Super::BeginPlay();

    BindInput();
}

void UAttackComponent::BindInput()
{
    const auto playerController = Cast<ABasePlayerController>(GetOwner());
    if (!playerController)
        return;

    playerController->OnAttack.AddUObject(this, &UAttackComponent::Attack);
    playerController->OnHardAttack.AddUObject(this, &UAttackComponent::HardAttack);
}

void UAttackComponent::Attack()
{
    // TODO(Анимация атаки + поворот)
}

void UAttackComponent::HardAttack()
{
    // TODO(Анимация атаки + поворот)
}

