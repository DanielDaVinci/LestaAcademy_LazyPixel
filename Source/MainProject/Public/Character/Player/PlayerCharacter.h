// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "Character/BaseCharacter.h"
#include "Interface/PrePostBeginInterface.h"
#include "PlayerCharacter.generated.h"

class UDataSaveComponent;
class UPlayerWeaponComponent;
class UProgressSaveGame;
class USaveGame;
class ABasePlayerController;
class UCameraComponent;
class USpringArmComponent;

UCLASS()
class MAINPROJECT_API APlayerCharacter : public ABaseCharacter, public IPrePostBeginInterface
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

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components", DisplayName="DataSaveComponent")
    UDataSaveComponent* pDataSaveComponent;
    
    virtual void BeginPlay() override;

private:
    void BindEvents();

    void PreSaveCurrentSlot(USaveGame* SaveGame);

public:
    virtual void Tick(float DeltaTime) override;

protected:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera|Movement Interpolation")
    FVector2D maxCameraShiftOnMouseMove = { 500.0f, 300.0f };

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera|Movement Interpolation")
    UCurveVector* cameraMovementInterpolation;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera|Movement Interpolation")
    float interpolationFrequency = 0.01f;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Death Slow Motion")
    float deathTimeDilation = 0.3f;

    void OnMouseMove(FVector2D MouseVector);
    virtual void OnDeath() override;
    
private:
    FVector m_currentCameraOffset;
    FVector m_targetCameraOffset;

    FTimerHandle m_cameraMovementTimer;
    float m_currentTime;
    float m_interpolationMinTime;
    float m_interpolationMaxTime;

    void StartCameraMovement();
    void CameraMovementTimerUpdate();

public:
    ABasePlayerController* GetPlayerController() const;
    UPlayerWeaponComponent* GetPlayerWeaponComponent() const; 
};
