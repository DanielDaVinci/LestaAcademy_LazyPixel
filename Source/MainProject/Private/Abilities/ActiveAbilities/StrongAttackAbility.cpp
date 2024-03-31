// Lazy Pixel. All Rights Reserved.


#include "Abilities/ActiveAbilities/StrongAttackAbility.h"

#include "MainProjectCoreTypes.h"
#include "Character/BaseCharacter.h"
#include "Character/Player/BasePlayerController.h"
#include "Character/Player/Components/PlayerMovementComponent.h"
#include "Character/Player/Components/StateMachineComponent.h"
#include "Character/Player/Components/WeaponComponent.h"
#include "Common/Objects/CollisionCube.h"
#include "Engine/DamageEvents.h"
#include "Kismet/GameplayStatics.h"
#include "Components/CapsuleComponent.h"

bool UStrongAttackAbility::NativeActivate()
{
    if (!IsAbilityCharged())
        return false;

    SetAbilityCharge(0.0f);
    
    const auto pStateMachineComponent = GetStateMachineComponent();
    if (!pStateMachineComponent)
        return false;

    FState strongAbilityState(
        "StrongAbilityState",
        prepareDuration * timeDilation,
        Medium
    );

    strongAbilityState.OnStartState.AddUObject(this, &UStrongAttackAbility::OnPreparePartStartState);
    strongAbilityState.OnEndState.AddUObject(this, &UStrongAttackAbility::OnPreparePartEndState);

    pStateMachineComponent->AddState(strongAbilityState);
    
    return Super::NativeActivate();
}

void UStrongAttackAbility::BeginPlay()
{
    Super::BeginPlay();

    SpawnCubeCollision();
    SetAbilityCharge(0.0f);

    BindEvents();
}

void UStrongAttackAbility::OnCubeCollisionBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
    int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    if (OtherActor == GetCharacter())
        return;

    OtherActor->TakeDamage(abilityDamage, FDamageEvent(), UGameplayStatics::GetPlayerController(GetWorld(), 0), GetCharacter());
}

void UStrongAttackAbility::SpawnCubeCollision()
{
    if (!GetWorld() || !GetCharacter())
        return;
    
    m_pCubeCollision = GetWorld()->SpawnActor<ACollisionCube>(ACollisionCube::StaticClass());
    if (!m_pCubeCollision)
        return;

    m_pCubeCollision->SetBoxExtent(FVector(32.0f, 96.0f, 32.0f));
    
    m_pCubeCollision->AttachToActor(GetCharacter(), FAttachmentTransformRules::KeepRelativeTransform);
    m_pCubeCollision->AttachToComponent(GetCharacter()->GetMesh(), FAttachmentTransformRules::KeepWorldTransform);

    m_pCubeCollision->SetResponseToAllChannels(ECR_Ignore);
    m_pCubeCollision->SetResponseToChannel(ECC_Enemy, ECR_Overlap);
    
    m_pCubeCollision->OnBeginOverlap.AddUObject(this, &UStrongAttackAbility::OnCubeCollisionBeginOverlap);
}

void UStrongAttackAbility::BindEvents()
{
    if (const auto weaponComponent = GetWeaponComponent())
    {
        weaponComponent->OnMeleeAttackHasHit.AddUObject(this, &UStrongAttackAbility::OnMeleeAttackHit);
    }
}

void UStrongAttackAbility::OnMeleeAttackHit()
{
    AddAbilityCharge(oneHitAbilityCharge);
}

void UStrongAttackAbility::SetAbilityCharge(float ChargeAmount)
{
    const float prevAbilityCharge = m_abilityCharge;
    m_abilityCharge = FMath::Clamp(ChargeAmount, 0.0f, needMaxAbilityCharge);

    if (!FMath::IsNearlyZero(prevAbilityCharge - m_abilityCharge))
    {
        OnAbilityChargeChanged.Broadcast(GetCurrentAbilityCharge());
    }

    if (IsAbilityCharged())
        ChangeMeleeMaterilal();
}

void UStrongAttackAbility::AddAbilityCharge(float ChargeAmount)
{
    SetAbilityCharge(GetCurrentAbilityCharge() + ChargeAmount);
}

void UStrongAttackAbility::ChangeMeleeMaterilal()
{
    const auto weaponComponent = GetWeaponComponent();
    ASword* pMeleeWeapon = weaponComponent->FindWeapon<ASword>();
    pMeleeWeapon->ChangeMaterial(IsAbilityCharged());
}

void UStrongAttackAbility::OnPreparePartStartState()
{
    const auto pPlayerMovementComponent = GetPlayerMovementComponent();
    const auto pPlayerController = GetBasePlayerController();
    if (!pPlayerMovementComponent || !pPrepareAnimation || !pPlayerController)
        return;

    UGameplayStatics::SetGlobalTimeDilation(GetWorld(), timeDilation);
    pPlayerMovementComponent->SetEnableMovementInput(false);
    
    pPlayerController->OnCustomAbilityReleased.AddUObject(this, &UStrongAttackAbility::OnCustomAbilityButtonReleased);
    pPlayerController->OnMouseMove.AddUObject(this, &UStrongAttackAbility::OnMouseMove);
    GetCharacter()->PlayAnimMontage(pPrepareAnimation);
}

void UStrongAttackAbility::OnCustomAbilityButtonReleased()
{
    const auto pStateMachine = GetStateMachineComponent();
    const auto pPlayerController = GetBasePlayerController();
    if (!pStateMachine || !pPlayerController)
        return;
    
    pStateMachine->SkipCurrentState();
}

void UStrongAttackAbility::OnPreparePartEndState(EStateResult StateResult)
{
    const auto pPlayerMovementComponent = GetPlayerMovementComponent();
    const auto pPlayerController = GetBasePlayerController();
    if (!pPlayerMovementComponent || !pPlayerController)
        return;
    
    UGameplayStatics::SetGlobalTimeDilation(GetWorld(), defaultTimeDilation);
    pPlayerMovementComponent->SetEnableMovementInput(true);

    pPlayerController->OnCustomAbilityReleased.RemoveAll(this);
    pPlayerController->OnMouseMove.RemoveAll(this);

    if (StateResult == EStateResult::Successed)
        StartAttackPart();
}

void UStrongAttackAbility::OnMouseMove(FVector2D MouseVector)
{
    RotateCharacterToMouse();
}

void UStrongAttackAbility::RotateCharacterToMouse() const
{
    const auto pPlayerController = GetBasePlayerController();
    if (!pPlayerController)
        return;
    
    const auto point = pPlayerController->GetWorldPointUnderMouse();
    if (point == FVector::ZeroVector)
        return;

    FRotator viewRotation = (point - GetCharacter()->GetActorLocation()).Rotation();
    viewRotation.Pitch = 0.0f;
    
    GetCharacter()->GetMesh()->SetRelativeRotation(viewRotation);
}

void UStrongAttackAbility::StartAttackPart()
{
    const auto pStateMachineComponent = GetStateMachineComponent();
    if (!pStateMachineComponent)
        return;

    FState strongAbilityState(
        "StrongAbilitySecondPartState",
        attackDuration,
        Force
    );
    strongAbilityState.OnStartState.AddUObject(this, &UStrongAttackAbility::OnAttackPartStartState);
    strongAbilityState.OnEndState.AddUObject(this, &UStrongAttackAbility::OnAttackPartEndState);

    pStateMachineComponent->AddState(strongAbilityState);
}

void UStrongAttackAbility::OnAttackPartStartState()
{
    const auto pPlayerMovementComponent = GetPlayerMovementComponent();
    if (!GetCharacter() || !pPlayerMovementComponent || !GetCharacter()->GetMesh() || !pAttackAnimation)
        return;
    
    m_pCubeCollision->Enable();
    GetCharacter()->GetCapsuleComponent()->SetCollisionResponseToChannel(ECC_Enemy, ECR_Ignore);
    pPlayerMovementComponent->SetEnableMovementInput(false);
    
    RotateCharacterToMouse();
    
    GetCharacter()->GetMesh()->GetAnimInstance()->SetRootMotionMode(ERootMotionMode::RootMotionFromMontagesOnly);
    GetCharacter()->PlayAnimMontage(
        pAttackAnimation,
        pAttackAnimation->GetSectionLength(0) / attackDuration);
}

void UStrongAttackAbility::OnAttackPartEndState(EStateResult StateResult)
{
    const auto pPlayerMovementComponent = GetPlayerMovementComponent();
    if (!GetCharacter() || !pPlayerMovementComponent)
        return;
    
    m_pCubeCollision->Disable();
    GetCharacter()->GetCapsuleComponent()->SetCollisionResponseToChannel(ECC_Enemy, ECR_Block);
    pPlayerMovementComponent->SetEnableMovementInput(true);
    ChangeMeleeMaterilal();
}

ABasePlayerController* UStrongAttackAbility::GetBasePlayerController() const
{
    return GetCharacter() ? Cast<ABasePlayerController>(GetCharacter()->GetController()) : nullptr;
}

UPlayerMovementComponent* UStrongAttackAbility::GetPlayerMovementComponent() const
{
    return GetCharacter() ? Cast<UPlayerMovementComponent>(GetCharacter()->GetMovementComponent()) : nullptr;
}

UStateMachineComponent* UStrongAttackAbility::GetStateMachineComponent() const
{
    return GetCharacter() ? GetCharacter()->GetStateMachineComponent() : nullptr;
}

UWeaponComponent* UStrongAttackAbility::GetWeaponComponent() const
{
    return GetCharacter() ? Cast<UWeaponComponent>(GetCharacter()->GetWeaponComponent()) : nullptr;
}

bool UStrongAttackAbility::IsAbilityCharged() const
{
    return FMath::IsNearlyEqual(GetCurrentAbilityCharge(), GetMaxAbilityCharge());
}
