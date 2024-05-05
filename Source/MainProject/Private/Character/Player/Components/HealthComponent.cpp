// Lazy Pixel. All Rights Reserved.


#include "Character/Player/Components/HealthComponent.h"

#include "AI/Characters/AIBaseCharacter.h"
#include "AI/Characters/BossAICharacter.h"
#include "Character/BaseCharacter.h"
#include "NiagaraFunctionLibrary.h"

UHealthComponent::UHealthComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
    
}

void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();

    if (GetOwner()->IsA<AAIBaseCharacter>() || GetOwner()->IsA<ABossAICharacter>())
    {
        m_health = GetMaxHealth();
    }

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

    ABaseCharacter* pCharacter = Cast<ABaseCharacter>(GetOwner());
    UNiagaraFunctionLibrary::SpawnSystemAttached(healEffect, pCharacter->GetMesh(), "", GetOwner()->GetActorLocation(),
        GetOwner()->GetActorRotation(), EAttachLocation::KeepRelativeOffset, true);
    OnHeal.Broadcast();
}

