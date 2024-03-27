// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wwise/AudioLink/WwiseAudioLinkComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwiseAudioLinkComponent() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent();
	AUDIOLINKENGINE_API UClass* Z_Construct_UClass_UAudioLinkBlueprintInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Wwise();
	WWISE_API UClass* Z_Construct_UClass_UWwiseAudioLinkComponent();
	WWISE_API UClass* Z_Construct_UClass_UWwiseAudioLinkComponent_NoRegister();
	WWISE_API UClass* Z_Construct_UClass_UWwiseAudioLinkSettings_NoRegister();
// End Cross Module References
	void UWwiseAudioLinkComponent::StaticRegisterNativesUWwiseAudioLinkComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWwiseAudioLinkComponent);
	UClass* Z_Construct_UClass_UWwiseAudioLinkComponent_NoRegister()
	{
		return UWwiseAudioLinkComponent::StaticClass();
	}
	struct Z_Construct_UClass_UWwiseAudioLinkComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Settings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Sound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoPlay_MetaData[];
#endif
		static void NewProp_bAutoPlay_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoPlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AudioComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Wwise,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "AkComponent AkComponent" },
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Audio Common" },
		{ "HideCategories", "Object ActorComponent Physics Rendering Mobility LOD Transform Rendering Mobility LOD Component Activation Transform Rendering Mobility LOD Component Activation PhysicsVolume" },
		{ "IncludePath", "AudioLinkRuntime/Public/Wwise/AudioLink/WwiseAudioLinkComponent.h" },
		{ "ModuleRelativePath", "AudioLinkRuntime/Public/Wwise/AudioLink/WwiseAudioLinkComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "AudioLink" },
		{ "ModuleRelativePath", "AudioLinkRuntime/Public/Wwise/AudioLink/WwiseAudioLinkComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWwiseAudioLinkComponent, Settings), Z_Construct_UClass_UWwiseAudioLinkSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::NewProp_Settings_MetaData), Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::NewProp_Settings_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::NewProp_Sound_MetaData[] = {
		{ "Category", "Sound" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The sound to be played */" },
#endif
		{ "ModuleRelativePath", "AudioLinkRuntime/Public/Wwise/AudioLink/WwiseAudioLinkComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The sound to be played" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWwiseAudioLinkComponent, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::NewProp_Sound_MetaData), Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::NewProp_Sound_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::NewProp_bAutoPlay_MetaData[] = {
		{ "Category", "AudioLink" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether or not to play the Link on start*/" },
#endif
		{ "ModuleRelativePath", "AudioLinkRuntime/Public/Wwise/AudioLink/WwiseAudioLinkComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether or not to play the Link on start" },
#endif
	};
#endif
	void Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::NewProp_bAutoPlay_SetBit(void* Obj)
	{
		((UWwiseAudioLinkComponent*)Obj)->bAutoPlay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::NewProp_bAutoPlay = { "bAutoPlay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWwiseAudioLinkComponent), &Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::NewProp_bAutoPlay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::NewProp_bAutoPlay_MetaData), Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::NewProp_bAutoPlay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::NewProp_AudioComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AudioLinkRuntime/Public/Wwise/AudioLink/WwiseAudioLinkComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x0024080000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWwiseAudioLinkComponent, AudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::NewProp_AudioComponent_MetaData), Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::NewProp_AudioComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::NewProp_Sound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::NewProp_bAutoPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::NewProp_AudioComponent,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAudioLinkBlueprintInterface_NoRegister, (int32)VTABLE_OFFSET(UWwiseAudioLinkComponent, IAudioLinkBlueprintInterface), false },  // 570740756
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWwiseAudioLinkComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::ClassParams = {
		&UWwiseAudioLinkComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00A000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UWwiseAudioLinkComponent()
	{
		if (!Z_Registration_Info_UClass_UWwiseAudioLinkComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWwiseAudioLinkComponent.OuterSingleton, Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWwiseAudioLinkComponent.OuterSingleton;
	}
	template<> WWISE_API UClass* StaticClass<UWwiseAudioLinkComponent>()
	{
		return UWwiseAudioLinkComponent::StaticClass();
	}
	UWwiseAudioLinkComponent::UWwiseAudioLinkComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWwiseAudioLinkComponent);
	UWwiseAudioLinkComponent::~UWwiseAudioLinkComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_danii_RiderProjects_MainProject_Plugins_Wwise_Source_WwiseAudioLinkRuntime_Public_Wwise_AudioLink_WwiseAudioLinkComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_danii_RiderProjects_MainProject_Plugins_Wwise_Source_WwiseAudioLinkRuntime_Public_Wwise_AudioLink_WwiseAudioLinkComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWwiseAudioLinkComponent, UWwiseAudioLinkComponent::StaticClass, TEXT("UWwiseAudioLinkComponent"), &Z_Registration_Info_UClass_UWwiseAudioLinkComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWwiseAudioLinkComponent), 2756849511U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_danii_RiderProjects_MainProject_Plugins_Wwise_Source_WwiseAudioLinkRuntime_Public_Wwise_AudioLink_WwiseAudioLinkComponent_h_819640772(TEXT("/Script/Wwise"),
		Z_CompiledInDeferFile_FID_Users_danii_RiderProjects_MainProject_Plugins_Wwise_Source_WwiseAudioLinkRuntime_Public_Wwise_AudioLink_WwiseAudioLinkComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_danii_RiderProjects_MainProject_Plugins_Wwise_Source_WwiseAudioLinkRuntime_Public_Wwise_AudioLink_WwiseAudioLinkComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
