// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Weapon/BaseWeapon.h"
#include "Sword.generated.h"

class UBoxComponent;

USTRUCT(BlueprintType)
struct FComboElement
{
    GENERATED_BODY()

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Animation")
    FName attackSectionName;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Animation", meta = (ClampMin = "0.0", ClampMax = "5.0"))
    float sectionRateScale;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Animation")
    TEnumAsByte<ERootMotionMode::Type> rootMotionMode;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Damage")
    float damage = 50.0f;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement", meta = (ClampMin = "0.0", ClampMax = "1.0"))
    float deceleration = 0.0;
};

UCLASS()
class MAINPROJECT_API ASword : public ABaseWeapon
{
	GENERATED_BODY()
	
public:	
    ASword();
    
    UFUNCTION()
    void OnOffCollision(USkeletalMeshComponent* MeshComp);

    UFUNCTION()
    void DisableCollision(USkeletalMeshComponent* MeshComp);

    UFUNCTION()
    void OnDamageAllOverlapedActors();

    TArray<FComboElement> GetComboInfo() { return Combos; }

protected:
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Attack")
    TArray<FComboElement> Combos;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components", DisplayName = "BoxComponent")
    UBoxComponent* pBoxCollision;

    UFUNCTION()
    void OnMeleeWeaponOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
        int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

private:
    UPROPERTY()
    TArray<AActor*> EnemyActors;

    void InitBoxCollision();
};
