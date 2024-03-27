// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkSurfaceReflectorSetComponent.h"
#include "AkAudio/Classes/AkSurfaceReflectorSetUtils.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkSurfaceReflectorSetComponent() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAcousticTextureSetComponent();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkSurfaceReflectorSetComponent();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkSurfaceReflectorSetComponent_NoRegister();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkSurfaceEdgeInfo();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkSurfacePoly();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	DEFINE_FUNCTION(UAkSurfaceReflectorSetComponent::execUpdateAcousticProperties)
	{
		P_GET_TARRAY(FAkSurfacePoly,Z_Param_in_AcousticPolys);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateAcousticProperties(Z_Param_in_AcousticPolys);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkSurfaceReflectorSetComponent::execRemoveSurfaceReflectorSet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveSurfaceReflectorSet();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkSurfaceReflectorSetComponent::execUpdateSurfaceReflectorSet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateSurfaceReflectorSet();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkSurfaceReflectorSetComponent::execSendSurfaceReflectorSet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendSurfaceReflectorSet();
		P_NATIVE_END;
	}
	void UAkSurfaceReflectorSetComponent::StaticRegisterNativesUAkSurfaceReflectorSetComponent()
	{
		UClass* Class = UAkSurfaceReflectorSetComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RemoveSurfaceReflectorSet", &UAkSurfaceReflectorSetComponent::execRemoveSurfaceReflectorSet },
			{ "SendSurfaceReflectorSet", &UAkSurfaceReflectorSetComponent::execSendSurfaceReflectorSet },
			{ "UpdateAcousticProperties", &UAkSurfaceReflectorSetComponent::execUpdateAcousticProperties },
			{ "UpdateSurfaceReflectorSet", &UAkSurfaceReflectorSetComponent::execUpdateSurfaceReflectorSet },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_RemoveSurfaceReflectorSet_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_RemoveSurfaceReflectorSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkSurfaceReflectorSet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Remove the geometry and the corresponding instance from Wwise. */" },
#endif
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Remove the geometry and the corresponding instance from Wwise." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_RemoveSurfaceReflectorSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkSurfaceReflectorSetComponent, nullptr, "RemoveSurfaceReflectorSet", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_RemoveSurfaceReflectorSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_RemoveSurfaceReflectorSet_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_RemoveSurfaceReflectorSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_RemoveSurfaceReflectorSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SendSurfaceReflectorSet_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SendSurfaceReflectorSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkSurfaceReflectorSet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Convert the brush to a geometry set consisting of vertices, triangles, surfaces, acoustic textures and transmission loss values.\n\x09* Send it to Wwise with the rest of the AkGeometryParams to add or update a geometry in Spatial Audio.\n\x09* It is necessary to create at least one geometry instance for each geometry set that is to be used for diffraction and reflection simulation. See UpdateSurfaceReflectorSet(). */" },
#endif
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convert the brush to a geometry set consisting of vertices, triangles, surfaces, acoustic textures and transmission loss values.\nSend it to Wwise with the rest of the AkGeometryParams to add or update a geometry in Spatial Audio.\nIt is necessary to create at least one geometry instance for each geometry set that is to be used for diffraction and reflection simulation. See UpdateSurfaceReflectorSet()." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SendSurfaceReflectorSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkSurfaceReflectorSetComponent, nullptr, "SendSurfaceReflectorSet", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SendSurfaceReflectorSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SendSurfaceReflectorSet_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SendSurfaceReflectorSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SendSurfaceReflectorSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateAcousticProperties_Statics
	{
		struct AkSurfaceReflectorSetComponent_eventUpdateAcousticProperties_Parms
		{
			TArray<FAkSurfacePoly> in_AcousticPolys;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_in_AcousticPolys_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_in_AcousticPolys;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateAcousticProperties_Statics::NewProp_in_AcousticPolys_Inner = { "in_AcousticPolys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAkSurfacePoly, METADATA_PARAMS(0, nullptr) }; // 2199498729
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateAcousticProperties_Statics::NewProp_in_AcousticPolys = { "in_AcousticPolys", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkSurfaceReflectorSetComponent_eventUpdateAcousticProperties_Parms, in_AcousticPolys), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2199498729
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateAcousticProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateAcousticProperties_Statics::NewProp_in_AcousticPolys_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateAcousticProperties_Statics::NewProp_in_AcousticPolys,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateAcousticProperties_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Audiokinetic|AkSurfaceReflectorSet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set AcousticPolys with an input array, compute the surface areas of each poly and notify damping needs updating. */" },
#endif
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set AcousticPolys with an input array, compute the surface areas of each poly and notify damping needs updating." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateAcousticProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkSurfaceReflectorSetComponent, nullptr, "UpdateAcousticProperties", nullptr, nullptr, Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateAcousticProperties_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateAcousticProperties_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateAcousticProperties_Statics::AkSurfaceReflectorSetComponent_eventUpdateAcousticProperties_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateAcousticProperties_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateAcousticProperties_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateAcousticProperties_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateAcousticProperties_Statics::AkSurfaceReflectorSetComponent_eventUpdateAcousticProperties_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateAcousticProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateAcousticProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateSurfaceReflectorSet_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateSurfaceReflectorSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkSurfaceReflectorSet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Add or update an instance of the geometry by sending the transform of this component to Wwise.\n\x09* A geometry instance is a unique instance of a geometry set with a specified transform (position, rotation and scale).\n\x09* It is necessary to create at least one geometry instance for each geometry set that is to be used for diffraction and reflection simulation. */" },
#endif
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add or update an instance of the geometry by sending the transform of this component to Wwise.\nA geometry instance is a unique instance of a geometry set with a specified transform (position, rotation and scale).\nIt is necessary to create at least one geometry instance for each geometry set that is to be used for diffraction and reflection simulation." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateSurfaceReflectorSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkSurfaceReflectorSetComponent, nullptr, "UpdateSurfaceReflectorSet", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateSurfaceReflectorSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateSurfaceReflectorSet_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateSurfaceReflectorSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateSurfaceReflectorSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkSurfaceReflectorSetComponent);
	UClass* Z_Construct_UClass_UAkSurfaceReflectorSetComponent_NoRegister()
	{
		return UAkSurfaceReflectorSetComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSurfaceReflectors_MetaData[];
#endif
		static void NewProp_bEnableSurfaceReflectors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSurfaceReflectors;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AcousticPolys_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AcousticPolys_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AcousticPolys;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDiffraction_MetaData[];
#endif
		static void NewProp_bEnableDiffraction_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDiffraction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDiffractionOnBoundaryEdges_MetaData[];
#endif
		static void NewProp_bEnableDiffractionOnBoundaryEdges_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDiffractionOnBoundaryEdges;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssociatedRoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AssociatedRoom;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TextVisualizers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextVisualizers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TextVisualizers;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EdgeMap_ValueProp;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_EdgeMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EdgeMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_EdgeMap;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkAcousticTextureSetComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_RemoveSurfaceReflectorSet, "RemoveSurfaceReflectorSet" }, // 3725207407
		{ &Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SendSurfaceReflectorSet, "SendSurfaceReflectorSet" }, // 4218987437
		{ &Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateAcousticProperties, "UpdateAcousticProperties" }, // 2093665128
		{ &Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateSurfaceReflectorSet, "UpdateSurfaceReflectorSet" }, // 206547849
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Audiokinetic" },
		{ "HideCategories", "Transform Rendering Mobility LOD Component Activation Tags Trigger PhysicsVolume" },
		{ "IncludePath", "AkSurfaceReflectorSetComponent.h" },
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableSurfaceReflectors_MetaData[] = {
		{ "Category", "EnableComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enable Surface Reflector Set to send the geometry for reflection and diffraction use. Additional properties are available in the Surface Reflector Set and Surface Properties categories.\n\x09* Disable Surface Reflector Set to send a geometry that is not used for reflection and diffraction. The complete Surface Reflector Set category and the Transmission Loss property of the Surface Properties category are removed from the details panel.\n\x09* When Surface Reflector Set is re-enabled after being disabled, the previously set values are restored. */" },
#endif
		{ "DisplayName", "Enable Surface Reflector Set" },
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable Surface Reflector Set to send the geometry for reflection and diffraction use. Additional properties are available in the Surface Reflector Set and Surface Properties categories.\nDisable Surface Reflector Set to send a geometry that is not used for reflection and diffraction. The complete Surface Reflector Set category and the Transmission Loss property of the Surface Properties category are removed from the details panel.\nWhen Surface Reflector Set is re-enabled after being disabled, the previously set values are restored." },
#endif
	};
#endif
	void Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableSurfaceReflectors_SetBit(void* Obj)
	{
		((UAkSurfaceReflectorSetComponent*)Obj)->bEnableSurfaceReflectors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableSurfaceReflectors = { "bEnableSurfaceReflectors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkSurfaceReflectorSetComponent), &Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableSurfaceReflectors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableSurfaceReflectors_MetaData), Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableSurfaceReflectors_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_AcousticPolys_Inner = { "AcousticPolys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAkSurfacePoly, METADATA_PARAMS(0, nullptr) }; // 2199498729
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_AcousticPolys_MetaData[] = {
		{ "BlueprintSetter", "UpdateAcousticProperties" },
		{ "Category", "SurfaceReflectorSet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The surface properties of each face on the brush geometry. */" },
#endif
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The surface properties of each face on the brush geometry." },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_AcousticPolys = { "AcousticPolys", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSurfaceReflectorSetComponent, AcousticPolys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_AcousticPolys_MetaData), Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_AcousticPolys_MetaData) }; // 2199498729
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableDiffraction_MetaData[] = {
		{ "Category", "SurfaceReflectorSet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enable or disable geometric diffraction for this mesh. Check this box to have Wwise Spatial Audio generate diffraction edges on the geometry. The diffraction edges will be visible in the Wwise game object viewer when connected to the game. */" },
#endif
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable or disable geometric diffraction for this mesh. Check this box to have Wwise Spatial Audio generate diffraction edges on the geometry. The diffraction edges will be visible in the Wwise game object viewer when connected to the game." },
#endif
	};
#endif
	void Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableDiffraction_SetBit(void* Obj)
	{
		((UAkSurfaceReflectorSetComponent*)Obj)->bEnableDiffraction = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableDiffraction = { "bEnableDiffraction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkSurfaceReflectorSetComponent), &Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableDiffraction_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableDiffraction_MetaData), Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableDiffraction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableDiffractionOnBoundaryEdges_MetaData[] = {
		{ "Category", "SurfaceReflectorSet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enable or disable geometric diffraction on boundary edges for this Geometry. Boundary edges are edges that are connected to only one triangle. Depending on the specific shape of the geometry, boundary edges may or may not be useful and it is beneficial to reduce the total number of diffraction edges to process.  */" },
#endif
		{ "EditCondition", "bEnableDiffraction" },
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable or disable geometric diffraction on boundary edges for this Geometry. Boundary edges are edges that are connected to only one triangle. Depending on the specific shape of the geometry, boundary edges may or may not be useful and it is beneficial to reduce the total number of diffraction edges to process." },
#endif
	};
#endif
	void Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableDiffractionOnBoundaryEdges_SetBit(void* Obj)
	{
		((UAkSurfaceReflectorSetComponent*)Obj)->bEnableDiffractionOnBoundaryEdges = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableDiffractionOnBoundaryEdges = { "bEnableDiffractionOnBoundaryEdges", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkSurfaceReflectorSetComponent), &Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableDiffractionOnBoundaryEdges_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableDiffractionOnBoundaryEdges_MetaData), Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableDiffractionOnBoundaryEdges_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_AssociatedRoom_MetaData[] = {
		{ "Category", "SurfaceReflectorSet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** (Deprecated) Associate this Surface Reflector Set component with a Room.\n\x09* This property is deprecated and will be removed in a future version. We recommend not using it by leaving it set to None.\n\x09* Associating a Surface Reflector Set component with a particular Room limits the scope in which the geometry is accessible. Doing so reduces the search space for ray casting performed by reflection and diffraction calculations.\n\x09* When set to None, this geometry has a global scope.\n\x09* Note if one or more geometry sets are associated with a room, that room can no longer access geometry that is in the global scope.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "(Deprecated) Associate this Surface Reflector Set component with a Room.\nThis property is deprecated and will be removed in a future version. We recommend not using it by leaving it set to None.\nAssociating a Surface Reflector Set component with a particular Room limits the scope in which the geometry is accessible. Doing so reduces the search space for ray casting performed by reflection and diffraction calculations.\nWhen set to None, this geometry has a global scope.\nNote if one or more geometry sets are associated with a room, that room can no longer access geometry that is in the global scope." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_AssociatedRoom = { "AssociatedRoom", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSurfaceReflectorSetComponent, AssociatedRoom), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_AssociatedRoom_MetaData), Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_AssociatedRoom_MetaData) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_TextVisualizers_Inner = { "TextVisualizers", nullptr, (EPropertyFlags)0x0000000800080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_TextVisualizers_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_TextVisualizers = { "TextVisualizers", nullptr, (EPropertyFlags)0x0090008c00000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSurfaceReflectorSetComponent, TextVisualizers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_TextVisualizers_MetaData), Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_TextVisualizers_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_EdgeMap_ValueProp = { "EdgeMap", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FAkSurfaceEdgeInfo, METADATA_PARAMS(0, nullptr) }; // 942661286
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_EdgeMap_Key_KeyProp = { "EdgeMap_Key", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_EdgeMap_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_EdgeMap = { "EdgeMap", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSurfaceReflectorSetComponent, EdgeMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_EdgeMap_MetaData), Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_EdgeMap_MetaData) }; // 942661286
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableSurfaceReflectors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_AcousticPolys_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_AcousticPolys,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableDiffraction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableDiffractionOnBoundaryEdges,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_AssociatedRoom,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_TextVisualizers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_TextVisualizers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_EdgeMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_EdgeMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_EdgeMap,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkSurfaceReflectorSetComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::ClassParams = {
		&UAkSurfaceReflectorSetComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAkSurfaceReflectorSetComponent()
	{
		if (!Z_Registration_Info_UClass_UAkSurfaceReflectorSetComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkSurfaceReflectorSetComponent.OuterSingleton, Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkSurfaceReflectorSetComponent.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkSurfaceReflectorSetComponent>()
	{
		return UAkSurfaceReflectorSetComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkSurfaceReflectorSetComponent);
	UAkSurfaceReflectorSetComponent::~UAkSurfaceReflectorSetComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_danii_RiderProjects_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkSurfaceReflectorSetComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_danii_RiderProjects_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkSurfaceReflectorSetComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAkSurfaceReflectorSetComponent, UAkSurfaceReflectorSetComponent::StaticClass, TEXT("UAkSurfaceReflectorSetComponent"), &Z_Registration_Info_UClass_UAkSurfaceReflectorSetComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkSurfaceReflectorSetComponent), 499381514U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_danii_RiderProjects_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkSurfaceReflectorSetComponent_h_2154522342(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_Users_danii_RiderProjects_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkSurfaceReflectorSetComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_danii_RiderProjects_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkSurfaceReflectorSetComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
