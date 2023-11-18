// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon/BaseWeapon.h"

ABaseWeapon::ABaseWeapon()
{
    PrimaryActorTick.bCanEverTick = false;

    pSceneComponent = CreateDefaultSubobject<USceneComponent>("SceneComponent");
    SetRootComponent(pSceneComponent);

    pSkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>("WeaponMesh");
    pSkeletalMeshComponent->SetupAttachment(GetRootComponent());
}


