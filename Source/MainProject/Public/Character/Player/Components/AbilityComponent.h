// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/ActiveAbility.h"
#include "Character/BaseCharacter.h"
#include "Components/ActorComponent.h"
#include "AbilityComponent.generated.h"

class UBaseAbility;
class UDashAbility;
class ABaseCharacter;
class UPassiveAbility;

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class MAINPROJECT_API UAbilityComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    UAbilityComponent();

    template<class T> requires std::is_base_of_v<UActiveAbility, T>
    T* GetCustomAbility() const;
    UActiveAbility* GetCustomAbility() const { return GetCustomAbility<UActiveAbility>();  }

protected:
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Ability")
    TArray<TSubclassOf<UActiveAbility>> activeAbilityClasses;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Ability")
    TArray<TSubclassOf<UPassiveAbility>> passiveAbilityClasses;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Ability")
    TSubclassOf<UDashAbility> dashAbilityClass;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Ability")
    TSubclassOf<UActiveAbility> customAbilityClass;

    virtual void InitializeComponent() override;

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

    template<typename T>
    TArray<T*> InitArrayAbilities(const TArray<TSubclassOf<T>>& Classes);

    template<typename T> requires std::is_base_of_v<UBaseAbility, T>
    T* InitAbility(const TSubclassOf<T>& Class);

    template<typename T>
    void BeginPlayArrayAbilities(const TArray<T*>& Abilities);

    /** Binding abilities input */
    void BindInput();

    /** Use dash on character in game */
    void UseDash();

    /** Use custom ability on character in game */
    void UseCustomAbility();

    ABaseCharacter* GetCharacter() const { return Cast<ABaseCharacter>(GetOwner()); }
};

template <class T> requires std::is_base_of_v<UActiveAbility, T>
T* UAbilityComponent::GetCustomAbility() const
{
    return Cast<T>(m_customAbility);
}

template <typename T>
TArray<T*> UAbilityComponent::InitArrayAbilities(const TArray<TSubclassOf<T>>& Classes)
{
    TArray<T*> abilities;
    
    for (auto abilityClass: Classes)
    {
        T* ability = InitAbility(abilityClass);
        if (!ability)
            continue;

        abilities.Add(ability);
    }

    return abilities;
}

template <typename T> requires std::is_base_of_v<UBaseAbility, T>
T* UAbilityComponent::InitAbility(const TSubclassOf<T>& Class)
{
    const auto character = GetCharacter();
    if (!character || !Class)
        return nullptr;
        
    T* ability = NewObject<T>(this, Class);
    if (!ability)
        return nullptr;
    
    ability->Initialize(character);
    return ability;
}

template <typename T>
void UAbilityComponent::BeginPlayArrayAbilities(const TArray<T*>& Abilities)
{
    for (const auto& ability: Abilities)
    {
        if (!ability)
            continue;
        
        ability->BeginPlay();
    }
}
