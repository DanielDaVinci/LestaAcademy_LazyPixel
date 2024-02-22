// Lazy Pixel. All Rights Reserved.


#include "AI/Characters/AIBaseCharacter.h"

#include "MainProjectCoreTypes.h"
#include "Character/Player/Components/AIWeaponComponent.h"
#include "Character/Player/Components/HealthComponent.h"
#include "Components/CapsuleComponent.h"
#include "Environment/Room.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"

AAIBaseCharacter::AAIBaseCharacter(const FObjectInitializer& ObjInit)
    : Super(ObjInit.SetDefaultSubobjectClass<UAIWeaponComponent>("WeaponComponent"))
{
    AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;

    GetMesh()->SetCollisionObjectType(ECC_Enemy);
    GetCapsuleComponent()->SetCollisionObjectType(ECC_Enemy);
}

void AAIBaseCharacter::BeginPlay() 
{
    Super::BeginPlay();
}

void AAIBaseCharacter::PostInitializeComponents()
{
    Super::PostInitializeComponents();

    pHealthComponent->OnHealthChanged.AddUObject(this, &AAIBaseCharacter::PlayImpactAnim);
}

void AAIBaseCharacter::PlayImpactAnim(float Health) 
{
    if (impactAnimations.Num())
        PlayAnimMontage(impactAnimations[FMath::RandRange(0, impactAnimations.Num() - 1)]);
}
