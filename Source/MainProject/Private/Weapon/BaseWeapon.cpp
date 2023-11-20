// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon/BaseWeapon.h"
#include "Components/BoxComponent.h"

ABaseWeapon::ABaseWeapon()
{
    PrimaryActorTick.bCanEverTick = false;

    pSceneComponent = CreateDefaultSubobject<USceneComponent>("SceneComponent");
    SetRootComponent(pSceneComponent);

    pSkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>("WeaponMesh");
    pSkeletalMeshComponent->SetupAttachment(GetRootComponent());

    pBoxCollision = CreateDefaultSubobject<UBoxComponent>("BoxCollision");
    pBoxCollision->SetupAttachment(pSkeletalMeshComponent);
    InitBoxCollision();
}

void ABaseWeapon::InitBoxCollision()
{
    pBoxCollision->OnComponentBeginOverlap.AddDynamic(this, &ABaseWeapon::OnMeleeWeaponOverlap);

    pBoxCollision->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    pBoxCollision->SetCollisionObjectType(ECollisionChannel::ECC_WorldDynamic);
    pBoxCollision->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
    pBoxCollision->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Overlap);
    
    ///////////////////////////////////////////////////////////////////////////////
    // !!!!! ��� ������������ ������ ��������� � ��� ����������� ������ ����� !!!!!
    pBoxCollision->SetCollisionResponseToChannel(ECollisionChannel::ECC_WorldStatic, ECollisionResponse::ECR_Overlap);
    ///////////////////////////////////////////////////////////////////////////////
}

void ABaseWeapon::OnMeleeWeaponOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
    int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Yellow, TEXT("Weapon Overlap Event!"));
}

void ABaseWeapon::OnOffCollision()
{
    if (!pBoxCollision) return;

    if (pBoxCollision->GetCollisionEnabled() == ECollisionEnabled::NoCollision)
    {
        GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Yellow, TEXT("Weapon Collision ON!"));
        pBoxCollision->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    }
    else
    {
        GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Yellow, TEXT("Weapon Collision OFF!"));
        pBoxCollision->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    }

    
}

