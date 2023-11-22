// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon/BaseWeapon.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/DamageEvents.h"
// #include "GameFramework/Character.h"
//#include "Character/Player/PlayerCharacter.h"
//#include "Engine/EngineTypes.h"


DEFINE_LOG_CATEGORY_STATIC(LogBaseWeapon, All, All);

ABaseWeapon::ABaseWeapon()
{
    PrimaryActorTick.bCanEverTick = false;

    pSceneComponent = CreateDefaultSubobject<USceneComponent>("SceneComponent");
    SetRootComponent(pSceneComponent);

    PStaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("WeaponMesh");
    PStaticMeshComponent->SetupAttachment(GetRootComponent());

    pBoxCollision = CreateDefaultSubobject<UBoxComponent>("BoxCollision");
    pBoxCollision->SetupAttachment(PStaticMeshComponent);
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
    OtherActor->TakeDamage(damage, FDamageEvent(), UGameplayStatics::GetPlayerController(GetWorld(), 0), this);
    UE_LOG(LogBaseWeapon, Display, TEXT("Damage dealt: %d"), damage);
}

void ABaseWeapon::OnOffCollision(USkeletalMeshComponent* MeshComp)
{
    if (!pBoxCollision) return;

    /* Не знаю как получить указатель на Character, все способы - nullptr*/
    /*const auto Player = Cast<ACharacter>(GetOwner()); 
    USkeletalMeshComponent* a = Player->GetMesh();*/
    
    /*APlayerCharacter* Player = Cast<APlayerCharacter>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
    if (Player->GetMesh() != MeshComp)
        return;*/

    if (pBoxCollision->GetCollisionEnabled() == ECollisionEnabled::NoCollision)
    {
        UE_LOG(LogBaseWeapon, Display, TEXT("Collision ON!"));
        pBoxCollision->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    }
    else
    {
        UE_LOG(LogBaseWeapon, Display, TEXT("Collision OFF!"));
        pBoxCollision->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    }
}

