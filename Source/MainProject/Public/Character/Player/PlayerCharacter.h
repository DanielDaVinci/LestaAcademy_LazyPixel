// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "Character/BaseCharacter.h"
#include "PlayerCharacter.generated.h"

class UAbilityComponent;
class UCameraComponent;
class USpringArmComponent;
class UWeaponComponent;
class UHealthComponent;
class UTextRenderComponent;

UCLASS()
class MAINPROJECT_API APlayerCharacter : public ABaseCharacter
{
    GENERATED_BODY()

public:
    APlayerCharacter();

    FVector2D GetCameraForwardVector2D() const { return FVector2D(pCameraComponent->GetForwardVector()).GetSafeNormal(); }
    FVector2D GetCameraRightVector2D() const { return FVector2D(pCameraComponent->GetRightVector()).GetSafeNormal(); }

protected:
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components", DisplayName="SpringArmComponent")
    USpringArmComponent* pSpringArmComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components", DisplayName="CameraComponent")
    UCameraComponent* pCameraComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components", DisplayName="CameraComponent")
    UAbilityComponent* pAbilityComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components", DisplayName = "WeaponComponent")
    UWeaponComponent* pWeaponComponent; 

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components", DisplayName="HealthComponent")
    UHealthComponent* pHealthComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components", DisplayName="HealthComponent")
    UTextRenderComponent* pHealthTextComponent;

    virtual void PostInitializeComponents() override;
    
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

private:
    UFUNCTION()
    void CheckHealthValue(float Health);

    void OnDeath();
};
