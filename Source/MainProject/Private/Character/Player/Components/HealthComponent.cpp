// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/Player/Components/HealthComponent.h"

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
    if (Damage <= 0.0f || IsDead()) return;

    SetHealth(m_health - Damage);
}

void UHealthComponent::SetHealth(float Health)
{
    m_health = FMath::Clamp(Health, 0.0, maxHealth);
    OnHealthChanged.Broadcast(m_health);

    if (FMath::IsNearlyZero(m_health))
    {
        OnDeath.Broadcast();
    }
}

void UHealthComponent::Heal(float HealthValue)
{
    SetHealth(GetHealth() + HealthValue);
}

