// Lazy Pixel. All Rights Reserved.


#include "Environment/HealthStation.h"
#include "Components/RectLightComponent.h"
#include "Components/WidgetComponent.h"
#include "Character/Player/PlayerCharacter.h"
#include "Character/Player/Components/HealthComponent.h"

AHealthStation::AHealthStation()
{
    PrimaryActorTick.bCanEverTick = true;

    pBaseMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("HealthStationMeshComponent");
    pBaseMeshComponent->SetupAttachment(GetRootComponent());

    pHealthDisplayMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("HealthDisplayMeshComponent");
    pHealthDisplayMeshComponent->SetupAttachment(pBaseMeshComponent);

    pRectLightComponent = CreateDefaultSubobject<URectLightComponent>("RectLightComponent");
    pRectLightComponent->SetupAttachment(pBaseMeshComponent);
}

void AHealthStation::Tick(float DeltaTime) 
{
    Super::Tick(DeltaTime);

    pHealthDisplayMeshComponent->AddLocalRotation(FRotator(0.0f, rotationYaw, 0.0f));
}

void AHealthStation::NotifyActorBeginOverlap(AActor* OtherActor)
{
    if (isUsed) return;

    Super::NotifyActorBeginOverlap(OtherActor);
}

void AHealthStation::PickUpHandle(APlayerCharacter* Character)
{
    if (!Character || isUsed) return;

    Character->GetComponentByClass<UHealthComponent>()->Heal(healAmount);
    pInteractWidget->SetVisibility(false);
    pHealthDisplayMeshComponent->SetVisibility(false);
    pRectLightComponent->SetIntensity(0.0f);
    PrimaryActorTick.bCanEverTick = false;
    isUsed = true;
}
