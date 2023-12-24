// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon/BaseWeapon.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/DamageEvents.h"
#include "GameFramework/Character.h"


DEFINE_LOG_CATEGORY_STATIC(LogBaseWeapon, All, All);

ABaseWeapon::ABaseWeapon()
{
    PrimaryActorTick.bCanEverTick = false;

    pSceneComponent = CreateDefaultSubobject<USceneComponent>("SceneComponent");
    SetRootComponent(pSceneComponent);

    pWeaponMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>("WeaponMeshComponent");
    pWeaponMeshComponent->SetupAttachment(GetRootComponent());

    pBoxCollision = CreateDefaultSubobject<UBoxComponent>("BoxCollision");
    pBoxCollision->SetupAttachment(pWeaponMeshComponent);
    InitBoxCollision();
}

void ABaseWeapon::InitBoxCollision()
{
    pBoxCollision->OnComponentBeginOverlap.AddDynamic(this, &ABaseWeapon::OnMeleeWeaponOverlap);

    pBoxCollision->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    pBoxCollision->SetCollisionObjectType(ECollisionChannel::ECC_WorldDynamic);
    pBoxCollision->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
    pBoxCollision->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Overlap);
}

void ABaseWeapon::OnMeleeWeaponOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
    int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    const auto Character = Cast<ACharacter>(GetOwner());
    if (OtherActor->GetClass() == Character->GetClass())
        return;

    EnemyActors.AddUnique(OtherActor);
}

void ABaseWeapon::OnOffCollision(USkeletalMeshComponent* MeshComp)
{
    if (!pBoxCollision || (GetOwner() != MeshComp->GetOwner()))
        return;
    
    
    if (pBoxCollision->GetCollisionEnabled() == ECollisionEnabled::NoCollision)
    {
        //UE_LOG(LogBaseWeapon, Display, TEXT("Collision ON!"));
        pBoxCollision->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    }
    else
    {
        //UE_LOG(LogBaseWeapon, Display, TEXT("Collision OFF!"));
        pBoxCollision->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    }
}

void ABaseWeapon::DisableCollision(USkeletalMeshComponent* MeshComp) 
{
    if (!pBoxCollision || (GetOwner() != MeshComp->GetOwner()))
        return;

    // Temporary dummy for testing, protect player character from disabling overlap events
    if (UGameplayStatics::GetPlayerCharacter(GetWorld(), 0) == Cast<ACharacter>(GetOwner()))
    {
        UE_LOG(LogBaseWeapon, Display, TEXT("Player is dead!"));
        return;
    }

    pBoxCollision->SetGenerateOverlapEvents(0);
}

void ABaseWeapon::OnDamageAllOverlapedActors()
{
    for (auto Actor : EnemyActors)
    {
        Actor->TakeDamage(damage, FDamageEvent(), UGameplayStatics::GetPlayerController(GetWorld(), 0), this);
        UE_LOG(LogBaseWeapon, Display, TEXT("Damage %.f to actor %s"), damage, *(Actor->GetName()));
    }
    EnemyActors.Empty();
}

