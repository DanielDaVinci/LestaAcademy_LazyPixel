// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/Player/Components/WeaponComponent.h"
#include "Weapon/BaseWeapon.h"
#include "GameFramework/Character.h"
#include "Character/Player/BasePlayerController.h"
#include "Kismet/GameplayStatics.h"

DEFINE_LOG_CATEGORY_STATIC(LogWeaponComponent, All, All);

UWeaponComponent::UWeaponComponent()
{
	PrimaryComponentTick.bCanEverTick = false;

}

void UWeaponComponent::BeginPlay()
{
	Super::BeginPlay();

    BindInput();
	SpawnWeapon();
}

void UWeaponComponent::BindInput() 
{
    const auto playerController = Cast<ABasePlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));
    if (!playerController)
        return;

    playerController->OnAttack.AddUObject(this, &UWeaponComponent::LightAttack);
}

void UWeaponComponent::SpawnWeapon()
{
    if (!GetWorld()) return;

	ACharacter* Character = Cast<ACharacter>(GetOwner());
    if (!Character) return;

	const auto Weapon = GetWorld()->SpawnActor<ABaseWeapon>(WeaponClass);
    if (!Weapon) return;

    FAttachmentTransformRules AttachmentRules(EAttachmentRule::SnapToTarget, false);
    Weapon->AttachToComponent(Character->GetMesh(), AttachmentRules, WeaponAttachPointName);

}

void UWeaponComponent::LightAttack() 
{
    UE_LOG(LogWeaponComponent, Display, TEXT("LightAttack!"));
}

