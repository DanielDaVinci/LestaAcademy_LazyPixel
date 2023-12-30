// Lazy Pixel. All Rights Reserved.


#include "Character/Player/Components/BaseWeaponComponent.h"
#include "Weapon/MeleeWeapons/Sword.h"
#include "Character/BaseCharacter.h"
#include "Animations/MeleeAtackAnimNotifyState.h"

//DEFINE_LOG_CATEGORY_STATIC(LogBaseWeaponComponent, All, All);

UBaseWeaponComponent::UBaseWeaponComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UBaseWeaponComponent::BeginPlay()
{
	Super::BeginPlay();

    SpawnWeapons();
    InitAnimations();
}

void UBaseWeaponComponent::SpawnWeapons() 
{
    ABaseCharacter* Character = Cast<ABaseCharacter>(GetOwner());
    if (!Character || !GetWorld()) return;

    m_pMeleeWeapon = GetWorld()->SpawnActor<ASword>(WeaponClass);
    if (!m_pMeleeWeapon) return;

    FAttachmentTransformRules AttachmentRules(EAttachmentRule::SnapToTarget, false);
    m_pMeleeWeapon->AttachToComponent(Character->GetMesh(), AttachmentRules, WeaponAttachPointName);
    m_pMeleeWeapon->SetOwner(Character);
}

void UBaseWeaponComponent::InitAnimations() 
{
    if (!m_pMeleeWeapon || !m_pMeleeWeapon->GetAttackMontage())
        return;

    // m_pWeapon->GetAttackMontage()->RateScale = m_pWeapon->GetAttackSpeed();
    const auto NotifyEvents = m_pMeleeWeapon->GetAttackMontage()->Notifies;
    for (auto NotifyEvent : NotifyEvents)
    {
        auto MeleeNotifyState = Cast<UMeleeAttackAnimNotifyState>(NotifyEvent.NotifyStateClass);
        if (MeleeNotifyState)
        {
            MeleeNotifyState->FOnMeleeAttackNotify.AddUObject(this, &UBaseWeaponComponent::OnStartAttackState);
            MeleeNotifyState->FOnMeleeAttackDamageNotify.AddUObject(this, &UBaseWeaponComponent::OnEndAttackState);
            //break;
        }
    }
}

void UBaseWeaponComponent::OnStartAttackState(USkeletalMeshComponent* MeshComp) 
{
    m_pMeleeWeapon->OnOffCollision(MeshComp);
}

void UBaseWeaponComponent::OnEndAttackState() 
{
    m_pMeleeWeapon->OnDamageAllOverlapedActors();
}

void UBaseWeaponComponent::DisableMeleeCollision() 
{
    const auto Character = Cast<ACharacter>(GetOwner());
    if (!Character) return;

    m_pMeleeWeapon->DisableCollision(Character->GetMesh());
}
