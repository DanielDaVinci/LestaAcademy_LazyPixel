// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/Player/BasePlayerController.h"

ABasePlayerController::ABasePlayerController()
{
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
}

void ABasePlayerController::HandleMoveForward(float Amount)
{
    OnMoveForward.Broadcast(Amount);
}

void ABasePlayerController::HandleMoveRight(float Amount)
{
    OnMoveRight.Broadcast(Amount);
}

void ABasePlayerController::HandleMeleeAttack()
{
    OnMeleeAttack.Broadcast();
}

void ABasePlayerController::HandleRangeAttack()
{
    OnRangeAttack.Broadcast();
}

void ABasePlayerController::HandleDash()
{
    OnDash.Broadcast();
}

void ABasePlayerController::HandleCustomAbilityPressed()
{
    OnCustomAbilityPressed.Broadcast();
}

void ABasePlayerController::HandleCustomAbilityReleased()
{
    OnCustomAbilityReleased.Broadcast();
}

void ABasePlayerController::HandleInteract()
{
    OnInteract.Broadcast();
}

void ABasePlayerController::HandleMouseMove(float Amount)
{
    OnMouseMove.Broadcast(GetMouseVector());
}
