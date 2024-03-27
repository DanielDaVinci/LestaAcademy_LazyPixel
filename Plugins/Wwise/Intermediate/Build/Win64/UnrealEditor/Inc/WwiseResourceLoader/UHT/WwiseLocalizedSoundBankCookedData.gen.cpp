// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwiseResourceLoader/Public/Wwise/CookedData/WwiseLocalizedSoundBankCookedData.h"
#include "WwiseFileHandler/Public/Wwise/CookedData/WwiseLanguageCookedData.h"
#include "WwiseFileHandler/Public/Wwise/CookedData/WwiseSoundBankCookedData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwiseLocalizedSoundBankCookedData() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WwiseResourceLoader();
	WWISEFILEHANDLER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseLanguageCookedData();
	WWISEFILEHANDLER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseSoundBankCookedData();
	WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseLocalizedSoundBankCookedData();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WwiseLocalizedSoundBankCookedData;
class UScriptStruct* FWwiseLocalizedSoundBankCookedData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WwiseLocalizedSoundBankCookedData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WwiseLocalizedSoundBankCookedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseLocalizedSoundBankCookedData, (UObject*)Z_Construct_UPackage__Script_WwiseResourceLoader(), TEXT("WwiseLocalizedSoundBankCookedData"));
	}
	return Z_Registration_Info_UScriptStruct_WwiseLocalizedSoundBankCookedData.OuterSingleton;
}
template<> WWISERESOURCELOADER_API UScriptStruct* StaticStruct<FWwiseLocalizedSoundBankCookedData>()
{
	return FWwiseLocalizedSoundBankCookedData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWwiseLocalizedSoundBankCookedData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_SoundBankLanguageMap_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SoundBankLanguageMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundBankLanguageMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_SoundBankLanguageMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DebugName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundBankId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SoundBankId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseLocalizedSoundBankCookedData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseLocalizedSoundBankCookedData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWwiseLocalizedSoundBankCookedData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseLocalizedSoundBankCookedData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWwiseLocalizedSoundBankCookedData_Statics::NewProp_SoundBankLanguageMap_ValueProp = { "SoundBankLanguageMap", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FWwiseSoundBankCookedData, METADATA_PARAMS(0, nullptr) }; // 3561908703
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWwiseLocalizedSoundBankCookedData_Statics::NewProp_SoundBankLanguageMap_Key_KeyProp = { "SoundBankLanguageMap_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWwiseLanguageCookedData, METADATA_PARAMS(0, nullptr) }; // 1447532684
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseLocalizedSoundBankCookedData_Statics::NewProp_SoundBankLanguageMap_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseLocalizedSoundBankCookedData.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FWwiseLocalizedSoundBankCookedData_Statics::NewProp_SoundBankLanguageMap = { "SoundBankLanguageMap", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseLocalizedSoundBankCookedData, SoundBankLanguageMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseLocalizedSoundBankCookedData_Statics::NewProp_SoundBankLanguageMap_MetaData), Z_Construct_UScriptStruct_FWwiseLocalizedSoundBankCookedData_Statics::NewProp_SoundBankLanguageMap_MetaData) }; // 1447532684 3561908703
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseLocalizedSoundBankCookedData_Statics::NewProp_DebugName_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseLocalizedSoundBankCookedData.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWwiseLocalizedSoundBankCookedData_Statics::NewProp_DebugName = { "DebugName", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseLocalizedSoundBankCookedData, DebugName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseLocalizedSoundBankCookedData_Statics::NewProp_DebugName_MetaData), Z_Construct_UScriptStruct_FWwiseLocalizedSoundBankCookedData_Statics::NewProp_DebugName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseLocalizedSoundBankCookedData_Statics::NewProp_SoundBankId_MetaData[] = {
		{ "Category", "Wwise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* @brief Short ID for the SoundBank.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseLocalizedSoundBankCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Short ID for the SoundBank." },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWwiseLocalizedSoundBankCookedData_Statics::NewProp_SoundBankId = { "SoundBankId", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseLocalizedSoundBankCookedData, SoundBankId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseLocalizedSoundBankCookedData_Statics::NewProp_SoundBankId_MetaData), Z_Construct_UScriptStruct_FWwiseLocalizedSoundBankCookedData_Statics::NewProp_SoundBankId_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWwiseLocalizedSoundBankCookedData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseLocalizedSoundBankCookedData_Statics::NewProp_SoundBankLanguageMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseLocalizedSoundBankCookedData_Statics::NewProp_SoundBankLanguageMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseLocalizedSoundBankCookedData_Statics::NewProp_SoundBankLanguageMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseLocalizedSoundBankCookedData_Statics::NewProp_DebugName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseLocalizedSoundBankCookedData_Statics::NewProp_SoundBankId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWwiseLocalizedSoundBankCookedData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WwiseResourceLoader,
		nullptr,
		&NewStructOps,
		"WwiseLocalizedSoundBankCookedData",
		Z_Construct_UScriptStruct_FWwiseLocalizedSoundBankCookedData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseLocalizedSoundBankCookedData_Statics::PropPointers),
		sizeof(FWwiseLocalizedSoundBankCookedData),
		alignof(FWwiseLocalizedSoundBankCookedData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseLocalizedSoundBankCookedData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWwiseLocalizedSoundBankCookedData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseLocalizedSoundBankCookedData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FWwiseLocalizedSoundBankCookedData()
	{
		if (!Z_Registration_Info_UScriptStruct_WwiseLocalizedSoundBankCookedData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WwiseLocalizedSoundBankCookedData.InnerSingleton, Z_Construct_UScriptStruct_FWwiseLocalizedSoundBankCookedData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WwiseLocalizedSoundBankCookedData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_danii_RiderProjects_MainProject_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseLocalizedSoundBankCookedData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_danii_RiderProjects_MainProject_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseLocalizedSoundBankCookedData_h_Statics::ScriptStructInfo[] = {
		{ FWwiseLocalizedSoundBankCookedData::StaticStruct, Z_Construct_UScriptStruct_FWwiseLocalizedSoundBankCookedData_Statics::NewStructOps, TEXT("WwiseLocalizedSoundBankCookedData"), &Z_Registration_Info_UScriptStruct_WwiseLocalizedSoundBankCookedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseLocalizedSoundBankCookedData), 2306345038U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_danii_RiderProjects_MainProject_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseLocalizedSoundBankCookedData_h_3682783935(TEXT("/Script/WwiseResourceLoader"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_danii_RiderProjects_MainProject_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseLocalizedSoundBankCookedData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_danii_RiderProjects_MainProject_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseLocalizedSoundBankCookedData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
