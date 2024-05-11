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
DECLARE_MULTICAST_DELEGATE(FOnMeleeAttackSignature);
DECLARE_MULTICAST_DELEGATE(FOnRangeAttackSignature);
DECLARE_MULTICAST_DELEGATE(FOnDashSignature);
DECLARE_MULTICAST_DELEGATE(FOnCustomAbilitySignature);
DECLARE_DELEGATE(FOnInteractSignature);
DECLARE_MULTICAST_DELEGATE(FOnEscapeSignature);

UENUM()
enum class EGameMode : uint8
{
    UI,
    Game
};

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

    FOnMeleeAttackSignature OnMeleeAttack;
    FOnRangeAttackSignature OnRangeAttack;
    FOnDashSignature OnDash;
    FOnCustomAbilitySignature OnCustomAbilityPressed;
    FOnCustomAbilitySignature OnCustomAbilityReleased;
    FOnInteractSignature OnInteract;

    FOnEscapeSignature OnEscape;
#pragma endregion delegates
    
    FVector2D GetMouseVector() const;
    FVector2D GetMaxMouseVector() const;
    
    FVector GetWorldPointUnderMouse() const;
    FVector GetDirectionToMouseHit(const FVector& StartPoint) const;

protected:
    virtual void BeginPlay() override;

public:
    virtual void SetupInputComponent() override;

private:
    void HandleMoveForward(float Amount);
    void HandleMoveRight(float Amount);
    void HandleMouseMove(float Amount);

    void HandleMeleeAttack();
    void HandleRangeAttack();
    void HandleDash();
    void HandleCustomAbilityPressed();
    void HandleCustomAbilityReleased();

    void HandleInteract();

    void HandleEscape();

public:
    void SetGameModeControl();
    void SetUIModeControl();

private:
    EGameMode CurrentGameMode = EGameMode::Game;
    
};
