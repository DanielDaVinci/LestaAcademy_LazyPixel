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

    void BindInput();

    void MoveForward(float Amount);
    void MoveRight(float Amount);

    void RotateToInputDirection(float DeltaTime);

    APlayerCharacter* GetCharacter() const;
};
