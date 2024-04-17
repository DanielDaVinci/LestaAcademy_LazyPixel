// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/Player/Components/HealthComponent.h"

#include "Character/BaseCharacter.h"
#include "Character/Player/BasePlayerController.h"
#include "GameFramework/Actor.h"
#include "GameFramework/Character.h"

UHealthComponent::UHealthComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
    
}

void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();
    
    SetHealth(maxHealth);

    if(AActor* ComponentOwner = GetOwner())
    {
        ComponentOwner->OnTakeAnyDamage.AddDynamic(this, &UHealthComponent::OnTakeAnyDamage);
    }
}

void UHealthComponent::OnTakeAnyDamage(AActor* DamageActor, float Damage, const UDamageType* DamageType,
        AController* InstigateBy, AActor* DamageCauser)
{
    if (Damage <= 0.0f || IsDead())
        return;

    SetHealth(m_health - Damage);
    OnTakeDamage.Broadcast();

    if (IsDead())
    {
        if (const auto pCharacterCauser = Cast<ABaseCharacter>(DamageCauser))
        {
            pCharacterCauser->OnKillEnemy.Broadcast();
        }
    }
}

void UHealthComponent::SetHealth(float Health)
{
    const float previousHealth = m_health;
    m_health = FMath::Clamp(Health, 0.0, maxHealth);

    const float deltaHealth = m_health - previousHealth;
    OnHealthChanged.Broadcast(deltaHealth);

    if (FMath::IsNearlyZero(m_health))
    {
        OnDied.Broadcast();
    }
}

void UHealthComponent::Heal(float HealthValue)
{
    SetHealth(GetHealth() + HealthValue);
    OnHeal.Broadcast();
}

