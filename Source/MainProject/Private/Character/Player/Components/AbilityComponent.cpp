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


void UAbilityComponent::InitializeComponent()
{
    Super::InitializeComponent();

    m_activeAbilities = InitArrayAbilities(activeAbilityClasses);
    m_passiveAbilities = InitArrayAbilities(passiveAbilityClasses);
    m_dashAbility = InitAbility(dashAbilityClass);
    m_customAbility = InitAbility(customAbilityClass);
}

void UAbilityComponent::BeginPlay()
{
    Super::BeginPlay();

    BeginPlayArrayAbilities(m_activeAbilities);
    BeginPlayArrayAbilities(m_passiveAbilities);
    
    if (m_dashAbility)
        m_dashAbility->BeginPlay();
    
    if (m_customAbility)
        m_customAbility->BeginPlay();
    
    BindInput();
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