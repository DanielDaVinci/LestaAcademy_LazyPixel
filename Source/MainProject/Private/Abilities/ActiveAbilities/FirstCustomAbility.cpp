// Lazy Pixel. All Rights Reserved.


#include "Abilities/ActiveAbilities/FirstCustomAbility.h"

#include "Character/BaseCharacter.h"
#include "Components/BoxComponent.h"
#include "Engine/DamageEvents.h"
#include "Kismet/GameplayStatics.h"

void UStrongAttackAbility::Init(ABaseCharacter* Character)
{
    Super::Init(Character);
    
    Character->pBoxCollision->OnComponentBeginOverlap.AddDynamic(this, &UStrongAttackAbility::OnBeginOverlap);

    Character->pBoxCollision->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    Character->pBoxCollision->SetCollisionObjectType(ECC_WorldDynamic);
    Character->pBoxCollision->SetCollisionResponseToAllChannels(ECR_Overlap);
    Character->pBoxCollision->SetCollisionResponseToChannel(ECC_WorldDynamic, ECR_Overlap);
}

bool UStrongAttackAbility::NativeActivate()
{
    const auto character = GetCharacter();

    GetWorld()->GetTimerManager().SetTimer(m_timerHandle, this, &UStrongAttackAbility::OnStrongAbilityEnd, abilityDuration);
    EnableCollision();
    character->LaunchCharacter(character->GetMesh()->GetRightVector().GetSafeNormal() * abilityDistance, true, false);
    
    return Super::NativeActivate();
}

void UStrongAttackAbility::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
    int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    const auto Character = Cast<ACharacter>(GetCharacter());
    if (OtherActor->GetClass() == Character->GetClass())
        return;

    OtherActor->TakeDamage(abilityDamage, FDamageEvent(), UGameplayStatics::GetPlayerController(GetWorld(), 0), GetCharacter());
}

void UStrongAttackAbility::EnableCollision()
{
    GetCharacter()->pBoxCollision->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
}

void UStrongAttackAbility::DisableCollision()
{
    GetCharacter()->pBoxCollision->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void UStrongAttackAbility::OnStrongAbilityEnd()
{
    DisableCollision();
    GetWorld()->GetTimerManager().ClearTimer(m_timerHandle);
}
