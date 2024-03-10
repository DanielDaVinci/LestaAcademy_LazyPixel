// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/BaseCharacter.h"
#include "Character/Player/Components/AbilityComponent.h"
#include "Character/Player/Components/HealthComponent.h"
#include "Character/Player/Components/BaseWeaponComponent.h"
#include "Character/Player/Components/StateMachineComponent.h"
#include "Components/BoxComponent.h"
#include "Components/TextRenderComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"


ABaseCharacter::ABaseCharacter(const FObjectInitializer& ObjInit)
    : Super(ObjInit)
{
    PrimaryActorTick.bCanEverTick = true;

    pAbilityComponent = CreateDefaultSubobject<UAbilityComponent>("AbilityComponent");
    pAbilityComponent->bWantsInitializeComponent = true;
    
    pWeaponComp = CreateDefaultSubobject<UBaseWeaponComponent>("WeaponComponent");
    pHealthComponent = CreateDefaultSubobject<UHealthComponent>("HealthComponent");

    pHealthTextComponent = CreateDefaultSubobject<UTextRenderComponent>("HealthTextComponent");
    pHealthTextComponent->SetupAttachment(GetRootComponent());

    pStateMachineComponent = CreateDefaultSubobject<UStateMachineComponent>("StateMachineComponent");
}

UHealthComponent* ABaseCharacter::GetHealthComponent() const
{
    return pHealthComponent;
}

void ABaseCharacter::PostInitializeComponents()
{
    Super::PostInitializeComponents();

    pHealthComponent->OnHealthChanged.AddUObject(this, &ABaseCharacter::CheckHealthValue);
    pHealthComponent->OnDied.AddUObject(this, &ABaseCharacter::OnDeath);
}

void ABaseCharacter::BeginPlay()
 {
     Super::BeginPlay();
 
     check(pHealthComponent);
     check(pHealthTextComponent);
 
 }

void ABaseCharacter::OnDeath()
{
    GetCharacterMovement()->DisableMovement();
    GetCapsuleComponent()->SetCollisionResponseToAllChannels(ECR_Ignore);
    GetMesh()->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
    GetMesh()->SetSimulatePhysics(true);

    pWeaponComp->DisableAllWeaponsCollision();
}

void ABaseCharacter::Tick(float DeltaTime)
 {
    Super::Tick(DeltaTime);
    
 }

void ABaseCharacter::CheckHealthValue(float Health)
{
    pHealthTextComponent->SetText(FText::FromString(FString::Printf(TEXT("%.0f"), Health)));
}

UStateMachineComponent* ABaseCharacter::GetStateMachineComponent() const
{
    return pStateMachineComponent;
}
