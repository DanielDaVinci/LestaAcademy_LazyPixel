// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/BaseCharacter.h"
#include "PlayerCharacter.generated.h"

class UAbilityComponent;
class UCameraComponent;
class USpringArmComponent;

UCLASS()
class MAINPROJECT_API APlayerCharacter : public ABaseCharacter
{
    GENERATED_BODY()

public:
    APlayerCharacter();

protected:
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components", DisplayName="SpringArmComponent")
    USpringArmComponent* pSpringArmComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components", DisplayName="CameraComponent")
    UCameraComponent* pCameraComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components", DisplayName="CameraComponent")
    UAbilityComponent* pAbilityComponent;

    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;
};
