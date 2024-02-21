// Lazy Pixel. All Rights Reserved.

#include "Character/Player/Components/WeaponComponent.h"
#include "Weapon/MeleeWeapons/Sword.h"
#include "Weapon/RangeWeapons/Gun.h"
#include "Character/BaseCharacter.h"
#include "Animations/ComboEndAnimNotify.h"
#include "Animations/RangeAttackNotify.h"
#include "Character/Player/BasePlayerController.h"
#include "Character/Player/PlayerCharacter.h"
#include "Character/Player/Components/PlayerMovementComponent.h"

DEFINE_LOG_CATEGORY_STATIC(LogWeaponComponent, All, All);

void UWeaponComponent::BeginPlay()
{
    Super::BeginPlay();

    BindInput();
}

void UWeaponComponent::BindInput()
{
    const auto controller = GetPlayerController();
    if (!controller)
        return;

    controller->OnMeleeAttack.AddUObject(this, &UWeaponComponent::MeleeAttack);
    controller->OnRangeAttack.AddUObject(this, &UWeaponComponent::RangeAttack);
}

void UWeaponComponent::OnSubscribeToNotifies(const FAnimNotifyEvent& NotifyEvent)
{
    Super::OnSubscribeToNotifies(NotifyEvent);

    SubscribeOnComboNotify(NotifyEvent);
}

void UWeaponComponent::SubscribeOnComboNotify(const FAnimNotifyEvent& NotifyEvent)
{
    auto comboNotify = Cast<UComboEndAnimNotify>(NotifyEvent.Notify);
    if (!comboNotify)
        return;

    comboNotify->FOnComboEndNotify.AddUObject(this, &UWeaponComponent::OnComboNotifyHandle);
}

void UWeaponComponent::OnComboNotifyHandle(USkeletalMeshComponent* MeshComp)
{
    if (MeshComp->GetOwner() != GetOwner())
        return;

    OnNextComboSection();
}

void UWeaponComponent::MeleeAttack()
{
    ABaseCharacter* сharacter = Cast<ABaseCharacter>(GetOwner());
    if (!сharacter) return;

    if (m_bIsComboChain || сharacter->IsUltimateActive() || сharacter->GetMesh()->GetAnimInstance()->Montage_IsPlaying(m_pRangeWeapon->GetAttackMontage()))
        return;

    if (сharacter->GetMesh()->GetAnimInstance()->IsAnyMontagePlaying())
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

void UWeaponComponent::OnMeleeStartAttackAnim()
{
    Super::OnMeleeStartAttackAnim();

    
}

void UWeaponComponent::OnRangeAttackAnim()
{
    Super::OnRangeAttackAnim();

    m_pRangeWeapon->MakeShoot(m_rangeAttackPoint);
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

APlayerCharacter* UWeaponComponent::GetPlayerCharacter() const
{
    return Cast<APlayerCharacter>(GetOwner());
}

ABasePlayerController* UWeaponComponent::GetPlayerController() const
{
    return GetPlayerCharacter() ? GetPlayerCharacter()->GetPlayerController() : nullptr;
}

UPlayerMovementComponent* UWeaponComponent::GetPlayerMovementComponent() const
{
    const auto character = Cast<ACharacter>(GetOwner());
    return character ? Cast<UPlayerMovementComponent>(character->GetMovementComponent()) : nullptr;
}
