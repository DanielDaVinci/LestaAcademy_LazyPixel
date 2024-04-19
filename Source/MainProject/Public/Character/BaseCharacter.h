// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BaseCharacter.generated.h"

class UPlayerWeaponComponent;
DECLARE_MULTICAST_DELEGATE(FOnKillEnemySignature)

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

    FOnKillEnemySignature OnKillEnemy;

    bool IsDead() const;
    UHealthComponent* GetHealthComponent() const;
    UBaseWeaponComponent* GetBaseWeaponComponent() const;
    void ResetCollisions() const;

protected:
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components", DisplayName = "AbilityComponent")
    UAbilityComponent* pAbilityComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components", DisplayName = "WeaponComponent")
    UBaseWeaponComponent* pWeaponComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components", DisplayName="HealthComponent")
    UHealthComponent* pHealthComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components", DisplayName="StateMachineComponent")
    UStateMachineComponent* pStateMachineComponent;

    virtual void PostInitializeComponents() override;
    virtual void BeginPlay() override;
    
    virtual void OnDeath();

    UFUNCTION(BlueprintImplementableEvent)
    void OnDied();

public:
    virtual void Tick(float DeltaTime) override;

public:
    UStateMachineComponent* GetStateMachineComponent() const;
    UAbilityComponent* GetAbilityComponent() const;
};
