﻿// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/ActiveAbility.h"
#include "Components/CapsuleComponent.h"
#include "DashAbility.generated.h"

class UPlayerMovementComponent;

UCLASS()
class MAINPROJECT_API UDashAbility : public UActiveAbility
{
    GENERATED_BODY()

protected:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dash")
    float dashImpulse = 2000.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dash")
    float dashTime = 0.2f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Animation")
    UAnimMontage* dashAnimation;

    UPlayerMovementComponent* GetPlayerMovementComponent() const;

    virtual bool NativeActivate() override;

    void OnDashEnd();
    
private:
    FTimerHandle m_dashTimerHandle;
    
};
