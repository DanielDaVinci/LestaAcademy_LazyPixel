// Lazy Pixel. All Rights Reserved.


#include "Environment/HealthStation.h"
#include "Components/RectLightComponent.h"
#include "Components/WidgetComponent.h"
#include "Character/Player/PlayerCharacter.h"
#include "Character/Player/Components/HealthComponent.h"
#include "Components/TimelineComponent.h"

AHealthStation::AHealthStation()
{
    pBaseMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("HealthStationMeshComponent");
    pBaseMeshComponent->SetupAttachment(GetRootComponent());

    pHealthDisplayMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("HealthDisplayMeshComponent");
    pHealthDisplayMeshComponent->SetupAttachment(pBaseMeshComponent);

    pRectLightComponent = CreateDefaultSubobject<URectLightComponent>("RectLightComponent");
    pRectLightComponent->SetupAttachment(pBaseMeshComponent);

    pTimelineComponent = CreateDefaultSubobject<UTimelineComponent>("TimelineComponent");
}

void AHealthStation::BeginPlay() 
{
    Super::BeginPlay();

    BindTimeline();
}

void AHealthStation::NotifyActorBeginOverlap(AActor* OtherActor)
{
    if (isUsed) 
        return;

    Super::NotifyActorBeginOverlap(OtherActor);
}

void AHealthStation::OnPickUpHandle(APlayerCharacter* PlayerCharacter)
{
    if (!PlayerCharacter || isUsed)
        return;

    const auto pHealthComponent = PlayerCharacter->GetHealthComponent();
    if (!pHealthComponent)
        return;
    
    pHealthComponent->Heal(healAmount);
    
    pInteractWidget->SetVisibility(false);
    pHealthDisplayMeshComponent->SetVisibility(false);
    pRectLightComponent->SetIntensity(0.0f);
    pTimelineComponent->Stop();
    isUsed = true;

    DisableCollision();
    PlayerCharacter->ResetCollisions();
}

void AHealthStation::BindTimeline()
{
    if (!pCurveFloat || !pTimelineComponent)
        return;

    FOnTimelineFloat ProgressFunction;
    ProgressFunction.BindDynamic(this, &AHealthStation::HandleTimeline);
    pTimelineComponent->AddInterpFloat(pCurveFloat, ProgressFunction);
    pTimelineComponent->SetLooping(true);
    pTimelineComponent->Play();
}

void AHealthStation::HandleTimeline(float Value) 
{
    //UE_LOG(LogTemp, Display, TEXT("%f"), Value);
    pHealthDisplayMeshComponent->AddLocalRotation(FRotator(0.0f, Value, 0.0f));
}
