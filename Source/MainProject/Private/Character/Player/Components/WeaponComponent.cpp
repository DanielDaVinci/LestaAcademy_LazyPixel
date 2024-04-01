// Lazy Pixel. All Rights Reserved.

#include "Character/Player/Components/WeaponComponent.h"
#include "Weapon/MeleeWeapons/Sword.h"
#include "Weapon/RangeWeapons/Gun.h"
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
    BindEvents();

    if (const auto pRangeWeapon = FindWeapon<AGun>())
    {
        DropWeapon(pRangeWeapon->StaticClass());
        pRangeWeapon->Destroy();
    }
    //SubscribeOnDropRangeWeapon();
}

void UWeaponComponent::BindInput()
{
    const auto controller = GetPlayerController();
    if (!controller)
        return;

    controller->OnMeleeAttack.AddUObject(this, &UWeaponComponent::MeleeAttack);
    controller->OnRangeAttack.AddUObject(this, &UWeaponComponent::RangeAttack);
}

void UWeaponComponent::BindEvents()
{
    if (const auto MeleeWeapon = GetMeleeWeapon())
    {
        MeleeWeapon->OnImpactHit.AddWeakLambda(this, [this]()
        {
            OnMeleeAttackHasHit.Broadcast(); 
        });
    }
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
    
}

void UWeaponComponent::MeleeAttack()
{
    const auto pCharacter = GetPlayerCharacter();
    const auto pMeleeWeapon = FindWeapon<ASword>();
    if (!pCharacter || !pMeleeWeapon)
        return;

    const auto pStateMachine = GetPlayerCharacter()->GetStateMachineComponent();
    if (!pStateMachine)
        return;

    if (pStateMachine->GetCurrentState().Priority >= EStatePriority::Medium)
        return;

    const auto comboInfo = pMeleeWeapon->GetComboInfo();
    if (m_nextComboIndex >= comboInfo.Num())
        return;
    
    FState meleeState(
        "ComboAttack",
        comboInfo[m_nextComboIndex].AnimationTime,
        m_nextComboIndex == 0 ? EStatePriority::Light : EStatePriority::Light
    );
    
    meleeState.OnStartState.AddUObject(this, &UWeaponComponent::OnStartComboState, m_nextComboIndex);
    meleeState.OnEndState.AddUObject(this, &UWeaponComponent::OnEndComboState, m_nextComboIndex);

    pStateMachine->AddState(meleeState);
    m_nextComboIndex++;
}

void UWeaponComponent::PlayMeleeWeaponComboAnim(ASword* Weapon, int32 ComboIndex) const
{
    const auto pCharacter = GetPlayerCharacter();
    if (!pCharacter || !pCharacter->GetMesh() || !Weapon || !Weapon->GetAttackMontage())
        return;

    const auto comboInfo = Weapon->GetComboInfo();
    if (!comboInfo.IsValidIndex(ComboIndex))
        return;
    
    pCharacter->GetMesh()->GetAnimInstance()->SetRootMotionMode(comboInfo[ComboIndex].RootMotionMode);
    
    pCharacter->PlayAnimMontage(
        Weapon->GetAttackMontage(),
        Weapon->GetAttackMontage()->GetSectionLength(ComboIndex) / comboInfo[ComboIndex].AnimationTime,
        comboInfo[ComboIndex].AttackSectionName);
}

void UWeaponComponent::OnStartComboState(int32 ComboIndex)
{
    const auto pCharacter = GetPlayerCharacter();
    const auto pPlayerController = GetPlayerController();
    const auto pMovementComponent = GetPlayerMovementComponent();
    const auto pMeleeWeapon = FindWeapon<ASword>();
    if (!pCharacter || !pPlayerController || !pMovementComponent || !pMeleeWeapon)
        return;

    const auto comboInfo = pMeleeWeapon->GetComboInfo();
    if (!comboInfo.IsValidIndex(ComboIndex))
        return;
    
    const FVector attackPoint = pPlayerController->GetWorldPointUnderMouse();
    if (attackPoint == FVector::ZeroVector)
        return;
    
    FRotator viewRotation = (attackPoint - pCharacter->GetActorLocation()).Rotation();
    viewRotation.Pitch = 0.0f;
    pMovementComponent->FixCharacterRotation(viewRotation);
    pMovementComponent->SetDeceleration(comboInfo[ComboIndex].Deceleration);

    pMeleeWeapon->EnableAttackCollision();
    pMeleeWeapon->SetDamage(comboInfo[ComboIndex].Damage);
    
    PlayMeleeWeaponComboAnim(pMeleeWeapon, ComboIndex);
}

void UWeaponComponent::OnEndComboState(EStateResult StateResult, int32 ComboIndex)
{
    const auto pMovementComponent = GetPlayerMovementComponent();
    const auto pMeleeWeapon = FindWeapon<ASword>();
    const auto pStateMachine = GetStateMachineComponent();
    if (!pMovementComponent || !pMeleeWeapon || !pStateMachine)
        return;

    const auto comboInfo = pMeleeWeapon->GetComboInfo();
    if (!comboInfo.IsValidIndex(ComboIndex))
        return;

    pMovementComponent->UnfixCharacterRotation();
    pMovementComponent->SetDeceleration(0.0f);
    
    pMeleeWeapon->DisableAttackCollision();
    
    if (StateResult == EStateResult::Aborted || ComboIndex == comboInfo.Num() - 1 || !pStateMachine->HasNextState())
        m_nextComboIndex = 0;
}

void UWeaponComponent::OnMeleeStartAttackAnim()
{
    Super::OnMeleeStartAttackAnim();

    
}

void UWeaponComponent::OnRangeAttackAnim()
{
    Super::OnRangeAttackAnim();
    
    if (const auto pRangeWeapon = FindWeapon<AGun>())
        pRangeWeapon->MakeShoot(m_rangeAttackPoint);
}

void UWeaponComponent::RangeAttack()
{
    const auto pRangeWeapon = FindWeapon<AGun>();
    const auto pPlayerController = GetPlayerController();
    const auto pStateMachine = GetStateMachineComponent();
    
    if (!pRangeWeapon || !pPlayerController || !pStateMachine)
        return;

    if (pStateMachine->GetCurrentState().Name == "RangeState")
        return;

    FVector attackPoint = pPlayerController->GetWorldPointUnderMouse();
    if (attackPoint == FVector::ZeroVector)
        return;

    FState rangeState(
        "RangeState",
        pRangeWeapon->GetAttackMontage()->GetSectionLength(0) / pRangeWeapon->GetAttackMontage()->RateScale,
        EStatePriority::Medium
    );

    rangeState.OnStartState.AddUObject(this, &UWeaponComponent::OnStartRangeState, attackPoint);
    rangeState.OnEndState.AddUObject(this, &UWeaponComponent::OnEndRangeState);

    pStateMachine->AddState(rangeState);
}

void UWeaponComponent::OnStartRangeState(FVector WorldPointToRotate)
{
    const auto pCharacter = GetPlayerCharacter();
    const auto pRangeWeapon = FindWeapon<AGun>();
    const auto pmComponent = GetPlayerMovementComponent();
    
    if (!pCharacter || !pRangeWeapon || !pmComponent)
        return;

    m_rangeAttackPoint = WorldPointToRotate;
    
    const FRotator viewRotation = (WorldPointToRotate - pCharacter->GetActorLocation()).Rotation();
    pmComponent->FixCharacterRotation(FRotator(0.0f, viewRotation.Yaw, 0.0f));
    pmComponent->SetDeceleration(1.f);

    pCharacter->PlayAnimMontage(pRangeWeapon->GetAttackMontage());
}

void UWeaponComponent::OnEndRangeState(EStateResult StateResult)
{
    const auto pmComponent = GetPlayerMovementComponent();
    if (!pmComponent)
        return;

    pmComponent->UnfixCharacterRotation();
    pmComponent->SetDeceleration(0.0f);
}

void UWeaponComponent::DropWeapon(const TSubclassOf<ABaseWeapon> WeaponClass) 
{
    if (const auto Weapon = FindWeapon(WeaponClass))
    {
        Weapon->Detach();
        weapons.Remove(Weapon);
    }
}

void UWeaponComponent::SubscribeOnDropRangeWeapon() 
{
    if (const auto pRangeWeapon = FindWeapon<AGun>())
        pRangeWeapon->OnEmptyAmmo.AddUObject(this, &UWeaponComponent::DropWeapon, TSubclassOf<ABaseWeapon>(pRangeWeapon->StaticClass()));
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

UStateMachineComponent* UWeaponComponent::GetStateMachineComponent() const
{
    return GetPlayerCharacter() ? GetPlayerCharacter()->GetStateMachineComponent() : nullptr;
}
