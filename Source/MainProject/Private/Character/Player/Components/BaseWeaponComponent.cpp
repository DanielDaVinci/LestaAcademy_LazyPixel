// Lazy Pixel. All Rights Reserved.


#include "Character/Player/Components/BaseWeaponComponent.h"
#include "Weapon/MeleeWeapons/Sword.h"
#include "Weapon/RangeWeapons/Gun.h"
#include "Character/BaseCharacter.h"
#include "Animations/MeleeAtackAnimNotifyState.h"
#include "Animations/RangeAttackNotify.h"

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

    m_pBaseWeapon = GetWorld()->SpawnActor<ABaseWeapon>(WeaponClass);
    if (!m_pBaseWeapon) return;

    FAttachmentTransformRules AttachmentRules(EAttachmentRule::SnapToTarget, false);
    m_pBaseWeapon->AttachToComponent(Character->GetMesh(), AttachmentRules, WeaponAttachPointName);
    m_pBaseWeapon->SetOwner(Character);
}

void UBaseWeaponComponent::InitAnimations() 
{
    if (!m_pBaseWeapon || !m_pBaseWeapon->GetAttackMontage())
        return;

    // m_pWeapon->GetAttackMontage()->RateScale = m_pWeapon->GetAttackSpeed();
    const auto NotifyEvents = m_pBaseWeapon->GetAttackMontage()->Notifies;
    for (auto NotifyEvent : NotifyEvents)
    {
        auto MeleeNotifyState = Cast<UMeleeAttackAnimNotifyState>(NotifyEvent.NotifyStateClass);
        if (MeleeNotifyState)
        {
            MeleeNotifyState->FOnMeleeAttackNotify.AddUObject(this, &UBaseWeaponComponent::OnStartAttackState);
            MeleeNotifyState->FOnMeleeAttackDamageNotify.AddUObject(this, &UBaseWeaponComponent::OnEndAttackState);
            //break;
        }

        auto RangeNotify = Cast<URangeAttackNotify>(NotifyEvent.Notify);
        if (RangeNotify)
            if (AGun* pRangeWeapon = Cast<AGun>(m_pBaseWeapon))
                RangeNotify->FOnRangeAttackNotify.AddUObject(pRangeWeapon, &AGun::MakeShot);
    }
}

void UBaseWeaponComponent::OnStartAttackState(USkeletalMeshComponent* MeshComp) 
{
    if (ASword* pMeleeWeapon = Cast<ASword>(m_pBaseWeapon))
        pMeleeWeapon->OnOffCollision(MeshComp);
}

void UBaseWeaponComponent::OnEndAttackState() 
{
    if (ASword* pMeleeWeapon = Cast<ASword>(m_pBaseWeapon))
        pMeleeWeapon->OnDamageAllOverlapedActors();
}

void UBaseWeaponComponent::DisableMeleeCollision() 
{
    const auto Character = Cast<ACharacter>(GetOwner());
    if (!Character) return;

    if (ASword* pMeleeWeapon = Cast<ASword>(m_pBaseWeapon))
        pMeleeWeapon->DisableCollision(Character->GetMesh());
}
