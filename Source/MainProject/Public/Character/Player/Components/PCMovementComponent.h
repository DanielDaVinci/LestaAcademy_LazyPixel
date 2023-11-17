// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameFramework/MovementComponent.h"
#include "PCMovementComponent.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class MAINPROJECT_API UPCMovementComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    UPCMovementComponent();

protected:
    virtual void BeginPlay() override;

private:
    void BindInput();

    void MoveForward(float Amount);
    void MoveRight(float Amount);

    ACharacter* GetCharacter() const;
};
