// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/BaseCharacter.h"
#include "Character/Player/Components/AbilityComponent.h"
#include "Character/Player/Components/HealthComponent.h"
#include "Character/Player/Components/BaseWeaponComponent.h"
#include "Character/Player/Components/StateMachineComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"


ABaseCharacter::ABaseCharacter(const FObjectInitializer& ObjInit)
    : Super(ObjInit)
{
    PrimaryActorTick.bCanEverTick = true;

    pAbilityComponent = CreateDefaultSubobject<UAbilityComponent>("AbilityComponent");
    pAbilityComponent->bWantsInitializeComponent = true;
    
    pWeaponComponent = CreateDefaultSubobject<UBaseWeaponComponent>("WeaponComponent");
    pHealthComponent = CreateDefaultSubobject<UHealthComponent>("HealthComponent");

    pStateMachineComponent = CreateDefaultSubobject<UStateMachineComponent>("StateMachineComponent");
}

bool ABaseCharacter::IsDead() const
{
    return pHealthComponent->IsDead();
}

UHealthComponent* ABaseCharacter::GetHealthComponent() const
{
    return pHealthComponent;
}

UBaseWeaponComponent* ABaseCharacter::GetBaseWeaponComponent() const
{
    return pWeaponComponent;
}

void ABaseCharacter::PostInitializeComponents()
{
    Super::PostInitializeComponents();
    
    pHealthComponent->OnDied.AddUObject(this, &ABaseCharacter::OnDeath);
}

void ABaseCharacter::BeginPlay()
 {
     Super::BeginPlay();
 
     check(pHealthComponent);
 }

void ABaseCharacter::OnDeath()
{
    OnDied();
    
    pWeaponComponent->DisableAllWeaponsCollision();
    GetCharacterMovement()->DisableMovement();
    GetCapsuleComponent()->SetCollisionResponseToAllChannels(ECR_Ignore);
    GetMesh()->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
    GetMesh()->SetSimulatePhysics(true);

    pWeaponComponent->DisableAllWeaponsCollision();
}

void ABaseCharacter::Tick(float DeltaTime)
 {
    Super::Tick(DeltaTime);
    
 }

UStateMachineComponent* ABaseCharacter::GetStateMachineComponent() const
{
    return pStateMachineComponent;
}

UAbilityComponent* ABaseCharacter::GetAbilityComponent() const
{
    return pAbilityComponent;
}