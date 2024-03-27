// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwiseResourceLoader/Public/Wwise/CookedData/WwiseGroupValueCookedData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwiseGroupValueCookedData() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WwiseResourceLoader();
	WWISERESOURCELOADER_API UEnum* Z_Construct_UEnum_WwiseResourceLoader_EWwiseGroupType();
	WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseGroupValueCookedData();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWwiseGroupType;
	static UEnum* EWwiseGroupType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWwiseGroupType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWwiseGroupType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WwiseResourceLoader_EWwiseGroupType, (UObject*)Z_Construct_UPackage__Script_WwiseResourceLoader(), TEXT("EWwiseGroupType"));
		}
		return Z_Registration_Info_UEnum_EWwiseGroupType.OuterSingleton;
	}
	template<> WWISERESOURCELOADER_API UEnum* StaticEnum<EWwiseGroupType>()
	{
		return EWwiseGroupType_StaticEnum();
	}
	struct Z_Construct_UEnum_WwiseResourceLoader_EWwiseGroupType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_WwiseResourceLoader_EWwiseGroupType_Statics::Enumerators[] = {
		{ "EWwiseGroupType::Switch", (int64)EWwiseGroupType::Switch },
		{ "EWwiseGroupType::State", (int64)EWwiseGroupType::State },
		{ "EWwiseGroupType::Unknown", (int64)EWwiseGroupType::Unknown },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_WwiseResourceLoader_EWwiseGroupType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseGroupValueCookedData.h" },
		{ "State.Name", "EWwiseGroupType::State" },
		{ "Switch.Name", "EWwiseGroupType::Switch" },
		{ "Unknown.Name", "EWwiseGroupType::Unknown" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WwiseResourceLoader_EWwiseGroupType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_WwiseResourceLoader,
		nullptr,
		"EWwiseGroupType",
		"EWwiseGroupType",
		Z_Construct_UEnum_WwiseResourceLoader_EWwiseGroupType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_WwiseResourceLoader_EWwiseGroupType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_WwiseResourceLoader_EWwiseGroupType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_WwiseResourceLoader_EWwiseGroupType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_WwiseResourceLoader_EWwiseGroupType()
	{
		if (!Z_Registration_Info_UEnum_EWwiseGroupType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWwiseGroupType.InnerSingleton, Z_Construct_UEnum_WwiseResourceLoader_EWwiseGroupType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWwiseGroupType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WwiseGroupValueCookedData;
class UScriptStruct* FWwiseGroupValueCookedData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WwiseGroupValueCookedData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WwiseGroupValueCookedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseGroupValueCookedData, (UObject*)Z_Construct_UPackage__Script_WwiseResourceLoader(), TEXT("WwiseGroupValueCookedData"));
	}
	return Z_Registration_Info_UScriptStruct_WwiseGroupValueCookedData.OuterSingleton;
}
template<> WWISERESOURCELOADER_API UScriptStruct* StaticStruct<FWwiseGroupValueCookedData>()
{
	return FWwiseGroupValueCookedData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWwiseGroupValueCookedData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GroupId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DebugName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseGroupValueCookedData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseGroupValueCookedData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWwiseGroupValueCookedData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseGroupValueCookedData>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWwiseGroupValueCookedData_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseGroupValueCookedData_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseGroupValueCookedData.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FWwiseGroupValueCookedData_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseGroupValueCookedData, Type), Z_Construct_UEnum_WwiseResourceLoader_EWwiseGroupType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseGroupValueCookedData_Statics::NewProp_Type_MetaData), Z_Construct_UScriptStruct_FWwiseGroupValueCookedData_Statics::NewProp_Type_MetaData) }; // 3128057443
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseGroupValueCookedData_Statics::NewProp_GroupId_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseGroupValueCookedData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWwiseGroupValueCookedData_Statics::NewProp_GroupId = { "GroupId", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseGroupValueCookedData, GroupId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseGroupValueCookedData_Statics::NewProp_GroupId_MetaData), Z_Construct_UScriptStruct_FWwiseGroupValueCookedData_Statics::NewProp_GroupId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseGroupValueCookedData_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseGroupValueCookedData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWwiseGroupValueCookedData_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseGroupValueCookedData, Id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseGroupValueCookedData_Statics::NewProp_Id_MetaData), Z_Construct_UScriptStruct_FWwiseGroupValueCookedData_Statics::NewProp_Id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseGroupValueCookedData_Statics::NewProp_DebugName_MetaData[] = {
		{ "Category", "Wwise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Optional debug name. Can be empty in release, contain the name, or the full path of the asset.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseGroupValueCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Optional debug name. Can be empty in release, contain the name, or the full path of the asset." },
#endif
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWwiseGroupValueCookedData_Statics::NewProp_DebugName = { "DebugName", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseGroupValueCookedData, DebugName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseGroupValueCookedData_Statics::NewProp_DebugName_MetaData), Z_Construct_UScriptStruct_FWwiseGroupValueCookedData_Statics::NewProp_DebugName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWwiseGroupValueCookedData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseGroupValueCookedData_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseGroupValueCookedData_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseGroupValueCookedData_Statics::NewProp_GroupId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseGroupValueCookedData_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseGroupValueCookedData_Statics::NewProp_DebugName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWwiseGroupValueCookedData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WwiseResourceLoader,
		nullptr,
		&NewStructOps,
		"WwiseGroupValueCookedData",
		Z_Construct_UScriptStruct_FWwiseGroupValueCookedData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseGroupValueCookedData_Statics::PropPointers),
		sizeof(FWwiseGroupValueCookedData),
		alignof(FWwiseGroupValueCookedData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseGroupValueCookedData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWwiseGroupValueCookedData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseGroupValueCookedData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FWwiseGroupValueCookedData()
	{
		if (!Z_Registration_Info_UScriptStruct_WwiseGroupValueCookedData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WwiseGroupValueCookedData.InnerSingleton, Z_Construct_UScriptStruct_FWwiseGroupValueCookedData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WwiseGroupValueCookedData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_danii_RiderProjects_MainProject_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseGroupValueCookedData_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_danii_RiderProjects_MainProject_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseGroupValueCookedData_h_Statics::EnumInfo[] = {
		{ EWwiseGroupType_StaticEnum, TEXT("EWwiseGroupType"), &Z_Registration_Info_UEnum_EWwiseGroupType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3128057443U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_danii_RiderProjects_MainProject_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseGroupValueCookedData_h_Statics::ScriptStructInfo[] = {
		{ FWwiseGroupValueCookedData::StaticStruct, Z_Construct_UScriptStruct_FWwiseGroupValueCookedData_Statics::NewStructOps, TEXT("WwiseGroupValueCookedData"), &Z_Registration_Info_UScriptStruct_WwiseGroupValueCookedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseGroupValueCookedData), 2060780995U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_danii_RiderProjects_MainProject_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseGroupValueCookedData_h_3969456131(TEXT("/Script/WwiseResourceLoader"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_danii_RiderProjects_MainProject_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseGroupValueCookedData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_danii_RiderProjects_MainProject_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseGroupValueCookedData_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Users_danii_RiderProjects_MainProject_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseGroupValueCookedData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_danii_RiderProjects_MainProject_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseGroupValueCookedData_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
