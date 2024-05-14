// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/Player/BasePlayerController.h"

#include "GameFramework/PlayerInput.h"

ABasePlayerController::ABasePlayerController()
{
    PrimaryActorTick.bTickEvenWhenPaused = true;
    bShowMouseCursor = true;
}

FVector2D ABasePlayerController::GetMouseVector() const
{
    FIntVector2 viewportSize;
    GetViewportSize(viewportSize.X, viewportSize.Y);

    FVector2D mousePosition;
    GetMousePosition(mousePosition.X, mousePosition.Y);

    return FVector2D(
        mousePosition.X - viewportSize.X / 2,
        viewportSize.Y / 2 - mousePosition.Y
        );
}

FVector2D ABasePlayerController::GetMaxMouseVector() const
{
    FIntVector2 viewportSize;
    GetViewportSize(viewportSize.X, viewportSize.Y);
    
    return FVector2D(viewportSize.X / 2, viewportSize.Y / 2);
}

FVector ABasePlayerController::GetWorldPointUnderMouse() const
{
    FHitResult hitResult;
    GetHitResultUnderCursor(ECC_MAX, false, hitResult);
    
    return hitResult.bBlockingHit ? hitResult.ImpactPoint : FVector::ZeroVector;
}

FVector ABasePlayerController::GetDirectionToMouseHit(const FVector& StartPoint) const
{
    return GetWorldPointUnderMouse() - StartPoint;
}

void ABasePlayerController::SetMouseSensitivity(float Value) const
{
    PlayerInput.Get()->SetMouseSensitivity(Value);
}

void ABasePlayerController::SetGameModeControl()
{
    CurrentMouseCursor = EMouseCursor::Crosshairs;
    CurrentGameMode = EGameMode::Game;
    
    FInputModeGameOnly InputGameMode;
    InputGameMode.SetConsumeCaptureMouseDown(false);
    SetInputMode(InputGameMode);
}

void ABasePlayerController::SetUIModeControl()
{
    CurrentMouseCursor = EMouseCursor::Default;
    CurrentGameMode = EGameMode::UI;
    
    SetInputMode(FInputModeUIOnly());
}

void ABasePlayerController::BeginPlay()
{
    Super::BeginPlay();

    SetGameModeControl();
    // UGameplayStatics::SetViewportMouseCaptureMode(GetWorld(), EMouseCaptureMode::CapturePermanently_IncludingInitialMouseDown);
}

void ABasePlayerController::SetupInputComponent()
{
    Super::SetupInputComponent();

    InputComponent->BindAxis("MoveForward", this, &ABasePlayerController::HandleMoveForward);
    InputComponent->BindAxis("MoveRight", this, &ABasePlayerController::HandleMoveRight);
    InputComponent->BindAxis("MouseMove", this, &ABasePlayerController::HandleMouseMove);

    InputComponent->BindAction("MeleeAttack", IE_Pressed, this, &ABasePlayerController::HandleMeleeAttack);
    InputComponent->BindAction("RangeAttack", IE_Pressed, this, &ABasePlayerController::HandleRangeAttack);
    InputComponent->BindAction("Dash", IE_Pressed, this, &ABasePlayerController::HandleDash);
    InputComponent->BindAction("CustomAbility", IE_Pressed, this, &ABasePlayerController::HandleCustomAbilityPressed);
    InputComponent->BindAction("CustomAbility", IE_Released, this, &ABasePlayerController::HandleCustomAbilityReleased);
    InputComponent->BindAction("Interact", IE_Pressed, this, &ABasePlayerController::HandleInteract);

    InputComponent->BindAction("Escape", IE_Pressed, this, &ABasePlayerController::HandleEscape);
}

void ABasePlayerController::HandleMoveForward(float Amount)
{
    if (CurrentGameMode != EGameMode::Game)
        return;
    
    OnMoveForward.Broadcast(Amount);
}

void ABasePlayerController::HandleMoveRight(float Amount)
{
    if (CurrentGameMode != EGameMode::Game)
        return;
    
    OnMoveRight.Broadcast(Amount);
}

void ABasePlayerController::HandleMeleeAttack()
{
    if (CurrentGameMode != EGameMode::Game)
        return;
    
    OnMeleeAttack.Broadcast();
}

void ABasePlayerController::HandleRangeAttack()
{
    if (CurrentGameMode != EGameMode::Game)
        return;
    
    OnRangeAttack.Broadcast();
}

void ABasePlayerController::HandleDash()
{
    if (CurrentGameMode != EGameMode::Game)
        return;
    
    OnDash.Broadcast();
}

void ABasePlayerController::HandleCustomAbilityPressed()
{
    if (CurrentGameMode != EGameMode::Game)
        return;
    
    OnCustomAbilityPressed.Broadcast();
}

void ABasePlayerController::HandleCustomAbilityReleased()
{
    if (CurrentGameMode != EGameMode::Game)
        return;
    
    OnCustomAbilityReleased.Broadcast();
}

void ABasePlayerController::HandleInteract()
{
    if (CurrentGameMode != EGameMode::Game)
        return;
    
    OnInteract.ExecuteIfBound();
}

void ABasePlayerController::HandleEscape()
{
    if (CurrentGameMode != EGameMode::Game)
        return;
    
    OnEscape.Broadcast();
}

void ABasePlayerController::HandleMouseMove(float Amount)
{
    if (CurrentGameMode != EGameMode::Game)
        return;
    
    OnMouseMove.Broadcast(GetMouseVector());
}
