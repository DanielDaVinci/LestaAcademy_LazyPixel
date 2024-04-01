// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkWaapiBlueprints/AkWaapiJsonManager.h"
#include "AkAudio/Classes/AkWaapiBlueprints/AkWaapiFieldNames.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkWaapiJsonManager() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkWaapiJsonManager();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkWaapiJsonManager_NoRegister();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkWaapiFieldNames();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAKWaapiJsonObject();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AKWaapiJsonObject;
class UScriptStruct* FAKWaapiJsonObject::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AKWaapiJsonObject.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AKWaapiJsonObject.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAKWaapiJsonObject, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AKWaapiJsonObject"));
	}
	return Z_Registration_Info_UScriptStruct_AKWaapiJsonObject.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAKWaapiJsonObject>()
{
	return FAKWaapiJsonObject::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAKWaapiJsonObject_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAKWaapiJsonObject_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AkWaapiBlueprints/AkWaapiJsonManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAKWaapiJsonObject_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAKWaapiJsonObject>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAKWaapiJsonObject_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AKWaapiJsonObject",
		nullptr,
		0,
		sizeof(FAKWaapiJsonObject),
		alignof(FAKWaapiJsonObject),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAKWaapiJsonObject_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAKWaapiJsonObject_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAKWaapiJsonObject()
	{
		if (!Z_Registration_Info_UScriptStruct_AKWaapiJsonObject.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AKWaapiJsonObject.InnerSingleton, Z_Construct_UScriptStruct_FAKWaapiJsonObject_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AKWaapiJsonObject.InnerSingleton;
	}
	DEFINE_FUNCTION(UAkWaapiJsonManager::execConv_FAKWaapiJsonObjectToText)
	{
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_INAKWaapiJsonObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UAkWaapiJsonManager::Conv_FAKWaapiJsonObjectToText(Z_Param_INAKWaapiJsonObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkWaapiJsonManager::execConv_FAKWaapiJsonObjectToString)
	{
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_INAKWaapiJsonObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UAkWaapiJsonManager::Conv_FAKWaapiJsonObjectToString(Z_Param_INAKWaapiJsonObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkWaapiJsonManager::execGetArrayField)
	{
		P_GET_STRUCT_REF(FAkWaapiFieldNames,Z_Param_Out_FieldName);
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_target);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FAKWaapiJsonObject>*)Z_Param__Result=UAkWaapiJsonManager::GetArrayField(Z_Param_Out_FieldName,Z_Param_target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkWaapiJsonManager::execGetObjectField)
	{
		P_GET_STRUCT_REF(FAkWaapiFieldNames,Z_Param_Out_FieldName);
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_target);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAKWaapiJsonObject*)Z_Param__Result=UAkWaapiJsonManager::GetObjectField(Z_Param_Out_FieldName,Z_Param_target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkWaapiJsonManager::execGetIntegerField)
	{
		P_GET_STRUCT_REF(FAkWaapiFieldNames,Z_Param_Out_FieldName);
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_target);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UAkWaapiJsonManager::GetIntegerField(Z_Param_Out_FieldName,Z_Param_target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkWaapiJsonManager::execGetNumberField)
	{
		P_GET_STRUCT_REF(FAkWaapiFieldNames,Z_Param_Out_FieldName);
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_target);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UAkWaapiJsonManager::GetNumberField(Z_Param_Out_FieldName,Z_Param_target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkWaapiJsonManager::execGetBoolField)
	{
		P_GET_STRUCT_REF(FAkWaapiFieldNames,Z_Param_Out_FieldName);
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_target);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAkWaapiJsonManager::GetBoolField(Z_Param_Out_FieldName,Z_Param_target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkWaapiJsonManager::execGetStringField)
	{
		P_GET_STRUCT_REF(FAkWaapiFieldNames,Z_Param_Out_FieldName);
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_target);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UAkWaapiJsonManager::GetStringField(Z_Param_Out_FieldName,Z_Param_target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkWaapiJsonManager::execSetArrayObjectFields)
	{
		P_GET_STRUCT_REF(FAkWaapiFieldNames,Z_Param_Out_FieldName);
		P_GET_TARRAY_REF(FAKWaapiJsonObject,Z_Param_Out_FieldObjectValues);
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_target);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAKWaapiJsonObject*)Z_Param__Result=UAkWaapiJsonManager::SetArrayObjectFields(Z_Param_Out_FieldName,Z_Param_Out_FieldObjectValues,Z_Param_target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkWaapiJsonManager::execSetArrayStringFields)
	{
		P_GET_STRUCT_REF(FAkWaapiFieldNames,Z_Param_Out_FieldName);
		P_GET_TARRAY_REF(FString,Z_Param_Out_FieldStringValues);
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_target);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAKWaapiJsonObject*)Z_Param__Result=UAkWaapiJsonManager::SetArrayStringFields(Z_Param_Out_FieldName,Z_Param_Out_FieldStringValues,Z_Param_target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkWaapiJsonManager::execSetObjectField)
	{
		P_GET_STRUCT_REF(FAkWaapiFieldNames,Z_Param_Out_FieldName);
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_FieldValue);
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_target);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAKWaapiJsonObject*)Z_Param__Result=UAkWaapiJsonManager::SetObjectField(Z_Param_Out_FieldName,Z_Param_FieldValue,Z_Param_target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkWaapiJsonManager::execSetNumberField)
	{
		P_GET_STRUCT_REF(FAkWaapiFieldNames,Z_Param_Out_FieldName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FieldValue);
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_target);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAKWaapiJsonObject*)Z_Param__Result=UAkWaapiJsonManager::SetNumberField(Z_Param_Out_FieldName,Z_Param_FieldValue,Z_Param_target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkWaapiJsonManager::execSetBoolField)
	{
		P_GET_STRUCT_REF(FAkWaapiFieldNames,Z_Param_Out_FieldName);
		P_GET_UBOOL(Z_Param_FieldValue);
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_target);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAKWaapiJsonObject*)Z_Param__Result=UAkWaapiJsonManager::SetBoolField(Z_Param_Out_FieldName,Z_Param_FieldValue,Z_Param_target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkWaapiJsonManager::execSetStringField)
	{
		P_GET_STRUCT_REF(FAkWaapiFieldNames,Z_Param_Out_FieldName);
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldValue);
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_target);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAKWaapiJsonObject*)Z_Param__Result=UAkWaapiJsonManager::SetStringField(Z_Param_Out_FieldName,Z_Param_FieldValue,Z_Param_target);
		P_NATIVE_END;
	}
	void UAkWaapiJsonManager::StaticRegisterNativesUAkWaapiJsonManager()
	{
		UClass* Class = UAkWaapiJsonManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Conv_FAKWaapiJsonObjectToString", &UAkWaapiJsonManager::execConv_FAKWaapiJsonObjectToString },
			{ "Conv_FAKWaapiJsonObjectToText", &UAkWaapiJsonManager::execConv_FAKWaapiJsonObjectToText },
			{ "GetArrayField", &UAkWaapiJsonManager::execGetArrayField },
			{ "GetBoolField", &UAkWaapiJsonManager::execGetBoolField },
			{ "GetIntegerField", &UAkWaapiJsonManager::execGetIntegerField },
			{ "GetNumberField", &UAkWaapiJsonManager::execGetNumberField },
			{ "GetObjectField", &UAkWaapiJsonManager::execGetObjectField },
			{ "GetStringField", &UAkWaapiJsonManager::execGetStringField },
			{ "SetArrayObjectFields", &UAkWaapiJsonManager::execSetArrayObjectFields },
			{ "SetArrayStringFields", &UAkWaapiJsonManager::execSetArrayStringFields },
			{ "SetBoolField", &UAkWaapiJsonManager::execSetBoolField },
			{ "SetNumberField", &UAkWaapiJsonManager::execSetNumberField },
			{ "SetObjectField", &UAkWaapiJsonManager::execSetObjectField },
			{ "SetStringField", &UAkWaapiJsonManager::execSetStringField },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToString_Statics
	{
		struct AkWaapiJsonManager_eventConv_FAKWaapiJsonObjectToString_Parms
		{
			FAKWaapiJsonObject INAKWaapiJsonObject;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_INAKWaapiJsonObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToString_Statics::NewProp_INAKWaapiJsonObject = { "INAKWaapiJsonObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventConv_FAKWaapiJsonObjectToString_Parms, INAKWaapiJsonObject), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(0, nullptr) }; // 1009766799
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventConv_FAKWaapiJsonObjectToString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToString_Statics::NewProp_INAKWaapiJsonObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToString_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|String" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Converts an AKWaapiJsonObject value to a string */" },
#endif
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToString (FAKWaapiJsonObject)" },
		{ "ModuleRelativePath", "Classes/AkWaapiBlueprints/AkWaapiJsonManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Converts an AKWaapiJsonObject value to a string" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkWaapiJsonManager, nullptr, "Conv_FAKWaapiJsonObjectToString", nullptr, nullptr, Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToString_Statics::AkWaapiJsonManager_eventConv_FAKWaapiJsonObjectToString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToString_Statics::AkWaapiJsonManager_eventConv_FAKWaapiJsonObjectToString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToText_Statics
	{
		struct AkWaapiJsonManager_eventConv_FAKWaapiJsonObjectToText_Parms
		{
			FAKWaapiJsonObject INAKWaapiJsonObject;
			FText ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_INAKWaapiJsonObject;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToText_Statics::NewProp_INAKWaapiJsonObject = { "INAKWaapiJsonObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventConv_FAKWaapiJsonObjectToText_Parms, INAKWaapiJsonObject), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(0, nullptr) }; // 1009766799
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventConv_FAKWaapiJsonObjectToText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToText_Statics::NewProp_INAKWaapiJsonObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToText_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|Text" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Converts an AKWaapiJsonObject value to a localizable text */" },
#endif
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToText (FAKWaapiJsonObject)" },
		{ "ModuleRelativePath", "Classes/AkWaapiBlueprints/AkWaapiJsonManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Converts an AKWaapiJsonObject value to a localizable text" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkWaapiJsonManager, nullptr, "Conv_FAKWaapiJsonObjectToText", nullptr, nullptr, Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToText_Statics::AkWaapiJsonManager_eventConv_FAKWaapiJsonObjectToText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToText_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToText_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToText_Statics::AkWaapiJsonManager_eventConv_FAKWaapiJsonObjectToText_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField_Statics
	{
		struct AkWaapiJsonManager_eventGetArrayField_Parms
		{
			FAkWaapiFieldNames FieldName;
			FAKWaapiJsonObject target;
			TArray<FAKWaapiJsonObject> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FieldName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_target;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventGetArrayField_Parms, FieldName), Z_Construct_UScriptStruct_FAkWaapiFieldNames, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField_Statics::NewProp_FieldName_MetaData), Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField_Statics::NewProp_FieldName_MetaData) }; // 1632355460
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventGetArrayField_Parms, target), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(0, nullptr) }; // 1009766799
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(0, nullptr) }; // 1009766799
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventGetArrayField_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField_Statics::NewProp_ReturnValue_MetaData) }; // 1009766799
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField_Statics::NewProp_FieldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField_Statics::NewProp_target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|WaapiJsonManager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the field named FieldName as an array. */" },
#endif
		{ "ModuleRelativePath", "Classes/AkWaapiBlueprints/AkWaapiJsonManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the field named FieldName as an array." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkWaapiJsonManager, nullptr, "GetArrayField", nullptr, nullptr, Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField_Statics::AkWaapiJsonManager_eventGetArrayField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField_Statics::AkWaapiJsonManager_eventGetArrayField_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkWaapiJsonManager_GetBoolField_Statics
	{
		struct AkWaapiJsonManager_eventGetBoolField_Parms
		{
			FAkWaapiFieldNames FieldName;
			FAKWaapiJsonObject target;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FieldName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_target;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_GetBoolField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_GetBoolField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventGetBoolField_Parms, FieldName), Z_Construct_UScriptStruct_FAkWaapiFieldNames, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_GetBoolField_Statics::NewProp_FieldName_MetaData), Z_Construct_UFunction_UAkWaapiJsonManager_GetBoolField_Statics::NewProp_FieldName_MetaData) }; // 1632355460
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_GetBoolField_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventGetBoolField_Parms, target), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(0, nullptr) }; // 1009766799
	void Z_Construct_UFunction_UAkWaapiJsonManager_GetBoolField_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AkWaapiJsonManager_eventGetBoolField_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_GetBoolField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AkWaapiJsonManager_eventGetBoolField_Parms), &Z_Construct_UFunction_UAkWaapiJsonManager_GetBoolField_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkWaapiJsonManager_GetBoolField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_GetBoolField_Statics::NewProp_FieldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_GetBoolField_Statics::NewProp_target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_GetBoolField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_GetBoolField_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|WaapiJsonManager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the field with the specified name as a boolean. */" },
#endif
		{ "ModuleRelativePath", "Classes/AkWaapiBlueprints/AkWaapiJsonManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the field with the specified name as a boolean." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkWaapiJsonManager_GetBoolField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkWaapiJsonManager, nullptr, "GetBoolField", nullptr, nullptr, Z_Construct_UFunction_UAkWaapiJsonManager_GetBoolField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_GetBoolField_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkWaapiJsonManager_GetBoolField_Statics::AkWaapiJsonManager_eventGetBoolField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_GetBoolField_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkWaapiJsonManager_GetBoolField_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_GetBoolField_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkWaapiJsonManager_GetBoolField_Statics::AkWaapiJsonManager_eventGetBoolField_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_GetBoolField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkWaapiJsonManager_GetBoolField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkWaapiJsonManager_GetIntegerField_Statics
	{
		struct AkWaapiJsonManager_eventGetIntegerField_Parms
		{
			FAkWaapiFieldNames FieldName;
			FAKWaapiJsonObject target;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FieldName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_target;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_GetIntegerField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_GetIntegerField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventGetIntegerField_Parms, FieldName), Z_Construct_UScriptStruct_FAkWaapiFieldNames, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_GetIntegerField_Statics::NewProp_FieldName_MetaData), Z_Construct_UFunction_UAkWaapiJsonManager_GetIntegerField_Statics::NewProp_FieldName_MetaData) }; // 1632355460
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_GetIntegerField_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventGetIntegerField_Parms, target), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(0, nullptr) }; // 1009766799
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_GetIntegerField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventGetIntegerField_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkWaapiJsonManager_GetIntegerField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_GetIntegerField_Statics::NewProp_FieldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_GetIntegerField_Statics::NewProp_target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_GetIntegerField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_GetIntegerField_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|WaapiJsonManager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets a numeric field and casts to an int32 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkWaapiBlueprints/AkWaapiJsonManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets a numeric field and casts to an int32" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkWaapiJsonManager_GetIntegerField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkWaapiJsonManager, nullptr, "GetIntegerField", nullptr, nullptr, Z_Construct_UFunction_UAkWaapiJsonManager_GetIntegerField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_GetIntegerField_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkWaapiJsonManager_GetIntegerField_Statics::AkWaapiJsonManager_eventGetIntegerField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_GetIntegerField_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkWaapiJsonManager_GetIntegerField_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_GetIntegerField_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkWaapiJsonManager_GetIntegerField_Statics::AkWaapiJsonManager_eventGetIntegerField_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_GetIntegerField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkWaapiJsonManager_GetIntegerField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkWaapiJsonManager_GetNumberField_Statics
	{
		struct AkWaapiJsonManager_eventGetNumberField_Parms
		{
			FAkWaapiFieldNames FieldName;
			FAKWaapiJsonObject target;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FieldName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_target;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_GetNumberField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_GetNumberField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventGetNumberField_Parms, FieldName), Z_Construct_UScriptStruct_FAkWaapiFieldNames, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_GetNumberField_Statics::NewProp_FieldName_MetaData), Z_Construct_UFunction_UAkWaapiJsonManager_GetNumberField_Statics::NewProp_FieldName_MetaData) }; // 1632355460
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_GetNumberField_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventGetNumberField_Parms, target), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(0, nullptr) }; // 1009766799
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_GetNumberField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventGetNumberField_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkWaapiJsonManager_GetNumberField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_GetNumberField_Statics::NewProp_FieldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_GetNumberField_Statics::NewProp_target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_GetNumberField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_GetNumberField_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|WaapiJsonManager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the field with the specified name as a number. */" },
#endif
		{ "ModuleRelativePath", "Classes/AkWaapiBlueprints/AkWaapiJsonManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the field with the specified name as a number." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkWaapiJsonManager_GetNumberField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkWaapiJsonManager, nullptr, "GetNumberField", nullptr, nullptr, Z_Construct_UFunction_UAkWaapiJsonManager_GetNumberField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_GetNumberField_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkWaapiJsonManager_GetNumberField_Statics::AkWaapiJsonManager_eventGetNumberField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_GetNumberField_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkWaapiJsonManager_GetNumberField_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_GetNumberField_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkWaapiJsonManager_GetNumberField_Statics::AkWaapiJsonManager_eventGetNumberField_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_GetNumberField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkWaapiJsonManager_GetNumberField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkWaapiJsonManager_GetObjectField_Statics
	{
		struct AkWaapiJsonManager_eventGetObjectField_Parms
		{
			FAkWaapiFieldNames FieldName;
			FAKWaapiJsonObject target;
			FAKWaapiJsonObject ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FieldName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_target;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_GetObjectField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_GetObjectField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventGetObjectField_Parms, FieldName), Z_Construct_UScriptStruct_FAkWaapiFieldNames, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_GetObjectField_Statics::NewProp_FieldName_MetaData), Z_Construct_UFunction_UAkWaapiJsonManager_GetObjectField_Statics::NewProp_FieldName_MetaData) }; // 1632355460
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_GetObjectField_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventGetObjectField_Parms, target), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(0, nullptr) }; // 1009766799
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_GetObjectField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventGetObjectField_Parms, ReturnValue), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(0, nullptr) }; // 1009766799
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkWaapiJsonManager_GetObjectField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_GetObjectField_Statics::NewProp_FieldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_GetObjectField_Statics::NewProp_target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_GetObjectField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_GetObjectField_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|WaapiJsonManager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the field with the specified name as a Json object. */" },
#endif
		{ "ModuleRelativePath", "Classes/AkWaapiBlueprints/AkWaapiJsonManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the field with the specified name as a Json object." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkWaapiJsonManager_GetObjectField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkWaapiJsonManager, nullptr, "GetObjectField", nullptr, nullptr, Z_Construct_UFunction_UAkWaapiJsonManager_GetObjectField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_GetObjectField_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkWaapiJsonManager_GetObjectField_Statics::AkWaapiJsonManager_eventGetObjectField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_GetObjectField_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkWaapiJsonManager_GetObjectField_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_GetObjectField_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkWaapiJsonManager_GetObjectField_Statics::AkWaapiJsonManager_eventGetObjectField_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_GetObjectField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkWaapiJsonManager_GetObjectField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkWaapiJsonManager_GetStringField_Statics
	{
		struct AkWaapiJsonManager_eventGetStringField_Parms
		{
			FAkWaapiFieldNames FieldName;
			FAKWaapiJsonObject target;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FieldName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_target;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_GetStringField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_GetStringField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventGetStringField_Parms, FieldName), Z_Construct_UScriptStruct_FAkWaapiFieldNames, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_GetStringField_Statics::NewProp_FieldName_MetaData), Z_Construct_UFunction_UAkWaapiJsonManager_GetStringField_Statics::NewProp_FieldName_MetaData) }; // 1632355460
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_GetStringField_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventGetStringField_Parms, target), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(0, nullptr) }; // 1009766799
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_GetStringField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventGetStringField_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkWaapiJsonManager_GetStringField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_GetStringField_Statics::NewProp_FieldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_GetStringField_Statics::NewProp_target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_GetStringField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_GetStringField_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|WaapiJsonManager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the field named FieldName as a string. */" },
#endif
		{ "ModuleRelativePath", "Classes/AkWaapiBlueprints/AkWaapiJsonManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the field named FieldName as a string." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkWaapiJsonManager_GetStringField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkWaapiJsonManager, nullptr, "GetStringField", nullptr, nullptr, Z_Construct_UFunction_UAkWaapiJsonManager_GetStringField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_GetStringField_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkWaapiJsonManager_GetStringField_Statics::AkWaapiJsonManager_eventGetStringField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_GetStringField_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkWaapiJsonManager_GetStringField_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_GetStringField_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkWaapiJsonManager_GetStringField_Statics::AkWaapiJsonManager_eventGetStringField_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_GetStringField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkWaapiJsonManager_GetStringField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields_Statics
	{
		struct AkWaapiJsonManager_eventSetArrayObjectFields_Parms
		{
			FAkWaapiFieldNames FieldName;
			TArray<FAKWaapiJsonObject> FieldObjectValues;
			FAKWaapiJsonObject target;
			FAKWaapiJsonObject ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FieldName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FieldObjectValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldObjectValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FieldObjectValues;
		static const UECodeGen_Private::FStructPropertyParams NewProp_target;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventSetArrayObjectFields_Parms, FieldName), Z_Construct_UScriptStruct_FAkWaapiFieldNames, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields_Statics::NewProp_FieldName_MetaData), Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields_Statics::NewProp_FieldName_MetaData) }; // 1632355460
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields_Statics::NewProp_FieldObjectValues_Inner = { "FieldObjectValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(0, nullptr) }; // 1009766799
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields_Statics::NewProp_FieldObjectValues_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields_Statics::NewProp_FieldObjectValues = { "FieldObjectValues", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventSetArrayObjectFields_Parms, FieldObjectValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields_Statics::NewProp_FieldObjectValues_MetaData), Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields_Statics::NewProp_FieldObjectValues_MetaData) }; // 1009766799
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventSetArrayObjectFields_Parms, target), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(0, nullptr) }; // 1009766799
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventSetArrayObjectFields_Parms, ReturnValue), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(0, nullptr) }; // 1009766799
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields_Statics::NewProp_FieldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields_Statics::NewProp_FieldObjectValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields_Statics::NewProp_FieldObjectValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields_Statics::NewProp_target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|WaapiJsonManager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set an array of ObjectField named FieldName and value of FieldObjectValues */" },
#endif
		{ "ModuleRelativePath", "Classes/AkWaapiBlueprints/AkWaapiJsonManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set an array of ObjectField named FieldName and value of FieldObjectValues" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkWaapiJsonManager, nullptr, "SetArrayObjectFields", nullptr, nullptr, Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields_Statics::AkWaapiJsonManager_eventSetArrayObjectFields_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields_Statics::AkWaapiJsonManager_eventSetArrayObjectFields_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields_Statics
	{
		struct AkWaapiJsonManager_eventSetArrayStringFields_Parms
		{
			FAkWaapiFieldNames FieldName;
			TArray<FString> FieldStringValues;
			FAKWaapiJsonObject target;
			FAKWaapiJsonObject ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FieldName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FieldStringValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldStringValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FieldStringValues;
		static const UECodeGen_Private::FStructPropertyParams NewProp_target;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventSetArrayStringFields_Parms, FieldName), Z_Construct_UScriptStruct_FAkWaapiFieldNames, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields_Statics::NewProp_FieldName_MetaData), Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields_Statics::NewProp_FieldName_MetaData) }; // 1632355460
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields_Statics::NewProp_FieldStringValues_Inner = { "FieldStringValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields_Statics::NewProp_FieldStringValues_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields_Statics::NewProp_FieldStringValues = { "FieldStringValues", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventSetArrayStringFields_Parms, FieldStringValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields_Statics::NewProp_FieldStringValues_MetaData), Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields_Statics::NewProp_FieldStringValues_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventSetArrayStringFields_Parms, target), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(0, nullptr) }; // 1009766799
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventSetArrayStringFields_Parms, ReturnValue), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(0, nullptr) }; // 1009766799
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields_Statics::NewProp_FieldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields_Statics::NewProp_FieldStringValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields_Statics::NewProp_FieldStringValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields_Statics::NewProp_target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|WaapiJsonManager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Add an array of String field named FieldName with value of FieldStringValues */" },
#endif
		{ "ModuleRelativePath", "Classes/AkWaapiBlueprints/AkWaapiJsonManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add an array of String field named FieldName with value of FieldStringValues" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkWaapiJsonManager, nullptr, "SetArrayStringFields", nullptr, nullptr, Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields_Statics::AkWaapiJsonManager_eventSetArrayStringFields_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields_Statics::AkWaapiJsonManager_eventSetArrayStringFields_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField_Statics
	{
		struct AkWaapiJsonManager_eventSetBoolField_Parms
		{
			FAkWaapiFieldNames FieldName;
			bool FieldValue;
			FAKWaapiJsonObject target;
			FAKWaapiJsonObject ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FieldName;
		static void NewProp_FieldValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_FieldValue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_target;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventSetBoolField_Parms, FieldName), Z_Construct_UScriptStruct_FAkWaapiFieldNames, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField_Statics::NewProp_FieldName_MetaData), Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField_Statics::NewProp_FieldName_MetaData) }; // 1632355460
	void Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField_Statics::NewProp_FieldValue_SetBit(void* Obj)
	{
		((AkWaapiJsonManager_eventSetBoolField_Parms*)Obj)->FieldValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField_Statics::NewProp_FieldValue = { "FieldValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AkWaapiJsonManager_eventSetBoolField_Parms), &Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField_Statics::NewProp_FieldValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventSetBoolField_Parms, target), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(0, nullptr) }; // 1009766799
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventSetBoolField_Parms, ReturnValue), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(0, nullptr) }; // 1009766799
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField_Statics::NewProp_FieldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField_Statics::NewProp_FieldValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField_Statics::NewProp_target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|WaapiJsonManager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set a boolean field named FieldName and value of FieldValue */" },
#endif
		{ "ModuleRelativePath", "Classes/AkWaapiBlueprints/AkWaapiJsonManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set a boolean field named FieldName and value of FieldValue" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkWaapiJsonManager, nullptr, "SetBoolField", nullptr, nullptr, Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField_Statics::AkWaapiJsonManager_eventSetBoolField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField_Statics::AkWaapiJsonManager_eventSetBoolField_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkWaapiJsonManager_SetNumberField_Statics
	{
		struct AkWaapiJsonManager_eventSetNumberField_Parms
		{
			FAkWaapiFieldNames FieldName;
			float FieldValue;
			FAKWaapiJsonObject target;
			FAKWaapiJsonObject ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FieldName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FieldValue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_target;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_SetNumberField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_SetNumberField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventSetNumberField_Parms, FieldName), Z_Construct_UScriptStruct_FAkWaapiFieldNames, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_SetNumberField_Statics::NewProp_FieldName_MetaData), Z_Construct_UFunction_UAkWaapiJsonManager_SetNumberField_Statics::NewProp_FieldName_MetaData) }; // 1632355460
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_SetNumberField_Statics::NewProp_FieldValue = { "FieldValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventSetNumberField_Parms, FieldValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_SetNumberField_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventSetNumberField_Parms, target), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(0, nullptr) }; // 1009766799
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_SetNumberField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventSetNumberField_Parms, ReturnValue), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(0, nullptr) }; // 1009766799
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkWaapiJsonManager_SetNumberField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_SetNumberField_Statics::NewProp_FieldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_SetNumberField_Statics::NewProp_FieldValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_SetNumberField_Statics::NewProp_target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_SetNumberField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_SetNumberField_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|WaapiJsonManager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Add a field named FieldName with Number as FieldValue */" },
#endif
		{ "ModuleRelativePath", "Classes/AkWaapiBlueprints/AkWaapiJsonManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add a field named FieldName with Number as FieldValue" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkWaapiJsonManager_SetNumberField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkWaapiJsonManager, nullptr, "SetNumberField", nullptr, nullptr, Z_Construct_UFunction_UAkWaapiJsonManager_SetNumberField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_SetNumberField_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkWaapiJsonManager_SetNumberField_Statics::AkWaapiJsonManager_eventSetNumberField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_SetNumberField_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkWaapiJsonManager_SetNumberField_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_SetNumberField_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkWaapiJsonManager_SetNumberField_Statics::AkWaapiJsonManager_eventSetNumberField_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_SetNumberField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkWaapiJsonManager_SetNumberField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkWaapiJsonManager_SetObjectField_Statics
	{
		struct AkWaapiJsonManager_eventSetObjectField_Parms
		{
			FAkWaapiFieldNames FieldName;
			FAKWaapiJsonObject FieldValue;
			FAKWaapiJsonObject target;
			FAKWaapiJsonObject ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FieldName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FieldValue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_target;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_SetObjectField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_SetObjectField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventSetObjectField_Parms, FieldName), Z_Construct_UScriptStruct_FAkWaapiFieldNames, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_SetObjectField_Statics::NewProp_FieldName_MetaData), Z_Construct_UFunction_UAkWaapiJsonManager_SetObjectField_Statics::NewProp_FieldName_MetaData) }; // 1632355460
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_SetObjectField_Statics::NewProp_FieldValue = { "FieldValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventSetObjectField_Parms, FieldValue), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(0, nullptr) }; // 1009766799
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_SetObjectField_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventSetObjectField_Parms, target), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(0, nullptr) }; // 1009766799
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_SetObjectField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventSetObjectField_Parms, ReturnValue), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(0, nullptr) }; // 1009766799
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkWaapiJsonManager_SetObjectField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_SetObjectField_Statics::NewProp_FieldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_SetObjectField_Statics::NewProp_FieldValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_SetObjectField_Statics::NewProp_target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_SetObjectField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_SetObjectField_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|WaapiJsonManager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set an ObjectField named FieldName and value of FieldValue */" },
#endif
		{ "ModuleRelativePath", "Classes/AkWaapiBlueprints/AkWaapiJsonManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set an ObjectField named FieldName and value of FieldValue" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkWaapiJsonManager_SetObjectField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkWaapiJsonManager, nullptr, "SetObjectField", nullptr, nullptr, Z_Construct_UFunction_UAkWaapiJsonManager_SetObjectField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_SetObjectField_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkWaapiJsonManager_SetObjectField_Statics::AkWaapiJsonManager_eventSetObjectField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_SetObjectField_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkWaapiJsonManager_SetObjectField_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_SetObjectField_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkWaapiJsonManager_SetObjectField_Statics::AkWaapiJsonManager_eventSetObjectField_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_SetObjectField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkWaapiJsonManager_SetObjectField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField_Statics
	{
		struct AkWaapiJsonManager_eventSetStringField_Parms
		{
			FAkWaapiFieldNames FieldName;
			FString FieldValue;
			FAKWaapiJsonObject target;
			FAKWaapiJsonObject ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FieldName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FieldValue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_target;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventSetStringField_Parms, FieldName), Z_Construct_UScriptStruct_FAkWaapiFieldNames, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField_Statics::NewProp_FieldName_MetaData), Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField_Statics::NewProp_FieldName_MetaData) }; // 1632355460
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField_Statics::NewProp_FieldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField_Statics::NewProp_FieldValue = { "FieldValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventSetStringField_Parms, FieldValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField_Statics::NewProp_FieldValue_MetaData), Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField_Statics::NewProp_FieldValue_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventSetStringField_Parms, target), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(0, nullptr) }; // 1009766799
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkWaapiJsonManager_eventSetStringField_Parms, ReturnValue), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(0, nullptr) }; // 1009766799
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField_Statics::NewProp_FieldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField_Statics::NewProp_FieldValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField_Statics::NewProp_target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|WaapiJsonManager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Add a String field named FieldName with value of FieldValue */" },
#endif
		{ "ModuleRelativePath", "Classes/AkWaapiBlueprints/AkWaapiJsonManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add a String field named FieldName with value of FieldValue" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkWaapiJsonManager, nullptr, "SetStringField", nullptr, nullptr, Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField_Statics::AkWaapiJsonManager_eventSetStringField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField_Statics::AkWaapiJsonManager_eventSetStringField_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkWaapiJsonManager);
	UClass* Z_Construct_UClass_UAkWaapiJsonManager_NoRegister()
	{
		return UAkWaapiJsonManager::StaticClass();
	}
	struct Z_Construct_UClass_UAkWaapiJsonManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkWaapiJsonManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkWaapiJsonManager_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAkWaapiJsonManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToString, "Conv_FAKWaapiJsonObjectToString" }, // 2557259131
		{ &Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToText, "Conv_FAKWaapiJsonObjectToText" }, // 1939698989
		{ &Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField, "GetArrayField" }, // 3622918523
		{ &Z_Construct_UFunction_UAkWaapiJsonManager_GetBoolField, "GetBoolField" }, // 1400652036
		{ &Z_Construct_UFunction_UAkWaapiJsonManager_GetIntegerField, "GetIntegerField" }, // 3699644664
		{ &Z_Construct_UFunction_UAkWaapiJsonManager_GetNumberField, "GetNumberField" }, // 1125523547
		{ &Z_Construct_UFunction_UAkWaapiJsonManager_GetObjectField, "GetObjectField" }, // 3799915725
		{ &Z_Construct_UFunction_UAkWaapiJsonManager_GetStringField, "GetStringField" }, // 598287298
		{ &Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields, "SetArrayObjectFields" }, // 4212641559
		{ &Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields, "SetArrayStringFields" }, // 1395952215
		{ &Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField, "SetBoolField" }, // 2625248613
		{ &Z_Construct_UFunction_UAkWaapiJsonManager_SetNumberField, "SetNumberField" }, // 4091384254
		{ &Z_Construct_UFunction_UAkWaapiJsonManager_SetObjectField, "SetObjectField" }, // 1055947413
		{ &Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField, "SetStringField" }, // 1697903976
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkWaapiJsonManager_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkWaapiJsonManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AkWaapiBlueprints/AkWaapiJsonManager.h" },
		{ "ModuleRelativePath", "Classes/AkWaapiBlueprints/AkWaapiJsonManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkWaapiJsonManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkWaapiJsonManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkWaapiJsonManager_Statics::ClassParams = {
		&UAkWaapiJsonManager::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkWaapiJsonManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkWaapiJsonManager_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAkWaapiJsonManager()
	{
		if (!Z_Registration_Info_UClass_UAkWaapiJsonManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkWaapiJsonManager.OuterSingleton, Z_Construct_UClass_UAkWaapiJsonManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkWaapiJsonManager.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkWaapiJsonManager>()
	{
		return UAkWaapiJsonManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkWaapiJsonManager);
	UAkWaapiJsonManager::~UAkWaapiJsonManager() {}
	struct Z_CompiledInDeferFile_FID_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiJsonManager_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiJsonManager_h_Statics::ScriptStructInfo[] = {
		{ FAKWaapiJsonObject::StaticStruct, Z_Construct_UScriptStruct_FAKWaapiJsonObject_Statics::NewStructOps, TEXT("AKWaapiJsonObject"), &Z_Registration_Info_UScriptStruct_AKWaapiJsonObject, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAKWaapiJsonObject), 1009766799U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiJsonManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAkWaapiJsonManager, UAkWaapiJsonManager::StaticClass, TEXT("UAkWaapiJsonManager"), &Z_Registration_Info_UClass_UAkWaapiJsonManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkWaapiJsonManager), 4054312123U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiJsonManager_h_838537072(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiJsonManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiJsonManager_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiJsonManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiJsonManager_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
