// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/Player/Components/PCMovementComponent.h"

#include "Character/BaseCharacter.h"
#include "Character/Player/BasePlayerController.h"
#include "Character/Player/PlayerCharacter.h"

UPCMovementComponent::UPCMovementComponent()
{
    PrimaryComponentTick.bCanEverTick = true;
}


void UPCMovementComponent::BeginPlay()
{
    Super::BeginPlay();

    BindInput();
}

void UPCMovementComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    RotateToInputDirection(DeltaTime);
}

void UPCMovementComponent::BindInput()
{
    const auto playerController = Cast<ABasePlayerController>(GetOwner());
    if (!playerController)
        return;

    playerController->OnMoveForward.AddUObject(this, &UPCMovementComponent::MoveForward);
    playerController->OnMoveRight.AddUObject(this, &UPCMovementComponent::MoveRight);
}

void UPCMovementComponent::MoveForward(float Amount)
{
    const auto character = GetCharacter();
    if (!character)
        return;

    m_inputDirection.Y = Amount;
    character->AddMovementInput(FVector(character->GetCameraForwardVector2D(), 0.0f), Amount);
}

void UPCMovementComponent::MoveRight(float Amount)
{
    const auto character = GetCharacter();
    if (!character)
        return;

    m_inputDirection.X = Amount;
    character->AddMovementInput(FVector(character->GetCameraRightVector2D(), 0.0f), Amount);
}

void UPCMovementComponent::RotateToInputDirection(float DeltaTime)
{
    if (FMath::IsNearlyZero(m_inputDirection.Size()))
        return;

    const auto mesh = GetCharacter() ? GetCharacter()->GetMesh() : nullptr;
    if (!mesh)
        return;

    const auto currentMeshVector = mesh->GetRightVector();
    auto inputDirection = FVector(GetCharacter()->GetCameraRightVector2D() * m_inputDirection.X +
                          GetCharacter()->GetCameraForwardVector2D() * m_inputDirection.Y, 0.0f);
    inputDirection = inputDirection.GetSafeNormal2D();

    float yawAngle = FMath::Acos(FVector::DotProduct(currentMeshVector, inputDirection));
    yawAngle *= FMath::Sign(FVector::CrossProduct(currentMeshVector, inputDirection).Z);

    auto meshRotation = mesh->GetRelativeRotation();
    meshRotation.Yaw += yawAngle * DeltaTime * RotationSpeed;

    mesh->SetRelativeRotation(meshRotation);
}

APlayerCharacter* UPCMovementComponent::GetCharacter() const
{
    const auto playerController = Cast<ABasePlayerController>(GetOwner());
    return playerController ? Cast<APlayerCharacter>(playerController->GetCharacter()) : nullptr;
}
