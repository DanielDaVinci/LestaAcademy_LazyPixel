// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BaseCharacter.generated.h"

class UBoxComponent;
class UTextRenderComponent;
class UHealthComponent;
class UBaseWeaponComponent;
class UAbilityComponent;

UCLASS()
class MAINPROJECT_API ABaseCharacter : public ACharacter
{
	GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Collisions", DisplayName = "BoxCollission")
    UBoxComponent* pBoxCollision;
    
	ABaseCharacter(const FObjectInitializer& ObjInit);

    virtual void Tick(float DeltaTime) override;

protected:
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components", DisplayName = "AbilityComponent")
    UAbilityComponent* pAbilityComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components", DisplayName = "WeaponComponent")
    UBaseWeaponComponent* pWeaponComp; 

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components", DisplayName="HealthComponent")
    UHealthComponent* pHealthComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components", DisplayName="HealthTextComponent")
    UTextRenderComponent* pHealthTextComponent;
    
    virtual void PostInitializeComponents() override;
    
	virtual void BeginPlay() override;

    virtual void OnDeath() {}

private:
    UFUNCTION()
    void CheckHealthValue(float Health);
        
};
