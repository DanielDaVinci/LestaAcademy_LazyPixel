// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HealthComponent.generated.h"

DECLARE_MULTICAST_DELEGATE_OneParam(FOnHealthChanged, float);
DECLARE_MULTICAST_DELEGATE(FOnDeath);

class UNiagaraSystem;

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class MAINPROJECT_API UHealthComponent : public UActorComponent
{
    GENERATED_BODY()
    
    friend class UDataSaveComponent;

public:
    UHealthComponent();

    FOnHealthChanged OnHealthChanged;
    FOnDeath OnDied;
    
    float GetHealth() const { return m_health; }
    float GetMaxHealth() const { return maxHealth; }
    float GetPercentHealth() const { return GetHealth() / GetMaxHealth(); }

    UFUNCTION(BlueprintCallable)
    bool IsDead() const { return m_health <= 0; }

    void Heal(float HealthValue);

protected:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMin = "0.0", ClampMax = "1000.0"))
    float maxHealth = 100.0f;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "VFX")
    UNiagaraSystem* healEffect;

    virtual void BeginPlay() override;

private:
    float m_health = 0.0f;

    void SetHealth(float Health);

    UFUNCTION()
    void OnTakeAnyDamage(AActor* DamageActor, float Damage, const UDamageType* DamageType,
        AController* InstigateBy, AActor* DamageCauser);
};