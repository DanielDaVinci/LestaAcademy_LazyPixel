// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "PlayerMovementComponent.generated.h"

class ABasePlayerController;
class APlayerCharacter;

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class MAINPROJECT_API UPlayerMovementComponent : public UCharacterMovementComponent
{
    GENERATED_BODY()

public:
    UPlayerMovementComponent();

protected:
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Rotation")
    float RotationSpeed = 500.0f;

    virtual void BeginPlay() override;

    /** Binding movement input */
    void BindInput();

public:
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

protected:
    /**
     * Add movement input to forward camera direction
     * @param Amount Forward input value
     */
    void OnMoveForward(float Amount);

    /**
     * Add movement input to right camera direction
     * @param Amount Right input value
     */
    void OnMoveRight(float Amount);

private:
    FVector2D m_inputDirection = {0.0f, 0.0f};
    bool m_bCanRotation = true;

    /**
     * Smooth rotate mesh to movement direction
     * @param DeltaTime Actor delta time tick
     */
    void RotateToInputDirection(float DeltaTime);

    /**
     * Convert camera direction axes to character direction axes
     * @param InputDirection Normalized vector directed along camera axes
     * @return Normalized vector converted to character axes
     */
    FVector InputDirToWorldDir(FVector2D InputDirection) const;

public:
    /**
     * @return Direction character view regarding mouse position on screen ceneter
     */
    FVector GetMouseViewDirection() const;

    /**
     * Fix character rotation
     * @param FixRotation Characters's fix rotation in end
     */
    void FixCharacterRotation(FRotator FixRotation);

    /**
     * unfix character rotation
     */
    void UnfixCharacterRotation();

public:
    APlayerCharacter* GetPlayerCharacter() const;

    ABasePlayerController* GetPlayerController() const;
};
