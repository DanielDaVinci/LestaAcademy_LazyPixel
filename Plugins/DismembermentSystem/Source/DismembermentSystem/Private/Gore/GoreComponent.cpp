// © 2021, Brock Marsh. All rights reserved.

#include "Gore/GoreComponent.h"

#include "DismembermentSystem_Log.h"
#include "NiagaraFunctionLibrary.h"
#include "NiagaraComponent.h"
#include "Gore/BloodPool.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Rendering/SkeletalMeshRenderData.h"
#include "Engine/Texture2D.h"

void UGoreComponent::BeginPlay()
{
	Super::BeginPlay();

	if(!GetSkeletalMeshComponent()) return;

	GetWorld()->GetTimerManager().SetTimerForNextTick(this, &UGoreComponent::InitializeVertexColors);
}

void UGoreComponent::InitializeVertexColors()
{
	if(IsRunningDedicatedServer()) return;

	for (USkeletalMeshComponent* Mesh : GetAllMeshes())
	{
		if(!IsValid(Mesh)) continue;
		
		for (int32 i = 0; i < Mesh->GetNumLODs(); i++)
		{
			TArray<FLinearColor> Colors = GetCurrentVertexColors(Mesh, i);
			SetLinearColorChannel(Colors, 0.f, BloodVertexChannel);
			Mesh->SetVertexColorOverride_LinearColor(i, Colors);
		}
	}
}

UMaterialInterface* UGoreComponent::GetBloodDecal()
{
	if(bOverrideBloodDecal)
	{
		if(bOverrideBloodDecalTexture) BloodDecal = GetDynamicBloodDecal();
		
		return BloodDecal;
	}

	if(!BloodDecal)
	{
		if(bOverrideBloodDecalTexture)
		{
			BloodDecal = LoadObject<UMaterialInterface>(nullptr, TEXT("/DismembermentSystem/EnGoreDismembermentSystem/Gore/Mats/M_Decal_BloodPool_Custom.M_Decal_BloodPool_Custom"));
			
			BloodDecal = GetDynamicBloodDecal();
		}
		else
		{
			BloodDecal = LoadObject<UMaterialInterface>(nullptr, TEXT("/DismembermentSystem/EnGoreDismembermentSystem/Gore/Mats/M_Decal_BloodPool.M_Decal_BloodPool"));
		}
	}

	return BloodDecal;
}

UMaterialInstanceDynamic* UGoreComponent::GetDynamicBloodDecal()
{
	UMaterialInstanceDynamic* MID = UMaterialInstanceDynamic::Create(BloodDecal, this);
	MID->SetTextureParameterValue("Texture", BloodDecalTexture.LoadSynchronous());
	
	if(!bOverrideBloodDecal)
	{
		MID->SetScalarParameterValue("Size", BloodDecalTileSize);
		MID->SetScalarParameterValue("bWorldSpace", bUseWorldSpaceTiling);
	}
	
	return  MID;
}

UNiagaraSystem* UGoreComponent::GetBloodBurstFX()
{
	if(bOverrideBloodParticles) return FX_BloodBurst;

	if(!FX_BloodBurst) FX_BloodBurst = LoadObject<UNiagaraSystem>(nullptr, TEXT("/DismembermentSystem/EnGoreDismembermentSystem/Gore/NS_DIS_BloodBurst.NS_DIS_BloodBurst"));

	return FX_BloodBurst;
}

void UGoreComponent::PreDismemberment(const FName BoneName, const FVector Impulse)
{
	Super::PreDismemberment(BoneName, Impulse);
	
	const FVector HitLocation = GetSkeletalMeshComponent()->GetSocketLocation(BoneName);

	SpawnBloodParticles(HitLocation, Impulse.Rotation());

	LineTraceForBloodPool(HitLocation, Impulse.GetSafeNormal());
}

void UGoreComponent::PostDismemberment(const FName BoneName, USkeletalMeshComponent* DismemberMesh)
{
	if(bSupportAttachedChildMeshes)
	{
		ApplyBlood(BoneName, BloodPaintRadius, BloodPaintFalloff);
	
		for (USkeletalMeshComponent* DisMesh : GetAllAttachedMeshes(DismemberMesh)) ApplyBloodToMesh(DisMesh, BoneName, BloodPaintLimbRadius, BloodPaintFalloff);
	}
	else
	{
		CopyVertexColorsToMesh(GetSkeletalMeshComponent(), DismemberMesh);

		ApplyBloodToMesh(GetSkeletalMeshComponent(), BoneName, BloodPaintRadius, BloodPaintFalloff);
		ApplyBloodToMesh(DismemberMesh, BoneName, BloodPaintLimbRadius, BloodPaintFalloff);
	}
	
	Super::PostDismemberment(BoneName, DismemberMesh);
}

void UGoreComponent::LineTraceForBloodPool(FVector HitLocation, FVector Direction)
{
	FVector End = Direction;
	End.Z = -0.7;
	End *= FVector(2000.f);
	End += HitLocation;
	
	FHitResult HitResult;
	
	UKismetSystemLibrary::LineTraceSingleForObjects(GetOwner(), HitLocation, End, {EObjectTypeQuery::ObjectTypeQuery1}, true, {}, EDrawDebugTrace::None, HitResult, true);
	
	if(!HitResult.bBlockingHit) return;
	
	SpawnBloodPool(HitResult.ImpactPoint, HitResult.ImpactNormal, Direction, HitResult.GetComponent());
}

void UGoreComponent::SpawnBloodPool(FVector Location, FVector Normal, FVector SplatterDirection, USceneComponent* Attachment)
{
	FTransform Transform;
	Transform.SetLocation(Location);
	Transform.SetRotation(GetRotationForBloodActor(Normal).Quaternion());
	Transform.SetScale3D(FVector(1));

	ABloodPool* Blood = GetWorld()->SpawnActorDeferred<ABloodPool>(ABloodPool::StaticClass(), Transform, GetOwner(), nullptr, ESpawnActorCollisionHandlingMethod::AlwaysSpawn);

	Blood->StartDelay = 0.25f;
	Blood->DecalSize = FVector(0.5, FMath::Lerp(2.f, 0.5f, FMath::Abs(SplatterDirection.Z)), 0.5);
	Blood->DecalSize *= FVector(BloodPoolScale);
	Blood->DecalRotation = GetRotationForBlood(SplatterDirection);
	Blood->InterpTime = 0.3f;
	Blood->DecalMaterial = GetBloodDecal();

	Blood->FinishSpawning(Transform);
	if(Attachment) Blood->AttachToComponent(Attachment, FAttachmentTransformRules::KeepWorldTransform);
}

float UGoreComponent::SphereMask(const FVector& Center, const FVector& Location, const float& Radius, const float& Hardness)
{
	const float InvRadius = 1.f / Radius;
	const float NormalizeDistance  = FVector::Distance(Location, Center) * InvRadius;

	float InvHardness = 1.f - Hardness;
	InvHardness = 1.f / FMath::Max(InvHardness, 0.00001f);
	
	return FMath::Clamp((1.f - NormalizeDistance) * InvHardness, 0.f, 1.f);
}

void UGoreComponent::ApplyBlood(const FName BoneName, const float Radius, const float Hardness)
{
	/** Server does not have render data so it cannot apply blood. This is a client side only effect */
	if(IsRunningDedicatedServer()) return;

	for (USkeletalMeshComponent* Mesh : GetAllMeshes())
	{
		if(Mesh->ComponentTags.Contains("Ignore Blood")) continue;
		
		ApplyBloodToMesh(Mesh, BoneName, Radius, Hardness);
	}
}

void UGoreComponent::ApplyBloodToMesh(USkeletalMeshComponent* Mesh, const FName BoneName, const float Radius, const float Hardness)
{
	/** Server does not have render data so it cannot apply blood. This is a client side only effect */
	if(IsRunningDedicatedServer()) return;

	const FVector LocalHit = FTransform(GetMesh()->GetComposedRefPoseMatrix(BoneName)).GetLocation();
	
	for (int32 LOD = 0; LOD < Mesh->GetNumLODs(); LOD++)
	{
		FPositionVertexBuffer& Buffer = Mesh->GetSkeletalMeshAsset()->GetResourceForRendering()->LODRenderData[LOD].StaticVertexBuffers.PositionVertexBuffer;
		const int32 Num = Buffer.GetNumVertices();
		
		if(!Buffer.IsInitialized())
		{
			DISError("UGoreComponent::ApplyBloodToMesh | Cannot apply blood to mesh. Vertex Buffer is not Initialized")
			return;
		}
		if(!Buffer.GetAllowCPUAccess())
		{
			DISError("UGoreComponent::ApplyBloodToMesh | Cannot apply blood to mesh as mesh does not allow cpu access. Please open your Skeletal Mesh and Check 'Allow CPU Access' to true")
			return;
		}
		
		TArray<float> Mask;
		Mask.Init(1.f, Num);
//		Mask.SetNum(Num);
		
		for(int32 i = 0; i < Num; i++)
		{
			FVector VertexLocation(Buffer.VertexPosition(i));
		
			Mask[i] = SphereMask(LocalHit, VertexLocation, Radius, Hardness);
		}

		TArray<FLinearColor> Colors = GetCurrentVertexColors(Mesh, LOD);

		MaxLinearColorChannel(Colors, Mask, BloodVertexChannel);

		Mesh->SetVertexColorOverride_LinearColor(LOD, Colors);

		if(Mesh == GetSkeletalMeshComponent()) BeginBloodAnimation();
		else SetBloodAnimation(Mesh, 1.f);
	}
}

void UGoreComponent::SpawnBoolDecal(const FVector Location, const FVector Normal, USceneComponent* Attachment, const FVector SplatterDirection)
{
	SpawnBloodPool(Location, Normal, SplatterDirection, Attachment);
}

void UGoreComponent::SpawnBloodParticles(const FVector Location, const FRotator Rotation)
{
	UNiagaraFunctionLibrary::SpawnSystemAtLocation(this, GetBloodBurstFX(), Location, Rotation, FVector(BloodParticleScale));
}

void UGoreComponent::SpawnBloodFX(const FVector Location, const FVector Direction, const FName HitBone)
{
	SpawnBloodParticles(Location, Direction.Rotation());
	
	LineTraceForBloodPool(Location, Direction.GetSafeNormal());

	if(HitBone != NAME_None) ApplyBlood(HitBone);
}

FRotator UGoreComponent::GetRotationForBlood(FVector Normals)
{
	// If Normals are completely flat then it will mess up the math as you can't divide by 0
	Normals = Normals + 0.0001;

	Normals = Normals * -1;
	
	float Dot = FVector::ForwardVector.Dot(Normals);
	
	Dot = (180.f)/DOUBLE_PI * FMath::Acos(Dot);

	return {0.f, FRotationMatrix::MakeFromZ(Normals * FVector(Dot)).Rotator().Yaw, 0.f};
}

FRotator UGoreComponent::GetRotationForBloodActor(const FVector Normals) const
{
	float Dot = FVector::UpVector.Dot(Normals);;

	Dot = (180.f)/DOUBLE_PI * FMath::Acos(Dot);
	
	return FRotationMatrix::MakeFromZ(Normals * FVector(Dot)).Rotator();
}

void UGoreComponent::BeginBloodAnimation()
{
	if(BloodAnimation > 0.f) return;

	GetWorld()->GetTimerManager().SetTimerForNextTick(this, &UGoreComponent::TickBloodAnimation);
}

void UGoreComponent::TickBloodAnimation()
{
	BloodAnimation += GetWorld()->GetDeltaSeconds() / BloodAnimationTime;
	BloodAnimation = FMath::Clamp(BloodAnimation, BloodAnimation, 1.f);

	SetBloodAnimation(GetSkeletalMeshComponent(), BloodAnimation);

	if(BloodAnimation < 1) GetWorld()->GetTimerManager().SetTimerForNextTick(this, &UGoreComponent::TickBloodAnimation);
}

void UGoreComponent::SetBloodAnimation(USkeletalMeshComponent* InMesh, const float In) const
{
	if(IsRunningDedicatedServer()) return;

	InMesh->SetCustomPrimitiveDataFloat(BloodAnimationPrimitiveIndex, In);
}
