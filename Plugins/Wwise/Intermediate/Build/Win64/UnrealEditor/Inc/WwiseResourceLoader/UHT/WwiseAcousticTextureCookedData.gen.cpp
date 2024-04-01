// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwiseResourceLoader/Public/Wwise/CookedData/WwiseAcousticTextureCookedData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwiseAcousticTextureCookedData() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WwiseResourceLoader();
	WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WwiseAcousticTextureCookedData;
class UScriptStruct* FWwiseAcousticTextureCookedData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WwiseAcousticTextureCookedData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WwiseAcousticTextureCookedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData, (UObject*)Z_Construct_UPackage__Script_WwiseResourceLoader(), TEXT("WwiseAcousticTextureCookedData"));
	}
	return Z_Registration_Info_UScriptStruct_WwiseAcousticTextureCookedData.OuterSingleton;
}
template<> WWISERESOURCELOADER_API UScriptStruct* StaticStruct<FWwiseAcousticTextureCookedData>()
{
	return FWwiseAcousticTextureCookedData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbsorptionLow_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AbsorptionLow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbsorptionMidLow_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AbsorptionMidLow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbsorptionMidHigh_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AbsorptionMidHigh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbsorptionHigh_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AbsorptionHigh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShortId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ShortId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DebugName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseAcousticTextureCookedData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseAcousticTextureCookedData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData_Statics::NewProp_AbsorptionLow_MetaData[] = {
		{ "Category", "AkTexture" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The Acoustic Texture's lower Absorption value. The percentage by which sound within a low frequency range is dampened.\n" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseAcousticTextureCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Acoustic Texture's lower Absorption value. The percentage by which sound within a low frequency range is dampened." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData_Statics::NewProp_AbsorptionLow = { "AbsorptionLow", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseAcousticTextureCookedData, AbsorptionLow), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData_Statics::NewProp_AbsorptionLow_MetaData), Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData_Statics::NewProp_AbsorptionLow_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData_Statics::NewProp_AbsorptionMidLow_MetaData[] = {
		{ "Category", "AkTexture" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The Acoustic Texture's mid-low Absorption value. The percentage by which sound within a mid-low frequency range is dampened.\n" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseAcousticTextureCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Acoustic Texture's mid-low Absorption value. The percentage by which sound within a mid-low frequency range is dampened." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData_Statics::NewProp_AbsorptionMidLow = { "AbsorptionMidLow", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseAcousticTextureCookedData, AbsorptionMidLow), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData_Statics::NewProp_AbsorptionMidLow_MetaData), Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData_Statics::NewProp_AbsorptionMidLow_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData_Statics::NewProp_AbsorptionMidHigh_MetaData[] = {
		{ "Category", "AkTexture" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The Acoustic Texture's mid-high Absorption value. The percentage by which sound within a mid-high frequency range is dampened.\n" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseAcousticTextureCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Acoustic Texture's mid-high Absorption value. The percentage by which sound within a mid-high frequency range is dampened." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData_Statics::NewProp_AbsorptionMidHigh = { "AbsorptionMidHigh", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseAcousticTextureCookedData, AbsorptionMidHigh), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData_Statics::NewProp_AbsorptionMidHigh_MetaData), Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData_Statics::NewProp_AbsorptionMidHigh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData_Statics::NewProp_AbsorptionHigh_MetaData[] = {
		{ "Category", "AkTexture" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The Acoustic Texture's high Absorption value. The percentage by which sound within a high frequency range is dampened.\n" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseAcousticTextureCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Acoustic Texture's high Absorption value. The percentage by which sound within a high frequency range is dampened." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData_Statics::NewProp_AbsorptionHigh = { "AbsorptionHigh", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseAcousticTextureCookedData, AbsorptionHigh), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData_Statics::NewProp_AbsorptionHigh_MetaData), Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData_Statics::NewProp_AbsorptionHigh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData_Statics::NewProp_ShortId_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseAcousticTextureCookedData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData_Statics::NewProp_ShortId = { "ShortId", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseAcousticTextureCookedData, ShortId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData_Statics::NewProp_ShortId_MetaData), Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData_Statics::NewProp_ShortId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData_Statics::NewProp_DebugName_MetaData[] = {
		{ "Category", "Wwise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Optional debug name. Can be empty in release, contain the name, or the full path of the asset.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseAcousticTextureCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Optional debug name. Can be empty in release, contain the name, or the full path of the asset." },
#endif
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData_Statics::NewProp_DebugName = { "DebugName", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseAcousticTextureCookedData, DebugName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData_Statics::NewProp_DebugName_MetaData), Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData_Statics::NewProp_DebugName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData_Statics::NewProp_AbsorptionLow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData_Statics::NewProp_AbsorptionMidLow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData_Statics::NewProp_AbsorptionMidHigh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData_Statics::NewProp_AbsorptionHigh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData_Statics::NewProp_ShortId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData_Statics::NewProp_DebugName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WwiseResourceLoader,
		nullptr,
		&NewStructOps,
		"WwiseAcousticTextureCookedData",
		Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData_Statics::PropPointers),
		sizeof(FWwiseAcousticTextureCookedData),
		alignof(FWwiseAcousticTextureCookedData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData()
	{
		if (!Z_Registration_Info_UScriptStruct_WwiseAcousticTextureCookedData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WwiseAcousticTextureCookedData.InnerSingleton, Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WwiseAcousticTextureCookedData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_MainProject_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseAcousticTextureCookedData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MainProject_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseAcousticTextureCookedData_h_Statics::ScriptStructInfo[] = {
		{ FWwiseAcousticTextureCookedData::StaticStruct, Z_Construct_UScriptStruct_FWwiseAcousticTextureCookedData_Statics::NewStructOps, TEXT("WwiseAcousticTextureCookedData"), &Z_Registration_Info_UScriptStruct_WwiseAcousticTextureCookedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseAcousticTextureCookedData), 401293769U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MainProject_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseAcousticTextureCookedData_h_2988016881(TEXT("/Script/WwiseResourceLoader"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_MainProject_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseAcousticTextureCookedData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MainProject_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseAcousticTextureCookedData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
