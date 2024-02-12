// Lazy Pixel. All Rights Reserved.


#include "Environment/EnemySpawner.h"

AEnemySpawner::AEnemySpawner()
{
	PrimaryActorTick.bCanEverTick = false;

    pStartCapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>("CapsuleComponent");
    SetRootComponent(pStartCapsuleComponent);

    pArrowComponent = CreateDefaultSubobject<UArrowComponent>("ArrowComponent");
    pArrowComponent->SetupAttachment(GetRootComponent());
    pArrowComponent->SetRelativeRotation(FRotator(0.0f, 0.0f, 0.0f));
    pArrowComponent->ArrowSize = 2.0f;
    pArrowComponent->ArrowColor = FColor::Blue;
}

void AEnemySpawner::BeginPlay()
{
	Super::BeginPlay();
	
}

void AEnemySpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

