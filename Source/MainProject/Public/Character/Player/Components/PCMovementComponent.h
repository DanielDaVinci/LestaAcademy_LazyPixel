// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameFramework/MovementComponent.h"
#include "PCMovementComponent.generated.h"


class APlayerCharacter;

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class MAINPROJECT_API UPCMovementComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    UPCMovementComponent();

protected:
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement")
    float RotationSpeed = 500.0f;

    virtual void BeginPlay() override;

public:
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
    FVector m_inputDirection{0.0f, 0.0f, 0.0f};

    /** Binding movement input */
    void BindInput();

    /**
     * Add movement input to forward camera direction
     * @param Amount Forward input value
     */
    void MoveForward(float Amount);

    /**
     * Add movement input to right camera direction
     * @param Amount Right input value
     */
    void MoveRight(float Amount);

    /**
     * Smooth rotate mesh to movement direction
     * @param DeltaTime Actor delta time tick
     */
    void RotateToInputDirection(float DeltaTime);

    /**
     * Returns current player character
     * @return Pointer of current player character
     */
    APlayerCharacter* GetCharacter() const;
};
