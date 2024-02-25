// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Weapon/BaseWeapon.h"
#include "MainProjectCoreTypes.h"
#include "Sword.generated.h"

class UBoxComponent;

UCLASS()
class MAINPROJECT_API ASword : public ABaseWeapon
{
	GENERATED_BODY()
	
public:	
    ASword();

    void EnableAttackCollision() const;
    void DisableAttackCollision() const;

    void OnOffCollision();
    void ClearDamagedActors();

    TArray<FComboElement> GetComboInfo() { return combos; }

protected:
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Attack")
    TArray<FComboElement> combos;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components", DisplayName = "BoxComponent")
    UBoxComponent* pBoxCollision;

    UFUNCTION()
    void OnMeleeWeaponOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
        int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

private:
    TArray<AActor*> alreadydamagedActors;
    void InitBoxCollision();
};
