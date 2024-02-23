// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/ActiveAbility.h"
#include "Character/Player/PlayerCoreTypes.h"
#include "DashAbility.generated.h"

class ACollisionCube;
class UStateMachineComponent;
class UPlayerMovementComponent;

UCLASS()
class MAINPROJECT_API UDashAbility : public UActiveAbility
{
    GENERATED_BODY()

protected:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dash")
    float dashImpulse = 2000.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dash")
    float dashDistance = 1000.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dash")
    float dashTime = 0.2f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Dash")
    UAnimMontage* dashAnimation;

    virtual void BeginPlay() override;
    
protected:
    virtual bool NativeActivate() override;
    
    void OnStartDashState();
    void OnEndDashState(EStateResult StateResult);
    
private:
    FTimerHandle m_dashTimer;
    float m_timerRate = 0.01f;
    
    void OnDashTimerUpdate(FVector Direction);
    
protected:
    UPlayerMovementComponent* GetPlayerMovementComponent() const;
    UStateMachineComponent* GetStateMachineComponent() const;

private:
    friend UAbilityComponent;
    
};
