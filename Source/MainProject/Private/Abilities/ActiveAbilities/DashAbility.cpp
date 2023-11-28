// Fill out your copyright notice in the Description page of Project Settings.


#include "Abilities/ActiveAbilities/DashAbility.h"

#include "Character/BaseCharacter.h"
#include "GameFramework/Character.h"

void UDashAbility::Init(ABaseCharacter* Character)
{
    Super::Init(Character);
    
    m_capsuleComponent = m_character->GetCapsuleComponent();
}

bool UDashAbility::NativeActivate()
{
    const auto character = GetCharacter();
    if (!character)
        return false;

    const auto pmComponent = GetPlayerMovementComponent();
    if (!pmComponent)
        return false;

    if (GetWorld()->GetTimerManager().IsTimerActive(m_dashTimerHandle))
        return false;

    m_capsuleComponent->SetCollisionResponseToChannel(ECC_Pawn, ECR_Ignore);

    m_dashTime = dashTime;
    GetWorld()->GetTimerManager().SetTimer(m_dashTimerHandle, this, &UDashAbility::TickDashLifeTimer, m_timerTimeUpdate, true);
    
    FVector launchDirection = pmComponent->InputDirToWorldDir(pmComponent->GetInputDirection());

    character->LaunchCharacter(launchDirection * dashImpulse, true, false);
    
    return Super::NativeActivate();;
}

UPlayerMovementComponent* UDashAbility::GetPlayerMovementComponent() const
{
    return GetCharacter() ? Cast<UPlayerMovementComponent>(GetCharacter()->GetMovementComponent()) : nullptr;
}

void UDashAbility::TickDashLifeTimer()
{
    m_dashTime -= m_timerTimeUpdate;
    m_dashTime = FMath::Clamp(m_dashTime, 0.0f, dashTime);

    if (FMath::IsNearlyZero(m_dashTime))
    {
        m_capsuleComponent->SetCollisionResponseToChannel(ECC_Pawn, ECR_Block);
        
        GetWorld()->GetTimerManager().ClearTimer(m_dashTimerHandle);
    }
}

