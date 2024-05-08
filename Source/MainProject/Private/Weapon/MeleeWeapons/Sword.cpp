// Lazy Pixel. All Rights Reserved.


#include "Weapon/MeleeWeapons/Sword.h"

#include "Character/BaseCharacter.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/DamageEvents.h"

DEFINE_LOG_CATEGORY_STATIC(LogSwordWeapon, All, All);

ASword::ASword()
{
    pBoxCollision = CreateDefaultSubobject<UBoxComponent>("BoxCollision");
    pBoxCollision->SetupAttachment(pWeaponMeshComponent);
    defaultMaterial = pWeaponMeshComponent->GetMaterial(0);
    InitBoxCollision();
}

void ASword::InitBoxCollision()
{
    pBoxCollision->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    pBoxCollision->SetCollisionObjectType(ECollisionChannel::ECC_WorldDynamic);
    pBoxCollision->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
    pBoxCollision->SetCollisionResponseToChannel(ECC_Enemy, ECollisionResponse::ECR_Overlap);
}

void ASword::BeginPlay()
{
    Super::BeginPlay();

    BindEvents();
}

void ASword::BindEvents()
{
    if (pBoxCollision)
    {
        pBoxCollision->OnComponentBeginOverlap.AddDynamic(this, &ASword::OnMeleeWeaponOverlap);
    }
}

void ASword::OnMeleeWeaponOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
    int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    if (alreadyDamagedActors.Contains(OtherActor))
        return;
    
    if (alreadyDamagedActors.IsEmpty())
    {
        OnImpactHit.Broadcast();
    }
    
    GiveDamage(OtherActor);
    alreadyDamagedActors.Add(OtherActor);
}

void ASword::ClearDamagedActors()
{
    DisableAttackCollision();
    alreadyDamagedActors.Empty();
}

void ASword::EnableAttackCollision() const
{
    pBoxCollision->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
}

void ASword::DisableAttackCollision() const
{
    pBoxCollision->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void ASword::ChangeMaterial(bool isCharged)
{
    if (isCharged)
        SetChargedMaterial();
    else
        SetDefaultMaterial();
}

void ASword::SetChargedMaterial()
{
    if (!chargedMaterial)
        return;
    
    pWeaponMeshComponent->SetMaterial(0, chargedMaterial);
}

void ASword::SetDefaultMaterial()
{
    pWeaponMeshComponent->SetMaterial(0, defaultMaterial);
}
