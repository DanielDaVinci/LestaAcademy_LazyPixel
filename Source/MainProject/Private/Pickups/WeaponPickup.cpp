// Lazy Pixel. All Rights Reserved.


#include "Pickups/WeaponPickup.h"
#include "Components/SphereComponent.h"
#include "Components/WidgetComponent.h"
#include "Character/Player/PlayerCharacter.h"
#include "Character/Player/BasePlayerController.h"
#include "Weapon/BaseWeapon.h"
#include "Character/Player/Components/WeaponComponent.h"

AWeaponPickup::AWeaponPickup()
{
	PrimaryActorTick.bCanEverTick = true;

	CollisionComponent = CreateDefaultSubobject<USphereComponent>("SphereComponent");
    CollisionComponent->InitSphereRadius(50.0f);
    CollisionComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    CollisionComponent->SetCollisionResponseToAllChannels(ECR_Overlap);
    SetRootComponent(CollisionComponent);

    WeaponMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>("WeaponMeshComponent");
    WeaponMeshComponent->SetupAttachment(GetRootComponent());

    InteractWidget = CreateDefaultSubobject<UWidgetComponent>("InteractWidgetComponent");
    InteractWidget->SetupAttachment(GetRootComponent());
    InteractWidget->SetWidgetSpace(EWidgetSpace::Screen);
    InteractWidget->SetDrawAtDesiredSize(true);
}

void AWeaponPickup::BeginPlay()
{
	Super::BeginPlay();
    InteractWidget->SetVisibility(false);
}

void AWeaponPickup::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    AddActorLocalRotation(FRotator(0.0f, RotationYaw, 0.0f));
}

void AWeaponPickup::NotifyActorBeginOverlap(AActor* OtherActor) 
{
    Super::NotifyActorBeginOverlap(OtherActor);

    const auto Character = Cast<APlayerCharacter>(OtherActor);
    if (!Character) return;

    const auto playerController = Cast<ABasePlayerController>(Character->GetController());
    if (!playerController) return;

    InteractWidget->SetVisibility(true);
    m_delegateHandle = playerController->OnInteract.AddUObject(this, &AWeaponPickup::PickUpHandle);
}

void AWeaponPickup::NotifyActorEndOverlap(AActor* OtherActor) 
{
    Super::NotifyActorEndOverlap(OtherActor);

    const auto Character = Cast<ACharacter>(OtherActor);
    if (!Character) return;

    const auto playerController = Cast<ABasePlayerController>(Character->GetController());
    if (!playerController) return;

    InteractWidget->SetVisibility(false);
    playerController->OnInteract.Remove(m_delegateHandle);
}

void AWeaponPickup::PickUpHandle() 
{
    APlayerCharacter* PlayerCharacter = Cast<APlayerCharacter>(GetWorld()->GetFirstPlayerController()->GetCharacter());
    PlayerCharacter->GetComponentByClass<UWeaponComponent>()->PickUpWeapon(WeaponClass);
    Destroy();
}
