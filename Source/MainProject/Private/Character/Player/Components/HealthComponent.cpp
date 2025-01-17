// Lazy Pixel. All Rights Reserved.


#include "Character/Player/Components/HealthComponent.h"

#include "AI/Characters/AIBaseCharacter.h"
#include "Character/BaseCharacter.h"
#include "NiagaraFunctionLibrary.h"

UHealthComponent::UHealthComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
    
}

void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();

    if (GetOwner()->IsA<AAIBaseCharacter>())
    {
        m_health = GetMaxHealth();
    }

    if(const auto ComponentOwner = GetOwner())
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

    if (IsDead())
    {
        if (const auto pCharacterCauser = Cast<ABaseCharacter>(InstigateBy->GetPawn()))
        {
            pCharacterCauser->OnKillEnemy.Broadcast();
        }
    }
}

void UHealthComponent::SetHealth(float Health, bool bCallBroadcast)
{
    const float previousHealth = m_health;
    m_health = FMath::Clamp(Health, 0.0, maxHealth);

    const float deltaHealth = m_health - previousHealth;

    if (bCallBroadcast)
    {
        OnHealthChanged.Broadcast(deltaHealth);
    }

    if (FMath::IsNearlyZero(m_health))
    {
        OnDied.Broadcast();
    }
}

void UHealthComponent::Heal(float HealthValue)
{
    SetHealth(GetHealth() + HealthValue);

    const ABaseCharacter* pCharacter = Cast<ABaseCharacter>(GetOwner());
    if (!pCharacter)
        return;
    
    UNiagaraFunctionLibrary::SpawnSystemAttached(healEffect, pCharacter->GetMesh(), "", GetOwner()->GetActorLocation(),
        GetOwner()->GetActorRotation(), EAttachLocation::KeepRelativeOffset, true);
}

