// Lazy Pixel. All Rights Reserved.


#include "Environment/Door.h"

#include "AITypes.h"
#include "Character/Player/PlayerCharacter.h"
#include "Components/RectLightComponent.h"

ADoor::ADoor()
{
	PrimaryActorTick.bCanEverTick = false;

    pRootSceneComponent = CreateDefaultSubobject<USceneComponent>("SceneComponent");
    SetRootComponent(pRootSceneComponent);

    pCollisionComponent = CreateDefaultSubobject<UBoxComponent>("CollisionComponent");
    pCollisionComponent->SetupAttachment(GetRootComponent());
    pCollisionComponent->SetCollisionObjectType(ECC_WorldStatic);
    pCollisionComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
    pCollisionComponent->SetCanEverAffectNavigation(false);

    pArrowComponent = CreateDefaultSubobject<UArrowComponent>("ArrowComponent");
    pArrowComponent->SetupAttachment(GetRootComponent());
    pArrowComponent->SetRelativeRotation(FRotator(0.0f, 0.0f, 0.0f));
    pArrowComponent->ArrowSize = 2.0f;
    pArrowComponent->ArrowColor = FColor::Blue;

    pWallDoorMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("WallDoorMeshComponent");
    pWallDoorMeshComponent->SetupAttachment(GetRootComponent());
    pWallDoorMeshComponent->SetCanEverAffectNavigation(false);

    pLeftDoorSceneComponent = CreateDefaultSubobject<USceneComponent>("LeftDoorSceneComponent");
    pLeftDoorSceneComponent->SetupAttachment(pWallDoorMeshComponent);
    pLeftDoorMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("LeftDoorMeshComponent");
    pLeftDoorMeshComponent->SetupAttachment(pLeftDoorSceneComponent);
    pLeftDoorMeshComponent->SetCanEverAffectNavigation(false);
    pLeftDoorMeshComponent->CastShadow = false;

    pRightDoorSceneComponent = CreateDefaultSubobject<USceneComponent>("RightDoorSceneComponent");
    pRightDoorSceneComponent->SetupAttachment(pWallDoorMeshComponent);
    pRightDoorMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("RightDoorMeshComponent");
    pRightDoorMeshComponent->SetupAttachment(pRightDoorSceneComponent);
    pRightDoorMeshComponent->SetCanEverAffectNavigation(false);
    pRightDoorMeshComponent->CastShadow = false;

    pDoorRectLightComponent = CreateDefaultSubobject<URectLightComponent>("DoorRectLightComponent");
    pDoorRectLightComponent->SetupAttachment(GetRootComponent());
    pDoorRectLightComponent->SetMobility(EComponentMobility::Stationary);
    pDoorRectLightComponent->SetRelativeLocation(FVector(0.0f, 0.0f, 140.0f));
    pDoorRectLightComponent->SetRelativeRotation(FRotator(-90.0f, 0.0f, 0.0f));
    pDoorRectLightComponent->SetLightColor(onClosedColor);
    pDoorRectLightComponent->IntensityUnits = ELightUnits::Candelas;
    pDoorRectLightComponent->Intensity = 3.0f;
    pDoorRectLightComponent->AttenuationRadius = 450.0f;
    pDoorRectLightComponent->SourceWidth = 270.0f;
    pDoorRectLightComponent->SourceHeight = 500.0f;
    pDoorRectLightComponent->BarnDoorLength = 12.0f;
    pDoorRectLightComponent->InverseExposureBlend = 0.28;
    pDoorRectLightComponent->ShadowResolutionScale = 0.125;
}

void ADoor::BeginPlay()
{
    Super::BeginPlay();

    ReplaceDoorsMaterialToDynamicMaterial();
}

void ADoor::NotifyActorEndOverlap(AActor* OtherActor)
{
    Super::NotifyActorEndOverlap(OtherActor);

    if (IsPlayerEntry(OtherActor))
        OnEnterDoor.Broadcast();
}

void ADoor::BlockDoor(ECollisionChannel Channel) const
{
    pCollisionComponent->SetCollisionResponseToChannel(Channel, ECR_Block);
}

void ADoor::UnblockDoor(ECollisionChannel Channel) const
{
    pCollisionComponent->SetCollisionResponseToChannel(Channel, ECR_Overlap);
}

void ADoor::SetDoorsColor(const FLinearColor& Color)
{
    if (!pLeftDoorMaterialDynamic || !pRightDoorMaterialDynamic || !pDoorRectLightComponent)
        return;
    
    pLeftDoorMaterialDynamic->SetVectorParameterValue("EmissiveTint", Color);
    pRightDoorMaterialDynamic->SetVectorParameterValue("EmissiveTint", Color);

    pDoorRectLightComponent->SetLightColor(Color);
}

bool ADoor::IsPlayerEntry(const AActor* OtherActor) const
{
    if (!OtherActor->IsA<APlayerCharacter>())
        return false;

    const FVector vectorToActor = (OtherActor->GetActorLocation() - GetActorLocation()).GetSafeNormal();
    const FVector arrowDirection = pArrowComponent->GetComponentRotation().Vector();
    const float angle = FMath::Acos(vectorToActor.CosineAngle2D(arrowDirection));
    
    return angle < PI / 2.0f;
}

void ADoor::ReplaceDoorsMaterialToDynamicMaterial()
{
    if (!pLeftDoorMeshComponent || !pLeftDoorMeshComponent->GetNumMaterials()
        || !pRightDoorMeshComponent || !pRightDoorMeshComponent->GetNumMaterials())
        return;
    
    pLeftDoorMaterialDynamic = ReplaceToDynamicMaterial(pLeftDoorMeshComponent, 0);
    pRightDoorMaterialDynamic = ReplaceToDynamicMaterial(pRightDoorMeshComponent, 0);
}

UMaterialInstanceDynamic* ADoor::ReplaceToDynamicMaterial(UMeshComponent* MeshComponent, uint32 MaterialIndex)
{
    const auto materialExample = MeshComponent->GetMaterial(MaterialIndex);
    const auto dynamicMaterial = UMaterialInstanceDynamic::Create(materialExample, this);
    MeshComponent->SetMaterial(MaterialIndex, dynamicMaterial);

    return dynamicMaterial;
}




