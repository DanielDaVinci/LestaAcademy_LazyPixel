// Lazy Pixel. All Rights Reserved.


#include "Abilities/ActiveAbilities/FirstCustomAbility.h"

#include "Character/BaseCharacter.h"
#include "Common/Objects/CollisionCube.h"
#include "Engine/DamageEvents.h"
#include "Kismet/GameplayStatics.h"
#include "Character/Player/Components/WeaponComponent.h"

bool UStrongAttackAbility::NativeActivate()
{
    if (!GetWorld() || !GetCharacter())
        return false;
    
    m_pCubeCollision->Enable();
 
    GetCharacter()->GetMesh()->GetAnimInstance()->SetRootMotionMode(ERootMotionMode::RootMotionFromMontagesOnly);
    GetCharacter()->PlayAnimMontage(pAbilityAnimation);
    GetCharacter()->SetUltimateActive(1);
    GetWorld()->GetTimerManager().SetTimer(m_timerHandle, this, &UStrongAttackAbility::OnStrongAbilityEnd, abilityDuration);
    return Super::NativeActivate();
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
}

void UStrongAttackAbility::SpawnCubeCollision()
{
    if (!GetWorld())
        return;
    
    m_pCubeCollision = GetWorld()->SpawnActor<ACollisionCube>(ACollisionCube::StaticClass());
    if (!m_pCubeCollision)
        return;

    m_pCubeCollision->SetBoxExtent(FVector(32.0f, 96.0f, 32.0f));
    
    m_pCubeCollision->AttachToActor(GetCharacter(), FAttachmentTransformRules::KeepRelativeTransform);
    m_pCubeCollision->AttachToComponent(GetCharacter()->GetMesh(), FAttachmentTransformRules::KeepWorldTransform);
    
    m_pCubeCollision->OnBeginOverlap.AddUObject(this, &UStrongAttackAbility::OnBeginOverlap);
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
