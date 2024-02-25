// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/Player/Components/PlayerMovementComponent.h"

#include "Character/Player/BasePlayerController.h"
#include "Character/Player/PlayerCharacter.h"

UPlayerMovementComponent::UPlayerMovementComponent()
{
    PrimaryComponentTick.bCanEverTick = true;
    MaxAcceleration = 99999.0f;
    BrakingDecelerationWalking = 99999.0f;
}


void UPlayerMovementComponent::BeginPlay()
{
    Super::BeginPlay();

    m_maxSpeed = MaxWalkSpeed;
    
    BindInput();
}

void UPlayerMovementComponent::BindInput()
{
    const auto playerController = GetPlayerController();
    if (!playerController)
        return;

    playerController->OnMoveForward.AddUObject(this, &UPlayerMovementComponent::OnMoveForward);
    playerController->OnMoveRight.AddUObject(this, &UPlayerMovementComponent::OnMoveRight);
}

void UPlayerMovementComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
    
    RotateToInputDirection(DeltaTime);
}

void UPlayerMovementComponent::OnMoveForward(float Amount)
{
    if (!m_bCanMove)
    {
        m_inputDirection.Y = 0;
        return;
    }
    
    const auto character = GetPlayerCharacter();
    if (!character)
        return;
    
    m_inputDirection.Y = Amount;
    character->AddMovementInput(FVector(character->GetCameraForwardVector2D(), 0.0f), Amount, true);
}

void UPlayerMovementComponent::OnMoveRight(float Amount)
{
    if (!m_bCanMove)
    {
        m_inputDirection.X = 0;
        return;
    }
    
    const auto character = GetPlayerCharacter();
    if (!character || !m_bCanMove)
        return;

    m_inputDirection.X = Amount;
    character->AddMovementInput(FVector(character->GetCameraRightVector2D(), 0.0f), Amount, true);
}

void UPlayerMovementComponent::RotateToInputDirection(float DeltaTime)
{
    if (!m_bCanRotation || FMath::IsNearlyZero(m_inputDirection.Size()))
        return;

    const auto mesh = GetPlayerCharacter() ? GetPlayerCharacter()->GetMesh() : nullptr;
    if (!mesh)
        return;
    
    const auto inputDirection = InputDirToWorldDir(m_inputDirection);

    mesh->SetRelativeRotation(inputDirection.Rotation());
}

FVector UPlayerMovementComponent::InputDirToWorldDir(FVector2D InputDirection) const
{
    InputDirection = InputDirection.GetSafeNormal();

    return FVector(
        GetPlayerCharacter()->GetCameraRightVector2D() * InputDirection.X +
        GetPlayerCharacter()->GetCameraForwardVector2D() * InputDirection.Y,
        0.0f
        ).GetSafeNormal();
}

FVector UPlayerMovementComponent::GetMouseViewDirection() const
{
    const auto controller = GetPlayerController();
    if (!controller)
        return FVector::Zero();
    
    return InputDirToWorldDir(controller->GetMouseVector());
}

void UPlayerMovementComponent::FixCharacterRotation(const FRotator& FixRotation)
{
    const auto mesh = GetPlayerCharacter()->GetMesh();
    if (!mesh)
        return;

    m_bCanRotation = false;
    mesh->SetRelativeRotation(FixRotation);
}

void UPlayerMovementComponent::UnfixCharacterRotation()
{
    m_bCanRotation = true;
}

void UPlayerMovementComponent::SetDeceleration(float Deceleration)
{
    m_currentDeceleration = FMath::Clamp(Deceleration, 0.0f, 1.0f);
    MaxWalkSpeed = m_maxSpeed * (1.0f - m_currentDeceleration);
}

APlayerCharacter* UPlayerMovementComponent::GetPlayerCharacter() const
{
    return GetCharacterOwner() ? Cast<APlayerCharacter>(GetCharacterOwner()) : nullptr;
}

ABasePlayerController* UPlayerMovementComponent::GetPlayerController() const
{
    return GetPlayerCharacter() ? Cast<ABasePlayerController>(GetPlayerCharacter()->Controller) : nullptr;
}
