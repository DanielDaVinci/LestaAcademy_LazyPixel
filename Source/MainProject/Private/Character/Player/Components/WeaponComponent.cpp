// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/Player/Components/WeaponComponent.h"
#include "Weapon/BaseWeapon.h"
#include "Character/BaseCharacter.h"
#include "Character/Player/BasePlayerController.h"
#include "Animations/MeleeAtackAnimNotifyState.h"
#include "Character/Player/PlayerCharacter.h"
#include "Character/Player/Components/PlayerMovementComponent.h"

DEFINE_LOG_CATEGORY_STATIC(LogWeaponComponent, All, All);

UWeaponComponent::UWeaponComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UWeaponComponent::BeginPlay()
{
	Super::BeginPlay();

    ABaseCharacter* Character = Cast<ABaseCharacter>(GetOwner());
    if (!Character) return;
    
    SpawnWeapon();
    InitAnimations();

    const auto pPlayerController = Cast<ABasePlayerController>(Character->GetController());
    if (pPlayerController)
        pPlayerController->OnMeleeAttack.AddUObject(this, &UWeaponComponent::MeleeAttack);
}

void UWeaponComponent::SpawnWeapon()
{
    ABaseCharacter* Character = Cast<ABaseCharacter>(GetOwner());
    if (!Character || ! GetWorld()) return;    

    m_pWeapon = GetWorld()->SpawnActor<ABaseWeapon>(WeaponClass);
    if (!m_pWeapon) return;

    FAttachmentTransformRules AttachmentRules(EAttachmentRule::SnapToTarget, false);
    m_pWeapon->AttachToComponent(Character->GetMesh(), AttachmentRules, WeaponAttachPointName);
    m_pWeapon->SetOwner(Character);
}

void UWeaponComponent::InitAnimations() 
{
    if (!m_pWeapon || !m_pWeapon->GetAttackMontage())
        return;

    m_pWeapon->GetAttackMontage()->RateScale = m_pWeapon->GetAttackSpeed();
    const auto NotifyEvents = m_pWeapon->GetAttackMontage()->Notifies;
    for (auto NotifyEvent : NotifyEvents)
    {
        auto MeleeNotifyState = Cast<UMeleeAttackAnimNotifyState>(NotifyEvent.NotifyStateClass);
        if (MeleeNotifyState)
        {
            MeleeNotifyState->FOnMeleeAttackNotify.AddUObject(this, &UWeaponComponent::OnStartAttackState);
            MeleeNotifyState->FOnMeleeAttackDamageNotify.AddUObject(this, &UWeaponComponent::OnEndAttackState);
            break;
        }
    }
}

void UWeaponComponent::MeleeAttack() 
{
    ABaseCharacter* Character = Cast<ABaseCharacter>(GetOwner());
    if (!Character) return;

    if (Character->GetMesh()->GetAnimInstance()->Montage_IsPlaying(m_pWeapon->GetAttackMontage()))
        return;

    const auto pmComponent = GetPlayerMovementComponent();
    if (!pmComponent)
        return;

    FRotator viewRotation = pmComponent->GetMouseViewDirection().Rotation();
    pmComponent->FixCharacterRotation(viewRotation);
    pmComponent->SetDeceleration(0.5f);
 
    UE_LOG(LogWeaponComponent, Display, TEXT("LightAttack!"));
    Character->PlayAnimMontage(m_pWeapon->GetAttackMontage());
}

void UWeaponComponent::OnStartAttackState(USkeletalMeshComponent* MeshComp)
{
    m_pWeapon->OnOffCollision(MeshComp);
}

void UWeaponComponent::OnEndAttackState()
{
    m_pWeapon->OnDamageAllOverlapedActors();

    const auto pmComponent = GetPlayerMovementComponent();
    if (!pmComponent)
        return;
 
    pmComponent->SetDeceleration(0.0f);
    pmComponent->UnfixCharacterRotation();
}

UPlayerMovementComponent* UWeaponComponent::GetPlayerMovementComponent() const
{
    const auto character = Cast<ACharacter>(GetOwner());
    return character ? Cast<UPlayerMovementComponent>(character->GetMovementComponent()) : nullptr;
}

void UWeaponComponent::DisableMeleeCollision()
{
    const auto Character = Cast<ACharacter>(GetOwner());
    if (!Character) return;

    m_pWeapon->DisableCollision(Character->GetMesh());
}
