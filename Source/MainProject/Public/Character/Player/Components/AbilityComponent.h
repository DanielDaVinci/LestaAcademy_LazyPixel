// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AbilityComponent.generated.h"


class UDashAbility;
class UPassiveAbility;
class UActiveAbility;

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class MAINPROJECT_API UAbilityComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    UAbilityComponent();

protected:
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Ability")
    TArray<TSubclassOf<UActiveAbility>> activeAbilityClasses;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Ability")
    TArray<TSubclassOf<UPassiveAbility>> passiveAbilityClasses;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Ability")
    TSubclassOf<UDashAbility> dashAbilityClass;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Ability")
    TSubclassOf<UActiveAbility> customAbilityClass;
    
    virtual void BeginPlay() override;

private:
    UPROPERTY()
    TArray<UActiveAbility*> m_activeAbilities;

    UPROPERTY()
    TArray<UPassiveAbility*> m_passiveAbilities;

    UPROPERTY()
    UDashAbility* m_dashAbility;

    UPROPERTY()
    UActiveAbility* m_customAbility;

    /** Initialize active abilities */
    void InitActiveAbility();
    
    /** Initialize passive abilities */
    void InitPassiveAbility();

    /** Initialize dash ability */
    void InitDashAbility();

    /** Initialize dash ability */
    void InitCustomAbility();

    /** Binding abilities input */
    void BindInput();

    /** Use dash on character in game */
    void UseDash();

    /** Use custom ability on character in game */
    void UseCustomAbility();
};
