// Fill out your copyright notice in the Description page of Project Settings.


#include "Abilities/ActiveAbilities/DashAbility.h"

#include "Character/BaseCharacter.h"
#include "Character/Player/Components/PlayerMovementComponent.h"
#include "GameFramework/Character.h"

void UDashAbility::Init(ABaseCharacter* Character)
{
    Super::Init(Character);
    
}

bool UDashAbility::NativeActivate()
{
    const auto character = GetCharacter();
    if (!character)
        return false;

    if (GetWorld()->GetTimerManager().IsTimerActive(m_dashTimerHandle))
        return false;

    character->GetCapsuleComponent()->SetCollisionResponseToChannel(ECC_Pawn, ECR_Ignore);
    GetWorld()->GetTimerManager().SetTimer(m_dashTimerHandle, this, &UDashAbility::OnDashEnd, dashTime, false);

    const auto pmComponent = GetPlayerMovementComponent();
    if (!pmComponent)
        return false;

    const FVector launchDirection = pmComponent->InputDirToWorldDir(pmComponent->GetInputDirection());
    character->LaunchCharacter(launchDirection * dashImpulse, true, false);
    
    return Super::NativeActivate();;
}

UPlayerMovementComponent* UDashAbility::GetPlayerMovementComponent() const
{
    return GetCharacter() ? Cast<UPlayerMovementComponent>(GetCharacter()->GetMovementComponent()) : nullptr;
}

void UDashAbility::OnDashEnd()
{
    const auto capsule = GetCharacter() ? GetCharacter()->GetCapsuleComponent() : nullptr;
    if (!capsule)
        return;
        
    capsule->SetCollisionResponseToChannel(ECC_Pawn, ECR_Block);
        
    GetWorld()->GetTimerManager().ClearTimer(m_dashTimerHandle);
}

