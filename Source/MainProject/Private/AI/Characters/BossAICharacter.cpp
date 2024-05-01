// Lazy Pixel. All Rights Reserved.


#include "AI/Characters/BossAICharacter.h"

#include "MainProjectCoreTypes.h"
#include "AI/Characters/BossAIController.h"
#include "Character/Player/Components/HealthComponent.h"
#include "Character/Player/Components/AIWeaponComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Gore/GoreComponent.h"

ABossAICharacter::ABossAICharacter(const FObjectInitializer& ObjInit) 
    : Super(ObjInit.SetDefaultSubobjectClass<UAIWeaponComponent>("WeaponComponent"))
{
    pGoreComponent = CreateDefaultSubobject<UGoreComponent>("GoreComponent");

    AIControllerClass = ABossAIController::StaticClass();
    AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;

    GetMesh()->SetCollisionObjectType(ECC_Enemy);
    GetCapsuleComponent()->SetCollisionObjectType(ECC_Enemy);
    GetCharacterMovement()->bUseControllerDesiredRotation = true;

    bUseControllerRotationYaw = false;
}

void ABossAICharacter::PostInitializeComponents() 
{
    Super::PostInitializeComponents();

    pHealthComponent->OnHealthChanged.AddUObject(this, &ABossAICharacter::PlayImpactFX);
    pHealthComponent->OnHealthChanged.AddUObject(this, &ABossAICharacter::SendEventToStateTree);
}

void ABossAICharacter::PlayImpactFX(float DeltaHealth) 
{
    pGoreComponent->PreDismemberment(FName("Spine"), GetActorRotation().Vector());
    pGoreComponent->PostDismemberment(FName("Spine"), GetMesh());
}

void ABossAICharacter::SendEventToStateTree(float DeltaHealth) 
{
    GetBossContoller()->SendStateTreeEvent();
}

ABossAIController* ABossAICharacter::GetBossContoller() const
{
    return Cast<ABossAIController>(GetController());
}
