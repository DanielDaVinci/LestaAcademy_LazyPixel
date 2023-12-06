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

    character->PlayAnimMontage(dashAnimation);
    character->GetCapsuleComponent()->SetCollisionResponseToChannel(ECC_Pawn, ECR_Ignore);
    GetWorld()->GetTimerManager().SetTimer(m_dashTimerHandle, this, &UDashAbility::OnDashEnd, dashTime, false);
    
    character->LaunchCharacter(character->GetMesh()->GetRightVector().GetSafeNormal() * dashImpulse, true, false);
    
    return Super::NativeActivate();
}

UPlayerMovementComponent* UDashAbility::GetPlayerMovementComponent() const
{
    return GetCharacter() ? Cast<UPlayerMovementComponent>(GetCharacter()->GetMovementComponent()) : nullptr;
}

void UDashAbility::OnDashEnd()
{
    const auto character = GetCharacter();
    if (!character)
        return;
    
    const auto capsule = character->GetCapsuleComponent();
        
    capsule->SetCollisionResponseToChannel(ECC_Pawn, ECR_Block);

    character->StopAnimMontage(dashAnimation);
        
    GetWorld()->GetTimerManager().ClearTimer(m_dashTimerHandle);

    // Temporary solution, delete when handle dash in weaponcomponent
    const auto pmComponent = GetPlayerMovementComponent();
    if (!pmComponent)
        return;

    pmComponent->SetDeceleration(0.0f);
    pmComponent->UnfixCharacterRotation();
}

