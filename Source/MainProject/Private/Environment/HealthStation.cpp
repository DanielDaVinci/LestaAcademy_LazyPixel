// Lazy Pixel. All Rights Reserved.


#include "Environment/HealthStation.h"
#include "Components/RectLightComponent.h"
#include "Components/WidgetComponent.h"
#include "Character/Player/PlayerCharacter.h"
#include "Character/Player/Components/HealthComponent.h"

AHealthStation::AHealthStation()
{
    pHealthStationMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("HealthStationMeshComponent");
    pHealthStationMeshComponent->SetupAttachment(GetRootComponent());

    pHealthDisplayMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("HealthDisplayMeshComponent");
    pHealthDisplayMeshComponent->SetupAttachment(pHealthStationMeshComponent);

    pRectLightComponent = CreateDefaultSubobject<URectLightComponent>("RectLightComponent");
    pRectLightComponent->SetupAttachment(pHealthStationMeshComponent);
}

void AHealthStation::NotifyActorBeginOverlap(AActor* OtherActor) 
{
    if (isUsed) return;

    Super::NotifyActorBeginOverlap(OtherActor);
}

void AHealthStation::PickUpHandle()
{
    if (!m_character || isUsed) return;

    m_character->GetComponentByClass<UHealthComponent>()->Heal(healAmount);
    pInteractWidget->SetVisibility(false);
    pHealthDisplayMeshComponent->SetVisibility(false);
    pRectLightComponent->SetIntensity(0.0f);
    isUsed = true;
}
