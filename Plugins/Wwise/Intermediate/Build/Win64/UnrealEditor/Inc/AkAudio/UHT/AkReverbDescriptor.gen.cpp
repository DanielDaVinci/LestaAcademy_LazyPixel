// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkReverbDescriptor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkReverbDescriptor() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkReverbDescriptor();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkReverbDescriptor;
class UScriptStruct* FAkReverbDescriptor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkReverbDescriptor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkReverbDescriptor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkReverbDescriptor, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkReverbDescriptor"));
	}
	return Z_Registration_Info_UScriptStruct_AkReverbDescriptor.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkReverbDescriptor>()
{
	return FAkReverbDescriptor::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkReverbDescriptor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Primitive_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Primitive;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkReverbDescriptor_Statics::Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * FAkReverbDescriptor is used to estimate the reverb parameters of a primitive component, by calculating its volume and surface area, and using the 'sabine equation' to estimate the reverb tail.\n * It also estimates the Time to First Reflection and the HFDamping.\n */" },
#endif
		{ "ModuleRelativePath", "Classes/AkReverbDescriptor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FAkReverbDescriptor is used to estimate the reverb parameters of a primitive component, by calculating its volume and surface area, and using the 'sabine equation' to estimate the reverb tail.\nIt also estimates the Time to First Reflection and the HFDamping." },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FAkReverbDescriptor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkReverbDescriptor>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkReverbDescriptor_Statics::NewProp_Primitive_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/AkReverbDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAkReverbDescriptor_Statics::NewProp_Primitive = { "Primitive", nullptr, (EPropertyFlags)0x0040000000082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkReverbDescriptor, Primitive), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkReverbDescriptor_Statics::NewProp_Primitive_MetaData), Z_Construct_UScriptStruct_FAkReverbDescriptor_Statics::NewProp_Primitive_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkReverbDescriptor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkReverbDescriptor_Statics::NewProp_Primitive,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkReverbDescriptor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkReverbDescriptor",
		Z_Construct_UScriptStruct_FAkReverbDescriptor_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkReverbDescriptor_Statics::PropPointers),
		sizeof(FAkReverbDescriptor),
		alignof(FAkReverbDescriptor),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkReverbDescriptor_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAkReverbDescriptor_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkReverbDescriptor_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAkReverbDescriptor()
	{
		if (!Z_Registration_Info_UScriptStruct_AkReverbDescriptor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkReverbDescriptor.InnerSingleton, Z_Construct_UScriptStruct_FAkReverbDescriptor_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkReverbDescriptor.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_danii_RiderProjects_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkReverbDescriptor_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_danii_RiderProjects_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkReverbDescriptor_h_Statics::ScriptStructInfo[] = {
		{ FAkReverbDescriptor::StaticStruct, Z_Construct_UScriptStruct_FAkReverbDescriptor_Statics::NewStructOps, TEXT("AkReverbDescriptor"), &Z_Registration_Info_UScriptStruct_AkReverbDescriptor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkReverbDescriptor), 806021598U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_danii_RiderProjects_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkReverbDescriptor_h_2905490467(TEXT("/Script/AkAudio"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_danii_RiderProjects_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkReverbDescriptor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_danii_RiderProjects_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkReverbDescriptor_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
