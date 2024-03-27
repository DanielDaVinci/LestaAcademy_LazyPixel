// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwiseResourceLoader/Public/Wwise/CookedData/WwiseGameParameterCookedData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwiseGameParameterCookedData() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WwiseResourceLoader();
	WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseGameParameterCookedData();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WwiseGameParameterCookedData;
class UScriptStruct* FWwiseGameParameterCookedData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WwiseGameParameterCookedData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WwiseGameParameterCookedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseGameParameterCookedData, (UObject*)Z_Construct_UPackage__Script_WwiseResourceLoader(), TEXT("WwiseGameParameterCookedData"));
	}
	return Z_Registration_Info_UScriptStruct_WwiseGameParameterCookedData.OuterSingleton;
}
template<> WWISERESOURCELOADER_API UScriptStruct* StaticStruct<FWwiseGameParameterCookedData>()
{
	return FWwiseGameParameterCookedData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWwiseGameParameterCookedData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseGameParameterCookedData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseGameParameterCookedData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWwiseGameParameterCookedData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseGameParameterCookedData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseGameParameterCookedData_Statics::NewProp_ShortId_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseGameParameterCookedData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWwiseGameParameterCookedData_Statics::NewProp_ShortId = { "ShortId", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseGameParameterCookedData, ShortId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseGameParameterCookedData_Statics::NewProp_ShortId_MetaData), Z_Construct_UScriptStruct_FWwiseGameParameterCookedData_Statics::NewProp_ShortId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseGameParameterCookedData_Statics::NewProp_DebugName_MetaData[] = {
		{ "Category", "Wwise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Optional debug name. Can be empty in release, contain the name, or the full path of the asset.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseGameParameterCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Optional debug name. Can be empty in release, contain the name, or the full path of the asset." },
#endif
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWwiseGameParameterCookedData_Statics::NewProp_DebugName = { "DebugName", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseGameParameterCookedData, DebugName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseGameParameterCookedData_Statics::NewProp_DebugName_MetaData), Z_Construct_UScriptStruct_FWwiseGameParameterCookedData_Statics::NewProp_DebugName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWwiseGameParameterCookedData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseGameParameterCookedData_Statics::NewProp_ShortId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseGameParameterCookedData_Statics::NewProp_DebugName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWwiseGameParameterCookedData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WwiseResourceLoader,
		nullptr,
		&NewStructOps,
		"WwiseGameParameterCookedData",
		Z_Construct_UScriptStruct_FWwiseGameParameterCookedData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseGameParameterCookedData_Statics::PropPointers),
		sizeof(FWwiseGameParameterCookedData),
		alignof(FWwiseGameParameterCookedData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseGameParameterCookedData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWwiseGameParameterCookedData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseGameParameterCookedData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FWwiseGameParameterCookedData()
	{
		if (!Z_Registration_Info_UScriptStruct_WwiseGameParameterCookedData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WwiseGameParameterCookedData.InnerSingleton, Z_Construct_UScriptStruct_FWwiseGameParameterCookedData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WwiseGameParameterCookedData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_danii_RiderProjects_MainProject_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseGameParameterCookedData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_danii_RiderProjects_MainProject_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseGameParameterCookedData_h_Statics::ScriptStructInfo[] = {
		{ FWwiseGameParameterCookedData::StaticStruct, Z_Construct_UScriptStruct_FWwiseGameParameterCookedData_Statics::NewStructOps, TEXT("WwiseGameParameterCookedData"), &Z_Registration_Info_UScriptStruct_WwiseGameParameterCookedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseGameParameterCookedData), 2976438607U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_danii_RiderProjects_MainProject_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseGameParameterCookedData_h_3585803995(TEXT("/Script/WwiseResourceLoader"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_danii_RiderProjects_MainProject_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseGameParameterCookedData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_danii_RiderProjects_MainProject_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseGameParameterCookedData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
