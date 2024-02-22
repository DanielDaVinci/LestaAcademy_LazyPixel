// Lazy Pixel. All Rights Reserved.

#include "Character/Player/Components/WeaponComponent.h"
#include "Weapon/MeleeWeapons/Sword.h"
#include "Weapon/RangeWeapons/Gun.h"
#include "Character/BaseCharacter.h"
#include "Animations/ComboEndAnimNotify.h"
#include "Character/Player/BasePlayerController.h"
#include "Character/Player/PlayerCharacter.h"
#include "Character/Player/Components/PlayerMovementComponent.h"
#include "Character/Player/Components/StateMachineComponent.h"

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
    const auto сharacter = GetPlayerCharacter();
    if (!сharacter) return;

    const auto pRangeWeapon = FindWeapon<AGun>();
    if (!pRangeWeapon)
        return;
    
    if (m_bIsComboChain || сharacter->IsUltimateActive() || сharacter->GetMesh()->GetAnimInstance()->Montage_IsPlaying(pRangeWeapon->GetAttackMontage()))
        return;

    if (сharacter->GetMesh()->GetAnimInstance()->IsAnyMontagePlaying())
    {
        m_bIsComboChain = true;
        if (m_bWasFirstAttack)
            m_nComboIndex++;
        return;
    }

    FState state(5.0f, EStatePriority::Hard);
    state.OnStartState.AddLambda([]()
    {
       UE_LOG(LogTemp, Warning, TEXT("Start")); 
    });
    state.OnEndState.AddLambda([]()
    {
        UE_LOG(LogTemp, Warning, TEXT("End"));
    });

    GetPlayerCharacter()->GetStateMachineComponent()->AddState(state);

    PlayMeleeAttackAnim();
}

void UWeaponComponent::PlayMeleeAttackAnim()
{
    const auto character = GetPlayerCharacter();
    if (!character) return;

    const auto pMeleeWeapon = FindWeapon<ASword>();
    if (!pMeleeWeapon)
        return;

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
    character->GetMesh()->GetAnimInstance()->SetRootMotionMode(ComboInfo[m_nComboIndex].rootMotionMode);
    character->PlayAnimMontage(pMeleeWeapon->GetAttackMontage(), ComboInfo[m_nComboIndex].sectionRateScale, ComboInfo[m_nComboIndex].attackSectionName);
}

void UWeaponComponent::OnNextComboSection()
{
    const auto pMeleeWeapon = FindWeapon<ASword>();
    if (!pMeleeWeapon)
        return;
    
    if (!m_bIsComboChain || m_nComboIndex >= pMeleeWeapon->GetComboInfo().Num())
    {
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
        PlayMeleeAttackAnim();
    }

    m_bIsComboChain = false;
}

void UWeaponComponent::OnMeleeStartAttackAnim()
{
    Super::OnMeleeStartAttackAnim();
    
    if (const auto pSword = FindWeapon<ASword>())
        pSword->OnOffCollision();
}

void UWeaponComponent::OnRangeAttackAnim()
{
    Super::OnRangeAttackAnim();
    
    if (const auto pRangeWeapon = FindWeapon<AGun>())
        pRangeWeapon->MakeShoot(m_rangeAttackPoint);
}

void UWeaponComponent::RangeAttack()
{
    ABaseCharacter* character = Cast<ABaseCharacter>(GetOwner());
    if (!character) return;

    const auto pRangeWeapon = FindWeapon<AGun>();
    if (!pRangeWeapon)
        return;

    if (character->IsUltimateActive() || character->GetMesh()->GetAnimInstance()->Montage_IsPlaying(pRangeWeapon->GetAttackMontage()))
        return;

    m_bIsComboChain = false; 

    const auto playerController = Cast<ABasePlayerController>(character->GetController());
    const auto pmComponent = GetPlayerMovementComponent();
    if (!playerController || !pmComponent)
        return;

    m_rangeAttackPoint = playerController->GetWorldPointUnderMouse();
    if (m_rangeAttackPoint == FVector::ZeroVector)
        return;

    const FRotator viewRotation = (m_rangeAttackPoint - character->GetActorLocation()).Rotation();
    pmComponent->FixCharacterRotation(FRotator(0.0f, viewRotation.Yaw, 0.0f));
    pmComponent->SetDeceleration(1.f);

    character->PlayAnimMontage(pRangeWeapon->GetAttackMontage());
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
    return GetPlayerCharacter() ? Cast<UPlayerMovementComponent>(GetPlayerCharacter()->GetMovementComponent()) : nullptr;
}
