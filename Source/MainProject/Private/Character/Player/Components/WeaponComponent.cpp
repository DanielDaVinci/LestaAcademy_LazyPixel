// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/Player/Components/WeaponComponent.h"
#include "Weapon/BaseWeapon.h"
#include "Character/BaseCharacter.h"
#include "Character/Player/BasePlayerController.h"
#include "Kismet/GameplayStatics.h"
#include "Components/BoxComponent.h"
#include "Animations/MeleeAtackAnimNotifyState.h"

DEFINE_LOG_CATEGORY_STATIC(LogWeaponComponent, All, All);

UWeaponComponent::UWeaponComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UWeaponComponent::BeginPlay()
{
	Super::BeginPlay();

    if (!GetCharacter() || !GetController())
        return;

    // Пока никакого функционала(даже оружия в руке), если владелец компонента не игрок
    if (m_pCharacter->GetController() != m_pPlayerController)
        return;

    SpawnWeapon();
    InitAnimations();
    m_pPlayerController->OnAttack.AddUObject(this, &UWeaponComponent::LightAttack);
}

bool UWeaponComponent::GetCharacter() 
{
    m_pCharacter = Cast<ABaseCharacter>(GetOwner());
    if (!m_pCharacter)
        return false;
    return true;
}

bool UWeaponComponent::GetController() 
{
    m_pPlayerController = Cast<ABasePlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));
    if (!m_pPlayerController)
        return false;
    return true;
}

void UWeaponComponent::SpawnWeapon()
{
    if (!GetWorld()) return;

	m_pWeapon = GetWorld()->SpawnActor<ABaseWeapon>(WeaponClass);
    if (!m_pWeapon) return;

    FAttachmentTransformRules AttachmentRules(EAttachmentRule::SnapToTarget, false);
    m_pWeapon->AttachToComponent(m_pCharacter->GetMesh(), AttachmentRules, WeaponAttachPointName);

    GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Yellow, TEXT("Spawn Weapon!"));
}

void UWeaponComponent::InitAnimations() 
{
    if (!pLightAttackAnimMontage) return;

    const auto NotifyEvents = pLightAttackAnimMontage->Notifies;
    for (auto NotifyEvent : NotifyEvents)
    {
        auto MeleeNotifyState = Cast<UMeleeAttackAnimNotifyState>(NotifyEvent.NotifyStateClass);
        if (MeleeNotifyState)
        {
            MeleeNotifyState->FOnMeleeAttackNotify.AddUObject(m_pWeapon, &ABaseWeapon::OnOffCollision);
            break;
        }
    }
}

void UWeaponComponent::LightAttack() 
{
    UE_LOG(LogWeaponComponent, Display, TEXT("LightAttack!"));
    PlayAnimMontage(pLightAttackAnimMontage);
}

void UWeaponComponent::PlayAnimMontage(UAnimMontage* Montage) 
{
    m_pCharacter->PlayAnimMontage(Montage);
}

