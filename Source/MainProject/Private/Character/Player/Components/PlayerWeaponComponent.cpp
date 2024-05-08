// Lazy Pixel. All Rights Reserved.

#include "Character/Player/Components/PlayerWeaponComponent.h"

#include "MainProjectGameInstance.h"
#include "Weapon/MeleeWeapons/Sword.h"
#include "Weapon/RangeWeapons/Gun.h"
#include "Animations/ComboEndAnimNotify.h"
#include "Character/Player/BasePlayerController.h"
#include "Character/Player/PlayerCharacter.h"
#include "Character/Player/Components/PlayerMovementComponent.h"
#include "Character/Player/Components/StateMachineComponent.h"

DEFINE_LOG_CATEGORY_STATIC(LogWeaponComponent, All, All);

void UPlayerWeaponComponent::BeginPlay()
{
    Super::BeginPlay();

    BindInput();
    BindEvents();

    if (const auto pRangeWeapon = GetRangeWeapon())
    {
        DropWeapon(pRangeWeapon->StaticClass());
        pRangeWeapon->Destroy();
    }
    //SubscribeOnDropRangeWeapon();
}

void UPlayerWeaponComponent::BindInput()
{
    const auto controller = GetPlayerController();
    if (!controller)
        return;

    controller->OnMeleeAttack.AddUObject(this, &UPlayerWeaponComponent::MeleeAttack);
    controller->OnRangeAttack.AddUObject(this, &UPlayerWeaponComponent::RangeAttack);
}

void UPlayerWeaponComponent::BindEvents()
{
    if (const auto MeleeWeapon = GetMeleeWeapon())
    {
        MeleeWeapon->OnImpactHit.AddWeakLambda(this, [this]()
        {
            OnMeleeAttackHasHit.Broadcast(); 
        });
    }

    OnPickupWeapon.AddWeakLambda(this, [this](UClass* WeaponClass)
    {
       if (WeaponClass == AGun::StaticClass())
       {
           OnPickupRangeWeapon.Broadcast();
       }
    });
}

void UPlayerWeaponComponent::OnSubscribeToNotifies(const FAnimNotifyEvent& NotifyEvent)
{
    Super::OnSubscribeToNotifies(NotifyEvent);

    SubscribeOnComboNotify(NotifyEvent);
}

void UPlayerWeaponComponent::SubscribeOnComboNotify(const FAnimNotifyEvent& NotifyEvent)
{
    auto comboNotify = Cast<UComboEndAnimNotify>(NotifyEvent.Notify);
    if (!comboNotify)
        return;
    
    comboNotify->FOnComboEndNotify.AddUObject(this, &UPlayerWeaponComponent::OnComboNotifyHandle);
}

void UPlayerWeaponComponent::OnComboNotifyHandle(USkeletalMeshComponent* MeshComp)
{
    if (MeshComp->GetOwner() != GetOwner())
        return;
    
}

void UPlayerWeaponComponent::PlayMeleeWeaponComboAnim(ASword* Weapon, int32 ComboIndex) const
{
    const auto pCharacter = GetPlayerCharacter();
    if (!pCharacter || !Weapon)
        return;

    const auto comboInfo = Weapon->GetComboInfo();
    if (!comboInfo.IsValidIndex(ComboIndex))
        return;
    
    if (pCharacter->GetMesh())
    {
        pCharacter->GetMesh()->GetAnimInstance()->SetRootMotionMode(comboInfo[ComboIndex].RootMotionMode);
    }

    if (Weapon->GetAttackMontage())
    {
        pCharacter->PlayAnimMontage(
        Weapon->GetAttackMontage(),
        Weapon->GetAttackMontage()->GetSectionLength(ComboIndex) / comboInfo[ComboIndex].AnimationTime,
        comboInfo[ComboIndex].AttackSectionName);
    }
}

void UPlayerWeaponComponent::MeleeAttack()
{
    const auto pCharacter = GetPlayerCharacter();
    const auto pMeleeWeapon = FindWeapon<ASword>();
    if (!pCharacter || !pMeleeWeapon)
        return;

    const auto pStateMachine = GetPlayerCharacter()->GetStateMachineComponent();
    if (!pStateMachine)
        return;

    const auto comboInfo = pMeleeWeapon->GetComboInfo();
    if (m_nextComboIndex >= comboInfo.Num())
        return;
    
    FState meleeState(
        "ComboAttack",
        comboInfo[m_nextComboIndex].AnimationTime,
        EStatePriority::Light
    );
    
    meleeState.OnStartState.AddUObject(this, &UPlayerWeaponComponent::OnStartComboState, m_nextComboIndex);
    meleeState.OnEndState.AddUObject(this, &UPlayerWeaponComponent::OnEndComboState, m_nextComboIndex);
    
    pStateMachine->AddState(meleeState);
}

void UPlayerWeaponComponent::OnStartComboState(int32 ComboIndex)
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

    pMeleeWeapon->SetDamage(comboInfo[ComboIndex].Damage);
    
    PlayMeleeWeaponComboAnim(pMeleeWeapon, ComboIndex);

    m_nextComboIndex++;
}

void UPlayerWeaponComponent::OnEndComboState(EStateResult StateResult, int32 ComboIndex)
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

    switch (StateResult)
    {
        case EStateResult::Aborted:
        {
            m_nextComboIndex = 0;
        }
        break;
        case EStateResult::Successed:
        {
            if (!pStateMachine->GetNextState()
                || (pStateMachine->GetNextState() && pStateMachine->GetNextState()->Name != "ComboAttack")
                || ComboIndex == comboInfo.Num() - 1)
            {
                m_nextComboIndex = 0;
            }
        }
        break;
    }
}

void UPlayerWeaponComponent::OnMeleeStartAttackAnim()
{
    Super::OnMeleeStartAttackAnim();

    
}

void UPlayerWeaponComponent::OnRangeAttackAnim()
{
    Super::OnRangeAttackAnim();
    
    if (const auto pRangeWeapon = FindWeapon<AGun>())
    {
        pRangeWeapon->MakeShoot(m_rangeAttackPoint);
    }
}

void UPlayerWeaponComponent::RangeAttack()
{
    const auto pRangeWeapon = FindWeapon<AGun>();
    const auto pPlayerController = GetPlayerController();
    const auto pStateMachine = GetStateMachineComponent();
    
    if (!pRangeWeapon || !pPlayerController || !pStateMachine)
        return;

    if (pStateMachine->GetCurrentState() && pStateMachine->GetCurrentState()->Name == "RangeState")
        return;

    FVector attackPoint = pPlayerController->GetWorldPointUnderMouse();
    if (attackPoint == FVector::ZeroVector)
        return;

    FState rangeState(
        "RangeState",
        pRangeWeapon->GetAttackMontage()->GetSectionLength(0) / pRangeWeapon->GetAttackMontage()->RateScale,
        EStatePriority::Medium
    );

    rangeState.OnStartState.AddUObject(this, &UPlayerWeaponComponent::OnStartRangeState, attackPoint);
    rangeState.OnEndState.AddUObject(this, &UPlayerWeaponComponent::OnEndRangeState);

    pStateMachine->AddState(rangeState);
}

void UPlayerWeaponComponent::OnStartRangeState(FVector WorldPointToRotate)
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

void UPlayerWeaponComponent::OnEndRangeState(EStateResult StateResult)
{
    const auto pmComponent = GetPlayerMovementComponent();
    if (!pmComponent)
        return;

    pmComponent->UnfixCharacterRotation();
    pmComponent->SetDeceleration(0.0f);
}

void UPlayerWeaponComponent::DropWeapon(const TSubclassOf<ABaseWeapon> WeaponClass) 
{
    if (const auto Weapon = FindWeapon(WeaponClass))
    {
        Weapon->Detach();
        weapons.Remove(Weapon);
    }
}

void UPlayerWeaponComponent::SubscribeOnDropRangeWeapon() 
{
    if (const auto pRangeWeapon = FindWeapon<AGun>())
        pRangeWeapon->OnEmptyAmmo.AddUObject(this, &UPlayerWeaponComponent::DropWeapon, TSubclassOf<ABaseWeapon>(pRangeWeapon->StaticClass()));
}

APlayerCharacter* UPlayerWeaponComponent::GetPlayerCharacter() const
{
    return Cast<APlayerCharacter>(GetOwner());
}

ABasePlayerController* UPlayerWeaponComponent::GetPlayerController() const
{
    return GetPlayerCharacter() ? GetPlayerCharacter()->GetPlayerController() : nullptr;
}

UPlayerMovementComponent* UPlayerWeaponComponent::GetPlayerMovementComponent() const
{
    return GetPlayerCharacter() ? Cast<UPlayerMovementComponent>(GetPlayerCharacter()->GetMovementComponent()) : nullptr;
}

UStateMachineComponent* UPlayerWeaponComponent::GetStateMachineComponent() const
{
    return GetPlayerCharacter() ? GetPlayerCharacter()->GetStateMachineComponent() : nullptr;
}
