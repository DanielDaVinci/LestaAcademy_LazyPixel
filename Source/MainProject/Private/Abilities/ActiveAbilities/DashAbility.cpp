// Fill out your copyright notice in the Description page of Project Settings.


#include "Abilities/ActiveAbilities/DashAbility.h"

#include "Character/BaseCharacter.h"
#include "GameFramework/Character.h"

void UDashAbility::Init(ABaseCharacter* Character)
{
    Super::Init(Character);

    m_character = Character;
}

bool UDashAbility::NativeActivate()
{
    Super::NativeActivate();

    if (!m_character)
        return false;

    if (m_character->GetVelocity().IsNearlyZero())
        return false;
    
    m_character->LaunchCharacter(m_character->GetVelocity().GetSafeNormal() * dashImpulse, true, false);
    return true;
}

