// Lazy Pixel. All Rights Reserved.

#include "Character/Player/Components/WeaponComponent.h"
#include "Weapon/MeleeWeapons/Sword.h"
#include "Weapon/RangeWeapons/Gun.h"
#include "Character/BaseCharacter.h"
#include "Animations/ComboEndAnimNotify.h"
#include "Animations/RangeAttackNotify.h"
#include "Character/Player/BasePlayerController.h"
#include "Character/Player/Components/PlayerMovementComponent.h"

DEFINE_LOG_CATEGORY_STATIC(LogWeaponComponent, All, All);

void UWeaponComponent::BeginPlay()
{
    Super::BeginPlay();

    ABaseCharacter* Character = Cast<ABaseCharacter>(GetOwner());
    if (!Character) return;
}

void UWeaponComponent::SpawnWeapons()
{
    Super::SpawnWeapons();

    ABaseCharacter* Character = Cast<ABaseCharacter>(GetOwner());
    if (!Character || !GetWorld()) return;

    m_pRangeWeapon = GetWorld()->SpawnActor<AGun>(RangeWeaponClass);
    if (!m_pRangeWeapon) return;

    FAttachmentTransformRules AttachmentRules(EAttachmentRule::SnapToTarget, false);
    m_pRangeWeapon->AttachToComponent(Character->GetMesh(), AttachmentRules, RangeWeaponAttachPointName);
    m_pRangeWeapon->SetOwner(Character);
}

void UWeaponComponent::InitAnimations()
{
    Super::InitAnimations();

    if (!m_pBaseWeapon || !m_pBaseWeapon->GetAttackMontage())
        return;

    const auto NotifyEvents = m_pBaseWeapon->GetAttackMontage()->Notifies;
    for (auto NotifyEvent : NotifyEvents)
    {
        auto ComboNotify = Cast<UComboEndAnimNotify>(NotifyEvent.Notify);
        if (ComboNotify)
            ComboNotify->FOnComboEndNotify.AddUObject(this, &UWeaponComponent::OnNextComboSection);
    }

    const auto RangeNotifyEvents = m_pRangeWeapon->GetAttackMontage()->Notifies;
    for (auto NotifyEvent : RangeNotifyEvents)
    {
        auto RangeNotify = Cast<URangeAttackNotify>(NotifyEvent.Notify);
        if (RangeNotify)
            RangeNotify->FOnRangeAttackNotify.AddUObject(this, &UWeaponComponent::OnRangeNotifyHandle);

        auto ComboNotify = Cast<UComboEndAnimNotify>(NotifyEvent.Notify);
        if (ComboNotify)
            ComboNotify->FOnComboEndNotify.AddUObject(this, &UWeaponComponent::OnNextComboSection);
    } 
}

void UWeaponComponent::MeleeAttack()
{
    ABaseCharacter* Character = Cast<ABaseCharacter>(GetOwner());
    if (!Character) return;

    if (m_bIsComboChain || Character->IsUltimateActive() || Character->GetMesh()->GetAnimInstance()->Montage_IsPlaying(m_pRangeWeapon->GetAttackMontage()))
        return;

    if (Character->GetMesh()->GetAnimInstance()->IsAnyMontagePlaying())
    {
        m_bIsComboChain = true;
        if (m_bWasFirstAttack)
            m_nComboIndex++;
        return;
    }

    PlayMeleeAttackAnim();
}

void UWeaponComponent::PlayMeleeAttackAnim()
{
    ABaseCharacter* Character = Cast<ABaseCharacter>(GetOwner());
    if (!Character) return;

    ASword* pMeleeWeapon = Cast<ASword>(m_pBaseWeapon);

    const auto ComboInfo = pMeleeWeapon->GetComboInfo();
    if (!ComboInfo.IsValidIndex(m_nComboIndex))
        return;

    const auto pmComponent = GetPlayerMovementComponent();
    if (!pmComponent) 
        return;

    FRotator viewRotation = pmComponent->GetMouseViewDirection().Rotation();
    pmComponent->FixCharacterRotation(viewRotation);
    pmComponent->SetDeceleration(ComboInfo[m_nComboIndex].deceleration);

    m_bWasFirstAttack = true;
    pMeleeWeapon->SetDamage(ComboInfo[m_nComboIndex].damage);
    Character->GetMesh()->GetAnimInstance()->SetRootMotionMode(ComboInfo[m_nComboIndex].rootMotionMode);
    Character->PlayAnimMontage(pMeleeWeapon->GetAttackMontage(), ComboInfo[m_nComboIndex].sectionRateScale, ComboInfo[m_nComboIndex].attackSectionName);
}

void UWeaponComponent::OnRangeNotifyHandle(USkeletalMeshComponent* MeshComp)
{
    if (GetOwner() != MeshComp->GetOwner() || !m_pRangeWeapon)
        return;
    
    m_pRangeWeapon->MakeShoot(m_rangeAttackPoint);
}

void UWeaponComponent::OnNextComboSection()
{
    ASword* pMeleeWeapon = Cast<ASword>(m_pBaseWeapon);
    if (!m_bIsComboChain || m_nComboIndex >= pMeleeWeapon->GetComboInfo().Num())
    {
        //UE_LOG(LogWeaponComponent, Display, TEXT("Notify clear!"));
        const auto pmComponent = GetPlayerMovementComponent();
        if (!pmComponent)
            return;

        pmComponent->SetDeceleration(0.0f);
        pmComponent->UnfixCharacterRotation();

        m_nComboIndex = 0;
        m_bWasFirstAttack = false;
    }
    else
    {
        //UE_LOG(LogWeaponComponent, Display, TEXT("Notify attack!"));
        PlayMeleeAttackAnim();
    }

    m_bIsComboChain = false;
}

void UWeaponComponent::RangeAttack()
{
    ABaseCharacter* Character = Cast<ABaseCharacter>(GetOwner());
    if (!Character) return;

    if (Character->IsUltimateActive() || Character->GetMesh()->GetAnimInstance()->Montage_IsPlaying(m_pRangeWeapon->GetAttackMontage()))
        return;

    m_bIsComboChain = false; 

    const auto playerController = Cast<ABasePlayerController>(Character->GetController());
    const auto pmComponent = GetPlayerMovementComponent();
    if (!playerController || !pmComponent)
        return;

    m_rangeAttackPoint = playerController->GetWorldPointUnderMouse();
    if (m_rangeAttackPoint == FVector())
        return;

    const FRotator viewRotation = (m_rangeAttackPoint - Character->GetActorLocation()).Rotation();
    pmComponent->FixCharacterRotation(FRotator(0.0f, viewRotation.Yaw, 0.0f));
    pmComponent->SetDeceleration(1.f);

    Character->PlayAnimMontage(m_pRangeWeapon->GetAttackMontage());
}

UPlayerMovementComponent* UWeaponComponent::GetPlayerMovementComponent() const
{
    const auto character = Cast<ACharacter>(GetOwner());
    return character ? Cast<UPlayerMovementComponent>(character->GetMovementComponent()) : nullptr;
}
