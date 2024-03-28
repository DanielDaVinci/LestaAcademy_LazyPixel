// Lazy Pixel. All Rights Reserved.

#pragma once

#include "Abilities/ActiveAbility.h"
#include "CoreMinimal.h"
#include "DashAbility.h"
#include "StrongAttackAbility.generated.h"

DECLARE_MULTICAST_DELEGATE_OneParam(FOnAbilityChargeChangedSignature, float)

class UWeaponComponent;
class ABasePlayerController;
class UPlayerMovementComponent;
class ACollisionCube;
class UBoxComponent;

UCLASS()
class MAINPROJECT_API UStrongAttackAbility : public UActiveAbility
{
    GENERATED_BODY()

public:
    FOnAbilityChargeChangedSignature OnAbilityChargeChanged;
    
    float GetMaxAbilityCharge() const { return needMaxAbilityCharge; }
    float GetCurrentAbilityCharge() const { return m_abilityCharge; }

protected:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Strong Attack")
    float needMaxAbilityCharge = 100.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Strong Attack")
    float oneHitAbilityCharge = 10.0f;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Strong Attack")
    float abilityDamage = 100.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Strong Attack")
    float timeDilation = 0.3f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Strong Attack")
    float defaultTimeDilation = 1.f;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Strong Attack|Animation")
    float prepareDuration = 3.f;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Strong Attack|Animation", DisplayName = "Prepare Animation")
    UAnimMontage* pPrepareAnimation;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Strong Attack|Animation")
    float attackDuration = 0.4f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Strong Attack|Animation", DisplayName = "Attack Animation")
    UAnimMontage* pAttackAnimation;

    virtual void BeginPlay() override;

    UFUNCTION()
    void OnCubeCollisionBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
    int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
private:
    UPROPERTY()
    ACollisionCube* m_pCubeCollision;
    
    void SpawnCubeCollision();

protected:
    void BindEvents();
    
private:
    float m_abilityCharge;
    
    void OnMeleeAttackHit();
    void SetAbilityCharge(float ChargeAmount);
    void AddAbilityCharge(float ChargeAmount);

protected:
    virtual bool NativeActivate() override;
    
    void OnPreparePartStartState();
    void OnPreparePartEndState(EStateResult StateResult);

    void StartAttackPart();
    
    void OnAttackPartStartState();
    void OnAttackPartEndState(EStateResult StateResult);
    
private:
    FTimerHandle m_rotationTimer;

    void OnCustomAbilityButtonReleased();
    void OnMouseMove(FVector2D MouseVector);
    
    void RotateCharacterToMouse() const;

protected:
    ABasePlayerController* GetBasePlayerController() const;
    UPlayerMovementComponent* GetPlayerMovementComponent() const;
    UStateMachineComponent* GetStateMachineComponent() const;
    UWeaponComponent* GetWeaponComponent() const;
};
