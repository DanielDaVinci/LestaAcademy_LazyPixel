// Fill out your copyright notice in the Description page of Project Settings.


#include "Abilities/ActiveAbilities/DashAbility.h"

#include "MainProjectCoreTypes.h"
#include "Character/BaseCharacter.h"
#include "Character/Player/Components/PlayerMovementComponent.h"
#include "Character/Player/Components/StateMachineComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/Character.h"

void UDashAbility::BeginPlay()
{
    Super::BeginPlay();
}

bool UDashAbility::NativeActivate()
{
    const auto pStateMachineComponent = GetStateMachineComponent();
    if (!pStateMachineComponent)
        return false;

    FState dashState(
        "DashAbility",
        dashDuration,
        EStatePriority::Force
    );
    dashState.OnStartState.AddUObject(this, &UDashAbility::OnStartDashState);
    dashState.OnEndState.AddUObject(this, &UDashAbility::OnEndDashState);

    pStateMachineComponent->AddState(dashState);

    return Super::NativeActivate();
}

void UDashAbility::OnStartDashState()
{
    const auto pCharacter = GetCharacter();
    if (!GetWorld() || !pCharacter || !pCharacter->GetCapsuleComponent() || !pCharacter->GetMesh())
        return;

    pCharacter->GetCapsuleComponent()->SetCollisionResponseToChannel(ECC_Enemy, ECR_Ignore);
    pCharacter->PlayAnimMontage(dashAnimation);
    
    const FVector dashDirection = pCharacter->GetMesh()->GetRightVector().GetSafeNormal();
    FTimerDelegate timerDelegate = FTimerDelegate::CreateUObject(this, &UDashAbility::OnDashTimerUpdate, dashDirection);
    GetWorld()->GetTimerManager().SetTimer(m_dashTimer, timerDelegate, m_timerRate, true);
}

void UDashAbility::OnEndDashState(EStateResult StateResult)
{
    const auto pCharacter = GetCharacter();
    if (!GetWorld() || !pCharacter || !pCharacter->GetCapsuleComponent())
        return;

    GetWorld()->GetTimerManager().ClearTimer(m_dashTimer);
    
    pCharacter->GetCapsuleComponent()->SetCollisionResponseToChannel(ECC_Enemy, ECR_Block);
    pCharacter->StopAnimMontage(dashAnimation);
}


void UDashAbility::OnDashTimerUpdate(FVector Direction)
{
    const auto pCharacter = GetCharacter();
    const auto pStateMachineComponent = GetStateMachineComponent();
    if (!GetWorld() || !pCharacter || !pStateMachineComponent)
        return;
    
    const FVector delta = Direction * dashDistance * FMath::Clamp(m_timerRate / dashDuration, 0.0f, 1.0f);

    FHitResult* hitResult = nullptr;
    pCharacter->AddActorWorldOffset(delta,true, hitResult);

    if (hitResult && hitResult->bBlockingHit && pStateMachineComponent->GetCurrentState().Name == "DashAbility")
        pStateMachineComponent->SkipCurrentState();
}

UPlayerMovementComponent* UDashAbility::GetPlayerMovementComponent() const
{
    return GetCharacter() ? Cast<UPlayerMovementComponent>(GetCharacter()->GetMovementComponent()) : nullptr;
}

UStateMachineComponent* UDashAbility::GetStateMachineComponent() const
{
    return GetCharacter() ? GetCharacter()->GetStateMachineComponent() : nullptr;
}

