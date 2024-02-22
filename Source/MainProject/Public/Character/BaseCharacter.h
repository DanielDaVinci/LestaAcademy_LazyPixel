// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BaseCharacter.generated.h"

class UStateMachineComponent;
class UBoxComponent;
class UTextRenderComponent;
class UHealthComponent;
class UBaseWeaponComponent;
class UAbilityComponent;

DEFINE_LOG_CATEGORY_STATIC(LogFistWeapon, All, All);
UCLASS()
class MAINPROJECT_API ABaseCharacter : public ACharacter
{
    GENERATED_BODY()

public:
    ABaseCharacter(const FObjectInitializer& ObjInit);

    void SetUltimateActive(bool bActive) { m_bUltActive = bActive; }
    bool IsUltimateActive() const { return m_bUltActive; }

protected:
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components", DisplayName = "AbilityComponent")
    UAbilityComponent* pAbilityComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components", DisplayName = "WeaponComponent")
    UBaseWeaponComponent* pWeaponComp;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components", DisplayName="HealthComponent")
    UHealthComponent* pHealthComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components", DisplayName="HealthTextComponent")
    UTextRenderComponent* pHealthTextComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components", DisplayName="StateMachineComponent")
    UStateMachineComponent* pStateMachineComponent;

    virtual void PostInitializeComponents() override;
    virtual void BeginPlay() override;
    
    virtual void OnDeath();

    bool m_bUltActive;

public:
    virtual void Tick(float DeltaTime) override;

private:
    UFUNCTION()
    void CheckHealthValue(float Health);

public:
    UStateMachineComponent* GetStateMachineComponent() const;

};
