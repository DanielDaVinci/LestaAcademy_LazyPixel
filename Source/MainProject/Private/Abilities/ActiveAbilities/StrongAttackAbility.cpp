// Lazy Pixel. All Rights Reserved.


#include "..\..\..\Public\Abilities\ActiveAbilities\StrongAttackAbility.h"

#include "MainProjectCoreTypes.h"
#include "Character/BaseCharacter.h"
#include "Character/Player/BasePlayerController.h"
#include "Character/Player/Components/PlayerMovementComponent.h"
#include "Character/Player/Components/StateMachineComponent.h"
#include "Common/Objects/CollisionCube.h"
#include "Engine/DamageEvents.h"
#include "Kismet/GameplayStatics.h"
#include "Character/Player/Components/WeaponComponent.h"
#include "Components/CapsuleComponent.h"

bool UStrongAttackAbility::NativeActivate()
{
    const auto pStateMachineComponent = GetStateMachineComponent();
    if (!pStateMachineComponent)
        return false;

    FState strongAbilityState(
        "StrongAbilityState",
        abilityUseTime * timeDilation,
        Force
    );

    strongAbilityState.OnStartState.AddUObject(this, &UStrongAttackAbility::OnStrongAbilityStartState);
    strongAbilityState.OnEndState.AddUObject(this, &UStrongAttackAbility::OnStrongAbilityEndState);

    pStateMachineComponent->AddState(strongAbilityState);
    
    return Super::NativeActivate();
}

void UStrongAttackAbility::BeginPlay()
{
    Super::BeginPlay();

    SpawnCubeCollision();
}

void UStrongAttackAbility::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
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
    
    m_pCubeCollision->OnBeginOverlap.AddUObject(this, &UStrongAttackAbility::OnBeginOverlap);
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

void UStrongAttackAbility::RotateCharacterInMouseDirection()
{
    const auto pPlayerController = GetBasePlayerController();
    if (!pPlayerController)
        return;
    
    const auto point = pPlayerController->GetWorldPointUnderMouse();
    if (point == FVector::ZeroVector)
        return;

    const FRotator viewRotation = (point - GetCharacter()->GetActorLocation()).Rotation();
    GetCharacter()->GetMesh()->SetRelativeRotation(viewRotation);
}

void UStrongAttackAbility::OnStrongAbilityStartState()
{
    const auto pPlayerMovementComponent = GetPlayerMovementComponent();
    const auto pPlayerController = GetBasePlayerController();
    if (!pPlayerMovementComponent || !pAttackPrepareAnimation || !pPlayerController)
        return;

    UGameplayStatics::SetGlobalTimeDilation(GetWorld(), timeDilation);
    pPlayerMovementComponent->SetDeceleration(1.0f);
    pPlayerController->OnCustomAbilityPressed.AddLambda([&]()
    {
        const auto pStateMachine = GetStateMachineComponent();
        pStateMachine->SkipCurrentState();
        pPlayerController->OnCustomAbilityPressed.Clear();
    });
    GetCharacter()->PlayAnimMontage(pAttackPrepareAnimation);
}

void UStrongAttackAbility::OnStrongAbilityEndState(EStateResult StateResult)
{
    UGameplayStatics::SetGlobalTimeDilation(GetWorld(), defaultTimeDilation);
    UE_LOG(LogTemp, Error, TEXT("123"));
    
    if (StateResult == Aborted)
    {
        const auto pPlayerMovementComponent = GetPlayerMovementComponent();
        const auto pPlayerController = GetBasePlayerController();
        
        if (!pPlayerMovementComponent || !pPlayerController)
            return;

        pPlayerController->OnCustomAbilityPressed.RemoveAll(this);
        pPlayerMovementComponent->SetDeceleration(0.f);
        UE_LOG(LogTemp, Error, TEXT("321"));
        return;
    }

    const auto pStateMachineComponent = GetStateMachineComponent();
    if (!pStateMachineComponent)
        return;

    FState strongAbilityState(
        "StrongAbilitySecondPartState",
        abilityDuration,
        Hard
    );

    strongAbilityState.OnStartState.AddUObject(this, &UStrongAttackAbility::OnStrongAbilitySecondPartStartState);
    strongAbilityState.OnEndState.AddUObject(this, &UStrongAttackAbility::OnStrongAbilitySecondPartEndState);

    pStateMachineComponent->AddState(strongAbilityState);
}

void UStrongAttackAbility::OnStrongAbilitySecondPartStartState()
{
    if (!GetWorld() || !GetCharacter() || !GetCharacter()->GetMesh() || !pAbilityAnimation)
        return;
    
    m_pCubeCollision->Enable();
    
    RotateCharacterInMouseDirection();

    GetCharacter()->GetMesh()->GetAnimInstance()->SetRootMotionMode(ERootMotionMode::RootMotionFromMontagesOnly);
    GetCharacter()->PlayAnimMontage(pAbilityAnimation);
    GetCharacter()->SetUltimateActive(1);
    GetCharacter()->GetCapsuleComponent()->SetCollisionResponseToChannel(ECC_Enemy, ECR_Ignore);
    UGameplayStatics::SetGlobalTimeDilation(GetWorld(), defaultTimeDilation);
}

void UStrongAttackAbility::OnStrongAbilitySecondPartEndState(EStateResult StateResult)
{
    m_pCubeCollision->Disable();
    GetCharacter()->GetCapsuleComponent()->SetCollisionResponseToChannel(ECC_Enemy, ECR_Block);
}