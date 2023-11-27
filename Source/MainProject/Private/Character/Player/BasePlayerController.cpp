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

void ABasePlayerController::SetupInputComponent()
{
    Super::SetupInputComponent();

    InputComponent->BindAxis("MoveForward", this, &ABasePlayerController::HandleMoveForward);
    InputComponent->BindAxis("MoveRight", this, &ABasePlayerController::HandleMoveRight);

    InputComponent->BindAction("Attack", IE_Pressed, this, &ABasePlayerController::HandleAttack);
    InputComponent->BindAction("HardAttack", IE_Pressed, this, &ABasePlayerController::HandleHardAttack);
    InputComponent->BindAction("Dash", IE_Pressed, this, &ABasePlayerController::HandleDash);
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

void ABasePlayerController::HandleAttack()
{
    OnAttack.Broadcast();
}

void ABasePlayerController::HandleHardAttack()
{
    OnHardAttack.Broadcast();
}

void ABasePlayerController::HandleDash()
{
    OnDash.Broadcast();
}

void ABasePlayerController::HandleInteract()
{
    OnInteract.Broadcast();
}
