// Lazy Pixel. All Rights Reserved.

#pragma once

#include "Abilities/ActiveAbility.h"
#include "CoreMinimal.h"
#include "FirstCustomAbility.generated.h"

class ABasePlayerController;
class UPlayerMovementComponent;
class ACollisionCube;
class UBoxComponent;

UCLASS()
class MAINPROJECT_API UStrongAttackAbility : public UActiveAbility
{
    GENERATED_BODY()

public:
    void Press();

protected:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Params")
    float abilityDuration = 0.4f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Params")
    float abilityDamage = 100.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Params")
    float abilityDistance = 2000.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Params")
    float timeDilation = 0.3f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Params")
    float defaultTimeDilation = 1.f;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Params")
    float abilityUseTime = 3.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Params")
    UAnimMontage* pAbilityAnimation;

    virtual void BeginPlay() override;

    virtual bool NativeActivate() override;

    UFUNCTION()
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
    int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

    UFUNCTION()
    void OnMontageEndedHandle(UAnimMontage* Montage, bool bInterrupted);

    void OnStrongAbilityEnd();

private:
    bool m_isAbilityActivationButtonPressed;
    FTimerHandle m_abilityDurationHandle;
    FTimerHandle m_abilityUseHandle;

protected:
    void SpawnCubeCollision();

    ABasePlayerController* GetBasePlayerController() const;
    UPlayerMovementComponent* GetPlayerMovementComponent() const;

private:
    UPROPERTY()
    ACollisionCube* m_pCubeCollision;
    
    void RotateCharacterInMouseDirection();
    void UseAbility();
};
