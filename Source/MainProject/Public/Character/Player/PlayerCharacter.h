// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "Character/BaseCharacter.h"
#include "PlayerCharacter.generated.h"

class ABasePlayerController;
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

protected:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
    FVector2D maxCameraShiftOnMouseMove = { 500.0f, 300.0f };

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
    UCurveVector* cameraMovementInterpolation;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
    float interpolationFrequency = 0.01f;

    void OnMouseMove(FVector2D MouseVector);
    
private:
    FVector m_currentCameraOffset;
    FVector m_targetCameraOffset;

    FTimerHandle m_cameraMovementTimer;
    float m_currentTime;
    float m_interpolationMinTime;
    float m_interpolationMaxTime;

    void StartCameraMovement();
    void CameraMovementTimerUpdate();

protected:

    ABasePlayerController* GetPlayerController() const;
};
