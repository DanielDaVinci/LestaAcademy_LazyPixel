// Lazy Pixel. All Rights Reserved.


#include "Pickups/WeaponPickup.h"
#include "Character/Player/PlayerCharacter.h"
#include "Character/Player/Components/PlayerWeaponComponent.h"

AWeaponPickup::AWeaponPickup()
{
	PrimaryActorTick.bCanEverTick = true;

    pBaseMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>("WeaponMeshComponent");
    pBaseMeshComponent->SetupAttachment(GetRootComponent());
}

void AWeaponPickup::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    AddActorLocalRotation(FRotator(0.0f, rotationYaw, 0.0f));
}

void AWeaponPickup::OnPickUpHandle(APlayerCharacter* PlayerCharacter) 
{
    Super::OnPickUpHandle(PlayerCharacter);
    
    const auto weaponComponent = PlayerCharacter ? PlayerCharacter->GetPlayerWeaponComponent() : nullptr;
    if (!weaponComponent)
        return;
    
    weaponComponent->PickUpWeapon(weaponClass);
    PlayerCharacter->ResetCollisions();
            
    Destroy();
}
