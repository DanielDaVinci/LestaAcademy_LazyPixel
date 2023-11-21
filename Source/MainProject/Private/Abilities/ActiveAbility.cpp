// Fill out your copyright notice in the Description page of Project Settings.


#include "Abilities/ActiveAbility.h"

void UActiveAbility::Init(ABaseCharacter* Character)
{
    Super::Init(Character);

    m_currentReloadTime = 0.0f;
    m_currentActivationAmount = activationAmount;
}

void UActiveAbility::Activate()
{
    if (!GetWorld())
        return;
    
    if (m_currentActivationAmount != 0)
    {
        if (NativeActivate())
            m_currentActivationAmount--;
    }
    
    if (!GetWorld()->GetTimerManager().IsTimerActive(m_reloadTimerHandle))
    {
        m_currentReloadTime = reloadTime;
        GetWorld()->GetTimerManager().SetTimer(m_reloadTimerHandle, this, &UActiveAbility::TickReloadTimer, m_timerTimeUpdate, true);
    }
}

void UActiveAbility::TickReloadTimer()
{
    m_currentReloadTime -= m_timerTimeUpdate;
    m_currentReloadTime = FMath::Clamp(m_currentReloadTime, 0.0f, reloadTime);

    if (FMath::IsNearlyZero(m_currentReloadTime))
    {
        m_currentActivationAmount++;

        if (m_currentActivationAmount == activationAmount)
        {
            GetWorld()->GetTimerManager().ClearTimer(m_reloadTimerHandle);
            return;
        }

        m_currentReloadTime = reloadTime;
    }
}
