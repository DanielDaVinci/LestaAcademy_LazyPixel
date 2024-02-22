// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/Player/Components/AbilityComponent.h"

#include "Abilities/PassiveAbility.h"
#include "Abilities/ActiveAbilities/DashAbility.h"
#include "Abilities/ActiveAbilities/FirstCustomAbility.h"
#include "Character/Player/BasePlayerController.h"
#include "Character/Player/PlayerCharacter.h"
#include "Character/Player/Components/BaseWeaponComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/GameSession.h"

UAbilityComponent::UAbilityComponent()
{
    PrimaryComponentTick.bCanEverTick = false;
}

void UAbilityComponent::InitializeComponent()
{
    Super::InitializeComponent();

    InitActiveAbility();
    InitPassiveAbility();
    InitDashAbility();
    InitCustomAbility();
}

void UAbilityComponent::BeginPlay()
{
    Super::BeginPlay();
    
    BeginPlayActiveAbility();
    BeginPlayPassiveAbility();
    BeginPlayDashAbility();
    BeginPlayCustomAbility();
    
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
        activeAbility->Initialize(character);
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
        passiveAbility->Initialize(character);
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
    
    m_dashAbility->Initialize(character);
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
    
    m_customAbility->Initialize(character);
}

void UAbilityComponent::BeginPlayActiveAbility() const
{
    for (const auto& ability: m_activeAbilities)
    {
        if (!ability)
            continue;
        
        ability->BeginPlay();
    }
}

void UAbilityComponent::BeginPlayPassiveAbility() const
{
    for (const auto& ability: m_passiveAbilities)
    {
        if (!ability)
            continue;
        
        ability->BeginPlay();
    }
}

void UAbilityComponent::BeginPlayDashAbility() const
{
    if (!m_dashAbility)
        return;
    
    m_dashAbility->BeginPlay();
}

void UAbilityComponent::BeginPlayCustomAbility() const
{
    if (!m_customAbility)
        return;
    
    m_customAbility->BeginPlay();
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
    playerController->OnCustomAbilityPressed.AddUObject(this, &UAbilityComponent::CustomAbilityPressed);
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

void UAbilityComponent::CustomAbilityPressed()
{
    if (m_customAbility)
        Cast<UStrongAttackAbility>(m_customAbility)->Press();   
}
