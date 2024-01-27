// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/PlayerController.h"
#include "HealthStation.generated.h"

class APlayerCharacter;

UCLASS()
class MAINPROJECT_API AHealthStation : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AHealthStation();

    // Called every frame
    virtual void Tick(float DeltaTime) override;
    
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
    virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
    virtual void NotifyActorEndOverlap(AActor* OtherActor) override;

    UPROPERTY(EditDefaultsOnly, Category = "Health")
    float HealAmount = 50;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
    class UBoxComponent* Collider;

    // Widget class for the interaction prompt
    UPROPERTY(EditDefaultsOnly, Category = "UI")
    TSubclassOf<UUserWidget> InteractionPromptWidgetClass;

    // Instance of the interaction prompt widget
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "UI")
    UUserWidget* InteractionPromptWidget;

private:
    FDelegateHandle m_delegateHandle;

    void Heal();
};
