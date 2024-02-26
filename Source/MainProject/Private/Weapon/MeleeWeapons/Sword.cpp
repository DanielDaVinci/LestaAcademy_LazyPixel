// Lazy Pixel. All Rights Reserved.


#include "Weapon/MeleeWeapons/Sword.h"

#include "Components/BoxComponent.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/DamageEvents.h"

DEFINE_LOG_CATEGORY_STATIC(LogSwordWeapon, All, All);

ASword::ASword()
{
    pBoxCollision = CreateDefaultSubobject<UBoxComponent>("BoxCollision");
    pBoxCollision->SetupAttachment(pWeaponMeshComponent);
    InitBoxCollision();
}

void ASword::InitBoxCollision()
{
    pBoxCollision->OnComponentBeginOverlap.AddDynamic(this, &ASword::OnMeleeWeaponOverlap);

    pBoxCollision->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    pBoxCollision->SetCollisionObjectType(ECollisionChannel::ECC_WorldDynamic);
    pBoxCollision->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
    pBoxCollision->SetCollisionResponseToChannel(ECC_Enemy, ECollisionResponse::ECR_Overlap);
}

void ASword::OnMeleeWeaponOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
    int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    if (alreadydamagedActors.Contains(OtherActor))
        return;

    OtherActor->TakeDamage(damage, FDamageEvent(), UGameplayStatics::GetPlayerController(GetWorld(), 0), this);
    UE_LOG(LogSwordWeapon, Display, TEXT("Damage %.f to actor %s"), damage, *(OtherActor->GetName()));
    alreadydamagedActors.Add(OtherActor);
}

void ASword::OnOffCollision() 
{
    if (!pBoxCollision)
        return;

    if (pBoxCollision->GetCollisionEnabled() == ECollisionEnabled::NoCollision)
        pBoxCollision->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    else
        pBoxCollision->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void ASword::ClearDamagedActors()
{
    DisableAttackCollision();
    alreadydamagedActors.Empty();
}

void ASword::EnableAttackCollision() const
{
    pBoxCollision->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
}

void ASword::DisableAttackCollision() const
{
    pBoxCollision->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}
