// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkSurfaceReflectorSetUtils.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkSurfaceReflectorSetUtils() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAcousticTexture_NoRegister();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkSurfaceEdgeInfo();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkSurfaceEdgeVerts();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkSurfacePoly();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkSurfaceEdgeVerts;
class UScriptStruct* FAkSurfaceEdgeVerts::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkSurfaceEdgeVerts.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkSurfaceEdgeVerts.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkSurfaceEdgeVerts, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkSurfaceEdgeVerts"));
	}
	return Z_Registration_Info_UScriptStruct_AkSurfaceEdgeVerts.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkSurfaceEdgeVerts>()
{
	return FAkSurfaceEdgeVerts::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkSurfaceEdgeVerts_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSurfaceEdgeVerts_Statics::Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** An edge between two vertices */" },
#endif
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An edge between two vertices" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FAkSurfaceEdgeVerts_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkSurfaceEdgeVerts>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkSurfaceEdgeVerts_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkSurfaceEdgeVerts",
		nullptr,
		0,
		sizeof(FAkSurfaceEdgeVerts),
		alignof(FAkSurfaceEdgeVerts),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSurfaceEdgeVerts_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAkSurfaceEdgeVerts_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkSurfaceEdgeVerts()
	{
		if (!Z_Registration_Info_UScriptStruct_AkSurfaceEdgeVerts.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkSurfaceEdgeVerts.InnerSingleton, Z_Construct_UScriptStruct_FAkSurfaceEdgeVerts_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkSurfaceEdgeVerts.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkSurfaceEdgeInfo;
class UScriptStruct* FAkSurfaceEdgeInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkSurfaceEdgeInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkSurfaceEdgeInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkSurfaceEdgeInfo, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkSurfaceEdgeInfo"));
	}
	return Z_Registration_Info_UScriptStruct_AkSurfaceEdgeInfo.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkSurfaceEdgeInfo>()
{
	return FAkSurfaceEdgeInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkSurfaceEdgeInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSurfaceEdgeInfo_Statics::Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Information about an edge */" },
#endif
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Information about an edge" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FAkSurfaceEdgeInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkSurfaceEdgeInfo>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkSurfaceEdgeInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkSurfaceEdgeInfo",
		nullptr,
		0,
		sizeof(FAkSurfaceEdgeInfo),
		alignof(FAkSurfaceEdgeInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSurfaceEdgeInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAkSurfaceEdgeInfo_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkSurfaceEdgeInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_AkSurfaceEdgeInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkSurfaceEdgeInfo.InnerSingleton, Z_Construct_UScriptStruct_FAkSurfaceEdgeInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkSurfaceEdgeInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkSurfacePoly;
class UScriptStruct* FAkSurfacePoly::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkSurfacePoly.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkSurfacePoly.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkSurfacePoly, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkSurfacePoly"));
	}
	return Z_Registration_Info_UScriptStruct_AkSurfacePoly.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkSurfacePoly>()
{
	return FAkSurfacePoly::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkSurfacePoly_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Occlusion_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Occlusion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnableSurface_MetaData[];
#endif
		static void NewProp_EnableSurface_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableSurface;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceArea_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SurfaceArea;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Contains the properties of a face from the ParentBrush of a UAkSurfaceReflectorSetComponent. */" },
#endif
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Contains the properties of a face from the ParentBrush of a UAkSurfaceReflectorSetComponent." },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkSurfacePoly>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_Texture_MetaData[] = {
		{ "Category", "Surface Properties" },
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetUtils.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkSurfacePoly, Texture), Z_Construct_UClass_UAkAcousticTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_Texture_MetaData), Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_Texture_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_Occlusion_MetaData[] = {
		{ "Category", "Surface Properties" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Transmission Loss" },
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetUtils.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_Occlusion = { "Occlusion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkSurfacePoly, Occlusion), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_Occlusion_MetaData), Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_Occlusion_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_EnableSurface_MetaData[] = {
		{ "Category", "Surface Properties" },
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetUtils.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_EnableSurface_SetBit(void* Obj)
	{
		((FAkSurfacePoly*)Obj)->EnableSurface = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_EnableSurface = { "EnableSurface", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAkSurfacePoly), &Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_EnableSurface_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_EnableSurface_MetaData), Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_EnableSurface_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_SurfaceArea_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkSurfaceReflectorSetUtils.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_SurfaceArea = { "SurfaceArea", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkSurfacePoly, SurfaceArea), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_SurfaceArea_MetaData), Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_SurfaceArea_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_Texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_Occlusion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_EnableSurface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_SurfaceArea,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkSurfacePoly",
		Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::PropPointers),
		sizeof(FAkSurfacePoly),
		alignof(FAkSurfacePoly),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAkSurfacePoly()
	{
		if (!Z_Registration_Info_UScriptStruct_AkSurfacePoly.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkSurfacePoly.InnerSingleton, Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkSurfacePoly.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_danii_RiderProjects_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkSurfaceReflectorSetUtils_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_danii_RiderProjects_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkSurfaceReflectorSetUtils_h_Statics::ScriptStructInfo[] = {
		{ FAkSurfaceEdgeVerts::StaticStruct, Z_Construct_UScriptStruct_FAkSurfaceEdgeVerts_Statics::NewStructOps, TEXT("AkSurfaceEdgeVerts"), &Z_Registration_Info_UScriptStruct_AkSurfaceEdgeVerts, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkSurfaceEdgeVerts), 2471535953U) },
		{ FAkSurfaceEdgeInfo::StaticStruct, Z_Construct_UScriptStruct_FAkSurfaceEdgeInfo_Statics::NewStructOps, TEXT("AkSurfaceEdgeInfo"), &Z_Registration_Info_UScriptStruct_AkSurfaceEdgeInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkSurfaceEdgeInfo), 942661286U) },
		{ FAkSurfacePoly::StaticStruct, Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewStructOps, TEXT("AkSurfacePoly"), &Z_Registration_Info_UScriptStruct_AkSurfacePoly, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkSurfacePoly), 2199498729U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_danii_RiderProjects_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkSurfaceReflectorSetUtils_h_2724228405(TEXT("/Script/AkAudio"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_danii_RiderProjects_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkSurfaceReflectorSetUtils_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_danii_RiderProjects_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkSurfaceReflectorSetUtils_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
