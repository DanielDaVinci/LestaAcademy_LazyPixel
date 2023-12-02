// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "BasePlayerController.generated.h"

class UAttackComponent;
class UPlayerMovementComponent;

DECLARE_MULTICAST_DELEGATE_OneParam(FOnMoveForwardSignature, float);
DECLARE_MULTICAST_DELEGATE_OneParam(FOnMoveRightSignature, float);
DECLARE_MULTICAST_DELEGATE_OneParam(FOnMouseMoveSignature, FVector2D);
DECLARE_MULTICAST_DELEGATE(FOnAttackSignature);
DECLARE_MULTICAST_DELEGATE(FOnHardAttackSignature);
DECLARE_MULTICAST_DELEGATE(FOnDashSignature);
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
    FOnMouseMoveSignature OnMouseMove;

    FOnAttackSignature OnAttack;
    FOnHardAttackSignature OnHardAttack;
    FOnDashSignature OnDash;
    FOnInteractSignature OnInteract;
#pragma endregion delegates

    FVector2D GetMouseVector() const;
    FVector2D GetMaxMouseVector() const;

public:
    virtual void SetupInputComponent() override;

private:
    void HandleMoveForward(float Amount);
    void HandleMoveRight(float Amount);
    void HandleMouseMove(float Amount);

    void HandleAttack();
    void HandleHardAttack();
    void HandleDash();

    void HandleInteract();
};
