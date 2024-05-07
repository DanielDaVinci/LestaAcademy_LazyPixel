// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTree.h"
#include "Character/BaseCharacter.h"
#include "AIBaseCharacter.generated.h"

class ARoom;
class UGoreComponent;

UCLASS()
class MAINPROJECT_API AAIBaseCharacter : public ABaseCharacter
{
	GENERATED_BODY()

public:
    AAIBaseCharacter(const FObjectInitializer& ObjInit);
    
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components", DisplayName = "GoreComponent")
    UGoreComponent* pGoreComponent;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "AI")
    UBehaviorTree* BehaviorTreeAsset;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
    ARoom* enemyRoom;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ImpactAnim")
    TArray<UAnimMontage*> impactAnimations;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Material Instances")
    TArray<UMaterialInstance*> materialInstances;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dismemberment")
    float dismembermentForce = 500.f;

protected:
    virtual void PostInitializeComponents() override;
    virtual void OnDeath() override;

    virtual float TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;

    UFUNCTION(BlueprintImplementableEvent)
    void OnTakeRangeWeaponDamage();

    UFUNCTION(BlueprintImplementableEvent)
    void OnTakeMeleeWeaponDamage();

private:
    FName dismemberedBone;

    void BindEvents();

    UFUNCTION()
    void PlayImpactAnim(float DeltaHealth);
    UFUNCTION()
    void PlayImpactFX(float DeltaHealth);
    
    void SetRandomMaterial();
    void EnableRagdoll() const;
};
