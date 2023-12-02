// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "BasePlayerController.generated.h"

class UAttackComponent;
class UPlayerMovementComponent;

DECLARE_MULTICAST_DELEGATE_OneParam(FOnMoveForwardSignature, float);
DECLARE_MULTICAST_DELEGATE_OneParam(FOnMoveRightSignature, float);
DECLARE_MULTICAST_DELEGATE(FOnMeleeAttackSignature);
DECLARE_MULTICAST_DELEGATE(FOnRangeAttackSignature);
DECLARE_MULTICAST_DELEGATE(FOnDashSignature);
DECLARE_MULTICAST_DELEGATE(FOnCustomAbilitySignature);
DECLARE_MULTICAST_DELEGATE(FOnInteractSignature);

UCLASS()
class MAINPROJECT_API ABasePlayerController : public APlayerController
{
    GENERATED_BODY()

public:
    ABasePlayerController();

#pragma region delegates
    FOnMoveForwardSignature OnMoveForward;
    FOnMoveRightSignature OnMoveRight;

    FOnMeleeAttackSignature OnMeleeAttack;
    FOnRangeAttackSignature OnRangeAttack;
    FOnDashSignature OnDash;
    FOnCustomAbilitySignature OnCustomAbility;
    FOnInteractSignature OnInteract;
#pragma endregion delegates

    FVector2D GetMouseVector() const;

public:
    virtual void SetupInputComponent() override;

private:
    void HandleMoveForward(float Amount);
    void HandleMoveRight(float Amount);

    void HandleMeleeAttack();
    void HandleRangeAttack();
    void HandleDash();
    void HandleCustomAbility();

    void HandleInteract();
};
