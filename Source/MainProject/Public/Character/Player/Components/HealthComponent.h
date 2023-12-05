// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HealthComponent.generated.h"

DECLARE_MULTICAST_DELEGATE_OneParam(FOnHealthChanged, float);
DECLARE_MULTICAST_DELEGATE(FOnDeath);

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class MAINPROJECT_API UHealthComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    UHealthComponent();

    FOnHealthChanged OnHealthChanged;
    FOnDeath OnDeath;

    float GetHealth() const { return m_health; }
    float GetMaxHealth() const { return maxHealth; }

    UFUNCTION(BlueprintCallable)
    bool IsDead() const { return m_health <= 0; }

protected:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMin = "0.0", ClampMax = "1000.0"))
    float maxHealth = 100.0f;

    virtual void BeginPlay() override;

private:
    float m_health = 0.0f;

    UFUNCTION()
    void OnTakeAnyDamage(AActor* DamageActor, float Damage, const UDamageType* DamageType,
        AController* InstigateBy, AActor* DamageCauser);

    void SetHealth(float Health);

};
