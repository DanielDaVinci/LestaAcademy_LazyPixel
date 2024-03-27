// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkGameObject.h"
#include "../../Source/Runtime/Engine/Classes/Engine/LatentActionManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkGameObject() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkGameObject();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkGameObject_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkRtpc_NoRegister();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_ERTPCValueType();
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	DEFINE_FUNCTION(UAkGameObject::execGetRTPCValue)
	{
		P_GET_OBJECT(UAkRtpc,Z_Param_RTPCValue);
		P_GET_ENUM(ERTPCValueType,Z_Param_InputValueType);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Value);
		P_GET_ENUM_REF(ERTPCValueType,Z_Param_Out_OutputValueType);
		P_GET_PROPERTY(FStrProperty,Z_Param_RTPC);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayingID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetRTPCValue(Z_Param_RTPCValue,ERTPCValueType(Z_Param_InputValueType),Z_Param_Out_Value,(ERTPCValueType&)(Z_Param_Out_OutputValueType),Z_Param_RTPC,Z_Param_PlayingID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameObject::execSetRTPCValue)
	{
		P_GET_OBJECT(UAkRtpc,Z_Param_RTPCValue);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_GET_PROPERTY(FIntProperty,Z_Param_InterpolationTimeMs);
		P_GET_PROPERTY(FStrProperty,Z_Param_RTPC);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRTPCValue(Z_Param_RTPCValue,Z_Param_Value,Z_Param_InterpolationTimeMs,Z_Param_RTPC);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameObject::execStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Stop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameObject::execPostAkEventAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UAkAudioEvent,Z_Param_AkEvent);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_PlayingID);
		P_GET_PROPERTY(FIntProperty,Z_Param_CallbackMask);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_PostEventCallback);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PostAkEventAsync(Z_Param_WorldContextObject,Z_Param_AkEvent,Z_Param_Out_PlayingID,Z_Param_CallbackMask,FOnAkPostEventCallback(Z_Param_Out_PostEventCallback),Z_Param_LatentInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameObject::execPostAkEvent)
	{
		P_GET_OBJECT(UAkAudioEvent,Z_Param_AkEvent);
		P_GET_PROPERTY(FIntProperty,Z_Param_CallbackMask);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_PostEventCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->PostAkEvent(Z_Param_AkEvent,Z_Param_CallbackMask,FOnAkPostEventCallback(Z_Param_Out_PostEventCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameObject::execPostAssociatedAkEventAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_CallbackMask);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_PostEventCallback);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_PlayingID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PostAssociatedAkEventAsync(Z_Param_WorldContextObject,Z_Param_CallbackMask,FOnAkPostEventCallback(Z_Param_Out_PostEventCallback),Z_Param_LatentInfo,Z_Param_Out_PlayingID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameObject::execPostAssociatedAkEvent)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_CallbackMask);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_PostEventCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->PostAssociatedAkEvent(Z_Param_CallbackMask,FOnAkPostEventCallback(Z_Param_Out_PostEventCallback));
		P_NATIVE_END;
	}
	void UAkGameObject::StaticRegisterNativesUAkGameObject()
	{
		UClass* Class = UAkGameObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRTPCValue", &UAkGameObject::execGetRTPCValue },
			{ "PostAkEvent", &UAkGameObject::execPostAkEvent },
			{ "PostAkEventAsync", &UAkGameObject::execPostAkEventAsync },
			{ "PostAssociatedAkEvent", &UAkGameObject::execPostAssociatedAkEvent },
			{ "PostAssociatedAkEventAsync", &UAkGameObject::execPostAssociatedAkEventAsync },
			{ "SetRTPCValue", &UAkGameObject::execSetRTPCValue },
			{ "Stop", &UAkGameObject::execStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics
	{
		struct AkGameObject_eventGetRTPCValue_Parms
		{
			UAkRtpc* RTPCValue;
			ERTPCValueType InputValueType;
			float Value;
			ERTPCValueType OutputValueType;
			FString RTPC;
			int32 PlayingID;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RTPCValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RTPCValue;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InputValueType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InputValueType;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutputValueType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutputValueType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_RTPC;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayingID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::NewProp_RTPCValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::NewProp_RTPCValue = { "RTPCValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventGetRTPCValue_Parms, RTPCValue), Z_Construct_UClass_UAkRtpc_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::NewProp_RTPCValue_MetaData), Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::NewProp_RTPCValue_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::NewProp_InputValueType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::NewProp_InputValueType = { "InputValueType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventGetRTPCValue_Parms, InputValueType), Z_Construct_UEnum_AkAudio_ERTPCValueType, METADATA_PARAMS(0, nullptr) }; // 1784776682
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventGetRTPCValue_Parms, Value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::NewProp_OutputValueType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::NewProp_OutputValueType = { "OutputValueType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventGetRTPCValue_Parms, OutputValueType), Z_Construct_UEnum_AkAudio_ERTPCValueType, METADATA_PARAMS(0, nullptr) }; // 1784776682
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::NewProp_RTPC = { "RTPC", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventGetRTPCValue_Parms, RTPC), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::NewProp_PlayingID = { "PlayingID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventGetRTPCValue_Parms, PlayingID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::NewProp_RTPCValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::NewProp_InputValueType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::NewProp_InputValueType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::NewProp_OutputValueType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::NewProp_OutputValueType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::NewProp_RTPC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::NewProp_PlayingID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "RTPC" },
		{ "Category", "Audiokinetic|AkGameObject" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Gets an RTPC value that was set on this game object as the game object source\n\x09*\n\x09* @param RTPC\x09\x09\x09\x09The name of the RTPC to set\n\x09* @param InputValueType\x09\x09The input value type\n\x09* @param Value\x09\x09\x09\x09The value of the RTPC\n\x09* @param OutputValueType\x09The output value type\n\x09* @param PlayingID\x09\x09\x09The playing ID of the posted event (Set to zero to ignore)\n\x09*/" },
#endif
		{ "CPP_Default_PlayingID", "0" },
		{ "ModuleRelativePath", "Classes/AkGameObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets an RTPC value that was set on this game object as the game object source\n\n@param RTPC                           The name of the RTPC to set\n@param InputValueType         The input value type\n@param Value                          The value of the RTPC\n@param OutputValueType        The output value type\n@param PlayingID                      The playing ID of the posted event (Set to zero to ignore)" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameObject, nullptr, "GetRTPCValue", nullptr, nullptr, Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::AkGameObject_eventGetRTPCValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::AkGameObject_eventGetRTPCValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkGameObject_GetRTPCValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameObject_GetRTPCValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics
	{
		struct AkGameObject_eventPostAkEvent_Parms
		{
			UAkAudioEvent* AkEvent;
			int32 CallbackMask;
			FScriptDelegate PostEventCallback;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AkEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CallbackMask_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CallbackMask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostEventCallback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_PostEventCallback;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::NewProp_AkEvent = { "AkEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventPostAkEvent_Parms, AkEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::NewProp_CallbackMask_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/AkAudio.EAkCallbackType" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::NewProp_CallbackMask = { "CallbackMask", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventPostAkEvent_Parms, CallbackMask), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::NewProp_CallbackMask_MetaData), Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::NewProp_CallbackMask_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::NewProp_PostEventCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::NewProp_PostEventCallback = { "PostEventCallback", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventPostAkEvent_Parms, PostEventCallback), Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::NewProp_PostEventCallback_MetaData), Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::NewProp_PostEventCallback_MetaData) }; // 733054327
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventPostAkEvent_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::NewProp_AkEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::NewProp_CallbackMask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::NewProp_PostEventCallback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "AutoCreateRefTerm", "PostEventCallback,ExternalSources" },
		{ "Category", "Audiokinetic|AkGameObject" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Posts an event to Wwise, using this as the game object source\n\x09 *\n\x09 * @param AkEvent\x09\x09\x09The event to post\n\x09 * @param CallbackMask\x09\x09Mask of desired callbacks\n\x09 * @param PostEventCallback\x09""Blueprint Event to execute on callback\n\x09 *\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Posts an event to Wwise, using this as the game object source\n\n@param AkEvent                       The event to post\n@param CallbackMask          Mask of desired callbacks\n@param PostEventCallback     Blueprint Event to execute on callback" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameObject, nullptr, "PostAkEvent", nullptr, nullptr, Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::AkGameObject_eventPostAkEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420408, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::AkGameObject_eventPostAkEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkGameObject_PostAkEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics
	{
		struct AkGameObject_eventPostAkEventAsync_Parms
		{
			const UObject* WorldContextObject;
			UAkAudioEvent* AkEvent;
			int32 PlayingID;
			int32 CallbackMask;
			FScriptDelegate PostEventCallback;
			FLatentActionInfo LatentInfo;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AkEvent;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayingID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CallbackMask_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CallbackMask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostEventCallback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_PostEventCallback;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventPostAkEventAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_AkEvent = { "AkEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventPostAkEventAsync_Parms, AkEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_PlayingID = { "PlayingID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventPostAkEventAsync_Parms, PlayingID), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_CallbackMask_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/AkAudio.EAkCallbackType" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_CallbackMask = { "CallbackMask", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventPostAkEventAsync_Parms, CallbackMask), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_CallbackMask_MetaData), Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_CallbackMask_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_PostEventCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_PostEventCallback = { "PostEventCallback", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventPostAkEventAsync_Parms, PostEventCallback), Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_PostEventCallback_MetaData), Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_PostEventCallback_MetaData) }; // 733054327
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventPostAkEventAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 2674470931
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_AkEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_PlayingID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_CallbackMask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_PostEventCallback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_LatentInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "AutoCreateRefTerm", "PostEventCallback,ExternalSources" },
		{ "Category", "Audiokinetic|AkGameObject" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Posts an event to Wwise, using this as the game object source\n\x09 *\n\x09 * @param AkEvent\x09\x09The event to post\n\x09 * @param CallbackMask\x09Mask of desired callbacks\n\x09 * @param PostEventCallback\x09""Blueprint Event to execute on callback\n\x09 *\n\x09 */" },
#endif
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Classes/AkGameObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Posts an event to Wwise, using this as the game object source\n\n@param AkEvent               The event to post\n@param CallbackMask  Mask of desired callbacks\n@param PostEventCallback     Blueprint Event to execute on callback" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameObject, nullptr, "PostAkEventAsync", nullptr, nullptr, Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::AkGameObject_eventPostAkEventAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420408, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::AkGameObject_eventPostAkEventAsync_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkGameObject_PostAkEventAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics
	{
		struct AkGameObject_eventPostAssociatedAkEvent_Parms
		{
			int32 CallbackMask;
			FScriptDelegate PostEventCallback;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CallbackMask_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CallbackMask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostEventCallback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_PostEventCallback;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::NewProp_CallbackMask_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/AkAudio.EAkCallbackType" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::NewProp_CallbackMask = { "CallbackMask", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventPostAssociatedAkEvent_Parms, CallbackMask), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::NewProp_CallbackMask_MetaData), Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::NewProp_CallbackMask_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::NewProp_PostEventCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::NewProp_PostEventCallback = { "PostEventCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventPostAssociatedAkEvent_Parms, PostEventCallback), Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::NewProp_PostEventCallback_MetaData), Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::NewProp_PostEventCallback_MetaData) }; // 733054327
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventPostAssociatedAkEvent_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::NewProp_CallbackMask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::NewProp_PostEventCallback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "AutoCreateRefTerm", "PostEventCallback,ExternalSources" },
		{ "Category", "Audiokinetic|AkGameObject" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Posts this game object's AkAudioEvent to Wwise, using this as the game object source\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Posts this game object's AkAudioEvent to Wwise, using this as the game object source" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameObject, nullptr, "PostAssociatedAkEvent", nullptr, nullptr, Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::AkGameObject_eventPostAssociatedAkEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420408, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::AkGameObject_eventPostAssociatedAkEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics
	{
		struct AkGameObject_eventPostAssociatedAkEventAsync_Parms
		{
			const UObject* WorldContextObject;
			int32 CallbackMask;
			FScriptDelegate PostEventCallback;
			FLatentActionInfo LatentInfo;
			int32 PlayingID;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CallbackMask_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CallbackMask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostEventCallback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_PostEventCallback;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayingID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventPostAssociatedAkEventAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::NewProp_WorldContextObject_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::NewProp_CallbackMask_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/AkAudio.EAkCallbackType" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::NewProp_CallbackMask = { "CallbackMask", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventPostAssociatedAkEventAsync_Parms, CallbackMask), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::NewProp_CallbackMask_MetaData), Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::NewProp_CallbackMask_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::NewProp_PostEventCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::NewProp_PostEventCallback = { "PostEventCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventPostAssociatedAkEventAsync_Parms, PostEventCallback), Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::NewProp_PostEventCallback_MetaData), Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::NewProp_PostEventCallback_MetaData) }; // 733054327
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventPostAssociatedAkEventAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 2674470931
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::NewProp_PlayingID = { "PlayingID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventPostAssociatedAkEventAsync_Parms, PlayingID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::NewProp_CallbackMask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::NewProp_PostEventCallback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::NewProp_PlayingID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "PostEventCallback,ExternalSources" },
		{ "Category", "Audiokinetic|AkGameObject" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Classes/AkGameObject.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameObject, nullptr, "PostAssociatedAkEventAsync", nullptr, nullptr, Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::AkGameObject_eventPostAssociatedAkEventAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420408, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::AkGameObject_eventPostAssociatedAkEventAsync_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameObject_SetRTPCValue_Statics
	{
		struct AkGameObject_eventSetRTPCValue_Parms
		{
			UAkRtpc* RTPCValue;
			float Value;
			int32 InterpolationTimeMs;
			FString RTPC;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RTPCValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RTPCValue;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InterpolationTimeMs;
		static const UECodeGen_Private::FStrPropertyParams NewProp_RTPC;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameObject_SetRTPCValue_Statics::NewProp_RTPCValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameObject_SetRTPCValue_Statics::NewProp_RTPCValue = { "RTPCValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventSetRTPCValue_Parms, RTPCValue), Z_Construct_UClass_UAkRtpc_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_SetRTPCValue_Statics::NewProp_RTPCValue_MetaData), Z_Construct_UFunction_UAkGameObject_SetRTPCValue_Statics::NewProp_RTPCValue_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkGameObject_SetRTPCValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventSetRTPCValue_Parms, Value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameObject_SetRTPCValue_Statics::NewProp_InterpolationTimeMs = { "InterpolationTimeMs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventSetRTPCValue_Parms, InterpolationTimeMs), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkGameObject_SetRTPCValue_Statics::NewProp_RTPC = { "RTPC", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameObject_eventSetRTPCValue_Parms, RTPC), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameObject_SetRTPCValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_SetRTPCValue_Statics::NewProp_RTPCValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_SetRTPCValue_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_SetRTPCValue_Statics::NewProp_InterpolationTimeMs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_SetRTPCValue_Statics::NewProp_RTPC,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameObject_SetRTPCValue_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "Category", "Audiokinetic|AkGameObject" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Sets an RTPC value, using this game object as the game object source\n\x09*\n\x09* @param RTPC\x09\x09\x09The name of the RTPC to set\n\x09* @param Value\x09\x09\x09The value of the RTPC\n\x09* @param InterpolationTimeMs - Duration during which the RTPC is interpolated towards Value (in ms)\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets an RTPC value, using this game object as the game object source\n\n@param RTPC                   The name of the RTPC to set\n@param Value                  The value of the RTPC\n@param InterpolationTimeMs - Duration during which the RTPC is interpolated towards Value (in ms)" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameObject_SetRTPCValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameObject, nullptr, "SetRTPCValue", nullptr, nullptr, Z_Construct_UFunction_UAkGameObject_SetRTPCValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_SetRTPCValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkGameObject_SetRTPCValue_Statics::AkGameObject_eventSetRTPCValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_SetRTPCValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGameObject_SetRTPCValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_SetRTPCValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkGameObject_SetRTPCValue_Statics::AkGameObject_eventSetRTPCValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkGameObject_SetRTPCValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameObject_SetRTPCValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameObject_Stop_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameObject_Stop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Stops playback using this game object as the game object to stop\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stops playback using this game object as the game object to stop" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameObject_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameObject, nullptr, "Stop", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020408, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_Stop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGameObject_Stop_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAkGameObject_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameObject_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkGameObject);
	UClass* Z_Construct_UClass_UAkGameObject_NoRegister()
	{
		return UAkGameObject::StaticClass();
	}
	struct Z_Construct_UClass_UAkGameObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AkAudioEvent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AkAudioEvent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkGameObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkGameObject_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAkGameObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkGameObject_GetRTPCValue, "GetRTPCValue" }, // 3410971252
		{ &Z_Construct_UFunction_UAkGameObject_PostAkEvent, "PostAkEvent" }, // 3817401422
		{ &Z_Construct_UFunction_UAkGameObject_PostAkEventAsync, "PostAkEventAsync" }, // 1995692764
		{ &Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent, "PostAssociatedAkEvent" }, // 1317806176
		{ &Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync, "PostAssociatedAkEventAsync" }, // 912572190
		{ &Z_Construct_UFunction_UAkGameObject_SetRTPCValue, "SetRTPCValue" }, // 4196239456
		{ &Z_Construct_UFunction_UAkGameObject_Stop, "Stop" }, // 2181325731
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkGameObject_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkGameObject_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "AkComponent" },
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Audiokinetic" },
		{ "HideCategories", "Transform Rendering Mobility LOD Component Activation Trigger PhysicsVolume" },
		{ "IncludePath", "AkGameObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/AkGameObject.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkGameObject_Statics::NewProp_AkAudioEvent_MetaData[] = {
		{ "Category", "AkEvent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Associated Wwise Event to be posted on this game object */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Associated Wwise Event to be posted on this game object" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkGameObject_Statics::NewProp_AkAudioEvent = { "AkAudioEvent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkGameObject, AkAudioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkGameObject_Statics::NewProp_AkAudioEvent_MetaData), Z_Construct_UClass_UAkGameObject_Statics::NewProp_AkAudioEvent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkGameObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGameObject_Statics::NewProp_AkAudioEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkGameObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkGameObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkGameObject_Statics::ClassParams = {
		&UAkGameObject::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAkGameObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkGameObject_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkGameObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkGameObject_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkGameObject_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAkGameObject()
	{
		if (!Z_Registration_Info_UClass_UAkGameObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkGameObject.OuterSingleton, Z_Construct_UClass_UAkGameObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkGameObject.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkGameObject>()
	{
		return UAkGameObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkGameObject);
	UAkGameObject::~UAkGameObject() {}
	struct Z_CompiledInDeferFile_FID_Users_danii_RiderProjects_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_danii_RiderProjects_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAkGameObject, UAkGameObject::StaticClass, TEXT("UAkGameObject"), &Z_Registration_Info_UClass_UAkGameObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkGameObject), 1431944616U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_danii_RiderProjects_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_3233308412(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_Users_danii_RiderProjects_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_danii_RiderProjects_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkGameObject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
