// Lazy Pixel. All Rights Reserved.


#include "Character/Player/PlayerCharacter.h"

#include "MainProjectGameInstance.h"
#include "Abilities/ActiveAbilities/StrongAttackAbility.h"
#include "Camera/CameraComponent.h"
#include "Character/Player/BasePlayerController.h"
#include "Character/Player/Components/AbilityComponent.h"
#include "Character/Player/Components/DataSaveComponent.h"
#include "Character/Player/Components/HealthComponent.h"
#include "Character/Player/Components/PlayerMovementComponent.h"
#include "Character/Player/Components/PlayerWeaponComponent.h"
#include "Curves/CurveVector.h"
#include "GameFramework/SpringArmComponent.h"
#include "Kismet/GameplayStatics.h"

APlayerCharacter::APlayerCharacter(const FObjectInitializer& ObjInit)
    : Super(ObjInit.SetDefaultSubobjectClass<UPlayerMovementComponent>(ACharacter::CharacterMovementComponentName).
        SetDefaultSubobjectClass<UPlayerWeaponComponent>("WeaponComponent"))
{
    PrimaryActorTick.bCanEverTick = true;

    pSpringArmComponent = CreateDefaultSubobject<USpringArmComponent>("SpringArmComponent");
    pSpringArmComponent->SetupAttachment(GetRootComponent());
    pSpringArmComponent->SetRelativeRotation(FRotator(-45.0f, 0.0f, 0.0f));
    pSpringArmComponent->bDoCollisionTest = false;

    pCameraComponent = CreateDefaultSubobject<UCameraComponent>("CameraComponent");
    pCameraComponent->SetupAttachment(pSpringArmComponent);

    pDataSaveComponent = CreateDefaultSubobject<UDataSaveComponent>("DataSaveComponent");
}

void APlayerCharacter::BeginPlay()
{
    Super::BeginPlay();

    BindEvents();
    StartCameraMovement();
}

void APlayerCharacter::BindEvents()
{
    if (const auto playerController = GetPlayerController())
    {
        playerController->OnMouseMove.AddUObject(this, &APlayerCharacter::OnMouseMove);
    }

    if (const auto gameInstance = GetGameInstance<UMainProjectGameInstance>())
    {
        gameInstance->OnPreSaveCurrentSlotEvent.AddUObject(this, &APlayerCharacter::PreSaveCurrentSlot);
    }
}

void APlayerCharacter::PreSaveCurrentSlot(USaveGame* SaveGame)
{
    const auto progressSaveGame = Cast<UProgressSaveGame>(SaveGame);
    if (!progressSaveGame)
        return;

    if (pHealthComponent)
    {
        progressSaveGame->ProgressData.HealthPercent = pHealthComponent->GetPercentHealth();
    }

    if (pAbilityComponent)
    {
        if (const auto customAbility = pAbilityComponent->GetCustomAbility<UStrongAttackAbility>())
        {
            progressSaveGame->ProgressData.AbilityCharge = customAbility->GetCurrentAbilityCharge();
        }
    }

    if (const auto weaponComponent = Cast<UPlayerWeaponComponent>(pWeaponComponent))
    {
        if (const auto rangeWeapon = weaponComponent->GetRangeWeapon())
        {
            progressSaveGame->ProgressData.BulletsNum = rangeWeapon->GetBullets();
        }
        else
        {
            progressSaveGame->ProgressData.BulletsNum = 0;
        }
    }
}

void APlayerCharacter::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void APlayerCharacter::StartCameraMovement()
{
    if (!GetWorld() || !cameraMovementInterpolation)
        return;

    cameraMovementInterpolation->GetTimeRange(m_interpolationMinTime, m_interpolationMaxTime);
    
    m_currentTime = m_interpolationMinTime;
    m_currentCameraOffset = FVector::Zero();
    
    GetWorld()->GetTimerManager().SetTimer(m_cameraMovementTimer,
        this, &APlayerCharacter::CameraMovementTimerUpdate,
        interpolationFrequency, true);
}

void APlayerCharacter::CameraMovementTimerUpdate()
{
    m_currentTime += interpolationFrequency;
    m_currentTime = FMath::Clamp(m_currentTime, m_interpolationMinTime, m_interpolationMaxTime);

    const FVector percent = cameraMovementInterpolation->GetVectorValue(m_currentTime);
    const FVector delta = (m_targetCameraOffset - m_currentCameraOffset) * percent;
    
    pSpringArmComponent->TargetOffset = m_currentCameraOffset + delta;
}

void APlayerCharacter::OnMouseMove(FVector2D MouseVector)
{
    if (!GetPlayerController())
        return;

    const FVector2D maxVector = GetPlayerController()->GetMaxMouseVector();

    FVector newCameraOffset = FVector(
        MouseVector.X / maxVector.X * maxCameraShiftOnMouseMove.X,
        -1 * MouseVector.Y / maxVector.Y * maxCameraShiftOnMouseMove.Y,
        0.0f);

    newCameraOffset = newCameraOffset.RotateAngleAxis(
        pSpringArmComponent->GetRelativeRotation().Yaw,
        FVector(0.0f, 0.0f, 1.0f));

    if ((m_targetCameraOffset - newCameraOffset).IsNearlyZero())
            return;

    m_currentCameraOffset = pSpringArmComponent->TargetOffset;
    m_targetCameraOffset = newCameraOffset;
    m_currentTime = m_interpolationMinTime;
}

void APlayerCharacter::OnDeath() 
{
    Super::OnDeath();
    
    OnPlayerDead.Broadcast();
    UGameplayStatics::SetGlobalTimeDilation(GetWorld(), deathTimeDilation);
}

ABasePlayerController* APlayerCharacter::GetPlayerController() const
{
    return Cast<ABasePlayerController>(Controller);
}

UPlayerWeaponComponent* APlayerCharacter::GetPlayerWeaponComponent() const
{
    return Cast<UPlayerWeaponComponent>(GetBaseWeaponComponent());
}
