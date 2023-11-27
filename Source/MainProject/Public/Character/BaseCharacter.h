// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BaseCharacter.generated.h"

class UTextRenderComponent;
class UHealthComponent;
class UWeaponComponent;
class UAbilityComponent;

UCLASS()
class MAINPROJECT_API ABaseCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	ABaseCharacter(const FObjectInitializer& ObjInit);

protected:
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components", DisplayName="AbilityComponent")
    UAbilityComponent* pAbilityComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components", DisplayName = "WeaponComponent")
    UWeaponComponent* pWeaponComponent; 

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components", DisplayName="HealthComponent")
    UHealthComponent* pHealthComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components", DisplayName="HealthTextComponent")
    UTextRenderComponent* pHealthTextComponent;

    virtual void PostInitializeComponents() override;
    
	virtual void BeginPlay() override;

    virtual void OnDeath() {}

public:	
	virtual void Tick(float DeltaTime) override;

private:
    UFUNCTION()
    void CheckHealthValue(float Health);
};
