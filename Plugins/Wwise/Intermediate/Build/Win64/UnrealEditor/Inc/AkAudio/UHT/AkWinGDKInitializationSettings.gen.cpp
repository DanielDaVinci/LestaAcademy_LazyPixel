// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/Platforms/AkPlatform_WinGC/AkWinGDKInitializationSettings.h"
#include "AkAudio/Classes/InitializationSettings/AkInitializationSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkWinGDKInitializationSettings() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkPlatformInitialisationSettingsBase_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkWinAnvilInitializationSettings();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkWinAnvilInitializationSettings_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkWinGDKInitializationSettings();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkWinGDKInitializationSettings_NoRegister();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkWinGDKAdvancedInitializationSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References

static_assert(std::is_polymorphic<FAkWinGDKAdvancedInitializationSettings>() == std::is_polymorphic<FAkAdvancedInitializationSettingsWithMultiCoreRendering>(), "USTRUCT FAkWinGDKAdvancedInitializationSettings cannot be polymorphic unless super FAkAdvancedInitializationSettingsWithMultiCoreRendering is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkWinGDKAdvancedInitializationSettings;
class UScriptStruct* FAkWinGDKAdvancedInitializationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkWinGDKAdvancedInitializationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkWinGDKAdvancedInitializationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkWinGDKAdvancedInitializationSettings, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkWinGDKAdvancedInitializationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AkWinGDKAdvancedInitializationSettings.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkWinGDKAdvancedInitializationSettings>()
{
	return FAkWinGDKAdvancedInitializationSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkWinGDKAdvancedInitializationSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseHeadMountedDisplayAudioDevice_MetaData[];
#endif
		static void NewProp_UseHeadMountedDisplayAudioDevice_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseHeadMountedDisplayAudioDevice;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_uMaxSystemAudioObjects_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_uMaxSystemAudioObjects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkWinGDKAdvancedInitializationSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_WinGC/AkWinGDKInitializationSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkWinGDKAdvancedInitializationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkWinGDKAdvancedInitializationSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkWinGDKAdvancedInitializationSettings_Statics::NewProp_UseHeadMountedDisplayAudioDevice_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_WinGC/AkWinGDKInitializationSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAkWinGDKAdvancedInitializationSettings_Statics::NewProp_UseHeadMountedDisplayAudioDevice_SetBit(void* Obj)
	{
		((FAkWinGDKAdvancedInitializationSettings*)Obj)->UseHeadMountedDisplayAudioDevice = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkWinGDKAdvancedInitializationSettings_Statics::NewProp_UseHeadMountedDisplayAudioDevice = { "UseHeadMountedDisplayAudioDevice", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAkWinGDKAdvancedInitializationSettings), &Z_Construct_UScriptStruct_FAkWinGDKAdvancedInitializationSettings_Statics::NewProp_UseHeadMountedDisplayAudioDevice_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkWinGDKAdvancedInitializationSettings_Statics::NewProp_UseHeadMountedDisplayAudioDevice_MetaData), Z_Construct_UScriptStruct_FAkWinGDKAdvancedInitializationSettings_Statics::NewProp_UseHeadMountedDisplayAudioDevice_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkWinGDKAdvancedInitializationSettings_Statics::NewProp_uMaxSystemAudioObjects_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_WinGC/AkWinGDKInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum number of System Audio Objects to reserve. Other processes will not be able to use them. Default is 128." },
#endif
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkWinGDKAdvancedInitializationSettings_Statics::NewProp_uMaxSystemAudioObjects = { "uMaxSystemAudioObjects", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkWinGDKAdvancedInitializationSettings, uMaxSystemAudioObjects), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkWinGDKAdvancedInitializationSettings_Statics::NewProp_uMaxSystemAudioObjects_MetaData), Z_Construct_UScriptStruct_FAkWinGDKAdvancedInitializationSettings_Statics::NewProp_uMaxSystemAudioObjects_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkWinGDKAdvancedInitializationSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkWinGDKAdvancedInitializationSettings_Statics::NewProp_UseHeadMountedDisplayAudioDevice,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkWinGDKAdvancedInitializationSettings_Statics::NewProp_uMaxSystemAudioObjects,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkWinGDKAdvancedInitializationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering,
		&NewStructOps,
		"AkWinGDKAdvancedInitializationSettings",
		Z_Construct_UScriptStruct_FAkWinGDKAdvancedInitializationSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkWinGDKAdvancedInitializationSettings_Statics::PropPointers),
		sizeof(FAkWinGDKAdvancedInitializationSettings),
		alignof(FAkWinGDKAdvancedInitializationSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkWinGDKAdvancedInitializationSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAkWinGDKAdvancedInitializationSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkWinGDKAdvancedInitializationSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAkWinGDKAdvancedInitializationSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AkWinGDKAdvancedInitializationSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkWinGDKAdvancedInitializationSettings.InnerSingleton, Z_Construct_UScriptStruct_FAkWinGDKAdvancedInitializationSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkWinGDKAdvancedInitializationSettings.InnerSingleton;
	}
	DEFINE_FUNCTION(UAkWinGDKInitializationSettings::execMigrateMultiCoreRendering)
	{
		P_GET_UBOOL(Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MigrateMultiCoreRendering(Z_Param_NewValue);
		P_NATIVE_END;
	}
	void UAkWinGDKInitializationSettings::StaticRegisterNativesUAkWinGDKInitializationSettings()
	{
		UClass* Class = UAkWinGDKInitializationSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MigrateMultiCoreRendering", &UAkWinGDKInitializationSettings::execMigrateMultiCoreRendering },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAkWinGDKInitializationSettings_MigrateMultiCoreRendering_Statics
	{
		struct AkWinGDKInitializationSettings_eventMigrateMultiCoreRendering_Parms
		{
			bool NewValue;
		};
		static void NewProp_NewValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAkWinGDKInitializationSettings_MigrateMultiCoreRendering_Statics::NewProp_NewValue_SetBit(void* Obj)
	{
		((AkWinGDKInitializationSettings_eventMigrateMultiCoreRendering_Parms*)Obj)->NewValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkWinGDKInitializationSettings_MigrateMultiCoreRendering_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AkWinGDKInitializationSettings_eventMigrateMultiCoreRendering_Parms), &Z_Construct_UFunction_UAkWinGDKInitializationSettings_MigrateMultiCoreRendering_Statics::NewProp_NewValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkWinGDKInitializationSettings_MigrateMultiCoreRendering_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWinGDKInitializationSettings_MigrateMultiCoreRendering_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWinGDKInitializationSettings_MigrateMultiCoreRendering_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_WinGC/AkWinGDKInitializationSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkWinGDKInitializationSettings_MigrateMultiCoreRendering_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkWinGDKInitializationSettings, nullptr, "MigrateMultiCoreRendering", nullptr, nullptr, Z_Construct_UFunction_UAkWinGDKInitializationSettings_MigrateMultiCoreRendering_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWinGDKInitializationSettings_MigrateMultiCoreRendering_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkWinGDKInitializationSettings_MigrateMultiCoreRendering_Statics::AkWinGDKInitializationSettings_eventMigrateMultiCoreRendering_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWinGDKInitializationSettings_MigrateMultiCoreRendering_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkWinGDKInitializationSettings_MigrateMultiCoreRendering_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWinGDKInitializationSettings_MigrateMultiCoreRendering_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkWinGDKInitializationSettings_MigrateMultiCoreRendering_Statics::AkWinGDKInitializationSettings_eventMigrateMultiCoreRendering_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkWinGDKInitializationSettings_MigrateMultiCoreRendering()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkWinGDKInitializationSettings_MigrateMultiCoreRendering_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkWinGDKInitializationSettings);
	UClass* Z_Construct_UClass_UAkWinGDKInitializationSettings_NoRegister()
	{
		return UAkWinGDKInitializationSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAkWinGDKInitializationSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommonSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CommonSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommunicationSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CommunicationSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdvancedSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AdvancedSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkWinGDKInitializationSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkWinGDKInitializationSettings_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAkWinGDKInitializationSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkWinGDKInitializationSettings_MigrateMultiCoreRendering, "MigrateMultiCoreRendering" }, // 581591830
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkWinGDKInitializationSettings_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkWinGDKInitializationSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Platforms/AkPlatform_WinGC/AkWinGDKInitializationSettings.h" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_WinGC/AkWinGDKInitializationSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkWinGDKInitializationSettings_Statics::NewProp_CommonSettings_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_WinGC/AkWinGDKInitializationSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkWinGDKInitializationSettings_Statics::NewProp_CommonSettings = { "CommonSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkWinGDKInitializationSettings, CommonSettings), Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkWinGDKInitializationSettings_Statics::NewProp_CommonSettings_MetaData), Z_Construct_UClass_UAkWinGDKInitializationSettings_Statics::NewProp_CommonSettings_MetaData) }; // 1718117610
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkWinGDKInitializationSettings_Statics::NewProp_CommunicationSettings_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_WinGC/AkWinGDKInitializationSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkWinGDKInitializationSettings_Statics::NewProp_CommunicationSettings = { "CommunicationSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkWinGDKInitializationSettings, CommunicationSettings), Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkWinGDKInitializationSettings_Statics::NewProp_CommunicationSettings_MetaData), Z_Construct_UClass_UAkWinGDKInitializationSettings_Statics::NewProp_CommunicationSettings_MetaData) }; // 1178487601
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkWinGDKInitializationSettings_Statics::NewProp_AdvancedSettings_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_WinGC/AkWinGDKInitializationSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkWinGDKInitializationSettings_Statics::NewProp_AdvancedSettings = { "AdvancedSettings", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkWinGDKInitializationSettings, AdvancedSettings), Z_Construct_UScriptStruct_FAkWinGDKAdvancedInitializationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkWinGDKInitializationSettings_Statics::NewProp_AdvancedSettings_MetaData), Z_Construct_UClass_UAkWinGDKInitializationSettings_Statics::NewProp_AdvancedSettings_MetaData) }; // 1464245589
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkWinGDKInitializationSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkWinGDKInitializationSettings_Statics::NewProp_CommonSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkWinGDKInitializationSettings_Statics::NewProp_CommunicationSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkWinGDKInitializationSettings_Statics::NewProp_AdvancedSettings,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAkWinGDKInitializationSettings_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAkPlatformInitialisationSettingsBase_NoRegister, (int32)VTABLE_OFFSET(UAkWinGDKInitializationSettings, IAkPlatformInitialisationSettingsBase), false },  // 2070778024
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkWinGDKInitializationSettings_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkWinGDKInitializationSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkWinGDKInitializationSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkWinGDKInitializationSettings_Statics::ClassParams = {
		&UAkWinGDKInitializationSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAkWinGDKInitializationSettings_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkWinGDKInitializationSettings_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkWinGDKInitializationSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkWinGDKInitializationSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkWinGDKInitializationSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAkWinGDKInitializationSettings()
	{
		if (!Z_Registration_Info_UClass_UAkWinGDKInitializationSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkWinGDKInitializationSettings.OuterSingleton, Z_Construct_UClass_UAkWinGDKInitializationSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkWinGDKInitializationSettings.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkWinGDKInitializationSettings>()
	{
		return UAkWinGDKInitializationSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkWinGDKInitializationSettings);
	UAkWinGDKInitializationSettings::~UAkWinGDKInitializationSettings() {}
	void UAkWinAnvilInitializationSettings::StaticRegisterNativesUAkWinAnvilInitializationSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkWinAnvilInitializationSettings);
	UClass* Z_Construct_UClass_UAkWinAnvilInitializationSettings_NoRegister()
	{
		return UAkWinAnvilInitializationSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAkWinAnvilInitializationSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkWinAnvilInitializationSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkWinGDKInitializationSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkWinAnvilInitializationSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkWinAnvilInitializationSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Platforms/AkPlatform_WinGC/AkWinGDKInitializationSettings.h" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_WinGC/AkWinGDKInitializationSettings.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkWinAnvilInitializationSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkWinAnvilInitializationSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkWinAnvilInitializationSettings_Statics::ClassParams = {
		&UAkWinAnvilInitializationSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkWinAnvilInitializationSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkWinAnvilInitializationSettings_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAkWinAnvilInitializationSettings()
	{
		if (!Z_Registration_Info_UClass_UAkWinAnvilInitializationSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkWinAnvilInitializationSettings.OuterSingleton, Z_Construct_UClass_UAkWinAnvilInitializationSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkWinAnvilInitializationSettings.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkWinAnvilInitializationSettings>()
	{
		return UAkWinAnvilInitializationSettings::StaticClass();
	}
	UAkWinAnvilInitializationSettings::UAkWinAnvilInitializationSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkWinAnvilInitializationSettings);
	UAkWinAnvilInitializationSettings::~UAkWinAnvilInitializationSettings() {}
	struct Z_CompiledInDeferFile_FID_MainProject_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_WinGC_AkWinGDKInitializationSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MainProject_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_WinGC_AkWinGDKInitializationSettings_h_Statics::ScriptStructInfo[] = {
		{ FAkWinGDKAdvancedInitializationSettings::StaticStruct, Z_Construct_UScriptStruct_FAkWinGDKAdvancedInitializationSettings_Statics::NewStructOps, TEXT("AkWinGDKAdvancedInitializationSettings"), &Z_Registration_Info_UScriptStruct_AkWinGDKAdvancedInitializationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkWinGDKAdvancedInitializationSettings), 1464245589U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MainProject_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_WinGC_AkWinGDKInitializationSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAkWinGDKInitializationSettings, UAkWinGDKInitializationSettings::StaticClass, TEXT("UAkWinGDKInitializationSettings"), &Z_Registration_Info_UClass_UAkWinGDKInitializationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkWinGDKInitializationSettings), 2820829678U) },
		{ Z_Construct_UClass_UAkWinAnvilInitializationSettings, UAkWinAnvilInitializationSettings::StaticClass, TEXT("UAkWinAnvilInitializationSettings"), &Z_Registration_Info_UClass_UAkWinAnvilInitializationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkWinAnvilInitializationSettings), 2095034885U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MainProject_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_WinGC_AkWinGDKInitializationSettings_h_3495685780(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_MainProject_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_WinGC_AkWinGDKInitializationSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MainProject_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_WinGC_AkWinGDKInitializationSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_MainProject_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_WinGC_AkWinGDKInitializationSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MainProject_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_WinGC_AkWinGDKInitializationSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
