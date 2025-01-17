// © 2021, Brock Marsh. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Rendering/SkinWeightVertexBuffer.h"
#include "LimbMap.generated.h"

/* FBoneVertex is a container of all the vertices that are weighted to a bone. This is cached data used for speed critical situations */


/*	FLimb is an array of a specific bone and all of its child bones. */
USTRUCT(BlueprintType)
struct FLimb
{
	GENERATED_BODY()

	FLimb(){}
	FLimb(const FName& InBone, const TArray<FName>& InLimb) : BoneName(InBone), Limb(InLimb){}
	FLimb(const int32 InIndex, const TArray<int32>& InChildBones) : BoneIndex(InIndex), ChildBones(InChildBones){}
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="LimbMap")
	FName BoneName = NAME_None;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="LimbMap")
	TArray<FName> Limb;

	UPROPERTY(VisibleAnywhere, Category="LimbMap")
	int32 BoneIndex = -1;
	UPROPERTY(VisibleAnywhere, Category="LimbMap")
	TArray<int32> ChildBones;

	UPROPERTY(VisibleAnywhere, Category="LimbMap")
	FTransform ReferenceBoneTransform;

	TArray<FName>& Get()
	{
		return Limb;
	}
	FName GetDirectChild()
	{
		if(!Limb.IsValidIndex(1)) return NAME_None;
		return Limb[1];
	}

	TArray<int32> GetLimbIndices() const
	{
		TArray<int32> Out{BoneIndex};
		Out.Append(ChildBones);
		return Out;
	}
};

USTRUCT(BlueprintType)
struct FLimbKey
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, Category="LimbMap")
	TArray<FLimb> Limbs;

	void Add(const FLimb& InLimb)
	{
		Limbs.Add(InLimb);
	}
	void Empty()
	{
		Limbs.Empty();
	}
	FLimb& Find(const int32& InIndex)
	{
		return Limbs[InIndex];
	}
	FLimb& Find(const FName& InName)
	{
		for(FLimb& Limb : Limbs)
		{
			if(Limb.BoneName == InName) return Limb;
		}
			// Should never reach as long as Bone Name is valid.
		UE_LOG(LogTemp, Error, TEXT("Bone Name is Invalid when searching for Limb"))
		return Limbs[0];
	}
};

/*
 *		LimbMaps are in the process of being deprecated by the system. This class was used
 *		during early development to handle dismembering limbs based on weight paints of
 *		each vertex. This system was flawed in many ways and eventually replaced by the
 *		current method of using Control Rig for dismemberment.
 */

UCLASS(BlueprintType, Blueprintable)
class DISMEMBERMENTSYSTEM_API ULimbMap : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Category="Skeleton", BlueprintReadWrite)
	USkeletalMesh* Mesh;

	UPROPERTY(EditAnywhere, Category="Skeleton", meta = (ToolTip="Bone containing these Key Words will be excluded from the Limbs. Usually useful for 'ik' or 'twist' bones."))
	TArray<FString> Exclude;
	bool HasExcludedKeyword(const FString& String);

/*
*	Cached Data
*/
	UPROPERTY(VisibleAnywhere, Category="LimbMap")
	int32 VertexNum;

		/* Because Unreal separates the bone maps to the material sections. */
	UPROPERTY(VisibleAnywhere, Category="LimbMap")
	TMap<int32, int32> VertexBoneMap;
	
/*
 *	Limb Map
 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="LimbMap")
	FLimbKey LimbMap;

	UFUNCTION(BlueprintCallable, CallInEditor, Category="LimbMap")
	void Initialize();

		/* Helpful getter for BPs so they dont have to make a Variable when not needed */
	UFUNCTION(BlueprintPure, Category="LimbMap")
	static ULimbMap* GetLimbMap(ULimbMap* Map) {return Map;}

		/* Tries to get the Direct Child of a Bone. This will only return one of the Bones Children */
	UFUNCTION(BlueprintPure, Category="LimbMap")
	FName GetDirectChildBone(const FName& BoneName);
		/* Recursive function to get all children of a BoneIndex */
	void GetAllChildBones(const int32 Index, TArray<int32>& ChildBones);
	void GetDirectChildBones(const FReferenceSkeleton& ReferenceSkeleton, int32 ParentBoneIndex, TArray<int32>& ChildBones) const;
	
	TArray<FName> GetBonePathToRoot(const FName BoneName) const;
	FTransform GetBoneReferenceTransform(const FName BoneName) const;

		/* Gets all the bones that are not a child bone */
	TArray<int32> GetAllImmediateBones(const FName& BoneName);

		/* Removes any bones that are have any excluded keywords from the array */
	void RemoveExcludedBones(TArray<int32>& ChildBones);
		/* Recursive Function to remove an index from the array until that index no longer has an excluded keyword */
	void TryRemoveExcludedBone(const int32& Index, TArray<int32>& ChildBones);

	UFUNCTION(BlueprintPure, Category="LimbMap")
	TArray<FName>& GetAllBonesOfLimb(ULimbMap* InLimbMap, const FName BoneName);

		/* Returns the Vertex Index of all the vertices attached to a limb */
	TArray<int32> GetAllLimbVertices(const FName& InBone);

	UFUNCTION(BlueprintPure, Category="LimbMap")
	FName GetBoneName(const int32 Index);
	
	UFUNCTION(BlueprintPure, Category="LimbMap")
	int32 GetBoneIndex(const FName& InName);

		// Finds the Raw Index of a bone from a Meshes Bone Index
	UE_DEPRECATED(4.2, "Imported Model is no longer used")
	int32 GetRawBoneIndex(const int32 BoneIndex);
	
		/* Finds the index of the bone with the most influence over a vertex */
	int32 GetBoneWithMostInfluence(const FSkinWeightInfo& SkinVertex);

		/* Checks to see if a given Bone Index has any Weight on a Skin Vertex. */
	bool HasBoneWeight(const FSkinWeightInfo& SkinVertex,  int32 BoneIndex, float WeightThreshold = 0.5f);
	float GetWeight(const FSkinWeightInfo& SkinVertex, int32 BoneIndex);

		/* Checks to see if a given Raw Bone Index has any Weight on a Skin Vertex. */
	TArray<int32> GetAllBonesWithInfluence(const FSkinWeightInfo& SkinVertex, float WeightThreshold = 0.5f);
	
		/*	Returns the weight of a specified bone for every vertex. NOTE: Weight is from 0->1. */
	UE_DEPRECATED(4.2, "Imported Model is no longer used")
	UFUNCTION(BlueprintPure, Category="LimbMap")
	TArray<float> GetVertexWeightColorForBone(const FName& InBone);

	/*	Returns the weight of a specified limb for every vertex. NOTE: Weight is from 0->1. */
	UFUNCTION(BlueprintPure, Category="LimbMap")
	TArray<float> GetVertexWeightColorForLimb(const FName& InBone, float WeightThreshold = 0.5f);

		/* Uses the bone index from a vertex and gets the actual bone index */
	int32 GetMappedBoneIndex(const int32 VertexBoneIndex);
		/* Uses the Mesh Bone Index to find the Raw Index used by the vertices */
	UE_DEPRECATED(4.2, "Imported Model is no longer used")
	int32 GetMappedRawBoneIndex(const int32 BoneIndex);
	
		/* Uses the bone index from a vertex and gets the actual bone index */
	TArray<int32> GetMappedBoneIndices(const TArray<int32> VertexBoneIndices);

		/* Converts an Array of Bone Indices to their Bone Names */
	TArray<FName> ConvertBonesToNames(const TArray<int32>& Bones);

		/* Checks to see if any elements in the array are matching */
	static bool HasAnyMatchingNames(const TArray<FName>& One, const TArray<FName>& Two);
		/* Checks to see if any elements in the array are matching */
	static bool HasAnyMatchingInts(const TArray<int32>& One, const TArray<int32>& Two);
	
	UFUNCTION(BlueprintPure, Category="LimbMap")
	FLimb& GetLimb(const FName BoneName);

	UFUNCTION(BlueprintCallable, Category="LimbMap")
	void SetLimbWeights(USkeletalMeshComponent* SkeletalMeshComponent, FName BoneName, float WeightThreshold = 0.25f);

/*
 *	Vertex Alphas
 */
		/* Gets the vertices that are weighted to a specified bone */
	UFUNCTION(BlueprintCallable, Category="LimbMap")
	TArray<float> GetWeightsOfBone(const FName BoneName);
		/* Gets a mask of the vertices that are weighted above the threshold */
	UFUNCTION(BlueprintCallable, Category="LimbMap")
	TArray<float> GetMaskOfBone(const FName BoneName, float WeightThreshold = 0.25f);

		/* Gets the vertices that are weighted to a specified limb */
	UFUNCTION(BlueprintCallable, Category="LimbMap")
	TArray<float> GetWeightsOfLimb(const FName BoneName);
		/* Gets a mask of the vertices that are weighted above the threshold */
	UFUNCTION(BlueprintCallable, Category="LimbMap")
	TArray<float> GetMaskOfLimb(const FName BoneName, float WeightThreshold = 0.25f);

		/* Gets a mask of all the vertices that are not weighted to the specified limb. This includes the input bone */
	UFUNCTION(BlueprintCallable, Category="LimbMap")
	TArray<float> GetMaskOfImmediateLimb(const FName BoneName, float WeightThreshold = 0.25f, bool IncludeBone = true);
};