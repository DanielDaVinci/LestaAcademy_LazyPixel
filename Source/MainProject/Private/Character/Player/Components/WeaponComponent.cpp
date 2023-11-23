// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/Player/Components/WeaponComponent.h"
#include "Weapon/BaseWeapon.h"
#include "Character/BaseCharacter.h"
#include "Character/Player/BasePlayerController.h"
#include "Kismet/GameplayStatics.h"
#include "Animations/MeleeAtackAnimNotifyState.h"

DEFINE_LOG_CATEGORY_STATIC(LogWeaponComponent, All, All);

UWeaponComponent::UWeaponComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UWeaponComponent::BeginPlay()
{
	Super::BeginPlay();

    if (!GetCharacter())
        return;
    
    SpawnWeapon();
    InitAnimations();

    const auto pPlayerController = Cast<ABasePlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));
    if (m_pCharacter->GetController() == pPlayerController)
        pPlayerController->OnAttack.AddUObject(this, &UWeaponComponent::LightAttack);
}

bool UWeaponComponent::GetCharacter() 
{
    m_pCharacter = Cast<ABaseCharacter>(GetOwner());
    if (!m_pCharacter)
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
    m_pWeapon->SetOwner(m_pCharacter);
}

void UWeaponComponent::InitAnimations() 
{
    if (!m_pWeapon || !m_pWeapon->GetAttackMontage())
        return;

    const auto NotifyEvents = m_pWeapon->GetAttackMontage()->Notifies;
    for (auto NotifyEvent : NotifyEvents)
    {
        auto MeleeNotifyState = Cast<UMeleeAttackAnimNotifyState>(NotifyEvent.NotifyStateClass);
        if (MeleeNotifyState)
        {
            MeleeNotifyState->FOnMeleeAttackNotify.AddUObject(m_pWeapon, &ABaseWeapon::OnOffCollision);
            MeleeNotifyState->FOnMeleeAttackDamageNotify.AddUObject(m_pWeapon, &ABaseWeapon::OnDamageAllOverlapedActors);
            break;
        }
    }
}

void UWeaponComponent::LightAttack() 
{
    UE_LOG(LogWeaponComponent, Display, TEXT("LightAttack!"));
    m_pCharacter->PlayAnimMontage(m_pWeapon->GetAttackMontage());
}

void UWeaponComponent::DisableMeleeCollision()
{
    m_pWeapon->DisableCollision(m_pCharacter->GetMesh());
}
