// Lazy Pixel. All Rights Reserved.


#include "Environment/EnemySpawner.h"

#include "MainProjectCoreTypes.h"
#include "AI/Characters/AIBaseCharacter.h"
#include "Environment/Door.h"

AEnemySpawner::AEnemySpawner()
{
	PrimaryActorTick.bCanEverTick = false;

    pStartCapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>("CapsuleComponent");
    SetRootComponent(pStartCapsuleComponent);
    pStartCapsuleComponent->SetCapsuleSize(34.0f, 88.0f);

    pArrowComponent = CreateDefaultSubobject<UArrowComponent>("ArrowComponent");
    pArrowComponent->SetupAttachment(GetRootComponent());
    pArrowComponent->SetRelativeRotation(FRotator(0.0f, 0.0f, 0.0f));
    pArrowComponent->ArrowSize = 2.0f;
    pArrowComponent->ArrowColor = FColor::Blue;
}

AAIBaseCharacter* AEnemySpawner::Spawn(const TSubclassOf<AAIBaseCharacter>& AICharacterClass) const
{
    if (!GetWorld() || !AICharacterClass)
        return nullptr;

    return GetWorld()->SpawnActor<AAIBaseCharacter>(
        AICharacterClass,
        pStartCapsuleComponent->GetComponentLocation(),
        pStartCapsuleComponent->GetComponentRotation());
}

void AEnemySpawner::OpenDoor() const
{
    if (!pEnemyOutputDoor)
        return;

    pEnemyOutputDoor->UnblockDoor(ECC_Enemy);
    pEnemyOutputDoor->Open();
}

void AEnemySpawner::CloseDoor() const
{
    if (!pEnemyOutputDoor)
        return;

    pEnemyOutputDoor->BlockDoor(ECC_Enemy);
    pEnemyOutputDoor->Close();
}

void AEnemySpawner::BeginPlay()
{
    Super::BeginPlay();

    if (pEnemyOutputDoor)
    {
        pEnemyOutputDoor->BlockDoor(ECC_Pawn);
    }
}

