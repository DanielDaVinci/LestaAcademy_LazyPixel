// © 2021, Brock Marsh. All rights reserved.

#include "LimbMap.h"

#include "Rendering/SkeletalMeshLODModel.h"
#include "Animation/Skeleton.h"
#include "ReferenceSkeleton.h"
#include "Rendering/SkeletalMeshModel.h"
#include "Rendering/SkeletalMeshRenderData.h"

#define ForVertices() \
	TArray<FSkinWeightInfo> Vertices; \
	Mesh->GetResourceForRendering()->LODRenderData[0].SkinWeightVertexBuffer.GetSkinWeights(Vertices); \
	for(int32 i = 0; i < Vertices.Num(); i++)

#define SetVertex const FSkinWeightInfo& Vertex = Vertices[i];

bool ULimbMap::HasExcludedKeyword(const FString& String)
{
	for(FString& Key : Exclude)
	{
		if(String.Contains(Key)) return true;
	}

	return false;
}

void ULimbMap::Initialize()
{
	Modify();
	
	LimbMap.Empty();

	if(!Mesh)
	{
		UE_LOG(LogTemp, Error, TEXT("Cannot Initialize Limb Map. Skeletal Mesh is Invalid!"))
		return;
	}
	
	// Build a temp array then remap it to the Skeletal Mesh, because the Mesh has weird behavior when getting child bones
	const FReferenceSkeleton& RefSkel = Mesh->GetSkeleton()->GetReferenceSkeleton();
	const TArray<FVirtualBone>& VirtualBones = Mesh->GetSkeleton()->GetVirtualBones();
	
	TArray<FName> VirtualBoneNames;
	for(const FVirtualBone& VirtualBone : VirtualBones) VirtualBoneNames.Add(VirtualBone.VirtualBoneName);
	
		// Build an FLimb for every Bone
	for(int32 i = 0; i < RefSkel.GetNum(); i++)
	{
		if(VirtualBoneNames.Contains(RefSkel.GetBoneName(i))) continue;
		
		TArray<int32> ChildBones;
		GetAllChildBones(i, ChildBones);
		RemoveExcludedBones(ChildBones);
		
		FLimb Limb(i, ChildBones);

		Limb.BoneName = RefSkel.GetBoneName(i);
		Limb.Limb.Add(Limb.BoneName);
		
		for(const int32& Child : ChildBones)
		{
			Limb.Limb.Add(RefSkel.GetBoneName(Child));
		}

		Limb.ReferenceBoneTransform = GetBoneReferenceTransform(Limb.BoneName);
		
		LimbMap.Add(Limb);
	}

		// Remap the FLimbs Indices to the Skeletal Mesh Indices.
	for(FLimb& Limb : LimbMap.Limbs)
	{
		TArray<int32> Bones;
		Limb.BoneIndex = GetBoneIndex(Limb.BoneName);
		for(FName Name : Limb.Limb)
		{
			Bones.Add(GetBoneIndex(Name));
		}
		
		Limb.ChildBones = Bones;
	}

		// Set Num of Vertices
	VertexNum = Mesh->GetResourceForRendering()->LODRenderData[0].GetNumVertices();

		// Create the Full Bone Map
	VertexBoneMap.Empty();
	FSkeletalMeshLODRenderData& LodModel = Mesh->GetResourceForRendering()->LODRenderData[0];
	
	for(int32 i = 0; i < LodModel.RenderSections.Num(); i++)
	{
		FSkelMeshRenderSection& Section = LodModel.RenderSections[i];
		
		for(int32 j = 0; j < Section.BoneMap.Num(); j++)
		{
			VertexBoneMap.Add(j, Section.BoneMap[j]);
		}
	}
}

FName ULimbMap::GetDirectChildBone(const FName& BoneName)
{
	return LimbMap.Find(BoneName).GetDirectChild();
}

void ULimbMap::GetAllChildBones(const int32 Index, TArray<int32>& ChildBones)
{
	TArray<int32> CurrentChildBones;

	const FReferenceSkeleton& RefSkeleton = Mesh->GetSkeleton()->GetReferenceSkeleton();
	GetDirectChildBones(RefSkeleton, Index, CurrentChildBones); //GetChildBones(Index, CurrentChildBones);

	if(CurrentChildBones.Num() <= 0) return;

	ChildBones.Append(CurrentChildBones);

	for(const int32& Child : CurrentChildBones)
	{
		GetAllChildBones(Child, ChildBones);
	}
}

void ULimbMap::GetDirectChildBones(const FReferenceSkeleton& ReferenceSkeleton, int32 ParentBoneIndex, TArray<int32>& ChildBones) const
{
	ChildBones.Reset();

	const int32 NumBones = ReferenceSkeleton.GetNum();
	for (int32 ChildIndex = ParentBoneIndex + 1; ChildIndex < NumBones; ChildIndex++)
	{
		if (ParentBoneIndex == ReferenceSkeleton.GetParentIndex(ChildIndex))
		{
			ChildBones.Add(ChildIndex);
		}
	}
}

TArray<FName> ULimbMap::GetBonePathToRoot(const FName BoneName) const
{
	// Build a temp array then remap it to the Skeletal Mesh, because the Mesh has weird behavior when getting child bones
	const FReferenceSkeleton& RefSkel = Mesh->GetSkeleton()->GetReferenceSkeleton();
	TArray<FName> BonePath;
	
	BonePath.Add(BoneName);
	
	int32 BoneIndex = RefSkel.FindRawBoneIndex(BoneName);

	if (BoneIndex != INDEX_NONE)
	{
		while (BoneIndex != INDEX_NONE)
		{
			const int32 ParentBoneIndex = RefSkel.GetRawParentIndex(BoneIndex);
			if (ParentBoneIndex != INDEX_NONE)
			{
				BonePath.Add(RefSkel.GetBoneName(ParentBoneIndex));
			}

			BoneIndex = ParentBoneIndex;
		}
	}

	return BonePath;
}

FTransform ULimbMap::GetBoneReferenceTransform(const FName BoneName) const
{
	return FTransform(Mesh->GetComposedRefPoseMatrix(BoneName));
}

TArray<int32> ULimbMap::GetAllImmediateBones(const FName& BoneName)
{
	TArray<int32> Out;

	const FLimb& Limb = GetLimb(BoneName);

	for(int32 i = 0; i < Mesh->GetRefSkeleton().GetNum(); i++)
	{
		if(Limb.BoneIndex == i) continue;
		if(Limb.ChildBones.Contains(i)) continue;

		Out.Add(i);
	}

	return Out;
}

void ULimbMap::RemoveExcludedBones(TArray<int32>& ChildBones)
{
	for(int32 i = 0; i < ChildBones.Num(); i++)
	{
		TryRemoveExcludedBone(i, ChildBones);
	}
}

void ULimbMap::TryRemoveExcludedBone(const int32& Index, TArray<int32>& ChildBones)
{
	if(!ChildBones.IsValidIndex(Index)) return;
	
	const FString BoneName = Mesh->GetSkeleton()->GetReferenceSkeleton().GetBoneName(ChildBones[Index]).ToString();
	
	if(HasExcludedKeyword(BoneName))
	{
		ChildBones.RemoveAt(Index);
		TryRemoveExcludedBone(Index, ChildBones);
	}
}

TArray<FName>& ULimbMap::GetAllBonesOfLimb(ULimbMap* InLimbMap, const FName BoneName)
{
	return InLimbMap->LimbMap.Find(BoneName).Get();
}

TArray<int32> ULimbMap::GetAllLimbVertices(const FName& InBone)
{
	return {};/*
	const FLimb& Limb = LimbMap.Find(InBone);
	
	for(int32 Index : Limb.Get())
	{
		
	}
	uint8 Mesh->GetResourceForRendering()->LODRenderData[0].GetSkinWeightVertexBuffer()->GetBoneWeight()
	*/
}

FName ULimbMap::GetBoneName(const int32 Index)
{
	return Mesh->GetRefSkeleton().GetBoneName(Index);
}

int32 ULimbMap::GetBoneIndex(const FName& InName)
{
	return Mesh->GetRefSkeleton().FindBoneIndex(InName);
}

int32 ULimbMap::GetRawBoneIndex(const int32 BoneIndex)
{
/*	const TArray<FBoneIndexType> ActiveBoneIndices = Mesh->GetImportedModel()->LODModels[0].ActiveBoneIndices;

	for(int32 i = 0; i < ActiveBoneIndices.Num(); i++)
	{
		if(ActiveBoneIndices[i] == BoneIndex) return i;
	}*/

	checkf(false, TEXT("No Raw Bone Index exists for Bone Index %d"), BoneIndex);
	return -1;
}

bool ULimbMap::HasBoneWeight(const FSkinWeightInfo& SkinVertex, const int32 BoneIndex, const float WeightThreshold)
{
	for(int32 i = 0; i < MAX_TOTAL_INFLUENCES; i++)
	{		
		if(GetMappedBoneIndex(SkinVertex.InfluenceBones[i]) == BoneIndex)
		{
			const float Weight = SkinVertex.InfluenceWeights[i] / 255.f;

			if(Weight > WeightThreshold) return true;
		}
	}

	return false;
}

float ULimbMap::GetWeight(const FSkinWeightInfo& SkinVertex, const int32 BoneIndex)
{
	for(int32 i = 0; i < MAX_TOTAL_INFLUENCES; i++)
	{
		if(GetMappedBoneIndex(SkinVertex.InfluenceBones[i] == BoneIndex)) return SkinVertex.InfluenceWeights[i] / 255.f;
	}

	return 0.f;
}

TArray<int32> ULimbMap::GetAllBonesWithInfluence(const FSkinWeightInfo& SkinVertex, float WeightThreshold)
{
	TArray<int32> Bones;

	for(int32 i = 0; i < MAX_TOTAL_INFLUENCES; i++)
	{
		if(SkinVertex.InfluenceWeights[i] / 255.f >= WeightThreshold)
		{
			Bones.Add(SkinVertex.InfluenceBones[i]);
		}
	}

	return Bones;
}

int32 ULimbMap::GetBoneWithMostInfluence(const FSkinWeightInfo& SkinVertex)
{
	uint8 Influence = 0;
	uint16 BoneIndex = 0;

	for(int32 i = 0; i < MAX_TOTAL_INFLUENCES; i++)
	{
		if(SkinVertex.InfluenceWeights[i] > Influence)
		{
			Influence = SkinVertex.InfluenceWeights[i];
			BoneIndex = SkinVertex.InfluenceBones[i];
		}
	}

	return BoneIndex;
}

TArray<float> ULimbMap::GetVertexWeightColorForBone(const FName& InBone)
{
/*		// Out Data
	TArray<float> Out;
	
	const FSkeletalMeshLODRenderData& RenderData = Mesh->GetResourceForRendering()->LODRenderData[0];
	const int32 NumOfVertices = RenderData.GetNumVertices();

		// Init the size of the array to the num of vertices
	Out.Init(0, NumOfVertices);
	
	const int32 BoneIndex = Mesh->GetRefSkeleton().FindBoneIndex(InBone);

	FSkeletalMeshModel* ImportedResource = Mesh->GetImportedModel();

	return Out; */

	return {};
}

TArray<float> ULimbMap::GetVertexWeightColorForLimb(const FName& InBone, float WeightThreshold)
{
//	const TArray<FName> AllBones = GetLimb(InBone).Get();//GetAllBonesOfLimb(InLimbMap, InBone);
	
	TArray<float> VertexWeights;
	VertexWeights.Init(0, Mesh->GetResourceForRendering()->LODRenderData[0].GetNumVertices());

	TArray<FSkinWeightInfo> Vertices;
//	Mesh->GetImportedModel()->LODModels[0].GetVertices(Vertices);

	for(int32 i = 0; i < Vertices.Num(); i++)
	{
		const FSkinWeightInfo& Vertex = Vertices[i];

		float HasWeight = 0;

//		int32 Test = GetBoneWithMostInfluence(Mesh, Vertex);
//		FName TestName = GetBoneName(Mesh, GetMappedBoneIndex(Mesh, Test));

//		if(AllBones.Contains(TestName)) HasWeight = 1;
		
	//	const TArray<int32> VertexWeightIndices = GetAllBonesWithInfluence(Vertex, WeightThreshold);
		
	//	const TArray<int32> VertexBone = GetMappedBoneIndices(VertexWeightIndices);
		
	//	TArray<FName> VertexBoneNames = ConvertBonesToNames(VertexBone);
		
	//	if(HasAnyMatchingNames(AllBones, VertexBoneNames))
		{
			HasWeight = 1;
		}

		VertexWeights[i] = HasWeight;
	}

	return VertexWeights;
}

int32 ULimbMap::GetMappedBoneIndex(const int32 VertexBoneIndex)
{
	return *VertexBoneMap.Find(VertexBoneIndex);
}

int32 ULimbMap::GetMappedRawBoneIndex(const int32 BoneIndex)
{
//	checkf(Mesh->GetImportedModel()->LODModels[0].Sections.Num() <= 1, TEXT("Multiple Sections is not supported currently for Get Bone Mapped Index Raw"))
//	return Mesh->GetImportedModel()->LODModels[0].Sections[0].BoneMap.Find(BoneIndex);
	return 0;
}

TArray<int32> ULimbMap::GetMappedBoneIndices(const TArray<int32> VertexBoneIndices)
{
	TArray<int32> Out;
	for(const int32 Index : VertexBoneIndices)
	{
		Out.Add(GetMappedBoneIndex(Index));
	}

	return Out;
}

TArray<FName> ULimbMap::ConvertBonesToNames(const TArray<int32>& Bones)
{
	TArray<FName> Names;
	for(const int32 Bone : Bones)
	{
		Names.Add(Mesh->GetRefSkeleton().GetBoneName(Bone));
	}
	
	return Names;
}

bool ULimbMap::HasAnyMatchingNames(const TArray<FName>& One, const TArray<FName>& Two)
{
	for(const FName& Name : One)
	{
		if(Two.Contains(Name)) return true;
	}

	return false;
}

bool ULimbMap::HasAnyMatchingInts(const TArray<int32>& One, const TArray<int32>& Two)
{
	for(const int32& Number : One)
	{
		if(Two.Contains(Number)) return true;
	}

	return false;
}

FLimb& ULimbMap::GetLimb(const FName BoneName)
{
	return LimbMap.Find(BoneName);
}

void ULimbMap::SetLimbWeights(USkeletalMeshComponent* SkeletalMeshComponent, FName BoneName, float WeightThreshold)
{
	USkeletalMesh* SkelMesh = SkeletalMeshComponent->GetSkeletalMeshAsset();
	int32 BoneIndex = GetBoneIndex(BoneName);
	
	TArray<int32> ImmediateBones = GetAllImmediateBones(BoneName);
	ImmediateBones.Add(GetBoneIndex(BoneName));
	
//	TArray<int32> AllBones = InLimbMap->GetLimb(BoneName).GetLimbMapped(Mesh);//GetAllBonesOfLimb(InLimbMap, InBone);
//	AllBones.Remove(InLimbMap->GetLimb(BoneName).BoneIndex);

		/* Init All Weights to the InBoneName */
	FSkelMeshSkinWeightInfo Weight;
	Weight.Bones[0] = BoneIndex;//GetMappedRawBoneIndex(Mesh->SkeletalMesh, GetBoneIndex(Mesh->SkeletalMesh, BoneName));
	Weight.Weights[0] = 255;
	TArray<FSkelMeshSkinWeightInfo> VertexWeights;
	VertexWeights.Init(FSkelMeshSkinWeightInfo(), SkelMesh->GetResourceForRendering()->LODRenderData[0].GetNumVertices());






	

	
	FSkeletalMeshLODRenderData& LOD = SkeletalMeshComponent->GetSkeletalMeshAsset()->GetResourceForRendering()->LODRenderData[0];
	const FSkinWeightVertexBuffer& Buffer = LOD.SkinWeightVertexBuffer;
	
	for(int32 i = 0; i < VertexNum; i++)
	{
		FSkinWeightInfo Weights = Buffer.GetVertexSkinWeights(i);
		
		TArray<int32> InfluenceBones = GetAllBonesWithInfluence(Weights, WeightThreshold);
		
		InfluenceBones = GetMappedBoneIndices(InfluenceBones);
		
		if(HasAnyMatchingInts(ImmediateBones, InfluenceBones))
		{
			VertexWeights[i] = Weight;
		}
		else
		{
			// If we have the bone then just remap the indices
			for(int32 j = 0; j < MAX_TOTAL_INFLUENCES; j++)
			{
				int32 Bone = GetMappedBoneIndex(Weights.InfluenceBones[j]);
				
				VertexWeights[i].Bones[j] = Bone;
				VertexWeights[i].Weights[j] = Weights.InfluenceWeights[j];
			}
		}
	}





	


	
		/*	Loop Over Vertices and Transfer only child bones weights */
/*	TArray<FSkinWeightInfo> Vertices;
	SkelMesh->GetImportedModel()->LODModels[0].GetVertices(Vertices);

	for(int32 i = 0; i < Vertices.Num(); i++)
	{
		const FSkinWeightInfo& Vertex = Vertices[i];

		TArray<int32> InfluenceBones = GetAllBonesWithInfluence(Vertex, WeightThreshold);
		
		InfluenceBones = GetMappedBoneIndices(InfluenceBones);
		
		if(HasAnyMatchingInts(ImmediateBones, InfluenceBones))
		{
			VertexWeights[i] = Weight;
		}
		else
		{
			// If we have the bone then just remap the indices
			for(int32 j = 0; j < MAX_TOTAL_INFLUENCES; j++)
			{
				int32 Bone = GetMappedBoneIndex(Vertex.InfluenceBones[j]);
				
				VertexWeights[i].Bones[j] = Bone;
				VertexWeights[i].Weights[j] = Vertex.InfluenceWeights[j];
			}
		}
	}
*/
	SkeletalMeshComponent->SetSkinWeightOverride(0, VertexWeights);
}

TArray<float> ULimbMap::GetWeightsOfBone(const FName BoneName)
{
	// Out Data
	TArray<float> Out;
	// Init the size of the array to the num of vertices
	Out.Init(0, Mesh->GetResourceForRendering()->LODRenderData[0].GetNumVertices());
	
	const int32 BoneIndex = GetBoneIndex(BoneName);

	ForVertices()
	{
		SetVertex

		Out[i] = GetWeight(Vertex, BoneIndex);
	}

	return Out;
}

TArray<float> ULimbMap::GetMaskOfBone(const FName BoneName, const float WeightThreshold)
{
	// Out Data
	TArray<float> Out;
	// Init the size of the array to the num of vertices
	Out.Init(0, Mesh->GetResourceForRendering()->LODRenderData[0].GetNumVertices());
	
	const int32 BoneIndex = GetBoneIndex(BoneName);

	ForVertices()
	{
		SetVertex

		Out[i] = GetWeight(Vertex, BoneIndex) >= WeightThreshold ? 1 : 0;
	}

	return Out;
}

TArray<float> ULimbMap::GetWeightsOfLimb(const FName BoneName)
{
	// Out Data
	TArray<float> Out;
	// Init the size of the array to the num of vertices
	Out.Init(0, Mesh->GetResourceForRendering()->LODRenderData[0].GetNumVertices());
	
	const TArray<int32> BoneIndices = GetLimb(BoneName).GetLimbIndices();

	ForVertices()
	{
		SetVertex

		float HighestWeight = 0;
		
		for(int32 j = 0; j < MAX_TOTAL_INFLUENCES; j++)
		{
			if(BoneIndices.Contains(GetMappedBoneIndex(Vertex.InfluenceBones[j]))) 
			{
				const float Weight = Vertex.InfluenceWeights[j] / 255.f;

				if(Weight > HighestWeight) HighestWeight = Weight;
			}
		}
		
		Out[i] = HighestWeight;
	}

	return Out;
}

TArray<float> ULimbMap::GetMaskOfLimb(const FName BoneName, float WeightThreshold)
{
	// Out Data
	TArray<float> Out;
	// Init the size of the array to the num of vertices
	Out.Init(0, Mesh->GetResourceForRendering()->LODRenderData[0].GetNumVertices());
	
	const TArray<int32> BoneIndices = GetLimb(BoneName).GetLimbIndices();

	ForVertices()
	{
		SetVertex

		float Weight = 0;
		
		for(int32 j = 0; j < MAX_TOTAL_INFLUENCES; j++)
		{
			if(BoneIndices.Contains(GetMappedBoneIndex(Vertex.InfluenceBones[j]))) 
			{
				if(Vertex.InfluenceWeights[j] / 255.f >= WeightThreshold) Weight = 1;
			}
		}
		
		Out[i] = Weight;
	}

	return Out;
}

TArray<float> ULimbMap::GetMaskOfImmediateLimb(const FName BoneName, float WeightThreshold, bool IncludeBone)
{
	// Out Data
	TArray<float> Out;
	// Init the size of the array to the num of vertices
	Out.Init(0, Mesh->GetResourceForRendering()->LODRenderData[0].GetNumVertices());

	TArray<int32> ImmediateBones = GetAllImmediateBones(BoneName);
	if(IncludeBone) ImmediateBones.Add(GetBoneIndex(BoneName));

	
	ForVertices()
	{
		SetVertex

		float Weight = 0;
		
		for(int32 j = 0; j < MAX_TOTAL_INFLUENCES; j++)
		{
			if(ImmediateBones.Contains(GetMappedBoneIndex(Vertex.InfluenceBones[j]))) 
			{
				if(Vertex.InfluenceWeights[j] / 255.f >= WeightThreshold) Weight = 1;
			}
		}
		
		Out[i] = Weight;
	}

	return Out;
}