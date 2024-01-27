// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/Player/Components/AbilityComponent.h"

#include "Abilities/PassiveAbility.h"
#include "Abilities/ActiveAbilities/DashAbility.h"
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

    InitActiveAbility();
    InitPassiveAbility();
    InitDashAbility();
    InitCustomAbility();
    
    BindInput();
}

void UAbilityComponent::InitActiveAbility()
{
    const auto character = Cast<ABaseCharacter>(GetOwner());
    if (!character)
        return;
    
    for (auto activeAbilityClass: activeAbilityClasses)
    {
        if (!activeAbilityClass)
            continue;
        
        const auto activeAbility = NewObject<UActiveAbility>(this, activeAbilityClass);
        if (!activeAbility)
            continue;

        m_activeAbilities.Add(activeAbility);
        activeAbility->Init(character);
    }
}

void UAbilityComponent::InitPassiveAbility()
{
    const auto character = Cast<ABaseCharacter>(GetOwner());
    if (!character)
        return;
    
    for (auto passiveAbilityClass: passiveAbilityClasses)
    {
        if (!passiveAbilityClass)
            continue;
        
        const auto passiveAbility = NewObject<UPassiveAbility>(this, passiveAbilityClass);
        if (!passiveAbility)
            continue;

        m_passiveAbilities.Add(passiveAbility);
        passiveAbility->Init(character);
    }
}

void UAbilityComponent::InitDashAbility()
{
    if (!dashAbilityClass)
        return;
    
    m_dashAbility = NewObject<UDashAbility>(this, dashAbilityClass);
    if (!m_dashAbility)
        return;

    ABaseCharacter* character = Cast<ABaseCharacter>(GetOwner());
    if (!character)
        return;
    
    m_dashAbility->Init(character);
}

void UAbilityComponent::InitCustomAbility()
{
    if (!customAbilityClass)
        return;
    
    m_customAbility = NewObject<UActiveAbility>(this, customAbilityClass);
    if (!m_customAbility)
        return;

    ABaseCharacter* character = Cast<ABaseCharacter>(GetOwner());
    if (!character)
        return;
    
    m_customAbility->Init(character);
}

void UAbilityComponent::BindInput()
{
    const auto Character = Cast<ACharacter>(GetOwner());
    if (!Character)
        return;

    const auto playerController = Cast<ABasePlayerController>(Character->GetController());
    if (!playerController)
        return;

    playerController->OnDash.AddUObject(this, &UAbilityComponent::UseDash);
    playerController->OnCustomAbility.AddUObject(this, &UAbilityComponent::UseCustomAbility);
}

void UAbilityComponent::UseDash()
{
    if (!m_dashAbility)
        return;

    m_dashAbility->Activate();
}

void UAbilityComponent::UseCustomAbility()
{
    if (!m_customAbility)
        return;

    m_customAbility->Activate();
}