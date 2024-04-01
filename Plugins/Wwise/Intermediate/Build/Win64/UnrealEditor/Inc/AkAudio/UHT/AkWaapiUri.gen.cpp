// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkWaapiBlueprints/AkWaapiUri.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkWaapiUri() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkWaapiUriConv();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkWaapiUriConv_NoRegister();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkWaapiUri();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkWaapiUri;
class UScriptStruct* FAkWaapiUri::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkWaapiUri.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkWaapiUri.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkWaapiUri, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkWaapiUri"));
	}
	return Z_Registration_Info_UScriptStruct_AkWaapiUri.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkWaapiUri>()
{
	return FAkWaapiUri::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkWaapiUri_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Uri_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Uri;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkWaapiUri_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* Structure for Uri\n*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkWaapiBlueprints/AkWaapiUri.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Structure for Uri" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FAkWaapiUri_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkWaapiUri>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkWaapiUri_Statics::NewProp_Uri_MetaData[] = {
		{ "Category", "Uri" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* The Uri\n\x09*/" },
#endif
		{ "DisplayName", "Uri" },
		{ "ModuleRelativePath", "Classes/AkWaapiBlueprints/AkWaapiUri.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Uri" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAkWaapiUri_Statics::NewProp_Uri = { "Uri", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkWaapiUri, Uri), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkWaapiUri_Statics::NewProp_Uri_MetaData), Z_Construct_UScriptStruct_FAkWaapiUri_Statics::NewProp_Uri_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkWaapiUri_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkWaapiUri_Statics::NewProp_Uri,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkWaapiUri_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkWaapiUri",
		Z_Construct_UScriptStruct_FAkWaapiUri_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkWaapiUri_Statics::PropPointers),
		sizeof(FAkWaapiUri),
		alignof(FAkWaapiUri),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkWaapiUri_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAkWaapiUri_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkWaapiUri_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAkWaapiUri()
	{
		if (!Z_Registration_Info_UScriptStruct_AkWaapiUri.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkWaapiUri.InnerSingleton, Z_Construct_UScriptStruct_FAkWaapiUri_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkWaapiUri.InnerSingleton;
	}
	DEFINE_FUNCTION(UAkWaapiUriConv::execConv_FAkWaapiUriToText)
	{
		P_GET_STRUCT_REF(FAkWaapiUri,Z_Param_Out_INAkWaapiUri);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UAkWaapiUriConv::Conv_FAkWaapiUriToText(Z_Param_Out_INAkWaapiUri);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkWaapiUriConv::execConv_FAkWaapiUriToString)
	{
		P_GET_STRUCT_REF(FAkWaapiUri,Z_Param_Out_INAkWaapiUri);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UAkWaapiUriConv::Conv_FAkWaapiUriToString(Z_Param_Out_INAkWaapiUri);
		P_NATIVE_END;
	}
	void UAkWaapiUriConv::StaticRegisterNativesUAkWaapiUriConv()
	{
		UClass* Class = UAkWaapiUriConv::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Conv_FAkWaapiUriToString", &UAkWaapiUriConv::execConv_FAkWaapiUriToString },
			{ "Conv_FAkWaapiUriToText", &UAkWaapiUriConv::execConv_FAkWaapiUriToText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToString_Statics
	{
		struct AkWaapiUriConv_eventConv_FAkWaapiUriToString_Parms
		{
			FAkWaapiUri INAkWaapiUri;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_INAkWaapiUri_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_INAkWaapiUri;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToString_Statics::NewProp_INAkWaapiUri_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToString_Statics::NewProp_INAkWaapiUri = { "INAkWaapiUri", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkWaapiUriConv_eventConv_FAkWaapiUriToString_Parms, INAkWaapiUri), Z_Construct_UScriptStruct_FAkWaapiUri, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToString_Statics::NewProp_INAkWaapiUri_MetaData), Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToString_Statics::NewProp_INAkWaapiUri_MetaData) }; // 993998359
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkWaapiUriConv_eventConv_FAkWaapiUriToString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToString_Statics::NewProp_INAkWaapiUri,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToString_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|String" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Converts an AkWaapiUri value to a string */" },
#endif
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToString (FAkWaapiUri)" },
		{ "ModuleRelativePath", "Classes/AkWaapiBlueprints/AkWaapiUri.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Converts an AkWaapiUri value to a string" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkWaapiUriConv, nullptr, "Conv_FAkWaapiUriToString", nullptr, nullptr, Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToString_Statics::AkWaapiUriConv_eventConv_FAkWaapiUriToString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToString_Statics::AkWaapiUriConv_eventConv_FAkWaapiUriToString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToText_Statics
	{
		struct AkWaapiUriConv_eventConv_FAkWaapiUriToText_Parms
		{
			FAkWaapiUri INAkWaapiUri;
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_INAkWaapiUri_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_INAkWaapiUri;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToText_Statics::NewProp_INAkWaapiUri_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToText_Statics::NewProp_INAkWaapiUri = { "INAkWaapiUri", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkWaapiUriConv_eventConv_FAkWaapiUriToText_Parms, INAkWaapiUri), Z_Construct_UScriptStruct_FAkWaapiUri, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToText_Statics::NewProp_INAkWaapiUri_MetaData), Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToText_Statics::NewProp_INAkWaapiUri_MetaData) }; // 993998359
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkWaapiUriConv_eventConv_FAkWaapiUriToText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToText_Statics::NewProp_INAkWaapiUri,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToText_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|Text" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Converts an AkWaapiUri value to a localizable text */" },
#endif
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToText (FAkWaapiUri)" },
		{ "ModuleRelativePath", "Classes/AkWaapiBlueprints/AkWaapiUri.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Converts an AkWaapiUri value to a localizable text" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkWaapiUriConv, nullptr, "Conv_FAkWaapiUriToText", nullptr, nullptr, Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToText_Statics::AkWaapiUriConv_eventConv_FAkWaapiUriToText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToText_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToText_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToText_Statics::AkWaapiUriConv_eventConv_FAkWaapiUriToText_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkWaapiUriConv);
	UClass* Z_Construct_UClass_UAkWaapiUriConv_NoRegister()
	{
		return UAkWaapiUriConv::StaticClass();
	}
	struct Z_Construct_UClass_UAkWaapiUriConv_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkWaapiUriConv_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkWaapiUriConv_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAkWaapiUriConv_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToString, "Conv_FAkWaapiUriToString" }, // 254510846
		{ &Z_Construct_UFunction_UAkWaapiUriConv_Conv_FAkWaapiUriToText, "Conv_FAkWaapiUriToText" }, // 2623432590
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkWaapiUriConv_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkWaapiUriConv_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*------------------------------------------------------------------------------------\nUAkWaapiUriConv\n------------------------------------------------------------------------------------*/" },
#endif
		{ "IncludePath", "AkWaapiBlueprints/AkWaapiUri.h" },
		{ "ModuleRelativePath", "Classes/AkWaapiBlueprints/AkWaapiUri.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UAkWaapiUriConv" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkWaapiUriConv_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkWaapiUriConv>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkWaapiUriConv_Statics::ClassParams = {
		&UAkWaapiUriConv::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkWaapiUriConv_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkWaapiUriConv_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAkWaapiUriConv()
	{
		if (!Z_Registration_Info_UClass_UAkWaapiUriConv.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkWaapiUriConv.OuterSingleton, Z_Construct_UClass_UAkWaapiUriConv_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkWaapiUriConv.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkWaapiUriConv>()
	{
		return UAkWaapiUriConv::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkWaapiUriConv);
	UAkWaapiUriConv::~UAkWaapiUriConv() {}
	struct Z_CompiledInDeferFile_FID_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiUri_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiUri_h_Statics::ScriptStructInfo[] = {
		{ FAkWaapiUri::StaticStruct, Z_Construct_UScriptStruct_FAkWaapiUri_Statics::NewStructOps, TEXT("AkWaapiUri"), &Z_Registration_Info_UScriptStruct_AkWaapiUri, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkWaapiUri), 993998359U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiUri_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAkWaapiUriConv, UAkWaapiUriConv::StaticClass, TEXT("UAkWaapiUriConv"), &Z_Registration_Info_UClass_UAkWaapiUriConv, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkWaapiUriConv), 307133839U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiUri_h_4068299291(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiUri_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiUri_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiUri_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiUri_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
