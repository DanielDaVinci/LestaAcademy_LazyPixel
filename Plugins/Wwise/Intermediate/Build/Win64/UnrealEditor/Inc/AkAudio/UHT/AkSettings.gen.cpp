// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkSettings() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAcousticTexture_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAuxBus_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkInitBank_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkRtpc_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkSettings();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkSettings_NoRegister();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkCollisionChannel();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkUnrealAudioRouting();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkAcousticTextureParams();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseDecayAuxBusRow();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseGeometrySurfacePropertiesRow();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAkCollisionChannel;
	static UEnum* EAkCollisionChannel_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAkCollisionChannel.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAkCollisionChannel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkCollisionChannel, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("EAkCollisionChannel"));
		}
		return Z_Registration_Info_UEnum_EAkCollisionChannel.OuterSingleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<EAkCollisionChannel>()
	{
		return EAkCollisionChannel_StaticEnum();
	}
	struct Z_Construct_UEnum_AkAudio_EAkCollisionChannel_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AkAudio_EAkCollisionChannel_Statics::Enumerators[] = {
		{ "EAKCC_WorldStatic", (int64)EAKCC_WorldStatic },
		{ "EAKCC_WorldDynamic", (int64)EAKCC_WorldDynamic },
		{ "EAKCC_Pawn", (int64)EAKCC_Pawn },
		{ "EAKCC_Visibility", (int64)EAKCC_Visibility },
		{ "EAKCC_Camera", (int64)EAKCC_Camera },
		{ "EAKCC_PhysicsBody", (int64)EAKCC_PhysicsBody },
		{ "EAKCC_Vehicle", (int64)EAKCC_Vehicle },
		{ "EAKCC_Destructible", (int64)EAKCC_Destructible },
		{ "EAKCC_UseIntegrationSettingsDefault", (int64)EAKCC_UseIntegrationSettingsDefault },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AkAudio_EAkCollisionChannel_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Custom Collision Channel enum with an option to take the value from the Wwise Integration Settings (this follows a similar approach to that of EActorUpdateOverlapsMethod in Actor.h). */" },
#endif
		{ "EAKCC_Camera.DisplayName", "Camera" },
		{ "EAKCC_Camera.Name", "EAKCC_Camera" },
		{ "EAKCC_Camera.TraceQuery", "1" },
		{ "EAKCC_Destructible.DisplayName", "Destructible" },
		{ "EAKCC_Destructible.Name", "EAKCC_Destructible" },
		{ "EAKCC_Pawn.DisplayName", "Pawn" },
		{ "EAKCC_Pawn.Name", "EAKCC_Pawn" },
		{ "EAKCC_PhysicsBody.DisplayName", "PhysicsBody" },
		{ "EAKCC_PhysicsBody.Name", "EAKCC_PhysicsBody" },
		{ "EAKCC_UseIntegrationSettingsDefault.DisplayName", "Use Integration Settings Default" },
		{ "EAKCC_UseIntegrationSettingsDefault.Name", "EAKCC_UseIntegrationSettingsDefault" },
		{ "EAKCC_Vehicle.DisplayName", "Vehicle" },
		{ "EAKCC_Vehicle.Name", "EAKCC_Vehicle" },
		{ "EAKCC_Visibility.DisplayName", "Visibility" },
		{ "EAKCC_Visibility.Name", "EAKCC_Visibility" },
		{ "EAKCC_Visibility.TraceQuery", "1" },
		{ "EAKCC_WorldDynamic.DisplayName", "WorldDynamic" },
		{ "EAKCC_WorldDynamic.Name", "EAKCC_WorldDynamic" },
		{ "EAKCC_WorldStatic.DisplayName", "WorldStatic" },
		{ "EAKCC_WorldStatic.Name", "EAKCC_WorldStatic" },
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Custom Collision Channel enum with an option to take the value from the Wwise Integration Settings (this follows a similar approach to that of EActorUpdateOverlapsMethod in Actor.h)." },
#endif
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AkAudio_EAkCollisionChannel_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		"EAkCollisionChannel",
		"EAkCollisionChannel",
		Z_Construct_UEnum_AkAudio_EAkCollisionChannel_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkCollisionChannel_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkCollisionChannel_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AkAudio_EAkCollisionChannel_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_AkAudio_EAkCollisionChannel()
	{
		if (!Z_Registration_Info_UEnum_EAkCollisionChannel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAkCollisionChannel.InnerSingleton, Z_Construct_UEnum_AkAudio_EAkCollisionChannel_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAkCollisionChannel.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAkUnrealAudioRouting;
	static UEnum* EAkUnrealAudioRouting_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAkUnrealAudioRouting.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAkUnrealAudioRouting.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkUnrealAudioRouting, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("EAkUnrealAudioRouting"));
		}
		return Z_Registration_Info_UEnum_EAkUnrealAudioRouting.OuterSingleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<EAkUnrealAudioRouting>()
	{
		return EAkUnrealAudioRouting_StaticEnum();
	}
	struct Z_Construct_UEnum_AkAudio_EAkUnrealAudioRouting_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AkAudio_EAkUnrealAudioRouting_Statics::Enumerators[] = {
		{ "EAkUnrealAudioRouting::Custom", (int64)EAkUnrealAudioRouting::Custom },
		{ "EAkUnrealAudioRouting::Separate", (int64)EAkUnrealAudioRouting::Separate },
		{ "EAkUnrealAudioRouting::AudioLink", (int64)EAkUnrealAudioRouting::AudioLink },
		{ "EAkUnrealAudioRouting::AudioMixer", (int64)EAkUnrealAudioRouting::AudioMixer },
		{ "EAkUnrealAudioRouting::EnableWwiseOnly", (int64)EAkUnrealAudioRouting::EnableWwiseOnly },
		{ "EAkUnrealAudioRouting::EnableUnrealOnly", (int64)EAkUnrealAudioRouting::EnableUnrealOnly },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AkAudio_EAkUnrealAudioRouting_Statics::Enum_MetaDataParams[] = {
		{ "AudioLink.DisplayName", "Route through AudioLink [UE5.1+]" },
		{ "AudioLink.Name", "EAkUnrealAudioRouting::AudioLink" },
		{ "AudioLink.ToolTip", "Use WwiseAudioLink to route all Unreal audio sources to Wwise SoundEngine Inputs (requires Unreal Engine 5.1 or higher)" },
		{ "AudioMixer.DisplayName", "Route through AkAudioMixer" },
		{ "AudioMixer.Name", "EAkUnrealAudioRouting::AudioMixer" },
		{ "AudioMixer.ToolTip", "Use AkAudioMixer to route Unreal submixes to a Wwise SoundEngine Input" },
		{ "Custom.DisplayName", "Default" },
		{ "Custom.Name", "EAkUnrealAudioRouting::Custom" },
		{ "Custom.ToolTip", "Custom Unreal audio settings set up by the developer" },
		{ "EnableUnrealOnly.DisplayName", "Enable Unreal Audio only" },
		{ "EnableUnrealOnly.Name", "EAkUnrealAudioRouting::EnableUnrealOnly" },
		{ "EnableUnrealOnly.ToolTip", "Only use Unreal audio, and disable Wwise SoundEngine" },
		{ "EnableWwiseOnly.DisplayName", "Enable Wwise SoundEngine only" },
		{ "EnableWwiseOnly.Name", "EAkUnrealAudioRouting::EnableWwiseOnly" },
		{ "EnableWwiseOnly.ToolTip", "Only use Wwise SoundEngine, and disable Unreal audio" },
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
		{ "Separate.DisplayName", "Both Wwise and Unreal audio" },
		{ "Separate.Name", "EAkUnrealAudioRouting::Separate" },
		{ "Separate.ToolTip", "Use default Unreal audio at the same time than Wwise SoundEngine (might be incompatible with some platforms)" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AkAudio_EAkUnrealAudioRouting_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		"EAkUnrealAudioRouting",
		"EAkUnrealAudioRouting",
		Z_Construct_UEnum_AkAudio_EAkUnrealAudioRouting_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkUnrealAudioRouting_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkUnrealAudioRouting_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AkAudio_EAkUnrealAudioRouting_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_AkAudio_EAkUnrealAudioRouting()
	{
		if (!Z_Registration_Info_UEnum_EAkUnrealAudioRouting.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAkUnrealAudioRouting.InnerSingleton, Z_Construct_UEnum_AkAudio_EAkUnrealAudioRouting_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAkUnrealAudioRouting.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkGeometrySurfacePropertiesToMap;
class UScriptStruct* FAkGeometrySurfacePropertiesToMap::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkGeometrySurfacePropertiesToMap.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkGeometrySurfacePropertiesToMap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkGeometrySurfacePropertiesToMap"));
	}
	return Z_Registration_Info_UScriptStruct_AkGeometrySurfacePropertiesToMap.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkGeometrySurfacePropertiesToMap>()
{
	return FAkGeometrySurfacePropertiesToMap::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AcousticTexture_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_AcousticTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OcclusionValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OcclusionValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkGeometrySurfacePropertiesToMap>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::NewProp_AcousticTexture_MetaData[] = {
		{ "Category", "AkGeometry Surface Properties Map" },
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::NewProp_AcousticTexture = { "AcousticTexture", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkGeometrySurfacePropertiesToMap, AcousticTexture), Z_Construct_UClass_UAkAcousticTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::NewProp_AcousticTexture_MetaData), Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::NewProp_AcousticTexture_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::NewProp_OcclusionValue_MetaData[] = {
		{ "Category", "AkGeometry Surface Properties Map" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Transmission Loss" },
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::NewProp_OcclusionValue = { "OcclusionValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkGeometrySurfacePropertiesToMap, OcclusionValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::NewProp_OcclusionValue_MetaData), Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::NewProp_OcclusionValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::NewProp_AcousticTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::NewProp_OcclusionValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkGeometrySurfacePropertiesToMap",
		Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::PropPointers),
		sizeof(FAkGeometrySurfacePropertiesToMap),
		alignof(FAkGeometrySurfacePropertiesToMap),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap()
	{
		if (!Z_Registration_Info_UScriptStruct_AkGeometrySurfacePropertiesToMap.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkGeometrySurfacePropertiesToMap.InnerSingleton, Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkGeometrySurfacePropertiesToMap.InnerSingleton;
	}

static_assert(std::is_polymorphic<FWwiseGeometrySurfacePropertiesRow>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FWwiseGeometrySurfacePropertiesRow cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WwiseGeometrySurfacePropertiesRow;
class UScriptStruct* FWwiseGeometrySurfacePropertiesRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WwiseGeometrySurfacePropertiesRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WwiseGeometrySurfacePropertiesRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseGeometrySurfacePropertiesRow, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("WwiseGeometrySurfacePropertiesRow"));
	}
	return Z_Registration_Info_UScriptStruct_WwiseGeometrySurfacePropertiesRow.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FWwiseGeometrySurfacePropertiesRow>()
{
	return FWwiseGeometrySurfacePropertiesRow::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWwiseGeometrySurfacePropertiesRow_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AcousticTexture_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_AcousticTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransmissionLoss_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TransmissionLoss;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseGeometrySurfacePropertiesRow_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWwiseGeometrySurfacePropertiesRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseGeometrySurfacePropertiesRow>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseGeometrySurfacePropertiesRow_Statics::NewProp_AcousticTexture_MetaData[] = {
		{ "Category", "Geometry Surface Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The Acoustic Texture associated with this row's Physical Material.\n// A sound reflected on a surface is filtered according to the acoustic texture's absorption values.\n// When estimating the Reverb of an environment, acoustic textures applied to the surfaces are used to estimate the environment's Decay and HF Damping.\n// The default value is set to None. A surface with no acoustic texture is considered completely reflective.\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Acoustic Texture associated with this row's Physical Material.\nA sound reflected on a surface is filtered according to the acoustic texture's absorption values.\nWhen estimating the Reverb of an environment, acoustic textures applied to the surfaces are used to estimate the environment's Decay and HF Damping.\nThe default value is set to None. A surface with no acoustic texture is considered completely reflective." },
#endif
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FWwiseGeometrySurfacePropertiesRow_Statics::NewProp_AcousticTexture = { "AcousticTexture", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseGeometrySurfacePropertiesRow, AcousticTexture), Z_Construct_UClass_UAkAcousticTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseGeometrySurfacePropertiesRow_Statics::NewProp_AcousticTexture_MetaData), Z_Construct_UScriptStruct_FWwiseGeometrySurfacePropertiesRow_Statics::NewProp_AcousticTexture_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseGeometrySurfacePropertiesRow_Statics::NewProp_TransmissionLoss_MetaData[] = {
		{ "Category", "Geometry Surface Properties" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The Transmission Loss value associated with this row's Physical Material.\n// A sound going through a surface is filtered according to the amount of transmission loss.\n// A surface with a transmission loss value of 0 is considered transparent and lets sound pass through without any filtering. Sound cannot reflect on such surfaces.\n// The default value is set to 1, which is also the maximum possible value.\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Transmission Loss value associated with this row's Physical Material.\nA sound going through a surface is filtered according to the amount of transmission loss.\nA surface with a transmission loss value of 0 is considered transparent and lets sound pass through without any filtering. Sound cannot reflect on such surfaces.\nThe default value is set to 1, which is also the maximum possible value." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWwiseGeometrySurfacePropertiesRow_Statics::NewProp_TransmissionLoss = { "TransmissionLoss", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseGeometrySurfacePropertiesRow, TransmissionLoss), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseGeometrySurfacePropertiesRow_Statics::NewProp_TransmissionLoss_MetaData), Z_Construct_UScriptStruct_FWwiseGeometrySurfacePropertiesRow_Statics::NewProp_TransmissionLoss_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWwiseGeometrySurfacePropertiesRow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseGeometrySurfacePropertiesRow_Statics::NewProp_AcousticTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseGeometrySurfacePropertiesRow_Statics::NewProp_TransmissionLoss,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWwiseGeometrySurfacePropertiesRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"WwiseGeometrySurfacePropertiesRow",
		Z_Construct_UScriptStruct_FWwiseGeometrySurfacePropertiesRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseGeometrySurfacePropertiesRow_Statics::PropPointers),
		sizeof(FWwiseGeometrySurfacePropertiesRow),
		alignof(FWwiseGeometrySurfacePropertiesRow),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseGeometrySurfacePropertiesRow_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWwiseGeometrySurfacePropertiesRow_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseGeometrySurfacePropertiesRow_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FWwiseGeometrySurfacePropertiesRow()
	{
		if (!Z_Registration_Info_UScriptStruct_WwiseGeometrySurfacePropertiesRow.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WwiseGeometrySurfacePropertiesRow.InnerSingleton, Z_Construct_UScriptStruct_FWwiseGeometrySurfacePropertiesRow_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WwiseGeometrySurfacePropertiesRow.InnerSingleton;
	}

static_assert(std::is_polymorphic<FWwiseDecayAuxBusRow>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FWwiseDecayAuxBusRow cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WwiseDecayAuxBusRow;
class UScriptStruct* FWwiseDecayAuxBusRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WwiseDecayAuxBusRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WwiseDecayAuxBusRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseDecayAuxBusRow, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("WwiseDecayAuxBusRow"));
	}
	return Z_Registration_Info_UScriptStruct_WwiseDecayAuxBusRow.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FWwiseDecayAuxBusRow>()
{
	return FWwiseDecayAuxBusRow::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWwiseDecayAuxBusRow_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Decay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Decay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AuxBus_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_AuxBus;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseDecayAuxBusRow_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWwiseDecayAuxBusRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseDecayAuxBusRow>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseDecayAuxBusRow_Statics::NewProp_Decay_MetaData[] = {
		{ "Category", "Reverb Assignment" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The number of seconds it takes for the sound reverberation in an environment to decay by 60 dB.\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The number of seconds it takes for the sound reverberation in an environment to decay by 60 dB." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWwiseDecayAuxBusRow_Statics::NewProp_Decay = { "Decay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseDecayAuxBusRow, Decay), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseDecayAuxBusRow_Statics::NewProp_Decay_MetaData), Z_Construct_UScriptStruct_FWwiseDecayAuxBusRow_Statics::NewProp_Decay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseDecayAuxBusRow_Statics::NewProp_AuxBus_MetaData[] = {
		{ "Category", "Reverb Assignment" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The Auxiliary Bus with a reverb effect to use for a chosen Decay value.\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Auxiliary Bus with a reverb effect to use for a chosen Decay value." },
#endif
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FWwiseDecayAuxBusRow_Statics::NewProp_AuxBus = { "AuxBus", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseDecayAuxBusRow, AuxBus), Z_Construct_UClass_UAkAuxBus_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseDecayAuxBusRow_Statics::NewProp_AuxBus_MetaData), Z_Construct_UScriptStruct_FWwiseDecayAuxBusRow_Statics::NewProp_AuxBus_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWwiseDecayAuxBusRow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseDecayAuxBusRow_Statics::NewProp_Decay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseDecayAuxBusRow_Statics::NewProp_AuxBus,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWwiseDecayAuxBusRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"WwiseDecayAuxBusRow",
		Z_Construct_UScriptStruct_FWwiseDecayAuxBusRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseDecayAuxBusRow_Statics::PropPointers),
		sizeof(FWwiseDecayAuxBusRow),
		alignof(FWwiseDecayAuxBusRow),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseDecayAuxBusRow_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWwiseDecayAuxBusRow_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseDecayAuxBusRow_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FWwiseDecayAuxBusRow()
	{
		if (!Z_Registration_Info_UScriptStruct_WwiseDecayAuxBusRow.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WwiseDecayAuxBusRow.InnerSingleton, Z_Construct_UScriptStruct_FWwiseDecayAuxBusRow_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WwiseDecayAuxBusRow.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkAcousticTextureParams;
class UScriptStruct* FAkAcousticTextureParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkAcousticTextureParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkAcousticTextureParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkAcousticTextureParams, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkAcousticTextureParams"));
	}
	return Z_Registration_Info_UScriptStruct_AkAcousticTextureParams.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkAcousticTextureParams>()
{
	return FAkAcousticTextureParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkAcousticTextureParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbsorptionValues_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbsorptionValues;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAcousticTextureParams_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkAcousticTextureParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkAcousticTextureParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAcousticTextureParams_Statics::NewProp_AbsorptionValues_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAkAcousticTextureParams_Statics::NewProp_AbsorptionValues = { "AbsorptionValues", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkAcousticTextureParams, AbsorptionValues), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAcousticTextureParams_Statics::NewProp_AbsorptionValues_MetaData), Z_Construct_UScriptStruct_FAkAcousticTextureParams_Statics::NewProp_AbsorptionValues_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkAcousticTextureParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAcousticTextureParams_Statics::NewProp_AbsorptionValues,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkAcousticTextureParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkAcousticTextureParams",
		Z_Construct_UScriptStruct_FAkAcousticTextureParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAcousticTextureParams_Statics::PropPointers),
		sizeof(FAkAcousticTextureParams),
		alignof(FAkAcousticTextureParams),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAcousticTextureParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAkAcousticTextureParams_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAcousticTextureParams_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAkAcousticTextureParams()
	{
		if (!Z_Registration_Info_UScriptStruct_AkAcousticTextureParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkAcousticTextureParams.InnerSingleton, Z_Construct_UScriptStruct_FAkAcousticTextureParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkAcousticTextureParams.InnerSingleton;
	}
	void UAkSettings::StaticRegisterNativesUAkSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkSettings);
	UClass* Z_Construct_UClass_UAkSettings_NoRegister()
	{
		return UAkSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAkSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSimultaneousReverbVolumes_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MaxSimultaneousReverbVolumes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WwiseProjectPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WwiseProjectPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WwiseSoundDataFolder_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WwiseSoundDataFolder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootOutputPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RootOutputPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedSoundBanksFolder_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GeneratedSoundBanksFolder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WwiseStagingDirectory_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WwiseStagingDirectory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSoundBanksTransfered_MetaData[];
#endif
		static void NewProp_bSoundBanksTransfered_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSoundBanksTransfered;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAssetsMigrated_MetaData[];
#endif
		static void NewProp_bAssetsMigrated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAssetsMigrated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bProjectMigrated_MetaData[];
#endif
		static void NewProp_bProjectMigrated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bProjectMigrated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoConnectToWAAPI_MetaData[];
#endif
		static void NewProp_bAutoConnectToWAAPI_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoConnectToWAAPI;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultOcclusionCollisionChannel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultOcclusionCollisionChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFitToGeometryCollisionChannel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultFitToGeometryCollisionChannel;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AkGeometryMap_ValueProp;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_AkGeometryMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AkGeometryMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_AkGeometryMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAcousticTexture_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultAcousticTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultTransmissionLoss_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultTransmissionLoss;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeometrySurfacePropertiesTable_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_GeometrySurfacePropertiesTable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalDecayAbsorption_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GlobalDecayAbsorption;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultReverbAuxBus_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultReverbAuxBus;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_EnvironmentDecayAuxBusMap_ValueProp;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EnvironmentDecayAuxBusMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnvironmentDecayAuxBusMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_EnvironmentDecayAuxBusMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReverbAssignmentTable_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ReverbAssignmentTable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HFDampingName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_HFDampingName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DecayEstimateName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DecayEstimateName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeToFirstReflectionName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TimeToFirstReflectionName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HFDampingRTPC_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_HFDampingRTPC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DecayEstimateRTPC_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DecayEstimateRTPC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeToFirstReflectionRTPC_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_TimeToFirstReflectionRTPC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioInputEvent_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_AudioInputEvent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AcousticTextureParamsMap_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AcousticTextureParamsMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AcousticTextureParamsMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_AcousticTextureParamsMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplitSwitchContainerMedia_MetaData[];
#endif
		static void NewProp_SplitSwitchContainerMedia_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SplitSwitchContainerMedia;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplitMediaPerFolder_MetaData[];
#endif
		static void NewProp_SplitMediaPerFolder_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SplitMediaPerFolder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseEventBasedPackaging_MetaData[];
#endif
		static void NewProp_UseEventBasedPackaging_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseEventBasedPackaging;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommandletCommitMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CommandletCommitMessage;
		static const UECodeGen_Private::FStrPropertyParams NewProp_UnrealCultureToWwiseCulture_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_UnrealCultureToWwiseCulture_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnrealCultureToWwiseCulture_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_UnrealCultureToWwiseCulture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAssetCreationPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultAssetCreationPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitBank_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_InitBank;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AudioRouting_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioRouting_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AudioRouting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWwiseSoundEngineEnabled_MetaData[];
#endif
		static void NewProp_bWwiseSoundEngineEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWwiseSoundEngineEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWwiseAudioLinkEnabled_MetaData[];
#endif
		static void NewProp_bWwiseAudioLinkEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWwiseAudioLinkEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAkAudioMixerEnabled_MetaData[];
#endif
		static void NewProp_bAkAudioMixerEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAkAudioMixerEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AskedToUseNewAssetManagement_MetaData[];
#endif
		static void NewProp_AskedToUseNewAssetManagement_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AskedToUseNewAssetManagement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableMultiCoreRendering_MetaData[];
#endif
		static void NewProp_bEnableMultiCoreRendering_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableMultiCoreRendering;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MigratedEnableMultiCoreRendering_MetaData[];
#endif
		static void NewProp_MigratedEnableMultiCoreRendering_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_MigratedEnableMultiCoreRendering;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FixupRedirectorsDuringMigration_MetaData[];
#endif
		static void NewProp_FixupRedirectorsDuringMigration_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_FixupRedirectorsDuringMigration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WwiseWindowsInstallationPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WwiseWindowsInstallationPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WwiseMacInstallationPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WwiseMacInstallationPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AkSettings.h" },
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_MaxSimultaneousReverbVolumes_MetaData[] = {
		{ "Category", "Reverb" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The maximum number of reverb auxiliary sends that will be simultaneously applied to a sound source\n// Reverbs from a Spatial Audio room will be active even if this maximum is reached.\n" },
#endif
		{ "DisplayName", "Max Simultaneous Reverb" },
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The maximum number of reverb auxiliary sends that will be simultaneously applied to a sound source\nReverbs from a Spatial Audio room will be active even if this maximum is reached." },
#endif
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_MaxSimultaneousReverbVolumes = { "MaxSimultaneousReverbVolumes", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettings, MaxSimultaneousReverbVolumes), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_MaxSimultaneousReverbVolumes_MetaData), Z_Construct_UClass_UAkSettings_Statics::NewProp_MaxSimultaneousReverbVolumes_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseProjectPath_MetaData[] = {
		{ "AbsolutePath", "" },
		{ "Category", "Installation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Wwise Project Path\n" },
#endif
		{ "FilePathFilter", "wproj" },
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wwise Project Path" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseProjectPath = { "WwiseProjectPath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettings, WwiseProjectPath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseProjectPath_MetaData), Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseProjectPath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseSoundDataFolder_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Where the Sound Data will be generated in the Content Folder\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Where the Sound Data will be generated in the Content Folder" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseSoundDataFolder = { "WwiseSoundDataFolder", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettings, WwiseSoundDataFolder), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseSoundDataFolder_MetaData), Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseSoundDataFolder_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_RootOutputPath_MetaData[] = {
		{ "AbsolutePath", "" },
		{ "Category", "Installation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The location of the folder where Wwise project metadata will be generated. This should be the same as the Root Output Path in the Wwise Project Settings.\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The location of the folder where Wwise project metadata will be generated. This should be the same as the Root Output Path in the Wwise Project Settings." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_RootOutputPath = { "RootOutputPath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettings, RootOutputPath), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_RootOutputPath_MetaData), Z_Construct_UClass_UAkSettings_Statics::NewProp_RootOutputPath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_GeneratedSoundBanksFolder_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_GeneratedSoundBanksFolder = { "GeneratedSoundBanksFolder", nullptr, (EPropertyFlags)0x0010000020004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettings, GeneratedSoundBanksFolder_DEPRECATED), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_GeneratedSoundBanksFolder_MetaData), Z_Construct_UClass_UAkSettings_Statics::NewProp_GeneratedSoundBanksFolder_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseStagingDirectory_MetaData[] = {
		{ "Category", "Cooking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Where wwise .bnk and .wem files will be copied to when staging files during cooking\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
		{ "RelativeToGameContentDir", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Where wwise .bnk and .wem files will be copied to when staging files during cooking" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseStagingDirectory = { "WwiseStagingDirectory", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettings, WwiseStagingDirectory), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseStagingDirectory_MetaData), Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseStagingDirectory_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_bSoundBanksTransfered_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Used to track whether SoundBanks have been transferred to Wwise after migration to 2022.1 (or later)\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used to track whether SoundBanks have been transferred to Wwise after migration to 2022.1 (or later)" },
#endif
	};
#endif
	void Z_Construct_UClass_UAkSettings_Statics::NewProp_bSoundBanksTransfered_SetBit(void* Obj)
	{
		((UAkSettings*)Obj)->bSoundBanksTransfered = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_bSoundBanksTransfered = { "bSoundBanksTransfered", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkSettings), &Z_Construct_UClass_UAkSettings_Statics::NewProp_bSoundBanksTransfered_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_bSoundBanksTransfered_MetaData), Z_Construct_UClass_UAkSettings_Statics::NewProp_bSoundBanksTransfered_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_bAssetsMigrated_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Used after migration to track whether assets have been re-serialized after migration to 2022.1 (or later)\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used after migration to track whether assets have been re-serialized after migration to 2022.1 (or later)" },
#endif
	};
#endif
	void Z_Construct_UClass_UAkSettings_Statics::NewProp_bAssetsMigrated_SetBit(void* Obj)
	{
		((UAkSettings*)Obj)->bAssetsMigrated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_bAssetsMigrated = { "bAssetsMigrated", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkSettings), &Z_Construct_UClass_UAkSettings_Statics::NewProp_bAssetsMigrated_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_bAssetsMigrated_MetaData), Z_Construct_UClass_UAkSettings_Statics::NewProp_bAssetsMigrated_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_bProjectMigrated_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Used after migration to track whether project settings have been updated after migration to 2022.1 (or later)\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used after migration to track whether project settings have been updated after migration to 2022.1 (or later)" },
#endif
	};
#endif
	void Z_Construct_UClass_UAkSettings_Statics::NewProp_bProjectMigrated_SetBit(void* Obj)
	{
		((UAkSettings*)Obj)->bProjectMigrated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_bProjectMigrated = { "bProjectMigrated", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkSettings), &Z_Construct_UClass_UAkSettings_Statics::NewProp_bProjectMigrated_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_bProjectMigrated_MetaData), Z_Construct_UClass_UAkSettings_Statics::NewProp_bProjectMigrated_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_bAutoConnectToWAAPI_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
	};
#endif
	void Z_Construct_UClass_UAkSettings_Statics::NewProp_bAutoConnectToWAAPI_SetBit(void* Obj)
	{
		((UAkSettings*)Obj)->bAutoConnectToWAAPI_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_bAutoConnectToWAAPI = { "bAutoConnectToWAAPI", nullptr, (EPropertyFlags)0x0010000020004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkSettings), &Z_Construct_UClass_UAkSettings_Statics::NewProp_bAutoConnectToWAAPI_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_bAutoConnectToWAAPI_MetaData), Z_Construct_UClass_UAkSettings_Statics::NewProp_bAutoConnectToWAAPI_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_DefaultOcclusionCollisionChannel_MetaData[] = {
		{ "Category", "Obstruction Occlusion" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Default value for the Collision Channel when creating a new Ak Component.\n" },
#endif
		{ "DisplayName", "DefaultCollisionChannel" },
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default value for the Collision Channel when creating a new Ak Component." },
#endif
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_DefaultOcclusionCollisionChannel = { "DefaultOcclusionCollisionChannel", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettings, DefaultOcclusionCollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_DefaultOcclusionCollisionChannel_MetaData), Z_Construct_UClass_UAkSettings_Statics::NewProp_DefaultOcclusionCollisionChannel_MetaData) }; // 1822723181
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_DefaultFitToGeometryCollisionChannel_MetaData[] = {
		{ "Category", "Fit To Geometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Default value for Collision Channel when fitting Ak Acoustic Portals and Ak Spatial Audio Volumes to surrounding geometry.\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default value for Collision Channel when fitting Ak Acoustic Portals and Ak Spatial Audio Volumes to surrounding geometry." },
#endif
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_DefaultFitToGeometryCollisionChannel = { "DefaultFitToGeometryCollisionChannel", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettings, DefaultFitToGeometryCollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_DefaultFitToGeometryCollisionChannel_MetaData), Z_Construct_UClass_UAkSettings_Statics::NewProp_DefaultFitToGeometryCollisionChannel_MetaData) }; // 1822723181
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_AkGeometryMap_ValueProp = { "AkGeometryMap", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap, METADATA_PARAMS(0, nullptr) }; // 2305323224
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_AkGeometryMap_Key_KeyProp = { "AkGeometryMap_Key", nullptr, (EPropertyFlags)0x0004000000004000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_AkGeometryMap_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// PhysicalMaterial to AcousticTexture and Occlusion Value Map\n// @deprecated Use GeometrySurfacePropertiesTable instead.\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PhysicalMaterial to AcousticTexture and Occlusion Value Map\n@deprecated Use GeometrySurfacePropertiesTable instead." },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_AkGeometryMap = { "AkGeometryMap", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettings, AkGeometryMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_AkGeometryMap_MetaData), Z_Construct_UClass_UAkSettings_Statics::NewProp_AkGeometryMap_MetaData) }; // 2305323224
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_DefaultAcousticTexture_MetaData[] = {
		{ "Category", "Geometry Surface Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The default Acoustic Texture set on a surface of a Spatial Audio Volume actor when Fit to Geometry is used and no geometry is hit.\n// Default value is None, which indicates a completely reflective surface.\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The default Acoustic Texture set on a surface of a Spatial Audio Volume actor when Fit to Geometry is used and no geometry is hit.\nDefault value is None, which indicates a completely reflective surface." },
#endif
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_DefaultAcousticTexture = { "DefaultAcousticTexture", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettings, DefaultAcousticTexture), Z_Construct_UClass_UAkAcousticTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_DefaultAcousticTexture_MetaData), Z_Construct_UClass_UAkSettings_Statics::NewProp_DefaultAcousticTexture_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_DefaultTransmissionLoss_MetaData[] = {
		{ "Category", "Geometry Surface Properties" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The default Transmission Loss value set on a surface of a Spatial Audio Volume actor when Fit to Geometry is used and no geometry is hit. The valid range is between 0 and 1.\n// The default value is 0, which indicates that sound can pass through the surface without any loss. A surface with 0 transmission loss is considered transparent. It disables any reflections and does not use the Acoustic Texture.\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The default Transmission Loss value set on a surface of a Spatial Audio Volume actor when Fit to Geometry is used and no geometry is hit. The valid range is between 0 and 1.\nThe default value is 0, which indicates that sound can pass through the surface without any loss. A surface with 0 transmission loss is considered transparent. It disables any reflections and does not use the Acoustic Texture." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_DefaultTransmissionLoss = { "DefaultTransmissionLoss", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettings, DefaultTransmissionLoss), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_DefaultTransmissionLoss_MetaData), Z_Construct_UClass_UAkSettings_Statics::NewProp_DefaultTransmissionLoss_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_GeometrySurfacePropertiesTable_MetaData[] = {
		{ "Category", "Geometry Surface Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Table that associates Geometry Surface Properties (Acoustic Texture and Transmission Loss) with Physical Materials.\n// This table is used to retrieve the Geometry Surface Properties according to the Static Mesh's Physical Materials when using the AkGeometry component or when using Fit to Geometry with the AkSpatialAudioVolume.\n// Rows must be of type FWwiseGeometrySurfacePropertiesRow. We recommend that you do not add or remove rows.\n// Rows are updated when Physical Material assets are added to or removed from the project.\n// Rows are also updated when an Acoustic Texture with a name similar to a Physical Material is added to the project.\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Table that associates Geometry Surface Properties (Acoustic Texture and Transmission Loss) with Physical Materials.\nThis table is used to retrieve the Geometry Surface Properties according to the Static Mesh's Physical Materials when using the AkGeometry component or when using Fit to Geometry with the AkSpatialAudioVolume.\nRows must be of type FWwiseGeometrySurfacePropertiesRow. We recommend that you do not add or remove rows.\nRows are updated when Physical Material assets are added to or removed from the project.\nRows are also updated when an Acoustic Texture with a name similar to a Physical Material is added to the project." },
#endif
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_GeometrySurfacePropertiesTable = { "GeometrySurfacePropertiesTable", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettings, GeometrySurfacePropertiesTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_GeometrySurfacePropertiesTable_MetaData), Z_Construct_UClass_UAkSettings_Statics::NewProp_GeometrySurfacePropertiesTable_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_GlobalDecayAbsorption_MetaData[] = {
		{ "Category", "Reverb Assignment" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.100000" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Default surface absorption value to use when estimating environment Decay value. It is used for the decay estimations of environments without Acoustic Texture information. The default value is 0.5.\n" },
#endif
		{ "DisplayName", "Default Surface Absorption" },
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default surface absorption value to use when estimating environment Decay value. It is used for the decay estimations of environments without Acoustic Texture information. The default value is 0.5." },
#endif
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.100000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_GlobalDecayAbsorption = { "GlobalDecayAbsorption", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettings, GlobalDecayAbsorption), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_GlobalDecayAbsorption_MetaData), Z_Construct_UClass_UAkSettings_Statics::NewProp_GlobalDecayAbsorption_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_DefaultReverbAuxBus_MetaData[] = {
		{ "Category", "Reverb Assignment" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The default Auxiliary Bus to choose for Automatic Reverb Assignment.\n// Automatic Reverb Assignment can be enabled on Late Reverb components. When their Decay values exceed the highest Decay value in the Reverb Assignment Table, or if the table is empty or nonexistant, the default Auxiliary Bus is chosen.\n// This Auxiliary Bus must have a reverb effect.\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The default Auxiliary Bus to choose for Automatic Reverb Assignment.\nAutomatic Reverb Assignment can be enabled on Late Reverb components. When their Decay values exceed the highest Decay value in the Reverb Assignment Table, or if the table is empty or nonexistant, the default Auxiliary Bus is chosen.\nThis Auxiliary Bus must have a reverb effect." },
#endif
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_DefaultReverbAuxBus = { "DefaultReverbAuxBus", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettings, DefaultReverbAuxBus), Z_Construct_UClass_UAkAuxBus_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_DefaultReverbAuxBus_MetaData), Z_Construct_UClass_UAkSettings_Statics::NewProp_DefaultReverbAuxBus_MetaData) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_EnvironmentDecayAuxBusMap_ValueProp = { "EnvironmentDecayAuxBusMap", nullptr, (EPropertyFlags)0x0004000000004000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UAkAuxBus_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_EnvironmentDecayAuxBusMap_Key_KeyProp = { "EnvironmentDecayAuxBusMap_Key", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_EnvironmentDecayAuxBusMap_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// RoomDecay to AuxBus Map.\n// @deprecated Use ReverbAssignmentTable instead.\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "RoomDecay to AuxBus Map.\n@deprecated Use ReverbAssignmentTable instead." },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_EnvironmentDecayAuxBusMap = { "EnvironmentDecayAuxBusMap", nullptr, (EPropertyFlags)0x0014000000004000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettings, EnvironmentDecayAuxBusMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_EnvironmentDecayAuxBusMap_MetaData), Z_Construct_UClass_UAkSettings_Statics::NewProp_EnvironmentDecayAuxBusMap_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_ReverbAssignmentTable_MetaData[] = {
		{ "Category", "Reverb Assignment" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Table that associates Auxiliary Busses with Reverb Decay values. Rows must be of type FWwiseDecayAuxBusRow.\n// The Decay value represents the number of seconds it takes for the sound reverberation in an environment to decay by 60 dB.\n// The Auxiliary Busses are Auxiliary Busses in Wwise Authoring that have reverb effects.\n// If Automatic Reverb Assignment is enabled on a Late Reverb component, its Decay value is compared to the table's Decay values. The chosen Auxiliary Bus is the one associated with the closest and highest Decay value in the table.\n// If the given Decay value exceeds the highest Decay value in the table, or if the table is empty or nonexistant, the Default Reverb Aux Bus is chosen.\n// Decay values are represented with floating point numbers. We recommend that consecutive Decay values differ by at least 0.01 to ensure the correct Auxiliary Bus is chosen for a given Decay value.\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Table that associates Auxiliary Busses with Reverb Decay values. Rows must be of type FWwiseDecayAuxBusRow.\nThe Decay value represents the number of seconds it takes for the sound reverberation in an environment to decay by 60 dB.\nThe Auxiliary Busses are Auxiliary Busses in Wwise Authoring that have reverb effects.\nIf Automatic Reverb Assignment is enabled on a Late Reverb component, its Decay value is compared to the table's Decay values. The chosen Auxiliary Bus is the one associated with the closest and highest Decay value in the table.\nIf the given Decay value exceeds the highest Decay value in the table, or if the table is empty or nonexistant, the Default Reverb Aux Bus is chosen.\nDecay values are represented with floating point numbers. We recommend that consecutive Decay values differ by at least 0.01 to ensure the correct Auxiliary Bus is chosen for a given Decay value." },
#endif
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_ReverbAssignmentTable = { "ReverbAssignmentTable", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettings, ReverbAssignmentTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_ReverbAssignmentTable_MetaData), Z_Construct_UClass_UAkSettings_Statics::NewProp_ReverbAssignmentTable_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_HFDampingName_MetaData[] = {
		{ "Category", "Reverb Assignment|RTPCs" },
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_HFDampingName = { "HFDampingName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettings, HFDampingName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_HFDampingName_MetaData), Z_Construct_UClass_UAkSettings_Statics::NewProp_HFDampingName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_DecayEstimateName_MetaData[] = {
		{ "Category", "Reverb Assignment|RTPCs" },
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_DecayEstimateName = { "DecayEstimateName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettings, DecayEstimateName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_DecayEstimateName_MetaData), Z_Construct_UClass_UAkSettings_Statics::NewProp_DecayEstimateName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_TimeToFirstReflectionName_MetaData[] = {
		{ "Category", "Reverb Assignment|RTPCs" },
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_TimeToFirstReflectionName = { "TimeToFirstReflectionName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettings, TimeToFirstReflectionName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_TimeToFirstReflectionName_MetaData), Z_Construct_UClass_UAkSettings_Statics::NewProp_TimeToFirstReflectionName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_HFDampingRTPC_MetaData[] = {
		{ "Category", "Reverb Assignment|RTPCs" },
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_HFDampingRTPC = { "HFDampingRTPC", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettings, HFDampingRTPC), Z_Construct_UClass_UAkRtpc_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_HFDampingRTPC_MetaData), Z_Construct_UClass_UAkSettings_Statics::NewProp_HFDampingRTPC_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_DecayEstimateRTPC_MetaData[] = {
		{ "Category", "Reverb Assignment|RTPCs" },
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_DecayEstimateRTPC = { "DecayEstimateRTPC", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettings, DecayEstimateRTPC), Z_Construct_UClass_UAkRtpc_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_DecayEstimateRTPC_MetaData), Z_Construct_UClass_UAkSettings_Statics::NewProp_DecayEstimateRTPC_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_TimeToFirstReflectionRTPC_MetaData[] = {
		{ "Category", "Reverb Assignment|RTPCs" },
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_TimeToFirstReflectionRTPC = { "TimeToFirstReflectionRTPC", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettings, TimeToFirstReflectionRTPC), Z_Construct_UClass_UAkRtpc_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_TimeToFirstReflectionRTPC_MetaData), Z_Construct_UClass_UAkSettings_Statics::NewProp_TimeToFirstReflectionRTPC_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_AudioInputEvent_MetaData[] = {
		{ "Category", "Initialization" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Input event associated with the Wwise Audio Input\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input event associated with the Wwise Audio Input" },
#endif
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_AudioInputEvent = { "AudioInputEvent", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettings, AudioInputEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_AudioInputEvent_MetaData), Z_Construct_UClass_UAkSettings_Statics::NewProp_AudioInputEvent_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_AcousticTextureParamsMap_ValueProp = { "AcousticTextureParamsMap", nullptr, (EPropertyFlags)0x0000000020004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FAkAcousticTextureParams, METADATA_PARAMS(0, nullptr) }; // 970489684
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_AcousticTextureParamsMap_Key_KeyProp = { "AcousticTextureParamsMap_Key", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_AcousticTextureParamsMap_MetaData[] = {
		{ "Deprecated", "" },
		{ "DeprecationMessage", "AcousticTextureParamsMap is now an internal map." },
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_AcousticTextureParamsMap = { "AcousticTextureParamsMap", nullptr, (EPropertyFlags)0x0010000020004000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettings, AcousticTextureParamsMap_DEPRECATED), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_AcousticTextureParamsMap_MetaData), Z_Construct_UClass_UAkSettings_Statics::NewProp_AcousticTextureParamsMap_MetaData) }; // 970489684
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_SplitSwitchContainerMedia_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// When generating the event data, the media contained in switch containers will be split by state/switch value\n// and only loaded if the state/switch value are currently loaded\n" },
#endif
		{ "Deprecated", "" },
		{ "DeprecationMessage", "Setting now exists for each AK Audio Event" },
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When generating the event data, the media contained in switch containers will be split by state/switch value\nand only loaded if the state/switch value are currently loaded" },
#endif
	};
#endif
	void Z_Construct_UClass_UAkSettings_Statics::NewProp_SplitSwitchContainerMedia_SetBit(void* Obj)
	{
		((UAkSettings*)Obj)->SplitSwitchContainerMedia = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_SplitSwitchContainerMedia = { "SplitSwitchContainerMedia", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkSettings), &Z_Construct_UClass_UAkSettings_Statics::NewProp_SplitSwitchContainerMedia_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_SplitSwitchContainerMedia_MetaData), Z_Construct_UClass_UAkSettings_Statics::NewProp_SplitSwitchContainerMedia_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_SplitMediaPerFolder_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Deprecated in 2022.1\n//Used in migration from previous versions\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Deprecated in 2022.1\nUsed in migration from previous versions" },
#endif
	};
#endif
	void Z_Construct_UClass_UAkSettings_Statics::NewProp_SplitMediaPerFolder_SetBit(void* Obj)
	{
		((UAkSettings*)Obj)->SplitMediaPerFolder = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_SplitMediaPerFolder = { "SplitMediaPerFolder", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkSettings), &Z_Construct_UClass_UAkSettings_Statics::NewProp_SplitMediaPerFolder_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_SplitMediaPerFolder_MetaData), Z_Construct_UClass_UAkSettings_Statics::NewProp_SplitMediaPerFolder_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_UseEventBasedPackaging_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Deprecated in 2022.1\n//Used in migration from previous versions\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Deprecated in 2022.1\nUsed in migration from previous versions" },
#endif
	};
#endif
	void Z_Construct_UClass_UAkSettings_Statics::NewProp_UseEventBasedPackaging_SetBit(void* Obj)
	{
		((UAkSettings*)Obj)->UseEventBasedPackaging = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_UseEventBasedPackaging = { "UseEventBasedPackaging", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkSettings), &Z_Construct_UClass_UAkSettings_Statics::NewProp_UseEventBasedPackaging_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_UseEventBasedPackaging_MetaData), Z_Construct_UClass_UAkSettings_Statics::NewProp_UseEventBasedPackaging_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_CommandletCommitMessage_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Commit message that GenerateSoundBanksCommandlet will use\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Commit message that GenerateSoundBanksCommandlet will use" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_CommandletCommitMessage = { "CommandletCommitMessage", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettings, CommandletCommitMessage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_CommandletCommitMessage_MetaData), Z_Construct_UClass_UAkSettings_Statics::NewProp_CommandletCommitMessage_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_UnrealCultureToWwiseCulture_ValueProp = { "UnrealCultureToWwiseCulture", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_UnrealCultureToWwiseCulture_Key_KeyProp = { "UnrealCultureToWwiseCulture_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_UnrealCultureToWwiseCulture_MetaData[] = {
		{ "Category", "Localization" },
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_UnrealCultureToWwiseCulture = { "UnrealCultureToWwiseCulture", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettings, UnrealCultureToWwiseCulture), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_UnrealCultureToWwiseCulture_MetaData), Z_Construct_UClass_UAkSettings_Statics::NewProp_UnrealCultureToWwiseCulture_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_DefaultAssetCreationPath_MetaData[] = {
		{ "Category", "Asset Creation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// When an asset is dragged from the Wwise Browser, assets are created by default in this path.\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When an asset is dragged from the Wwise Browser, assets are created by default in this path." },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_DefaultAssetCreationPath = { "DefaultAssetCreationPath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettings, DefaultAssetCreationPath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_DefaultAssetCreationPath_MetaData), Z_Construct_UClass_UAkSettings_Statics::NewProp_DefaultAssetCreationPath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_InitBank_MetaData[] = {
		{ "Category", "Initialization" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The unique Init Bank for the Wwise project. This contains the basic information necessary for properly setting up the SoundEngine.\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The unique Init Bank for the Wwise project. This contains the basic information necessary for properly setting up the SoundEngine." },
#endif
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_InitBank = { "InitBank", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettings, InitBank), Z_Construct_UClass_UAkInitBank_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_InitBank_MetaData), Z_Construct_UClass_UAkSettings_Statics::NewProp_InitBank_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_AudioRouting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_AudioRouting_MetaData[] = {
		{ "Category", "Initialization" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Routing Audio from Unreal Audio to Wwise Sound Engine\n" },
#endif
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Unreal Audio Routing" },
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Routing Audio from Unreal Audio to Wwise Sound Engine" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_AudioRouting = { "AudioRouting", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettings, AudioRouting), Z_Construct_UEnum_AkAudio_EAkUnrealAudioRouting, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_AudioRouting_MetaData), Z_Construct_UClass_UAkSettings_Statics::NewProp_AudioRouting_MetaData) }; // 3093734399
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_bWwiseSoundEngineEnabled_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "EditCondition", "AudioRouting == EAkUnrealAudioRouting::Custom" },
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
	};
#endif
	void Z_Construct_UClass_UAkSettings_Statics::NewProp_bWwiseSoundEngineEnabled_SetBit(void* Obj)
	{
		((UAkSettings*)Obj)->bWwiseSoundEngineEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_bWwiseSoundEngineEnabled = { "bWwiseSoundEngineEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkSettings), &Z_Construct_UClass_UAkSettings_Statics::NewProp_bWwiseSoundEngineEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_bWwiseSoundEngineEnabled_MetaData), Z_Construct_UClass_UAkSettings_Statics::NewProp_bWwiseSoundEngineEnabled_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_bWwiseAudioLinkEnabled_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "EditCondition", "AudioRouting == EAkUnrealAudioRouting::Custom" },
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
	};
#endif
	void Z_Construct_UClass_UAkSettings_Statics::NewProp_bWwiseAudioLinkEnabled_SetBit(void* Obj)
	{
		((UAkSettings*)Obj)->bWwiseAudioLinkEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_bWwiseAudioLinkEnabled = { "bWwiseAudioLinkEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkSettings), &Z_Construct_UClass_UAkSettings_Statics::NewProp_bWwiseAudioLinkEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_bWwiseAudioLinkEnabled_MetaData), Z_Construct_UClass_UAkSettings_Statics::NewProp_bWwiseAudioLinkEnabled_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_bAkAudioMixerEnabled_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "EditCondition", "AudioRouting == EAkUnrealAudioRouting::Custom" },
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
	};
#endif
	void Z_Construct_UClass_UAkSettings_Statics::NewProp_bAkAudioMixerEnabled_SetBit(void* Obj)
	{
		((UAkSettings*)Obj)->bAkAudioMixerEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_bAkAudioMixerEnabled = { "bAkAudioMixerEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkSettings), &Z_Construct_UClass_UAkSettings_Statics::NewProp_bAkAudioMixerEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_bAkAudioMixerEnabled_MetaData), Z_Construct_UClass_UAkSettings_Statics::NewProp_bAkAudioMixerEnabled_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_AskedToUseNewAssetManagement_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
	};
#endif
	void Z_Construct_UClass_UAkSettings_Statics::NewProp_AskedToUseNewAssetManagement_SetBit(void* Obj)
	{
		((UAkSettings*)Obj)->AskedToUseNewAssetManagement_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_AskedToUseNewAssetManagement = { "AskedToUseNewAssetManagement", nullptr, (EPropertyFlags)0x0010000020004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkSettings), &Z_Construct_UClass_UAkSettings_Statics::NewProp_AskedToUseNewAssetManagement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_AskedToUseNewAssetManagement_MetaData), Z_Construct_UClass_UAkSettings_Statics::NewProp_AskedToUseNewAssetManagement_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_bEnableMultiCoreRendering_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
	};
#endif
	void Z_Construct_UClass_UAkSettings_Statics::NewProp_bEnableMultiCoreRendering_SetBit(void* Obj)
	{
		((UAkSettings*)Obj)->bEnableMultiCoreRendering_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_bEnableMultiCoreRendering = { "bEnableMultiCoreRendering", nullptr, (EPropertyFlags)0x0010000020004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkSettings), &Z_Construct_UClass_UAkSettings_Statics::NewProp_bEnableMultiCoreRendering_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_bEnableMultiCoreRendering_MetaData), Z_Construct_UClass_UAkSettings_Statics::NewProp_bEnableMultiCoreRendering_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_MigratedEnableMultiCoreRendering_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
	};
#endif
	void Z_Construct_UClass_UAkSettings_Statics::NewProp_MigratedEnableMultiCoreRendering_SetBit(void* Obj)
	{
		((UAkSettings*)Obj)->MigratedEnableMultiCoreRendering = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_MigratedEnableMultiCoreRendering = { "MigratedEnableMultiCoreRendering", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkSettings), &Z_Construct_UClass_UAkSettings_Statics::NewProp_MigratedEnableMultiCoreRendering_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_MigratedEnableMultiCoreRendering_MetaData), Z_Construct_UClass_UAkSettings_Statics::NewProp_MigratedEnableMultiCoreRendering_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_FixupRedirectorsDuringMigration_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
	};
#endif
	void Z_Construct_UClass_UAkSettings_Statics::NewProp_FixupRedirectorsDuringMigration_SetBit(void* Obj)
	{
		((UAkSettings*)Obj)->FixupRedirectorsDuringMigration = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_FixupRedirectorsDuringMigration = { "FixupRedirectorsDuringMigration", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkSettings), &Z_Construct_UClass_UAkSettings_Statics::NewProp_FixupRedirectorsDuringMigration_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_FixupRedirectorsDuringMigration_MetaData), Z_Construct_UClass_UAkSettings_Statics::NewProp_FixupRedirectorsDuringMigration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseWindowsInstallationPath_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseWindowsInstallationPath = { "WwiseWindowsInstallationPath", nullptr, (EPropertyFlags)0x0010000020004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettings, WwiseWindowsInstallationPath_DEPRECATED), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseWindowsInstallationPath_MetaData), Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseWindowsInstallationPath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseMacInstallationPath_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseMacInstallationPath = { "WwiseMacInstallationPath", nullptr, (EPropertyFlags)0x0010000020004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSettings, WwiseMacInstallationPath_DEPRECATED), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseMacInstallationPath_MetaData), Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseMacInstallationPath_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_MaxSimultaneousReverbVolumes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseProjectPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseSoundDataFolder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_RootOutputPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_GeneratedSoundBanksFolder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseStagingDirectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_bSoundBanksTransfered,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_bAssetsMigrated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_bProjectMigrated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_bAutoConnectToWAAPI,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_DefaultOcclusionCollisionChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_DefaultFitToGeometryCollisionChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_AkGeometryMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_AkGeometryMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_AkGeometryMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_DefaultAcousticTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_DefaultTransmissionLoss,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_GeometrySurfacePropertiesTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_GlobalDecayAbsorption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_DefaultReverbAuxBus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_EnvironmentDecayAuxBusMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_EnvironmentDecayAuxBusMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_EnvironmentDecayAuxBusMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_ReverbAssignmentTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_HFDampingName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_DecayEstimateName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_TimeToFirstReflectionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_HFDampingRTPC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_DecayEstimateRTPC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_TimeToFirstReflectionRTPC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_AudioInputEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_AcousticTextureParamsMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_AcousticTextureParamsMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_AcousticTextureParamsMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_SplitSwitchContainerMedia,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_SplitMediaPerFolder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_UseEventBasedPackaging,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_CommandletCommitMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_UnrealCultureToWwiseCulture_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_UnrealCultureToWwiseCulture_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_UnrealCultureToWwiseCulture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_DefaultAssetCreationPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_InitBank,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_AudioRouting_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_AudioRouting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_bWwiseSoundEngineEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_bWwiseAudioLinkEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_bAkAudioMixerEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_AskedToUseNewAssetManagement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_bEnableMultiCoreRendering,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_MigratedEnableMultiCoreRendering,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_FixupRedirectorsDuringMigration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseWindowsInstallationPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseMacInstallationPath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkSettings_Statics::ClassParams = {
		&UAkSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAkSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAkSettings()
	{
		if (!Z_Registration_Info_UClass_UAkSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkSettings.OuterSingleton, Z_Construct_UClass_UAkSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkSettings.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkSettings>()
	{
		return UAkSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkSettings);
	struct Z_CompiledInDeferFile_FID_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkSettings_h_Statics::EnumInfo[] = {
		{ EAkCollisionChannel_StaticEnum, TEXT("EAkCollisionChannel"), &Z_Registration_Info_UEnum_EAkCollisionChannel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3316290182U) },
		{ EAkUnrealAudioRouting_StaticEnum, TEXT("EAkUnrealAudioRouting"), &Z_Registration_Info_UEnum_EAkUnrealAudioRouting, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3093734399U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkSettings_h_Statics::ScriptStructInfo[] = {
		{ FAkGeometrySurfacePropertiesToMap::StaticStruct, Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::NewStructOps, TEXT("AkGeometrySurfacePropertiesToMap"), &Z_Registration_Info_UScriptStruct_AkGeometrySurfacePropertiesToMap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkGeometrySurfacePropertiesToMap), 2305323224U) },
		{ FWwiseGeometrySurfacePropertiesRow::StaticStruct, Z_Construct_UScriptStruct_FWwiseGeometrySurfacePropertiesRow_Statics::NewStructOps, TEXT("WwiseGeometrySurfacePropertiesRow"), &Z_Registration_Info_UScriptStruct_WwiseGeometrySurfacePropertiesRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseGeometrySurfacePropertiesRow), 3899918700U) },
		{ FWwiseDecayAuxBusRow::StaticStruct, Z_Construct_UScriptStruct_FWwiseDecayAuxBusRow_Statics::NewStructOps, TEXT("WwiseDecayAuxBusRow"), &Z_Registration_Info_UScriptStruct_WwiseDecayAuxBusRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseDecayAuxBusRow), 4175322725U) },
		{ FAkAcousticTextureParams::StaticStruct, Z_Construct_UScriptStruct_FAkAcousticTextureParams_Statics::NewStructOps, TEXT("AkAcousticTextureParams"), &Z_Registration_Info_UScriptStruct_AkAcousticTextureParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkAcousticTextureParams), 970489684U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAkSettings, UAkSettings::StaticClass, TEXT("UAkSettings"), &Z_Registration_Info_UClass_UAkSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkSettings), 3883306362U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkSettings_h_950492913(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkSettings_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
