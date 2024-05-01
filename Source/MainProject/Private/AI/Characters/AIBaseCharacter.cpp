// Lazy Pixel. All Rights Reserved.

#include "AI/Characters/AIBaseCharacter.h"

#include "MainProjectCoreTypes.h"
#include "AI/Characters/BaseAIController.h"
#include "Character/Player/Components/AIWeaponComponent.h"
#include "Character/Player/Components/HealthComponent.h"
#include "Components/CapsuleComponent.h"
#include "Environment/Room.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "NiagaraFunctionLibrary.h"
#include "Gore/GoreComponent.h"
#include "PhysicsEngine/ConstraintInstance.h"

AAIBaseCharacter::AAIBaseCharacter(const FObjectInitializer& ObjInit)
    : Super(ObjInit.SetDefaultSubobjectClass<UAIWeaponComponent>("WeaponComponent"))
{
    pGoreComponent = CreateDefaultSubobject<UGoreComponent>("GoreComponent");

    AIControllerClass = ABaseAIController::StaticClass();
    AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;

    GetMesh()->SetCollisionObjectType(ECC_Enemy);
    GetCapsuleComponent()->SetCollisionObjectType(ECC_Enemy);
    GetCharacterMovement()->bUseControllerDesiredRotation = true;

    bUseControllerRotationYaw = false;
}

void AAIBaseCharacter::PostInitializeComponents()
{
    Super::PostInitializeComponents();

    pHealthComponent->OnHealthChanged.AddDynamic(this, &AAIBaseCharacter::PlayImpactAnim);
    pHealthComponent->OnHealthChanged.AddDynamic(this, &AAIBaseCharacter::PlayImpactFX);
    SetRandomMaterial();

    TArray<FConstraintInstance*> physConstraints = GetMesh()->Constraints;
    if (physConstraints.Num())
        dismemberedBone = physConstraints[FMath::RandRange(0, physConstraints.Num() - 1)]->JointName;
}

void AAIBaseCharacter::OnDeath()
{
    Super::OnDeath();

    if (Controller)
        Controller->UnPossess();
    
    pGoreComponent->DismemberLimb(dismemberedBone, GetActorRotation().Vector() * dismembermentForce * (-1));

    EnableRagdoll();
}

void AAIBaseCharacter::PlayImpactAnim(float DeltaHealth) 
{
    if (impactAnimations.Num())
        PlayAnimMontage(impactAnimations[FMath::RandRange(0, impactAnimations.Num() - 1)]);
}

void AAIBaseCharacter::PlayImpactFX(float DeltaHealth) 
{
    pGoreComponent->PreDismemberment(dismemberedBone, GetActorRotation().Vector());
    pGoreComponent->PostDismemberment(dismemberedBone, GetMesh());
}

void AAIBaseCharacter::SetRandomMaterial()
{
    if (!GetMesh() || !materialInstances.Num())
        return;

    GetMesh()->SetMaterial(0, materialInstances[FMath::RandRange(0, materialInstances.Num() - 1)]);
}

void AAIBaseCharacter::EnableRagdoll() const
{
    if (!GetMesh() || !GetCapsuleComponent())
        return;
    
    GetCapsuleComponent()->SetCollisionResponseToAllChannels(ECR_Ignore);
    GetMesh()->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
    GetMesh()->SetSimulatePhysics(true);
}
