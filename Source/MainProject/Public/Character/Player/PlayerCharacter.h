// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "Character/BaseCharacter.h"
#include "PlayerCharacter.generated.h"

class UCameraComponent;
class USpringArmComponent;

UCLASS()
class MAINPROJECT_API APlayerCharacter : public ABaseCharacter
{
    GENERATED_BODY()

public:
    APlayerCharacter(const FObjectInitializer& ObjInit);
    
    FVector2D GetCameraForwardVector2D() const { return FVector2D(pCameraComponent->GetForwardVector()).GetSafeNormal(); }
    FVector2D GetCameraRightVector2D() const { return FVector2D(pCameraComponent->GetRightVector()).GetSafeNormal(); }

protected:
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components", DisplayName="SpringArmComponent")
    USpringArmComponent* pSpringArmComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components", DisplayName="CameraComponent")
    UCameraComponent* pCameraComponent;
    
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;
    
};
