// Lazy Pixel. All Rights Reserved.


#include "Character/Player/Components/WeaponComponent.h"
#include "Weapon/MeleeWeapons/Sword.h"
#include "Weapon/RangeWeapons/Gun.h"
#include "Character/BaseCharacter.h"
#include "Animations/ComboEndAnimNotify.h"
#include "Character/Player/Components/PlayerMovementComponent.h"
#include "Character/Player/Components/AbilityComponent.h"
#include "Abilities/ActiveAbilities/DashAbility.h"

DEFINE_LOG_CATEGORY_STATIC(LogWeaponComponent, All, All);

void UWeaponComponent::BeginPlay()
{
    Super::BeginPlay();

    ABaseCharacter* Character = Cast<ABaseCharacter>(GetOwner());
    if (!Character) return;

    Character->GetMesh()->GetAnimInstance()->OnMontageEnded.AddDynamic(this, &UWeaponComponent::OnAttackMontageEnded);
}

void UWeaponComponent::SpawnWeapons()
{
    Super::SpawnWeapons();

    ABaseCharacter* Character = Cast<ABaseCharacter>(GetOwner());
    if (!Character || ! GetWorld()) return;  

    m_pRangeWeapon = GetWorld()->SpawnActor<AGun>(RangeWeaponClass);
    if (!m_pRangeWeapon) return;

    FAttachmentTransformRules AttachmentRules(EAttachmentRule::SnapToTarget, false);
    m_pRangeWeapon->AttachToComponent(Character->GetMesh(), AttachmentRules, RangeWeaponAttachPointName);
    m_pRangeWeapon->SetOwner(Character);
}

void UWeaponComponent::InitAnimations() 
{
    Super::InitAnimations();

    if (!m_pMeleeWeapon || !m_pMeleeWeapon->GetAttackMontage())
        return;

    const auto NotifyEvents = m_pMeleeWeapon->GetAttackMontage()->Notifies;
    for (auto NotifyEvent : NotifyEvents)
    {
        auto ComboNotify = Cast<UComboEndAnimNotify>(NotifyEvent.Notify);
        if (ComboNotify)
            ComboNotify->FOnComboEndNotify.AddUObject(this, &UWeaponComponent::OnNextComboSection);
    }
}

void UWeaponComponent::MeleeAttack() 
{
    ABaseCharacter* Character = Cast<ABaseCharacter>(GetOwner());
    if (!Character) return;

    UAnimMontage* dashMontage = Character->GetComponentByClass<UAbilityComponent>()->GetDashAbility()->GetDashMontage();
    if (Character->GetMesh()->GetAnimInstance()->Montage_IsPlaying(dashMontage))
    {
        UE_LOG(LogWeaponComponent, Display, TEXT("Attack in Dash!"));
        PlayMeleeAttackAnim();
        return;
    }

    if (m_bIsComboChain)
        return;

    if (Character->GetMesh()->GetAnimInstance()->IsAnyMontagePlaying())
    {
        m_bIsComboChain = true;
        m_nComboIndex++;
        return;
    }

    PlayMeleeAttackAnim();
}

void UWeaponComponent::PlayMeleeAttackAnim() 
{
    ABaseCharacter* Character = Cast<ABaseCharacter>(GetOwner());
    if (!Character) return;

    const auto ComboInfo = m_pMeleeWeapon->GetComboInfo();
    if (!ComboInfo.IsValidIndex(m_nComboIndex))
        return;

    const auto pmComponent = GetPlayerMovementComponent();
    if (!pmComponent)
        return;

    FRotator viewRotation = pmComponent->GetMouseViewDirection().Rotation();
    pmComponent->FixCharacterRotation(viewRotation);
    pmComponent->SetDeceleration(ComboInfo[m_nComboIndex].deceleration);

    Character->GetMesh()->GetAnimInstance()->SetRootMotionMode(ComboInfo[m_nComboIndex].rootMotionMode);
    Character->PlayAnimMontage(m_pMeleeWeapon->GetAttackMontage(), ComboInfo[m_nComboIndex].sectionRateScale, ComboInfo[m_nComboIndex].attackSectionName);
}

void UWeaponComponent::OnNextComboSection() 
{
    if (!m_bIsComboChain || m_nComboIndex >= m_pMeleeWeapon->GetComboInfo().Num())
    {
        UE_LOG(LogWeaponComponent, Display, TEXT("Notify clear!"));
        const auto pmComponent = GetPlayerMovementComponent();
        if (!pmComponent)
            return;

        pmComponent->SetDeceleration(0.0f);
        pmComponent->UnfixCharacterRotation();
       
        m_nComboIndex = 0;
    }
    else
    {
        UE_LOG(LogWeaponComponent, Display, TEXT("Notify attack!"));
        PlayMeleeAttackAnim();
    }

    m_bIsComboChain = false;
}

void UWeaponComponent::OnAttackMontageEnded(UAnimMontage* Montage, bool bInterrupted) 
{
    if (m_pMeleeWeapon->GetAttackMontage() == Montage && bInterrupted)
    {
        UE_LOG(LogWeaponComponent, Display, TEXT("Attack Interrupted!"));
        if (!m_bIsComboChain)
            m_nComboIndex++;
        m_bIsComboChain = false;
    }
}

UPlayerMovementComponent* UWeaponComponent::GetPlayerMovementComponent() const
{
    const auto character = Cast<ACharacter>(GetOwner());
    return character ? Cast<UPlayerMovementComponent>(character->GetMovementComponent()) : nullptr;
}
