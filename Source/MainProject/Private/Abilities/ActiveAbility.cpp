// Fill out your copyright notice in the Description page of Project Settings.


#include "Abilities/ActiveAbility.h"

void UActiveAbility::NativeInitialize()
{
    currentReloadTime = 0.0f;
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
        currentReloadTime = reloadTime;
        GetWorld()->GetTimerManager().SetTimer(m_reloadTimerHandle, this, &UActiveAbility::TickReloadTimer, m_timerTimeUpdate, true);
    }
}

void UActiveAbility::TickReloadTimer()
{
    currentReloadTime -= m_timerTimeUpdate;
    currentReloadTime = FMath::Clamp(currentReloadTime, 0.0f, reloadTime);

    if (FMath::IsNearlyZero(currentReloadTime))
    {
        m_currentActivationAmount++;

        if (m_currentActivationAmount == activationAmount)
        {
            GetWorld()->GetTimerManager().ClearTimer(m_reloadTimerHandle);
            return;
        }

        currentReloadTime = reloadTime;
    }
}
