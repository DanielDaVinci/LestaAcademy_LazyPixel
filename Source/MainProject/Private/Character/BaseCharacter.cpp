// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/BaseCharacter.h"
#include "Character/Player/Components/AbilityComponent.h"
#include "Character/Player/Components/HealthComponent.h"
#include "Character/Player/Components/BaseWeaponComponent.h"
#include "Components/BoxComponent.h"
#include "Components/TextRenderComponent.h"


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
}

void ABaseCharacter::PostInitializeComponents()
{
    Super::PostInitializeComponents();

    pHealthComponent->OnHealthChanged.AddUObject(this, &ABaseCharacter::CheckHealthValue);
    pHealthComponent->OnDeath.AddUObject(this, &ABaseCharacter::OnDeath);
    pHealthComponent->OnDeath.AddUObject(pWeaponComp, &UBaseWeaponComponent::DisableMeleeCollision);
}

void ABaseCharacter::BeginPlay()
 {
     Super::BeginPlay();
 
     check(pHealthComponent);
     check(pHealthTextComponent);
 
 }
 
 void ABaseCharacter::Tick(float DeltaTime)
 {
    Super::Tick(DeltaTime);
    
 }

void ABaseCharacter::CheckHealthValue(float Health)
{
    pHealthTextComponent->SetText(FText::FromString(FString::Printf(TEXT("%.0f"), Health)));
}
