// Lazy Pixel. All Rights Reserved.


#include "Abilities/ActiveAbilities/FirstCustomAbility.h"

#include "Character/BaseCharacter.h"
#include "Character/Player/BasePlayerController.h"
#include "Character/Player/Components/PlayerMovementComponent.h"
#include "Common/Objects/CollisionCube.h"
#include "Engine/DamageEvents.h"
#include "Kismet/GameplayStatics.h"
#include "Character/Player/Components/WeaponComponent.h"
#include "Components/CapsuleComponent.h"

bool UStrongAttackAbility::NativeActivate()
{
    UseAbility();
    
    return Super::NativeActivate();
}

void UStrongAttackAbility::Press()
{
    if (!FMath::IsNearlyZero(GetTimeToReload()))
        return;

    const auto pPlayerMovementComponent = GetPlayerMovementComponent();
    if (!pPlayerMovementComponent)
        return;
    
    UGameplayStatics::SetGlobalTimeDilation(GetWorld(), timeDilation);
    pPlayerMovementComponent->SetDeceleration(1.0f);
    GetWorld()->GetTimerManager().SetTimer(m_abilityDurationHandle, this, &UStrongAttackAbility::UseAbility, abilityUseTime * timeDilation);
    m_isAbilityActivationButtonPressed = true;
}

void UStrongAttackAbility::BeginPlay()
{
    Super::BeginPlay();

    SpawnCubeCollision();
    GetCharacter()->GetMesh()->GetAnimInstance()->OnMontageEnded.AddDynamic(this, &UStrongAttackAbility::OnMontageEndedHandle);
}

void UStrongAttackAbility::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
    int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    if (OtherActor == GetCharacter())
        return;

    OtherActor->TakeDamage(abilityDamage, FDamageEvent(), UGameplayStatics::GetPlayerController(GetWorld(), 0), GetCharacter());
}

void UStrongAttackAbility::OnStrongAbilityEnd()
{
    m_pCubeCollision->Disable();
    GetCharacter()->GetCapsuleComponent()->SetCollisionResponseToChannel(ECC_Pawn, ECR_Block);
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

void UStrongAttackAbility::OnMontageEndedHandle(UAnimMontage* Montage, bool bInterrupted) 
{
    if (pAbilityAnimation == Montage)
    {
        GetCharacter()->SetUltimateActive(0);
        // UWeaponComponent* weapComp = GetCharacter()->GetComponentByClass<UWeaponComponent>();
        // weapComp->OnNextComboSection();
    }
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

void UStrongAttackAbility::UseAbility()
{
    if (!m_isAbilityActivationButtonPressed)
        return;

    m_isAbilityActivationButtonPressed = false;
        
    if (!GetWorld() || !GetCharacter() || !GetCharacter()->GetMesh() || !pAbilityAnimation)
        return;
    
    m_pCubeCollision->Enable();
    
    RotateCharacterInMouseDirection();

    GetCharacter()->GetMesh()->GetAnimInstance()->SetRootMotionMode(ERootMotionMode::RootMotionFromMontagesOnly);
    GetCharacter()->PlayAnimMontage(pAbilityAnimation);
    GetCharacter()->SetUltimateActive(1);
    GetCharacter()->GetCapsuleComponent()->SetCollisionResponseToChannel(ECC_Pawn, ECR_Ignore);

    GetWorld()->GetTimerManager().SetTimer(m_abilityDurationHandle, this, &UStrongAttackAbility::OnStrongAbilityEnd, abilityDuration);
    UGameplayStatics::SetGlobalTimeDilation(GetWorld(), defaultTimeDilation);   
}
