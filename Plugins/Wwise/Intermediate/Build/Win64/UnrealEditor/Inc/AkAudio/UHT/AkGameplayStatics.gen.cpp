// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkGameplayStatics.h"
#include "../../Source/Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "AkAudio/Classes/AkGameplayTypes.h"
#include "WwiseObjectUtils/Public/WwiseUnrealObjectHelper.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkGameplayStatics() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioType_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAuxBus_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkEffectShareSet_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkGameplayStatics();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkGameplayStatics_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkPortalComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkRtpc_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkStateValue_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkSwitchValue_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkTrigger_NoRegister();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_AkChannelConfiguration();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_AkMultiPositionType();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_ERTPCValueType();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_PanningRule();
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature();
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnSetCurrentAudioCultureCallback__DelegateSignature();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkChannelMask();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkOutputSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAttachLocation();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	WWISEOBJECTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FAkOutputDeviceID();
	WWISEOBJECTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FAkUniqueID();
// End Cross Module References
	DEFINE_FUNCTION(UAkGameplayStatics::execSetDistanceProbe)
	{
		P_GET_OBJECT(AActor,Z_Param_Listener);
		P_GET_OBJECT(AActor,Z_Param_DistanceProbe);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::SetDistanceProbe(Z_Param_Listener,Z_Param_DistanceProbe);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execSetActorMixerEffect)
	{
		P_GET_STRUCT(FAkUniqueID,Z_Param_InAudioNodeID);
		P_GET_PROPERTY(FIntProperty,Z_Param_InEffectIndex);
		P_GET_OBJECT(UAkEffectShareSet,Z_Param_InEffectShareSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAkGameplayStatics::SetActorMixerEffect(Z_Param_InAudioNodeID,Z_Param_InEffectIndex,Z_Param_InEffectShareSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execSetAuxBusEffect)
	{
		P_GET_OBJECT(UAkAuxBus,Z_Param_InAuxBus);
		P_GET_PROPERTY(FIntProperty,Z_Param_InEffectIndex);
		P_GET_OBJECT(UAkEffectShareSet,Z_Param_InEffectShareSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAkGameplayStatics::SetAuxBusEffect(Z_Param_InAuxBus,Z_Param_InEffectIndex,Z_Param_InEffectShareSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execSetBusEffectByID)
	{
		P_GET_STRUCT(FAkUniqueID,Z_Param_InBusID);
		P_GET_PROPERTY(FIntProperty,Z_Param_InEffectIndex);
		P_GET_OBJECT(UAkEffectShareSet,Z_Param_InEffectShareSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAkGameplayStatics::SetBusEffectByID(Z_Param_InBusID,Z_Param_InEffectIndex,Z_Param_InEffectShareSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execSetBusEffectByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InBusName);
		P_GET_PROPERTY(FIntProperty,Z_Param_InEffectIndex);
		P_GET_OBJECT(UAkEffectShareSet,Z_Param_InEffectShareSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAkGameplayStatics::SetBusEffectByName(Z_Param_InBusName,Z_Param_InEffectIndex,Z_Param_InEffectShareSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execSetOutputDeviceEffect)
	{
		P_GET_STRUCT(FAkOutputDeviceID,Z_Param_InDeviceID);
		P_GET_PROPERTY(FIntProperty,Z_Param_InEffectIndex);
		P_GET_OBJECT(UAkEffectShareSet,Z_Param_InEffectShareSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAkGameplayStatics::SetOutputDeviceEffect(Z_Param_InDeviceID,Z_Param_InEffectIndex,Z_Param_InEffectShareSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execGetAkAudioTypeUserData)
	{
		P_GET_OBJECT(UAkAudioType,Z_Param_Instance);
		P_GET_OBJECT(UClass,Z_Param_Type);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=UAkGameplayStatics::GetAkAudioTypeUserData(Z_Param_Instance,Z_Param_Type);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execSetCurrentAudioCultureAsync)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AudioCulture);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Completed);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::SetCurrentAudioCultureAsync(Z_Param_AudioCulture,FOnSetCurrentAudioCultureCallback(Z_Param_Out_Completed));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execSetCurrentAudioCulture)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AudioCulture);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::SetCurrentAudioCulture(Z_Param_AudioCulture,Z_Param_LatentInfo,Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execGetAvailableAudioCultures)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UAkGameplayStatics::GetAvailableAudioCultures();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execGetCurrentAudioCulture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UAkGameplayStatics::GetCurrentAudioCulture();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execStopProfilerCapture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::StopProfilerCapture();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execStartProfilerCapture)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::StartProfilerCapture(Z_Param_Filename);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execStopOutputCapture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::StopOutputCapture();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execAddOutputCaptureMarker)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MarkerText);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::AddOutputCaptureMarker(Z_Param_MarkerText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execStartOutputCapture)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::StartOutputCapture(Z_Param_Filename);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execUnloadInitBank)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::UnloadInitBank();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execLoadInitBank)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::LoadInitBank();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execClearSoundBanksAndMedia)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::ClearSoundBanksAndMedia();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execStopAllAmbientSounds)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::StopAllAmbientSounds(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execStartAllAmbientSounds)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::StartAllAmbientSounds(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execCancelEventCallback)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_PostEventCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::CancelEventCallback(FOnAkPostEventCallback(Z_Param_Out_PostEventCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execStopAll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::StopAll();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execStopActor)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::StopActor(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execSetOcclusionRefreshInterval)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_RefreshInterval);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::SetOcclusionRefreshInterval(Z_Param_RefreshInterval,Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execSetSpeakerAngles)
	{
		P_GET_TARRAY_REF(float,Z_Param_Out_SpeakerAngles);
		P_GET_PROPERTY(FFloatProperty,Z_Param_HeightAngle);
		P_GET_PROPERTY(FStrProperty,Z_Param_DeviceShareSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::SetSpeakerAngles(Z_Param_Out_SpeakerAngles,Z_Param_HeightAngle,Z_Param_DeviceShareSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execGetSpeakerAngles)
	{
		P_GET_TARRAY_REF(float,Z_Param_Out_SpeakerAngles);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_HeightAngle);
		P_GET_PROPERTY(FStrProperty,Z_Param_DeviceShareSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::GetSpeakerAngles(Z_Param_Out_SpeakerAngles,Z_Param_Out_HeightAngle,Z_Param_DeviceShareSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execReplaceMainOutput)
	{
		P_GET_STRUCT_REF(FAkOutputSettings,Z_Param_Out_MainOutputSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::ReplaceMainOutput(Z_Param_Out_MainOutputSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execRemoveOutput)
	{
		P_GET_STRUCT(FAkOutputDeviceID,Z_Param_in_OutputDeviceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::RemoveOutput(Z_Param_in_OutputDeviceId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execAddOutput)
	{
		P_GET_STRUCT_REF(FAkOutputSettings,Z_Param_Out_in_Settings);
		P_GET_STRUCT_REF(FAkOutputDeviceID,Z_Param_Out_out_DeviceID);
		P_GET_TARRAY_REF(UAkComponent*,Z_Param_Out_in_ListenerIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::AddOutput(Z_Param_Out_in_Settings,Z_Param_Out_out_DeviceID,Z_Param_Out_in_ListenerIDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execSetPanningRule)
	{
		P_GET_ENUM(PanningRule,Z_Param_PanRule);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::SetPanningRule(PanningRule(Z_Param_PanRule));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execSetBusConfig)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_BusName);
		P_GET_ENUM(AkChannelConfiguration,Z_Param_ChannelConfiguration);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::SetBusConfig(Z_Param_BusName,AkChannelConfiguration(Z_Param_ChannelConfiguration));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execSetOutputBusVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_BusVolume);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::SetOutputBusVolume(Z_Param_BusVolume,Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execSetPortalToPortalObstruction)
	{
		P_GET_OBJECT(UAkPortalComponent,Z_Param_PortalComponent0);
		P_GET_OBJECT(UAkPortalComponent,Z_Param_PortalComponent1);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ObstructionValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::SetPortalToPortalObstruction(Z_Param_PortalComponent0,Z_Param_PortalComponent1,Z_Param_ObstructionValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execSetGameObjectToPortalObstruction)
	{
		P_GET_OBJECT(UAkComponent,Z_Param_GameObjectAkComponent);
		P_GET_OBJECT(UAkPortalComponent,Z_Param_PortalComponent);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ObstructionValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::SetGameObjectToPortalObstruction(Z_Param_GameObjectAkComponent,Z_Param_PortalComponent,Z_Param_ObstructionValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execSetPortalObstructionAndOcclusion)
	{
		P_GET_OBJECT(UAkPortalComponent,Z_Param_PortalComponent);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ObstructionValue);
		P_GET_PROPERTY(FFloatProperty,Z_Param_OcclusionValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::SetPortalObstructionAndOcclusion(Z_Param_PortalComponent,Z_Param_ObstructionValue,Z_Param_OcclusionValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execSetLoadBalancingSpread)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InNbFrames);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::SetLoadBalancingSpread(Z_Param_InNbFrames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execSetNumberOfPrimaryRays)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InNbPrimaryRays);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::SetNumberOfPrimaryRays(Z_Param_InNbPrimaryRays);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execSetMaxEmitterRoomAuxSends)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InMaxEmitterRoomAuxSends);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::SetMaxEmitterRoomAuxSends(Z_Param_InMaxEmitterRoomAuxSends);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execSetDiffractionOrder)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InDiffractionOrder);
		P_GET_UBOOL(Z_Param_bInUpdatePaths);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::SetDiffractionOrder(Z_Param_InDiffractionOrder,Z_Param_bInUpdatePaths);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execSetReflectionsOrder)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Order);
		P_GET_UBOOL(Z_Param_RefreshPaths);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::SetReflectionsOrder(Z_Param_Order,Z_Param_RefreshPaths);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execUseReverbVolumes)
	{
		P_GET_UBOOL(Z_Param_inUseReverbVolumes);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::UseReverbVolumes(Z_Param_inUseReverbVolumes,Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execSetMultipleChannelMaskEmitterPositions)
	{
		P_GET_OBJECT(UAkComponent,Z_Param_GameObjectAkComponent);
		P_GET_TARRAY(FAkChannelMask,Z_Param_ChannelMasks);
		P_GET_TARRAY(FTransform,Z_Param_Positions);
		P_GET_ENUM(AkMultiPositionType,Z_Param_MultiPositionType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::SetMultipleChannelMaskEmitterPositions(Z_Param_GameObjectAkComponent,Z_Param_ChannelMasks,Z_Param_Positions,AkMultiPositionType(Z_Param_MultiPositionType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execSetMultipleChannelEmitterPositions)
	{
		P_GET_OBJECT(UAkComponent,Z_Param_GameObjectAkComponent);
		P_GET_TARRAY(AkChannelConfiguration,Z_Param_ChannelMasks);
		P_GET_TARRAY(FTransform,Z_Param_Positions);
		P_GET_ENUM(AkMultiPositionType,Z_Param_MultiPositionType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::SetMultipleChannelEmitterPositions(Z_Param_GameObjectAkComponent,Z_Param_ChannelMasks,Z_Param_Positions,AkMultiPositionType(Z_Param_MultiPositionType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execSetMultiplePositions)
	{
		P_GET_OBJECT(UAkComponent,Z_Param_GameObjectAkComponent);
		P_GET_TARRAY(FTransform,Z_Param_Positions);
		P_GET_ENUM(AkMultiPositionType,Z_Param_MultiPositionType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::SetMultiplePositions(Z_Param_GameObjectAkComponent,Z_Param_Positions,AkMultiPositionType(Z_Param_MultiPositionType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execSetSwitch)
	{
		P_GET_OBJECT(UAkSwitchValue,Z_Param_SwitchValue);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY(FNameProperty,Z_Param_SwitchGroup);
		P_GET_PROPERTY(FNameProperty,Z_Param_SwitchState);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::SetSwitch(Z_Param_SwitchValue,Z_Param_Actor,Z_Param_SwitchGroup,Z_Param_SwitchState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execPostTrigger)
	{
		P_GET_OBJECT(UAkTrigger,Z_Param_TriggerValue);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY(FNameProperty,Z_Param_Trigger);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::PostTrigger(Z_Param_TriggerValue,Z_Param_Actor,Z_Param_Trigger);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execSetState)
	{
		P_GET_OBJECT(UAkStateValue,Z_Param_StateValue);
		P_GET_PROPERTY(FNameProperty,Z_Param_StateGroup);
		P_GET_PROPERTY(FNameProperty,Z_Param_State);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::SetState(Z_Param_StateValue,Z_Param_StateGroup,Z_Param_State);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execResetRTPCValue)
	{
		P_GET_OBJECT(UAkRtpc,Z_Param_RTPCValue);
		P_GET_PROPERTY(FIntProperty,Z_Param_InterpolationTimeMs);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY(FNameProperty,Z_Param_RTPC);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::ResetRTPCValue(Z_Param_RTPCValue,Z_Param_InterpolationTimeMs,Z_Param_Actor,Z_Param_RTPC);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execGetRTPCValue)
	{
		P_GET_OBJECT(UAkRtpc,Z_Param_RTPCValue);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayingID);
		P_GET_ENUM(ERTPCValueType,Z_Param_InputValueType);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Value);
		P_GET_ENUM_REF(ERTPCValueType,Z_Param_Out_OutputValueType);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY(FNameProperty,Z_Param_RTPC);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::GetRTPCValue(Z_Param_RTPCValue,Z_Param_PlayingID,ERTPCValueType(Z_Param_InputValueType),Z_Param_Out_Value,(ERTPCValueType&)(Z_Param_Out_OutputValueType),Z_Param_Actor,Z_Param_RTPC);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execSetRTPCValue)
	{
		P_GET_OBJECT(UAkRtpc,Z_Param_RTPCValue);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_GET_PROPERTY(FIntProperty,Z_Param_InterpolationTimeMs);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY(FNameProperty,Z_Param_RTPC);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::SetRTPCValue(Z_Param_RTPCValue,Z_Param_Value,Z_Param_InterpolationTimeMs,Z_Param_Actor,Z_Param_RTPC);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execSpawnAkComponentAtLocation)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UAkAudioEvent,Z_Param_AkEvent);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FRotator,Z_Param_Orientation);
		P_GET_UBOOL(Z_Param_AutoPost);
		P_GET_PROPERTY(FStrProperty,Z_Param_EventName);
		P_GET_UBOOL(Z_Param_AutoDestroy);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAkComponent**)Z_Param__Result=UAkGameplayStatics::SpawnAkComponentAtLocation(Z_Param_WorldContextObject,Z_Param_AkEvent,Z_Param_Location,Z_Param_Orientation,Z_Param_AutoPost,Z_Param_EventName,Z_Param_AutoDestroy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execPostEventAtLocation)
	{
		P_GET_OBJECT(UAkAudioEvent,Z_Param_AkEvent);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FRotator,Z_Param_Orientation);
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UAkGameplayStatics::PostEventAtLocation(Z_Param_AkEvent,Z_Param_Location,Z_Param_Orientation,Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execPostAndWaitForEndOfEvent)
	{
		P_GET_OBJECT(UAkAudioEvent,Z_Param_AkEvent);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_UBOOL(Z_Param_bStopWhenAttachedToDestroyed);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UAkGameplayStatics::PostAndWaitForEndOfEvent(Z_Param_AkEvent,Z_Param_Actor,Z_Param_bStopWhenAttachedToDestroyed,Z_Param_LatentInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execPostEvent)
	{
		P_GET_OBJECT(UAkAudioEvent,Z_Param_AkEvent);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY(FIntProperty,Z_Param_CallbackMask);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_PostEventCallback);
		P_GET_UBOOL(Z_Param_bStopWhenAttachedToDestroyed);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UAkGameplayStatics::PostEvent(Z_Param_AkEvent,Z_Param_Actor,Z_Param_CallbackMask,FOnAkPostEventCallback(Z_Param_Out_PostEventCallback),Z_Param_bStopWhenAttachedToDestroyed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execIsGame)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAkGameplayStatics::IsGame(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execIsEditor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAkGameplayStatics::IsEditor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execGetAkComponent)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_AttachToComponent);
		P_GET_UBOOL_REF(Z_Param_Out_ComponentCreated);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttachPointName);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_PROPERTY(FByteProperty,Z_Param_LocationType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAkComponent**)Z_Param__Result=UAkGameplayStatics::GetAkComponent(Z_Param_AttachToComponent,Z_Param_Out_ComponentCreated,Z_Param_AttachPointName,Z_Param_Location,EAttachLocation::Type(Z_Param_LocationType));
		P_NATIVE_END;
	}
	void UAkGameplayStatics::StaticRegisterNativesUAkGameplayStatics()
	{
		UClass* Class = UAkGameplayStatics::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddOutput", &UAkGameplayStatics::execAddOutput },
			{ "AddOutputCaptureMarker", &UAkGameplayStatics::execAddOutputCaptureMarker },
			{ "CancelEventCallback", &UAkGameplayStatics::execCancelEventCallback },
			{ "ClearSoundBanksAndMedia", &UAkGameplayStatics::execClearSoundBanksAndMedia },
			{ "GetAkAudioTypeUserData", &UAkGameplayStatics::execGetAkAudioTypeUserData },
			{ "GetAkComponent", &UAkGameplayStatics::execGetAkComponent },
			{ "GetAvailableAudioCultures", &UAkGameplayStatics::execGetAvailableAudioCultures },
			{ "GetCurrentAudioCulture", &UAkGameplayStatics::execGetCurrentAudioCulture },
			{ "GetRTPCValue", &UAkGameplayStatics::execGetRTPCValue },
			{ "GetSpeakerAngles", &UAkGameplayStatics::execGetSpeakerAngles },
			{ "IsEditor", &UAkGameplayStatics::execIsEditor },
			{ "IsGame", &UAkGameplayStatics::execIsGame },
			{ "LoadInitBank", &UAkGameplayStatics::execLoadInitBank },
			{ "PostAndWaitForEndOfEvent", &UAkGameplayStatics::execPostAndWaitForEndOfEvent },
			{ "PostEvent", &UAkGameplayStatics::execPostEvent },
			{ "PostEventAtLocation", &UAkGameplayStatics::execPostEventAtLocation },
			{ "PostTrigger", &UAkGameplayStatics::execPostTrigger },
			{ "RemoveOutput", &UAkGameplayStatics::execRemoveOutput },
			{ "ReplaceMainOutput", &UAkGameplayStatics::execReplaceMainOutput },
			{ "ResetRTPCValue", &UAkGameplayStatics::execResetRTPCValue },
			{ "SetActorMixerEffect", &UAkGameplayStatics::execSetActorMixerEffect },
			{ "SetAuxBusEffect", &UAkGameplayStatics::execSetAuxBusEffect },
			{ "SetBusConfig", &UAkGameplayStatics::execSetBusConfig },
			{ "SetBusEffectByID", &UAkGameplayStatics::execSetBusEffectByID },
			{ "SetBusEffectByName", &UAkGameplayStatics::execSetBusEffectByName },
			{ "SetCurrentAudioCulture", &UAkGameplayStatics::execSetCurrentAudioCulture },
			{ "SetCurrentAudioCultureAsync", &UAkGameplayStatics::execSetCurrentAudioCultureAsync },
			{ "SetDiffractionOrder", &UAkGameplayStatics::execSetDiffractionOrder },
			{ "SetDistanceProbe", &UAkGameplayStatics::execSetDistanceProbe },
			{ "SetGameObjectToPortalObstruction", &UAkGameplayStatics::execSetGameObjectToPortalObstruction },
			{ "SetLoadBalancingSpread", &UAkGameplayStatics::execSetLoadBalancingSpread },
			{ "SetMaxEmitterRoomAuxSends", &UAkGameplayStatics::execSetMaxEmitterRoomAuxSends },
			{ "SetMultipleChannelEmitterPositions", &UAkGameplayStatics::execSetMultipleChannelEmitterPositions },
			{ "SetMultipleChannelMaskEmitterPositions", &UAkGameplayStatics::execSetMultipleChannelMaskEmitterPositions },
			{ "SetMultiplePositions", &UAkGameplayStatics::execSetMultiplePositions },
			{ "SetNumberOfPrimaryRays", &UAkGameplayStatics::execSetNumberOfPrimaryRays },
			{ "SetOcclusionRefreshInterval", &UAkGameplayStatics::execSetOcclusionRefreshInterval },
			{ "SetOutputBusVolume", &UAkGameplayStatics::execSetOutputBusVolume },
			{ "SetOutputDeviceEffect", &UAkGameplayStatics::execSetOutputDeviceEffect },
			{ "SetPanningRule", &UAkGameplayStatics::execSetPanningRule },
			{ "SetPortalObstructionAndOcclusion", &UAkGameplayStatics::execSetPortalObstructionAndOcclusion },
			{ "SetPortalToPortalObstruction", &UAkGameplayStatics::execSetPortalToPortalObstruction },
			{ "SetReflectionsOrder", &UAkGameplayStatics::execSetReflectionsOrder },
			{ "SetRTPCValue", &UAkGameplayStatics::execSetRTPCValue },
			{ "SetSpeakerAngles", &UAkGameplayStatics::execSetSpeakerAngles },
			{ "SetState", &UAkGameplayStatics::execSetState },
			{ "SetSwitch", &UAkGameplayStatics::execSetSwitch },
			{ "SpawnAkComponentAtLocation", &UAkGameplayStatics::execSpawnAkComponentAtLocation },
			{ "StartAllAmbientSounds", &UAkGameplayStatics::execStartAllAmbientSounds },
			{ "StartOutputCapture", &UAkGameplayStatics::execStartOutputCapture },
			{ "StartProfilerCapture", &UAkGameplayStatics::execStartProfilerCapture },
			{ "StopActor", &UAkGameplayStatics::execStopActor },
			{ "StopAll", &UAkGameplayStatics::execStopAll },
			{ "StopAllAmbientSounds", &UAkGameplayStatics::execStopAllAmbientSounds },
			{ "StopOutputCapture", &UAkGameplayStatics::execStopOutputCapture },
			{ "StopProfilerCapture", &UAkGameplayStatics::execStopProfilerCapture },
			{ "UnloadInitBank", &UAkGameplayStatics::execUnloadInitBank },
			{ "UseReverbVolumes", &UAkGameplayStatics::execUseReverbVolumes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_AddOutput_Statics
	{
		struct AkGameplayStatics_eventAddOutput_Parms
		{
			FAkOutputSettings in_Settings;
			FAkOutputDeviceID out_DeviceID;
			TArray<UAkComponent*> in_ListenerIDs;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_in_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_in_Settings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_out_DeviceID;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_in_ListenerIDs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_in_ListenerIDs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_in_ListenerIDs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_AddOutput_Statics::NewProp_in_Settings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkGameplayStatics_AddOutput_Statics::NewProp_in_Settings = { "in_Settings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventAddOutput_Parms, in_Settings), Z_Construct_UScriptStruct_FAkOutputSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_AddOutput_Statics::NewProp_in_Settings_MetaData), Z_Construct_UFunction_UAkGameplayStatics_AddOutput_Statics::NewProp_in_Settings_MetaData) }; // 1761225682
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkGameplayStatics_AddOutput_Statics::NewProp_out_DeviceID = { "out_DeviceID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventAddOutput_Parms, out_DeviceID), Z_Construct_UScriptStruct_FAkOutputDeviceID, METADATA_PARAMS(0, nullptr) }; // 163289064
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_AddOutput_Statics::NewProp_in_ListenerIDs_Inner = { "in_ListenerIDs", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_AddOutput_Statics::NewProp_in_ListenerIDs_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAkGameplayStatics_AddOutput_Statics::NewProp_in_ListenerIDs = { "in_ListenerIDs", nullptr, (EPropertyFlags)0x0010008008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventAddOutput_Parms, in_ListenerIDs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_AddOutput_Statics::NewProp_in_ListenerIDs_MetaData), Z_Construct_UFunction_UAkGameplayStatics_AddOutput_Statics::NewProp_in_ListenerIDs_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_AddOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_AddOutput_Statics::NewProp_in_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_AddOutput_Statics::NewProp_out_DeviceID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_AddOutput_Statics::NewProp_in_ListenerIDs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_AddOutput_Statics::NewProp_in_ListenerIDs,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_AddOutput_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "in_ListenerIDs" },
		{ "Category", "Audiokinetic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Adds an output to the sound engine. Use this to add controller-attached headphones, controller speakers, DVR output, etc.\n\x09* The in_Settings parameter contains an Audio Device shareset to specify the output plugin to use and a device ID to specify the instance, if necessary (e.g. which game controller).\n\x09*\n\x09* Like most functions of AK::SoundEngine, AddOutput is asynchronous.\n\x09* A successful return code merely indicates that the request is properly queued. Error codes returned by this function indicate various invalid parameters.\n\x09* To know if this function succeeds or not, and the failure code, register an AkDeviceStatusCallbackFunc callback with RegisterAudioDeviceStatusCallback.\n\x09*\n\x09* @param in_Settings Creation parameters for this output.\n\x09* @param out_pDeviceID (Optional) Output ID to use with all other Output management functions. Leave to NULL if not required.\n\x09* @param in_pListenerIDs Specific listener(s) to attach to this device. If specified, only the sounds routed to game objects linked to those listeners will play in this device. It is necessary to have separate listeners if multiple devices of the same type can coexist (e.g. controller speakers) If not specified, sound routing simply obey the associations between Master Busses and Audio Devices setup in the Wwise Project.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds an output to the sound engine. Use this to add controller-attached headphones, controller speakers, DVR output, etc.\nThe in_Settings parameter contains an Audio Device shareset to specify the output plugin to use and a device ID to specify the instance, if necessary (e.g. which game controller).\n\nLike most functions of AK::SoundEngine, AddOutput is asynchronous.\nA successful return code merely indicates that the request is properly queued. Error codes returned by this function indicate various invalid parameters.\nTo know if this function succeeds or not, and the failure code, register an AkDeviceStatusCallbackFunc callback with RegisterAudioDeviceStatusCallback.\n\n@param in_Settings Creation parameters for this output.\n@param out_pDeviceID (Optional) Output ID to use with all other Output management functions. Leave to NULL if not required.\n@param in_pListenerIDs Specific listener(s) to attach to this device. If specified, only the sounds routed to game objects linked to those listeners will play in this device. It is necessary to have separate listeners if multiple devices of the same type can coexist (e.g. controller speakers) If not specified, sound routing simply obey the associations between Master Busses and Audio Devices setup in the Wwise Project." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_AddOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "AddOutput", nullptr, nullptr, Z_Construct_UFunction_UAkGameplayStatics_AddOutput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_AddOutput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkGameplayStatics_AddOutput_Statics::AkGameplayStatics_eventAddOutput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_AddOutput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGameplayStatics_AddOutput_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_AddOutput_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkGameplayStatics_AddOutput_Statics::AkGameplayStatics_eventAddOutput_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_AddOutput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_AddOutput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_AddOutputCaptureMarker_Statics
	{
		struct AkGameplayStatics_eventAddOutputCaptureMarker_Parms
		{
			FString MarkerText;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MarkerText_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MarkerText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_AddOutputCaptureMarker_Statics::NewProp_MarkerText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkGameplayStatics_AddOutputCaptureMarker_Statics::NewProp_MarkerText = { "MarkerText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventAddOutputCaptureMarker_Parms, MarkerText), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_AddOutputCaptureMarker_Statics::NewProp_MarkerText_MetaData), Z_Construct_UFunction_UAkGameplayStatics_AddOutputCaptureMarker_Statics::NewProp_MarkerText_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_AddOutputCaptureMarker_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_AddOutputCaptureMarker_Statics::NewProp_MarkerText,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_AddOutputCaptureMarker_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Add text marker in output capture file.\n\x09 * @param MarkerText - The name text to put in the marker.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add text marker in output capture file.\n@param MarkerText - The name text to put in the marker." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_AddOutputCaptureMarker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "AddOutputCaptureMarker", nullptr, nullptr, Z_Construct_UFunction_UAkGameplayStatics_AddOutputCaptureMarker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_AddOutputCaptureMarker_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkGameplayStatics_AddOutputCaptureMarker_Statics::AkGameplayStatics_eventAddOutputCaptureMarker_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_AddOutputCaptureMarker_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGameplayStatics_AddOutputCaptureMarker_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_AddOutputCaptureMarker_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkGameplayStatics_AddOutputCaptureMarker_Statics::AkGameplayStatics_eventAddOutputCaptureMarker_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_AddOutputCaptureMarker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_AddOutputCaptureMarker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_CancelEventCallback_Statics
	{
		struct AkGameplayStatics_eventCancelEventCallback_Parms
		{
			FScriptDelegate PostEventCallback;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostEventCallback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_PostEventCallback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_CancelEventCallback_Statics::NewProp_PostEventCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAkGameplayStatics_CancelEventCallback_Statics::NewProp_PostEventCallback = { "PostEventCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventCancelEventCallback_Parms, PostEventCallback), Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_CancelEventCallback_Statics::NewProp_PostEventCallback_MetaData), Z_Construct_UFunction_UAkGameplayStatics_CancelEventCallback_Statics::NewProp_PostEventCallback_MetaData) }; // 733054327
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_CancelEventCallback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_CancelEventCallback_Statics::NewProp_PostEventCallback,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_CancelEventCallback_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Cancels an Event callback\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cancels an Event callback" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_CancelEventCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "CancelEventCallback", nullptr, nullptr, Z_Construct_UFunction_UAkGameplayStatics_CancelEventCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_CancelEventCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkGameplayStatics_CancelEventCallback_Statics::AkGameplayStatics_eventCancelEventCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_CancelEventCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGameplayStatics_CancelEventCallback_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_CancelEventCallback_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkGameplayStatics_CancelEventCallback_Statics::AkGameplayStatics_eventCancelEventCallback_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_CancelEventCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_CancelEventCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_ClearSoundBanksAndMedia_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_ClearSoundBanksAndMedia_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|SoundBanks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Clear all loaded banks\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clear all loaded banks" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_ClearSoundBanksAndMedia_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "ClearSoundBanksAndMedia", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_ClearSoundBanksAndMedia_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGameplayStatics_ClearSoundBanksAndMedia_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_ClearSoundBanksAndMedia()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_ClearSoundBanksAndMedia_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_GetAkAudioTypeUserData_Statics
	{
		struct AkGameplayStatics_eventGetAkAudioTypeUserData_Parms
		{
			const UAkAudioType* Instance;
			const UClass* Type;
			UObject* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Instance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Type;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_GetAkAudioTypeUserData_Statics::NewProp_Instance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetAkAudioTypeUserData_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventGetAkAudioTypeUserData_Parms, Instance), Z_Construct_UClass_UAkAudioType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_GetAkAudioTypeUserData_Statics::NewProp_Instance_MetaData), Z_Construct_UFunction_UAkGameplayStatics_GetAkAudioTypeUserData_Statics::NewProp_Instance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_GetAkAudioTypeUserData_Statics::NewProp_Type_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetAkAudioTypeUserData_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventGetAkAudioTypeUserData_Parms, Type), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_GetAkAudioTypeUserData_Statics::NewProp_Type_MetaData), Z_Construct_UFunction_UAkGameplayStatics_GetAkAudioTypeUserData_Statics::NewProp_Type_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetAkAudioTypeUserData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventGetAkAudioTypeUserData_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_GetAkAudioTypeUserData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetAkAudioTypeUserData_Statics::NewProp_Instance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetAkAudioTypeUserData_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetAkAudioTypeUserData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_GetAkAudioTypeUserData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_GetAkAudioTypeUserData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "GetAkAudioTypeUserData", nullptr, nullptr, Z_Construct_UFunction_UAkGameplayStatics_GetAkAudioTypeUserData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_GetAkAudioTypeUserData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkGameplayStatics_GetAkAudioTypeUserData_Statics::AkGameplayStatics_eventGetAkAudioTypeUserData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_GetAkAudioTypeUserData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGameplayStatics_GetAkAudioTypeUserData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_GetAkAudioTypeUserData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkGameplayStatics_GetAkAudioTypeUserData_Statics::AkGameplayStatics_eventGetAkAudioTypeUserData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_GetAkAudioTypeUserData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_GetAkAudioTypeUserData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics
	{
		struct AkGameplayStatics_eventGetAkComponent_Parms
		{
			USceneComponent* AttachToComponent;
			bool ComponentCreated;
			FName AttachPointName;
			FVector Location;
			TEnumAsByte<EAttachLocation::Type> LocationType;
			UAkComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachToComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachToComponent;
		static void NewProp_ComponentCreated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ComponentCreated;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttachPointName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LocationType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::NewProp_AttachToComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::NewProp_AttachToComponent = { "AttachToComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventGetAkComponent_Parms, AttachToComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::NewProp_AttachToComponent_MetaData), Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::NewProp_AttachToComponent_MetaData) };
	void Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::NewProp_ComponentCreated_SetBit(void* Obj)
	{
		((AkGameplayStatics_eventGetAkComponent_Parms*)Obj)->ComponentCreated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::NewProp_ComponentCreated = { "ComponentCreated", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AkGameplayStatics_eventGetAkComponent_Parms), &Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::NewProp_ComponentCreated_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::NewProp_AttachPointName = { "AttachPointName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventGetAkComponent_Parms, AttachPointName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventGetAkComponent_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::NewProp_LocationType = { "LocationType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventGetAkComponent_Parms, LocationType), Z_Construct_UEnum_Engine_EAttachLocation, METADATA_PARAMS(0, nullptr) }; // 4025501060
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventGetAkComponent_Parms, ReturnValue), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::NewProp_AttachToComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::NewProp_ComponentCreated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::NewProp_AttachPointName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::NewProp_LocationType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get an AkComponent attached to and following the specified component. \n\x09 * @param AttachPointName - Optional named point within the AttachComponent to play the sound at.\n\x09 */" },
#endif
		{ "CPP_Default_AttachPointName", "None" },
		{ "CPP_Default_Location", "" },
		{ "CPP_Default_LocationType", "KeepRelativeOffset" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get an AkComponent attached to and following the specified component.\n@param AttachPointName - Optional named point within the AttachComponent to play the sound at." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "GetAkComponent", nullptr, nullptr, Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::AkGameplayStatics_eventGetAkComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::AkGameplayStatics_eventGetAkComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_GetAvailableAudioCultures_Statics
	{
		struct AkGameplayStatics_eventGetAvailableAudioCultures_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetAvailableAudioCultures_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetAvailableAudioCultures_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventGetAvailableAudioCultures_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_GetAvailableAudioCultures_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetAvailableAudioCultures_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetAvailableAudioCultures_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_GetAvailableAudioCultures_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|Culture" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_GetAvailableAudioCultures_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "GetAvailableAudioCultures", nullptr, nullptr, Z_Construct_UFunction_UAkGameplayStatics_GetAvailableAudioCultures_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_GetAvailableAudioCultures_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkGameplayStatics_GetAvailableAudioCultures_Statics::AkGameplayStatics_eventGetAvailableAudioCultures_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_GetAvailableAudioCultures_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGameplayStatics_GetAvailableAudioCultures_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_GetAvailableAudioCultures_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkGameplayStatics_GetAvailableAudioCultures_Statics::AkGameplayStatics_eventGetAvailableAudioCultures_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_GetAvailableAudioCultures()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_GetAvailableAudioCultures_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_GetCurrentAudioCulture_Statics
	{
		struct AkGameplayStatics_eventGetCurrentAudioCulture_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetCurrentAudioCulture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventGetCurrentAudioCulture_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_GetCurrentAudioCulture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetCurrentAudioCulture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_GetCurrentAudioCulture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|Culture" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_GetCurrentAudioCulture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "GetCurrentAudioCulture", nullptr, nullptr, Z_Construct_UFunction_UAkGameplayStatics_GetCurrentAudioCulture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_GetCurrentAudioCulture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkGameplayStatics_GetCurrentAudioCulture_Statics::AkGameplayStatics_eventGetCurrentAudioCulture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_GetCurrentAudioCulture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGameplayStatics_GetCurrentAudioCulture_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_GetCurrentAudioCulture_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkGameplayStatics_GetCurrentAudioCulture_Statics::AkGameplayStatics_eventGetCurrentAudioCulture_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_GetCurrentAudioCulture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_GetCurrentAudioCulture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics
	{
		struct AkGameplayStatics_eventGetRTPCValue_Parms
		{
			UAkRtpc* RTPCValue;
			int32 PlayingID;
			ERTPCValueType InputValueType;
			float Value;
			ERTPCValueType OutputValueType;
			AActor* Actor;
			FName RTPC;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RTPCValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RTPCValue;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayingID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InputValueType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InputValueType;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutputValueType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutputValueType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FNamePropertyParams NewProp_RTPC;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::NewProp_RTPCValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::NewProp_RTPCValue = { "RTPCValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventGetRTPCValue_Parms, RTPCValue), Z_Construct_UClass_UAkRtpc_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::NewProp_RTPCValue_MetaData), Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::NewProp_RTPCValue_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::NewProp_PlayingID = { "PlayingID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventGetRTPCValue_Parms, PlayingID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::NewProp_InputValueType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::NewProp_InputValueType = { "InputValueType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventGetRTPCValue_Parms, InputValueType), Z_Construct_UEnum_AkAudio_ERTPCValueType, METADATA_PARAMS(0, nullptr) }; // 1784776682
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventGetRTPCValue_Parms, Value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::NewProp_OutputValueType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::NewProp_OutputValueType = { "OutputValueType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventGetRTPCValue_Parms, OutputValueType), Z_Construct_UEnum_AkAudio_ERTPCValueType, METADATA_PARAMS(0, nullptr) }; // 1784776682
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventGetRTPCValue_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::NewProp_RTPC = { "RTPC", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventGetRTPCValue_Parms, RTPC), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::NewProp_RTPCValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::NewProp_PlayingID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::NewProp_InputValueType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::NewProp_InputValueType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::NewProp_OutputValueType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::NewProp_OutputValueType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::NewProp_RTPC,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "7" },
		{ "Category", "Audiokinetic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Gets the value of a Game Parameter, optionally targeting the root component of a specified actor.\n\x09* @param RTPC - The name of the Game Parameter to set\n\x09* @param Value - The value of the Game Parameter\n\x09* @param InterpolationTimeMs - Duration during which the Game Parameter is interpolated towards Value (in ms)\n\x09* @param Actor - (Optional) Actor on which to set the Game Parameter value\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the value of a Game Parameter, optionally targeting the root component of a specified actor.\n@param RTPC - The name of the Game Parameter to set\n@param Value - The value of the Game Parameter\n@param InterpolationTimeMs - Duration during which the Game Parameter is interpolated towards Value (in ms)\n@param Actor - (Optional) Actor on which to set the Game Parameter value" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "GetRTPCValue", nullptr, nullptr, Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::AkGameplayStatics_eventGetRTPCValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::AkGameplayStatics_eventGetRTPCValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_GetSpeakerAngles_Statics
	{
		struct AkGameplayStatics_eventGetSpeakerAngles_Parms
		{
			TArray<float> SpeakerAngles;
			float HeightAngle;
			FString DeviceShareSet;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeakerAngles_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SpeakerAngles;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HeightAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceShareSet_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceShareSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetSpeakerAngles_Statics::NewProp_SpeakerAngles_Inner = { "SpeakerAngles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetSpeakerAngles_Statics::NewProp_SpeakerAngles = { "SpeakerAngles", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventGetSpeakerAngles_Parms, SpeakerAngles), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetSpeakerAngles_Statics::NewProp_HeightAngle = { "HeightAngle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventGetSpeakerAngles_Parms, HeightAngle), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_GetSpeakerAngles_Statics::NewProp_DeviceShareSet_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetSpeakerAngles_Statics::NewProp_DeviceShareSet = { "DeviceShareSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventGetSpeakerAngles_Parms, DeviceShareSet), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_GetSpeakerAngles_Statics::NewProp_DeviceShareSet_MetaData), Z_Construct_UFunction_UAkGameplayStatics_GetSpeakerAngles_Statics::NewProp_DeviceShareSet_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_GetSpeakerAngles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetSpeakerAngles_Statics::NewProp_SpeakerAngles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetSpeakerAngles_Statics::NewProp_SpeakerAngles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetSpeakerAngles_Statics::NewProp_HeightAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetSpeakerAngles_Statics::NewProp_DeviceShareSet,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_GetSpeakerAngles_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets speaker angles of the specified device. Speaker angles are used for 3D positioning of sounds over standard configurations.\n\x09 * Note that the current version of Wwise only supports positioning on the plane.\n\x09 * The speaker angles are expressed as an array of loudspeaker pairs, in degrees, relative to azimuth ]0,180].\n\x09 * Supported loudspeaker setups are always symmetric; the center speaker is always in the middle and thus not specified by angles.\n\x09 * Angles must be set in ascending order.\n\x09 *\n\x09 * @param SpeakerAngles Returned array of loudspeaker pair angles, in degrees relative to azimuth [0,180].\n\x09 * @param HeightAngle Elevation of the height layer, in degrees relative to the plane [-90,90].\n\x09 * @param DeviceShareSet ShareSet for which to get the angles.\n\x09 *\n\x09 */" },
#endif
		{ "CPP_Default_DeviceShareSet", "" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets speaker angles of the specified device. Speaker angles are used for 3D positioning of sounds over standard configurations.\nNote that the current version of Wwise only supports positioning on the plane.\nThe speaker angles are expressed as an array of loudspeaker pairs, in degrees, relative to azimuth ]0,180].\nSupported loudspeaker setups are always symmetric; the center speaker is always in the middle and thus not specified by angles.\nAngles must be set in ascending order.\n\n@param SpeakerAngles Returned array of loudspeaker pair angles, in degrees relative to azimuth [0,180].\n@param HeightAngle Elevation of the height layer, in degrees relative to the plane [-90,90].\n@param DeviceShareSet ShareSet for which to get the angles." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_GetSpeakerAngles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "GetSpeakerAngles", nullptr, nullptr, Z_Construct_UFunction_UAkGameplayStatics_GetSpeakerAngles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_GetSpeakerAngles_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkGameplayStatics_GetSpeakerAngles_Statics::AkGameplayStatics_eventGetSpeakerAngles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_GetSpeakerAngles_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGameplayStatics_GetSpeakerAngles_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_GetSpeakerAngles_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkGameplayStatics_GetSpeakerAngles_Statics::AkGameplayStatics_eventGetSpeakerAngles_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_GetSpeakerAngles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_GetSpeakerAngles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_IsEditor_Statics
	{
		struct AkGameplayStatics_eventIsEditor_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAkGameplayStatics_IsEditor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AkGameplayStatics_eventIsEditor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkGameplayStatics_IsEditor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AkGameplayStatics_eventIsEditor_Parms), &Z_Construct_UFunction_UAkGameplayStatics_IsEditor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_IsEditor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_IsEditor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_IsEditor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_IsEditor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "IsEditor", nullptr, nullptr, Z_Construct_UFunction_UAkGameplayStatics_IsEditor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_IsEditor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkGameplayStatics_IsEditor_Statics::AkGameplayStatics_eventIsEditor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_IsEditor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGameplayStatics_IsEditor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_IsEditor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkGameplayStatics_IsEditor_Statics::AkGameplayStatics_eventIsEditor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_IsEditor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_IsEditor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_IsGame_Statics
	{
		struct AkGameplayStatics_eventIsGame_Parms
		{
			UObject* WorldContextObject;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_IsGame_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventIsGame_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UAkGameplayStatics_IsGame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AkGameplayStatics_eventIsGame_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkGameplayStatics_IsGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AkGameplayStatics_eventIsGame_Parms), &Z_Construct_UFunction_UAkGameplayStatics_IsGame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_IsGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_IsGame_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_IsGame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_IsGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_IsGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "IsGame", nullptr, nullptr, Z_Construct_UFunction_UAkGameplayStatics_IsGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_IsGame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkGameplayStatics_IsGame_Statics::AkGameplayStatics_eventIsGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_IsGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGameplayStatics_IsGame_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_IsGame_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkGameplayStatics_IsGame_Statics::AkGameplayStatics_eventIsGame_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_IsGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_IsGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_LoadInitBank_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_LoadInitBank_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|SoundBanks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Loads the Init SoundBank\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Loads the Init SoundBank" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_LoadInitBank_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "LoadInitBank", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_LoadInitBank_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGameplayStatics_LoadInitBank_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_LoadInitBank()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_LoadInitBank_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent_Statics
	{
		struct AkGameplayStatics_eventPostAndWaitForEndOfEvent_Parms
		{
			UAkAudioEvent* AkEvent;
			AActor* Actor;
			bool bStopWhenAttachedToDestroyed;
			FLatentActionInfo LatentInfo;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AkEvent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static void NewProp_bStopWhenAttachedToDestroyed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopWhenAttachedToDestroyed;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent_Statics::NewProp_AkEvent = { "AkEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventPostAndWaitForEndOfEvent_Parms, AkEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventPostAndWaitForEndOfEvent_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent_Statics::NewProp_bStopWhenAttachedToDestroyed_SetBit(void* Obj)
	{
		((AkGameplayStatics_eventPostAndWaitForEndOfEvent_Parms*)Obj)->bStopWhenAttachedToDestroyed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent_Statics::NewProp_bStopWhenAttachedToDestroyed = { "bStopWhenAttachedToDestroyed", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AkGameplayStatics_eventPostAndWaitForEndOfEvent_Parms), &Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent_Statics::NewProp_bStopWhenAttachedToDestroyed_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventPostAndWaitForEndOfEvent_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 2674470931
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventPostAndWaitForEndOfEvent_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent_Statics::NewProp_AkEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent_Statics::NewProp_bStopWhenAttachedToDestroyed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "Audiokinetic|Actor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Posts a Wwise Event attached to and following the root component of the specified actor, and waits for the end of the event to continue execution.\n\x09 * Additional calls made while an event is active are ignored.\n\x09 *\n\x09 * @param AkEvent - Event to play.\n\x09 * @param Actor - actor on which to play the event.\n\x09 * @param bStopWhenAttachedToDestroyed - Specifies whether the sound should stop playing when the owner of the attach to component is destroyed.\n\x09 */" },
#endif
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Posts a Wwise Event attached to and following the root component of the specified actor, and waits for the end of the event to continue execution.\nAdditional calls made while an event is active are ignored.\n\n@param AkEvent - Event to play.\n@param Actor - actor on which to play the event.\n@param bStopWhenAttachedToDestroyed - Specifies whether the sound should stop playing when the owner of the attach to component is destroyed." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "PostAndWaitForEndOfEvent", nullptr, nullptr, Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent_Statics::AkGameplayStatics_eventPostAndWaitForEndOfEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent_Statics::AkGameplayStatics_eventPostAndWaitForEndOfEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics
	{
		struct AkGameplayStatics_eventPostEvent_Parms
		{
			UAkAudioEvent* AkEvent;
			AActor* Actor;
			int32 CallbackMask;
			FScriptDelegate PostEventCallback;
			bool bStopWhenAttachedToDestroyed;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AkEvent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CallbackMask_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CallbackMask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostEventCallback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_PostEventCallback;
		static void NewProp_bStopWhenAttachedToDestroyed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopWhenAttachedToDestroyed;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::NewProp_AkEvent = { "AkEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventPostEvent_Parms, AkEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventPostEvent_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::NewProp_CallbackMask_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/AkAudio.EAkCallbackType" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::NewProp_CallbackMask = { "CallbackMask", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventPostEvent_Parms, CallbackMask), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::NewProp_CallbackMask_MetaData), Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::NewProp_CallbackMask_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::NewProp_PostEventCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::NewProp_PostEventCallback = { "PostEventCallback", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventPostEvent_Parms, PostEventCallback), Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::NewProp_PostEventCallback_MetaData), Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::NewProp_PostEventCallback_MetaData) }; // 733054327
	void Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::NewProp_bStopWhenAttachedToDestroyed_SetBit(void* Obj)
	{
		((AkGameplayStatics_eventPostEvent_Parms*)Obj)->bStopWhenAttachedToDestroyed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::NewProp_bStopWhenAttachedToDestroyed = { "bStopWhenAttachedToDestroyed", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AkGameplayStatics_eventPostEvent_Parms), &Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::NewProp_bStopWhenAttachedToDestroyed_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventPostEvent_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::NewProp_AkEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::NewProp_CallbackMask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::NewProp_PostEventCallback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::NewProp_bStopWhenAttachedToDestroyed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "AutoCreateRefTerm", "PostEventCallback" },
		{ "Category", "Audiokinetic|Actor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Posts a Wwise Event attached to and following the root component of the specified actor.\n\x09 *\n\x09 * @param AkEvent - Event to play.\n\x09 * @param Actor - Actor on which to play the event. If the Actor is left empty, the Event will be played as an Ambient sound.\n\x09 * @param bStopWhenAttachedToDestroyed - Specifies whether the sound should stop playing when the owner of the attach to component is destroyed.\n\x09 */" },
#endif
		{ "CPP_Default_bStopWhenAttachedToDestroyed", "false" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Posts a Wwise Event attached to and following the root component of the specified actor.\n\n@param AkEvent - Event to play.\n@param Actor - Actor on which to play the event. If the Actor is left empty, the Event will be played as an Ambient sound.\n@param bStopWhenAttachedToDestroyed - Specifies whether the sound should stop playing when the owner of the attach to component is destroyed." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "PostEvent", nullptr, nullptr, Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::AkGameplayStatics_eventPostEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::AkGameplayStatics_eventPostEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_PostEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation_Statics
	{
		struct AkGameplayStatics_eventPostEventAtLocation_Parms
		{
			UAkAudioEvent* AkEvent;
			FVector Location;
			FRotator Orientation;
			UObject* WorldContextObject;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AkEvent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Orientation;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation_Statics::NewProp_AkEvent = { "AkEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventPostEventAtLocation_Parms, AkEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventPostEventAtLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventPostEventAtLocation_Parms, Orientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventPostEventAtLocation_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventPostEventAtLocation_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation_Statics::NewProp_AkEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation_Statics::NewProp_Orientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "Category", "Audiokinetic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Posts a Wwise Event at the specified location. This is a fire and forget sound, created on a temporary Wwise Game Object. Replication is also not handled at this point.\n\x09 *\n\x09 * @param AkEvent - Wwise Event to post.\n\x09 * @param Location - Location from which to post the Wwise Event.\n\x09 * @param Orientation - Orientation of the event\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Posts a Wwise Event at the specified location. This is a fire and forget sound, created on a temporary Wwise Game Object. Replication is also not handled at this point.\n\n@param AkEvent - Wwise Event to post.\n@param Location - Location from which to post the Wwise Event.\n@param Orientation - Orientation of the event" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "PostEventAtLocation", nullptr, nullptr, Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation_Statics::AkGameplayStatics_eventPostEventAtLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation_Statics::AkGameplayStatics_eventPostEventAtLocation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_PostTrigger_Statics
	{
		struct AkGameplayStatics_eventPostTrigger_Parms
		{
			UAkTrigger* TriggerValue;
			AActor* Actor;
			FName Trigger;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TriggerValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TriggerValue;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Trigger;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_PostTrigger_Statics::NewProp_TriggerValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostTrigger_Statics::NewProp_TriggerValue = { "TriggerValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventPostTrigger_Parms, TriggerValue), Z_Construct_UClass_UAkTrigger_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_PostTrigger_Statics::NewProp_TriggerValue_MetaData), Z_Construct_UFunction_UAkGameplayStatics_PostTrigger_Statics::NewProp_TriggerValue_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostTrigger_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventPostTrigger_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostTrigger_Statics::NewProp_Trigger = { "Trigger", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventPostTrigger_Parms, Trigger), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_PostTrigger_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostTrigger_Statics::NewProp_TriggerValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostTrigger_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostTrigger_Statics::NewProp_Trigger,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_PostTrigger_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "Audiokinetic|Actor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Posts a Trigger, targeting the root component of a specified actor.\n\x09 * @param Trigger - Name of the Trigger\n\x09 * @param Actor - Actor on which to post the Trigger\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Posts a Trigger, targeting the root component of a specified actor.\n@param Trigger - Name of the Trigger\n@param Actor - Actor on which to post the Trigger" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_PostTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "PostTrigger", nullptr, nullptr, Z_Construct_UFunction_UAkGameplayStatics_PostTrigger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_PostTrigger_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkGameplayStatics_PostTrigger_Statics::AkGameplayStatics_eventPostTrigger_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_PostTrigger_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGameplayStatics_PostTrigger_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_PostTrigger_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkGameplayStatics_PostTrigger_Statics::AkGameplayStatics_eventPostTrigger_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_PostTrigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_PostTrigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_RemoveOutput_Statics
	{
		struct AkGameplayStatics_eventRemoveOutput_Parms
		{
			FAkOutputDeviceID in_OutputDeviceId;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_in_OutputDeviceId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkGameplayStatics_RemoveOutput_Statics::NewProp_in_OutputDeviceId = { "in_OutputDeviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventRemoveOutput_Parms, in_OutputDeviceId), Z_Construct_UScriptStruct_FAkOutputDeviceID, METADATA_PARAMS(0, nullptr) }; // 163289064
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_RemoveOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_RemoveOutput_Statics::NewProp_in_OutputDeviceId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_RemoveOutput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Removes one output added through AK::SoundEngine::AddOutput If a listener was associated with the device, you should consider unregistering the listener prior to call RemoveOutput so that Game Object/Listener routing is properly updated according to your game scenario.\n\x09*\n\x09* @param in_OutputDeviceId ID of the output to remove. Use the returned ID from AddOutput, GetOutputID, or ReplaceOutputt.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes one output added through AK::SoundEngine::AddOutput If a listener was associated with the device, you should consider unregistering the listener prior to call RemoveOutput so that Game Object/Listener routing is properly updated according to your game scenario.\n\n@param in_OutputDeviceId ID of the output to remove. Use the returned ID from AddOutput, GetOutputID, or ReplaceOutputt." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_RemoveOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "RemoveOutput", nullptr, nullptr, Z_Construct_UFunction_UAkGameplayStatics_RemoveOutput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_RemoveOutput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkGameplayStatics_RemoveOutput_Statics::AkGameplayStatics_eventRemoveOutput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_RemoveOutput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGameplayStatics_RemoveOutput_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_RemoveOutput_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkGameplayStatics_RemoveOutput_Statics::AkGameplayStatics_eventRemoveOutput_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_RemoveOutput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_RemoveOutput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_ReplaceMainOutput_Statics
	{
		struct AkGameplayStatics_eventReplaceMainOutput_Parms
		{
			FAkOutputSettings MainOutputSettings;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MainOutputSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MainOutputSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_ReplaceMainOutput_Statics::NewProp_MainOutputSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkGameplayStatics_ReplaceMainOutput_Statics::NewProp_MainOutputSettings = { "MainOutputSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventReplaceMainOutput_Parms, MainOutputSettings), Z_Construct_UScriptStruct_FAkOutputSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_ReplaceMainOutput_Statics::NewProp_MainOutputSettings_MetaData), Z_Construct_UFunction_UAkGameplayStatics_ReplaceMainOutput_Statics::NewProp_MainOutputSettings_MetaData) }; // 1761225682
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_ReplaceMainOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_ReplaceMainOutput_Statics::NewProp_MainOutputSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_ReplaceMainOutput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Replaces the main output device previously created during engine initialization with a new output device.\n\x09 * In addition to simply removing one output device and adding a new one, the new output device will also be used on all of the master busses\n\x09 * that the old output device was associated with, and preserve all listeners that were attached to the old output device.\n\x09 *\n\x09 * @param MainOutputSettings\x09""Creation parameters for this output\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Replaces the main output device previously created during engine initialization with a new output device.\nIn addition to simply removing one output device and adding a new one, the new output device will also be used on all of the master busses\nthat the old output device was associated with, and preserve all listeners that were attached to the old output device.\n\n@param MainOutputSettings    Creation parameters for this output" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_ReplaceMainOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "ReplaceMainOutput", nullptr, nullptr, Z_Construct_UFunction_UAkGameplayStatics_ReplaceMainOutput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_ReplaceMainOutput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkGameplayStatics_ReplaceMainOutput_Statics::AkGameplayStatics_eventReplaceMainOutput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_ReplaceMainOutput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGameplayStatics_ReplaceMainOutput_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_ReplaceMainOutput_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkGameplayStatics_ReplaceMainOutput_Statics::AkGameplayStatics_eventReplaceMainOutput_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_ReplaceMainOutput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_ReplaceMainOutput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_ResetRTPCValue_Statics
	{
		struct AkGameplayStatics_eventResetRTPCValue_Parms
		{
			UAkRtpc* RTPCValue;
			int32 InterpolationTimeMs;
			AActor* Actor;
			FName RTPC;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RTPCValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RTPCValue;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InterpolationTimeMs;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FNamePropertyParams NewProp_RTPC;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_ResetRTPCValue_Statics::NewProp_RTPCValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_ResetRTPCValue_Statics::NewProp_RTPCValue = { "RTPCValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventResetRTPCValue_Parms, RTPCValue), Z_Construct_UClass_UAkRtpc_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_ResetRTPCValue_Statics::NewProp_RTPCValue_MetaData), Z_Construct_UFunction_UAkGameplayStatics_ResetRTPCValue_Statics::NewProp_RTPCValue_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameplayStatics_ResetRTPCValue_Statics::NewProp_InterpolationTimeMs = { "InterpolationTimeMs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventResetRTPCValue_Parms, InterpolationTimeMs), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_ResetRTPCValue_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventResetRTPCValue_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAkGameplayStatics_ResetRTPCValue_Statics::NewProp_RTPC = { "RTPC", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventResetRTPCValue_Parms, RTPC), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_ResetRTPCValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_ResetRTPCValue_Statics::NewProp_RTPCValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_ResetRTPCValue_Statics::NewProp_InterpolationTimeMs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_ResetRTPCValue_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_ResetRTPCValue_Statics::NewProp_RTPC,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_ResetRTPCValue_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "8" },
		{ "Category", "Audiokinetic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Resets the value of a Game Parameter to its default value, optionally targeting the root component of a specified actor.\n\x09* @param RTPCValue - The name of the Game Parameter to reset\n\x09* @param InterpolationTimeMs - Duration during which the Game Parameter is interpolated towards its default value (in ms)\n\x09* @param Actor - (Optional) Actor on which to reset the Game Parameter value\n\x09* @param RTPC - The name of the Game Parameter to reset\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Resets the value of a Game Parameter to its default value, optionally targeting the root component of a specified actor.\n@param RTPCValue - The name of the Game Parameter to reset\n@param InterpolationTimeMs - Duration during which the Game Parameter is interpolated towards its default value (in ms)\n@param Actor - (Optional) Actor on which to reset the Game Parameter value\n@param RTPC - The name of the Game Parameter to reset" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_ResetRTPCValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "ResetRTPCValue", nullptr, nullptr, Z_Construct_UFunction_UAkGameplayStatics_ResetRTPCValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_ResetRTPCValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkGameplayStatics_ResetRTPCValue_Statics::AkGameplayStatics_eventResetRTPCValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_ResetRTPCValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGameplayStatics_ResetRTPCValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_ResetRTPCValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkGameplayStatics_ResetRTPCValue_Statics::AkGameplayStatics_eventResetRTPCValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_ResetRTPCValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_ResetRTPCValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_SetActorMixerEffect_Statics
	{
		struct AkGameplayStatics_eventSetActorMixerEffect_Parms
		{
			FAkUniqueID InAudioNodeID;
			int32 InEffectIndex;
			const UAkEffectShareSet* InEffectShareSet;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAudioNodeID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InAudioNodeID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InEffectIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InEffectIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InEffectShareSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InEffectShareSet;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetActorMixerEffect_Statics::NewProp_InAudioNodeID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetActorMixerEffect_Statics::NewProp_InAudioNodeID = { "InAudioNodeID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetActorMixerEffect_Parms, InAudioNodeID), Z_Construct_UScriptStruct_FAkUniqueID, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetActorMixerEffect_Statics::NewProp_InAudioNodeID_MetaData), Z_Construct_UFunction_UAkGameplayStatics_SetActorMixerEffect_Statics::NewProp_InAudioNodeID_MetaData) }; // 2760335741
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetActorMixerEffect_Statics::NewProp_InEffectIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetActorMixerEffect_Statics::NewProp_InEffectIndex = { "InEffectIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetActorMixerEffect_Parms, InEffectIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetActorMixerEffect_Statics::NewProp_InEffectIndex_MetaData), Z_Construct_UFunction_UAkGameplayStatics_SetActorMixerEffect_Statics::NewProp_InEffectIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetActorMixerEffect_Statics::NewProp_InEffectShareSet_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetActorMixerEffect_Statics::NewProp_InEffectShareSet = { "InEffectShareSet", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetActorMixerEffect_Parms, InEffectShareSet), Z_Construct_UClass_UAkEffectShareSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetActorMixerEffect_Statics::NewProp_InEffectShareSet_MetaData), Z_Construct_UFunction_UAkGameplayStatics_SetActorMixerEffect_Statics::NewProp_InEffectShareSet_MetaData) };
	void Z_Construct_UFunction_UAkGameplayStatics_SetActorMixerEffect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AkGameplayStatics_eventSetActorMixerEffect_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetActorMixerEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AkGameplayStatics_eventSetActorMixerEffect_Parms), &Z_Construct_UFunction_UAkGameplayStatics_SetActorMixerEffect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_SetActorMixerEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetActorMixerEffect_Statics::NewProp_InAudioNodeID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetActorMixerEffect_Statics::NewProp_InEffectIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetActorMixerEffect_Statics::NewProp_InEffectShareSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetActorMixerEffect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetActorMixerEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets an Effect ShareSet at the specified audio node and Effect slot index.\n\x09*\n\x09* @param InAudioNodeID Can be a member of the Actor-Mixer or Interactive Music Hierarchy (not a bus).\n\x09* @param InEffectIndex Effect slot index (0-3)\n\x09* @param InEffectShareSet Effect ShareSet asset\n\x09* @return Always returns True.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets an Effect ShareSet at the specified audio node and Effect slot index.\n\n@param InAudioNodeID Can be a member of the Actor-Mixer or Interactive Music Hierarchy (not a bus).\n@param InEffectIndex Effect slot index (0-3)\n@param InEffectShareSet Effect ShareSet asset\n@return Always returns True." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_SetActorMixerEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetActorMixerEffect", nullptr, nullptr, Z_Construct_UFunction_UAkGameplayStatics_SetActorMixerEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetActorMixerEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkGameplayStatics_SetActorMixerEffect_Statics::AkGameplayStatics_eventSetActorMixerEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetActorMixerEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGameplayStatics_SetActorMixerEffect_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetActorMixerEffect_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkGameplayStatics_SetActorMixerEffect_Statics::AkGameplayStatics_eventSetActorMixerEffect_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetActorMixerEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_SetActorMixerEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_SetAuxBusEffect_Statics
	{
		struct AkGameplayStatics_eventSetAuxBusEffect_Parms
		{
			const UAkAuxBus* InAuxBus;
			int32 InEffectIndex;
			const UAkEffectShareSet* InEffectShareSet;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAuxBus_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InAuxBus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InEffectIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InEffectIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InEffectShareSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InEffectShareSet;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetAuxBusEffect_Statics::NewProp_InAuxBus_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetAuxBusEffect_Statics::NewProp_InAuxBus = { "InAuxBus", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetAuxBusEffect_Parms, InAuxBus), Z_Construct_UClass_UAkAuxBus_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetAuxBusEffect_Statics::NewProp_InAuxBus_MetaData), Z_Construct_UFunction_UAkGameplayStatics_SetAuxBusEffect_Statics::NewProp_InAuxBus_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetAuxBusEffect_Statics::NewProp_InEffectIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetAuxBusEffect_Statics::NewProp_InEffectIndex = { "InEffectIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetAuxBusEffect_Parms, InEffectIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetAuxBusEffect_Statics::NewProp_InEffectIndex_MetaData), Z_Construct_UFunction_UAkGameplayStatics_SetAuxBusEffect_Statics::NewProp_InEffectIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetAuxBusEffect_Statics::NewProp_InEffectShareSet_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetAuxBusEffect_Statics::NewProp_InEffectShareSet = { "InEffectShareSet", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetAuxBusEffect_Parms, InEffectShareSet), Z_Construct_UClass_UAkEffectShareSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetAuxBusEffect_Statics::NewProp_InEffectShareSet_MetaData), Z_Construct_UFunction_UAkGameplayStatics_SetAuxBusEffect_Statics::NewProp_InEffectShareSet_MetaData) };
	void Z_Construct_UFunction_UAkGameplayStatics_SetAuxBusEffect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AkGameplayStatics_eventSetAuxBusEffect_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetAuxBusEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AkGameplayStatics_eventSetAuxBusEffect_Parms), &Z_Construct_UFunction_UAkGameplayStatics_SetAuxBusEffect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_SetAuxBusEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetAuxBusEffect_Statics::NewProp_InAuxBus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetAuxBusEffect_Statics::NewProp_InEffectIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetAuxBusEffect_Statics::NewProp_InEffectShareSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetAuxBusEffect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetAuxBusEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets an Effect ShareSet at the specified Bus and Effect slot index.\n\x09* \n\x09*  @param InAuxBus Aux Bus Asset.\n\x09*  @param InEffectIndex Effect slot index (0-3)\n\x09*  @param InEffectShareSet  Effect ShareSet asset\n\x09*  @return True when successfully posted, False otherwise.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets an Effect ShareSet at the specified Bus and Effect slot index.\n\n@param InAuxBus Aux Bus Asset.\n@param InEffectIndex Effect slot index (0-3)\n@param InEffectShareSet  Effect ShareSet asset\n@return True when successfully posted, False otherwise." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_SetAuxBusEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetAuxBusEffect", nullptr, nullptr, Z_Construct_UFunction_UAkGameplayStatics_SetAuxBusEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetAuxBusEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkGameplayStatics_SetAuxBusEffect_Statics::AkGameplayStatics_eventSetAuxBusEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetAuxBusEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGameplayStatics_SetAuxBusEffect_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetAuxBusEffect_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkGameplayStatics_SetAuxBusEffect_Statics::AkGameplayStatics_eventSetAuxBusEffect_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetAuxBusEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_SetAuxBusEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_SetBusConfig_Statics
	{
		struct AkGameplayStatics_eventSetBusConfig_Parms
		{
			FString BusName;
			AkChannelConfiguration ChannelConfiguration;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BusName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BusName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ChannelConfiguration_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ChannelConfiguration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetBusConfig_Statics::NewProp_BusName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetBusConfig_Statics::NewProp_BusName = { "BusName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetBusConfig_Parms, BusName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetBusConfig_Statics::NewProp_BusName_MetaData), Z_Construct_UFunction_UAkGameplayStatics_SetBusConfig_Statics::NewProp_BusName_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetBusConfig_Statics::NewProp_ChannelConfiguration_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetBusConfig_Statics::NewProp_ChannelConfiguration = { "ChannelConfiguration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetBusConfig_Parms, ChannelConfiguration), Z_Construct_UEnum_AkAudio_AkChannelConfiguration, METADATA_PARAMS(0, nullptr) }; // 2129781914
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_SetBusConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetBusConfig_Statics::NewProp_BusName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetBusConfig_Statics::NewProp_ChannelConfiguration_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetBusConfig_Statics::NewProp_ChannelConfiguration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetBusConfig_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Force channel configuration for the specified bus.\n\x09* This function has unspecified behavior when changing the configuration of a bus that\n\x09* is currently playing.\n\x09* You cannot change the configuration of the master bus.\n\x09*\n\x09* @param BusName\x09\x09\x09\x09""Bus Name\n\x09* @param ChannelConfiguration\x09""Desired channel configuration.\n\x09* @return Always returns AK_Success\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Force channel configuration for the specified bus.\nThis function has unspecified behavior when changing the configuration of a bus that\nis currently playing.\nYou cannot change the configuration of the master bus.\n\n@param BusName                                Bus Name\n@param ChannelConfiguration   Desired channel configuration.\n@return Always returns AK_Success" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_SetBusConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetBusConfig", nullptr, nullptr, Z_Construct_UFunction_UAkGameplayStatics_SetBusConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetBusConfig_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkGameplayStatics_SetBusConfig_Statics::AkGameplayStatics_eventSetBusConfig_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetBusConfig_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGameplayStatics_SetBusConfig_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetBusConfig_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkGameplayStatics_SetBusConfig_Statics::AkGameplayStatics_eventSetBusConfig_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetBusConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_SetBusConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByID_Statics
	{
		struct AkGameplayStatics_eventSetBusEffectByID_Parms
		{
			FAkUniqueID InBusID;
			int32 InEffectIndex;
			const UAkEffectShareSet* InEffectShareSet;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBusID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InBusID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InEffectIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InEffectIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InEffectShareSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InEffectShareSet;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByID_Statics::NewProp_InBusID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByID_Statics::NewProp_InBusID = { "InBusID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetBusEffectByID_Parms, InBusID), Z_Construct_UScriptStruct_FAkUniqueID, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByID_Statics::NewProp_InBusID_MetaData), Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByID_Statics::NewProp_InBusID_MetaData) }; // 2760335741
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByID_Statics::NewProp_InEffectIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByID_Statics::NewProp_InEffectIndex = { "InEffectIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetBusEffectByID_Parms, InEffectIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByID_Statics::NewProp_InEffectIndex_MetaData), Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByID_Statics::NewProp_InEffectIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByID_Statics::NewProp_InEffectShareSet_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByID_Statics::NewProp_InEffectShareSet = { "InEffectShareSet", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetBusEffectByID_Parms, InEffectShareSet), Z_Construct_UClass_UAkEffectShareSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByID_Statics::NewProp_InEffectShareSet_MetaData), Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByID_Statics::NewProp_InEffectShareSet_MetaData) };
	void Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AkGameplayStatics_eventSetBusEffectByID_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AkGameplayStatics_eventSetBusEffectByID_Parms), &Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByID_Statics::NewProp_InBusID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByID_Statics::NewProp_InEffectIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByID_Statics::NewProp_InEffectShareSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets an Effect ShareSet at the specified Bus and Effect slot index.\n\x09* \n\x09*  @param InBusID Bus Short ID.\n\x09*  @param InEffectIndex Effect slot index (0-3)\n\x09*  @param InEffectShareSet  Effect ShareSet asset\n\x09*  @return True when successfully posted, False otherwise.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets an Effect ShareSet at the specified Bus and Effect slot index.\n\n@param InBusID Bus Short ID.\n@param InEffectIndex Effect slot index (0-3)\n@param InEffectShareSet  Effect ShareSet asset\n@return True when successfully posted, False otherwise." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetBusEffectByID", nullptr, nullptr, Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByID_Statics::AkGameplayStatics_eventSetBusEffectByID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByID_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByID_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByID_Statics::AkGameplayStatics_eventSetBusEffectByID_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByName_Statics
	{
		struct AkGameplayStatics_eventSetBusEffectByName_Parms
		{
			FString InBusName;
			int32 InEffectIndex;
			const UAkEffectShareSet* InEffectShareSet;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBusName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InBusName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InEffectIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InEffectIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InEffectShareSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InEffectShareSet;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByName_Statics::NewProp_InBusName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByName_Statics::NewProp_InBusName = { "InBusName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetBusEffectByName_Parms, InBusName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByName_Statics::NewProp_InBusName_MetaData), Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByName_Statics::NewProp_InBusName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByName_Statics::NewProp_InEffectIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByName_Statics::NewProp_InEffectIndex = { "InEffectIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetBusEffectByName_Parms, InEffectIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByName_Statics::NewProp_InEffectIndex_MetaData), Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByName_Statics::NewProp_InEffectIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByName_Statics::NewProp_InEffectShareSet_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByName_Statics::NewProp_InEffectShareSet = { "InEffectShareSet", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetBusEffectByName_Parms, InEffectShareSet), Z_Construct_UClass_UAkEffectShareSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByName_Statics::NewProp_InEffectShareSet_MetaData), Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByName_Statics::NewProp_InEffectShareSet_MetaData) };
	void Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AkGameplayStatics_eventSetBusEffectByName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AkGameplayStatics_eventSetBusEffectByName_Parms), &Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByName_Statics::NewProp_InBusName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByName_Statics::NewProp_InEffectIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByName_Statics::NewProp_InEffectShareSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets an Effect ShareSet at the specified Bus and Effect slot index.\x09\n\x09*\n\x09*  @param InBusName Bus name\n\x09*  @param InEffectIndex Effect slot index (0-3)\n\x09*  @param InEffectShareSet  Effect ShareSet asset\n\x09*  @return True when successfully posted,  False otherwise.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets an Effect ShareSet at the specified Bus and Effect slot index.\n\n@param InBusName Bus name\n@param InEffectIndex Effect slot index (0-3)\n@param InEffectShareSet  Effect ShareSet asset\n@return True when successfully posted,  False otherwise." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetBusEffectByName", nullptr, nullptr, Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByName_Statics::AkGameplayStatics_eventSetBusEffectByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByName_Statics::AkGameplayStatics_eventSetBusEffectByName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCulture_Statics
	{
		struct AkGameplayStatics_eventSetCurrentAudioCulture_Parms
		{
			FString AudioCulture;
			FLatentActionInfo LatentInfo;
			UObject* WorldContextObject;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioCulture_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AudioCulture;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCulture_Statics::NewProp_AudioCulture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCulture_Statics::NewProp_AudioCulture = { "AudioCulture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetCurrentAudioCulture_Parms, AudioCulture), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCulture_Statics::NewProp_AudioCulture_MetaData), Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCulture_Statics::NewProp_AudioCulture_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCulture_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetCurrentAudioCulture_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 2674470931
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCulture_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetCurrentAudioCulture_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCulture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCulture_Statics::NewProp_AudioCulture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCulture_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCulture_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCulture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|Culture" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCulture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetCurrentAudioCulture", nullptr, nullptr, Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCulture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCulture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCulture_Statics::AkGameplayStatics_eventSetCurrentAudioCulture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCulture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCulture_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCulture_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCulture_Statics::AkGameplayStatics_eventSetCurrentAudioCulture_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCulture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCulture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCultureAsync_Statics
	{
		struct AkGameplayStatics_eventSetCurrentAudioCultureAsync_Parms
		{
			FString AudioCulture;
			FScriptDelegate Completed;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioCulture_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AudioCulture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Completed_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Completed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCultureAsync_Statics::NewProp_AudioCulture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCultureAsync_Statics::NewProp_AudioCulture = { "AudioCulture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetCurrentAudioCultureAsync_Parms, AudioCulture), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCultureAsync_Statics::NewProp_AudioCulture_MetaData), Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCultureAsync_Statics::NewProp_AudioCulture_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCultureAsync_Statics::NewProp_Completed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCultureAsync_Statics::NewProp_Completed = { "Completed", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetCurrentAudioCultureAsync_Parms, Completed), Z_Construct_UDelegateFunction_AkAudio_OnSetCurrentAudioCultureCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCultureAsync_Statics::NewProp_Completed_MetaData), Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCultureAsync_Statics::NewProp_Completed_MetaData) }; // 2186772231
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCultureAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCultureAsync_Statics::NewProp_AudioCulture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCultureAsync_Statics::NewProp_Completed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCultureAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|Culture" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCultureAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetCurrentAudioCultureAsync", nullptr, nullptr, Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCultureAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCultureAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCultureAsync_Statics::AkGameplayStatics_eventSetCurrentAudioCultureAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCultureAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCultureAsync_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCultureAsync_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCultureAsync_Statics::AkGameplayStatics_eventSetCurrentAudioCultureAsync_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCultureAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCultureAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_SetDiffractionOrder_Statics
	{
		struct AkGameplayStatics_eventSetDiffractionOrder_Parms
		{
			int32 InDiffractionOrder;
			bool bInUpdatePaths;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InDiffractionOrder;
		static void NewProp_bInUpdatePaths_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInUpdatePaths;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetDiffractionOrder_Statics::NewProp_InDiffractionOrder = { "InDiffractionOrder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetDiffractionOrder_Parms, InDiffractionOrder), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UAkGameplayStatics_SetDiffractionOrder_Statics::NewProp_bInUpdatePaths_SetBit(void* Obj)
	{
		((AkGameplayStatics_eventSetDiffractionOrder_Parms*)Obj)->bInUpdatePaths = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetDiffractionOrder_Statics::NewProp_bInUpdatePaths = { "bInUpdatePaths", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AkGameplayStatics_eventSetDiffractionOrder_Parms), &Z_Construct_UFunction_UAkGameplayStatics_SetDiffractionOrder_Statics::NewProp_bInUpdatePaths_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_SetDiffractionOrder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetDiffractionOrder_Statics::NewProp_InDiffractionOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetDiffractionOrder_Statics::NewProp_bInUpdatePaths,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetDiffractionOrder_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|Spatial Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Set the diffraction order for geometric path calculation. The diffraction order indicates the number of edges a sound can diffract around.\n\x09* A high diffraction order accommodates more complex geometry at the expense of higher CPU usage. Set to 0 to disable diffraction on all geometry.\n\x09* Diffraction must be enabled on the geometry to find diffraction paths.\n\x09* This parameter limits the recursion depth of diffraction rays cast from the listener to scan the environment and also the depth of the diffraction search to find paths between emitter and listener.\n\x09* To optimize CPU usage, set it to the maximum number of edges you expect the obstructing geometry to traverse.\n\x09*\n\x09* @param InDiffractionOrder - Number of diffraction edges to consider in path calculations. Valid range [0,8].\n\x09* @param bInUpdatePaths - Set to true to clear existing diffraction paths and to force the re-computation of new paths. If false, existing paths will remain and new paths will be computed when the emitter or listener moves.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the diffraction order for geometric path calculation. The diffraction order indicates the number of edges a sound can diffract around.\nA high diffraction order accommodates more complex geometry at the expense of higher CPU usage. Set to 0 to disable diffraction on all geometry.\nDiffraction must be enabled on the geometry to find diffraction paths.\nThis parameter limits the recursion depth of diffraction rays cast from the listener to scan the environment and also the depth of the diffraction search to find paths between emitter and listener.\nTo optimize CPU usage, set it to the maximum number of edges you expect the obstructing geometry to traverse.\n\n@param InDiffractionOrder - Number of diffraction edges to consider in path calculations. Valid range [0,8].\n@param bInUpdatePaths - Set to true to clear existing diffraction paths and to force the re-computation of new paths. If false, existing paths will remain and new paths will be computed when the emitter or listener moves." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_SetDiffractionOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetDiffractionOrder", nullptr, nullptr, Z_Construct_UFunction_UAkGameplayStatics_SetDiffractionOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetDiffractionOrder_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkGameplayStatics_SetDiffractionOrder_Statics::AkGameplayStatics_eventSetDiffractionOrder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetDiffractionOrder_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGameplayStatics_SetDiffractionOrder_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetDiffractionOrder_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkGameplayStatics_SetDiffractionOrder_Statics::AkGameplayStatics_eventSetDiffractionOrder_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetDiffractionOrder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_SetDiffractionOrder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_SetDistanceProbe_Statics
	{
		struct AkGameplayStatics_eventSetDistanceProbe_Parms
		{
			AActor* Listener;
			AActor* DistanceProbe;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Listener;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DistanceProbe;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetDistanceProbe_Statics::NewProp_Listener = { "Listener", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetDistanceProbe_Parms, Listener), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetDistanceProbe_Statics::NewProp_DistanceProbe = { "DistanceProbe", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetDistanceProbe_Parms, DistanceProbe), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_SetDistanceProbe_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetDistanceProbe_Statics::NewProp_Listener,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetDistanceProbe_Statics::NewProp_DistanceProbe,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetDistanceProbe_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|Actor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Use the position of a separate Actor for distance calculations for a specified listener.\n\x09 * When called, Wwise calculates distance attenuation and filtering\n\x09 * based on the distance between the AkComponent on the distance probe Actor and the sound source.\n\x09 * Useful for third-person perspective applications, the distance probe may be set to the player character's position,\n\x09 * and the listener position to that of the camera. In this scenario, attenuation is based on\n\x09 * the distance between the character and the sound, whereas panning, spatialization, and spread and focus calculations are base on the camera.\n\x09 * @param Listener - The listener that is being affected. By default, the listener is attached to the Player Camera Manager.\n\x09 * @param DistanceProbe - An actor to assign as the distance probe. \n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use the position of a separate Actor for distance calculations for a specified listener.\nWhen called, Wwise calculates distance attenuation and filtering\nbased on the distance between the AkComponent on the distance probe Actor and the sound source.\nUseful for third-person perspective applications, the distance probe may be set to the player character's position,\nand the listener position to that of the camera. In this scenario, attenuation is based on\nthe distance between the character and the sound, whereas panning, spatialization, and spread and focus calculations are base on the camera.\n@param Listener - The listener that is being affected. By default, the listener is attached to the Player Camera Manager.\n@param DistanceProbe - An actor to assign as the distance probe." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_SetDistanceProbe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetDistanceProbe", nullptr, nullptr, Z_Construct_UFunction_UAkGameplayStatics_SetDistanceProbe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetDistanceProbe_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkGameplayStatics_SetDistanceProbe_Statics::AkGameplayStatics_eventSetDistanceProbe_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetDistanceProbe_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGameplayStatics_SetDistanceProbe_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetDistanceProbe_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkGameplayStatics_SetDistanceProbe_Statics::AkGameplayStatics_eventSetDistanceProbe_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetDistanceProbe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_SetDistanceProbe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_SetGameObjectToPortalObstruction_Statics
	{
		struct AkGameplayStatics_eventSetGameObjectToPortalObstruction_Parms
		{
			UAkComponent* GameObjectAkComponent;
			UAkPortalComponent* PortalComponent;
			float ObstructionValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameObjectAkComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GameObjectAkComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PortalComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PortalComponent;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ObstructionValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetGameObjectToPortalObstruction_Statics::NewProp_GameObjectAkComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetGameObjectToPortalObstruction_Statics::NewProp_GameObjectAkComponent = { "GameObjectAkComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetGameObjectToPortalObstruction_Parms, GameObjectAkComponent), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetGameObjectToPortalObstruction_Statics::NewProp_GameObjectAkComponent_MetaData), Z_Construct_UFunction_UAkGameplayStatics_SetGameObjectToPortalObstruction_Statics::NewProp_GameObjectAkComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetGameObjectToPortalObstruction_Statics::NewProp_PortalComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetGameObjectToPortalObstruction_Statics::NewProp_PortalComponent = { "PortalComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetGameObjectToPortalObstruction_Parms, PortalComponent), Z_Construct_UClass_UAkPortalComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetGameObjectToPortalObstruction_Statics::NewProp_PortalComponent_MetaData), Z_Construct_UFunction_UAkGameplayStatics_SetGameObjectToPortalObstruction_Statics::NewProp_PortalComponent_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetGameObjectToPortalObstruction_Statics::NewProp_ObstructionValue = { "ObstructionValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetGameObjectToPortalObstruction_Parms, ObstructionValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_SetGameObjectToPortalObstruction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetGameObjectToPortalObstruction_Statics::NewProp_GameObjectAkComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetGameObjectToPortalObstruction_Statics::NewProp_PortalComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetGameObjectToPortalObstruction_Statics::NewProp_ObstructionValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetGameObjectToPortalObstruction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|Spatial Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Sets the obstruction value of sounds going from this game object through this portal.\n\x09*\n\x09* @param GameObjectAkComponent - The game object emitting the sound that we want to obstruct.\n\x09* @param PortalComponent - The portal through which the sound from the game object can go.\n\x09* @param ObstructionValue - The obstruction value. Can be 0 to 1.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the obstruction value of sounds going from this game object through this portal.\n\n@param GameObjectAkComponent - The game object emitting the sound that we want to obstruct.\n@param PortalComponent - The portal through which the sound from the game object can go.\n@param ObstructionValue - The obstruction value. Can be 0 to 1." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_SetGameObjectToPortalObstruction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetGameObjectToPortalObstruction", nullptr, nullptr, Z_Construct_UFunction_UAkGameplayStatics_SetGameObjectToPortalObstruction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetGameObjectToPortalObstruction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkGameplayStatics_SetGameObjectToPortalObstruction_Statics::AkGameplayStatics_eventSetGameObjectToPortalObstruction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetGameObjectToPortalObstruction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGameplayStatics_SetGameObjectToPortalObstruction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetGameObjectToPortalObstruction_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkGameplayStatics_SetGameObjectToPortalObstruction_Statics::AkGameplayStatics_eventSetGameObjectToPortalObstruction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetGameObjectToPortalObstruction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_SetGameObjectToPortalObstruction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_SetLoadBalancingSpread_Statics
	{
		struct AkGameplayStatics_eventSetLoadBalancingSpread_Parms
		{
			int32 InNbFrames;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InNbFrames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetLoadBalancingSpread_Statics::NewProp_InNbFrames = { "InNbFrames", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetLoadBalancingSpread_Parms, InNbFrames), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_SetLoadBalancingSpread_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetLoadBalancingSpread_Statics::NewProp_InNbFrames,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetLoadBalancingSpread_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|Spatial Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* The computation of spatial audio paths is spread on LoadBalancingSpread frames.\n\x09* Spreading the computation of paths over several frames can prevent CPU peaks.\n\x09* The spread introduces a delay in path computation. A value of 1 indicates no spread at all.\n\x09*\n\x09* @param InNbFrames - Number of spread frames. Value between [1..[\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The computation of spatial audio paths is spread on LoadBalancingSpread frames.\nSpreading the computation of paths over several frames can prevent CPU peaks.\nThe spread introduces a delay in path computation. A value of 1 indicates no spread at all.\n\n@param InNbFrames - Number of spread frames. Value between [1..[" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_SetLoadBalancingSpread_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetLoadBalancingSpread", nullptr, nullptr, Z_Construct_UFunction_UAkGameplayStatics_SetLoadBalancingSpread_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetLoadBalancingSpread_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkGameplayStatics_SetLoadBalancingSpread_Statics::AkGameplayStatics_eventSetLoadBalancingSpread_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetLoadBalancingSpread_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGameplayStatics_SetLoadBalancingSpread_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetLoadBalancingSpread_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkGameplayStatics_SetLoadBalancingSpread_Statics::AkGameplayStatics_eventSetLoadBalancingSpread_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetLoadBalancingSpread()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_SetLoadBalancingSpread_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_SetMaxEmitterRoomAuxSends_Statics
	{
		struct AkGameplayStatics_eventSetMaxEmitterRoomAuxSends_Parms
		{
			int32 InMaxEmitterRoomAuxSends;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InMaxEmitterRoomAuxSends;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetMaxEmitterRoomAuxSends_Statics::NewProp_InMaxEmitterRoomAuxSends = { "InMaxEmitterRoomAuxSends", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetMaxEmitterRoomAuxSends_Parms, InMaxEmitterRoomAuxSends), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_SetMaxEmitterRoomAuxSends_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetMaxEmitterRoomAuxSends_Statics::NewProp_InMaxEmitterRoomAuxSends,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetMaxEmitterRoomAuxSends_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|Spatial Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Set the maximum number of game-defined auxiliary sends that can originate from a single emitter.\n\x09* An emitter can send to its own room and to all adjacent rooms if the emitter and listener are in the same room.\n\x09* If a limit is set, the most prominent sends are kept, based on spread to the adjacent portal from the emitter's perspective.\n\x09* Set to 1 to only allow emitters to send directly to their current room, and to the room a listener is transitioning to if inside a portal. Set to 0 to disable the limit.\n\x09*\n\x09* @param InMaxEmitterRoomAuxSends - The maximum number of room aux send connections. Valid range [0, [.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the maximum number of game-defined auxiliary sends that can originate from a single emitter.\nAn emitter can send to its own room and to all adjacent rooms if the emitter and listener are in the same room.\nIf a limit is set, the most prominent sends are kept, based on spread to the adjacent portal from the emitter's perspective.\nSet to 1 to only allow emitters to send directly to their current room, and to the room a listener is transitioning to if inside a portal. Set to 0 to disable the limit.\n\n@param InMaxEmitterRoomAuxSends - The maximum number of room aux send connections. Valid range [0, [." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_SetMaxEmitterRoomAuxSends_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetMaxEmitterRoomAuxSends", nullptr, nullptr, Z_Construct_UFunction_UAkGameplayStatics_SetMaxEmitterRoomAuxSends_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetMaxEmitterRoomAuxSends_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkGameplayStatics_SetMaxEmitterRoomAuxSends_Statics::AkGameplayStatics_eventSetMaxEmitterRoomAuxSends_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetMaxEmitterRoomAuxSends_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGameplayStatics_SetMaxEmitterRoomAuxSends_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetMaxEmitterRoomAuxSends_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkGameplayStatics_SetMaxEmitterRoomAuxSends_Statics::AkGameplayStatics_eventSetMaxEmitterRoomAuxSends_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetMaxEmitterRoomAuxSends()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_SetMaxEmitterRoomAuxSends_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics
	{
		struct AkGameplayStatics_eventSetMultipleChannelEmitterPositions_Parms
		{
			UAkComponent* GameObjectAkComponent;
			TArray<AkChannelConfiguration> ChannelMasks;
			TArray<FTransform> Positions;
			AkMultiPositionType MultiPositionType;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameObjectAkComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GameObjectAkComponent;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ChannelMasks_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ChannelMasks_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ChannelMasks;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Positions_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Positions;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MultiPositionType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MultiPositionType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::NewProp_GameObjectAkComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::NewProp_GameObjectAkComponent = { "GameObjectAkComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetMultipleChannelEmitterPositions_Parms, GameObjectAkComponent), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::NewProp_GameObjectAkComponent_MetaData), Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::NewProp_GameObjectAkComponent_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::NewProp_ChannelMasks_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::NewProp_ChannelMasks_Inner = { "ChannelMasks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_AkAudio_AkChannelConfiguration, METADATA_PARAMS(0, nullptr) }; // 2129781914
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::NewProp_ChannelMasks = { "ChannelMasks", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetMultipleChannelEmitterPositions_Parms, ChannelMasks), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2129781914
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::NewProp_Positions_Inner = { "Positions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::NewProp_Positions = { "Positions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetMultipleChannelEmitterPositions_Parms, Positions), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::NewProp_MultiPositionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::NewProp_MultiPositionType = { "MultiPositionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetMultipleChannelEmitterPositions_Parms, MultiPositionType), Z_Construct_UEnum_AkAudio_AkMultiPositionType, METADATA_PARAMS(0, nullptr) }; // 932612167
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::NewProp_GameObjectAkComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::NewProp_ChannelMasks_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::NewProp_ChannelMasks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::NewProp_ChannelMasks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::NewProp_Positions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::NewProp_Positions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::NewProp_MultiPositionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::NewProp_MultiPositionType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets multiple positions to a single game object, with flexible assignment of input channels.\n    *  Setting multiple positions on a single game object is a way to simulate multiple emission sources while using the resources of only one voice.\n    *  This can be used to simulate wall openings, area sounds, or multiple objects emitting the same sound in the same area.\n    *  Note: Calling AK::SoundEngine::SetMultiplePositions() with only one position is the same as calling AK::SoundEngine::SetPosition()\n    *  @param GameObjectAkComponent AkComponent of the game object on which to set positions.\n    *  @param ChannelMasks Array of channel configuration to apply for each position.\n    *  @param Positions Array of transforms to apply.\n    *  @param MultiPositionType Position type\n    *  @return AK_Success when successful, AK_InvalidParameter if parameters are not valid.\n    */" },
#endif
		{ "CPP_Default_MultiPositionType", "MultiDirections" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets multiple positions to a single game object, with flexible assignment of input channels.\nSetting multiple positions on a single game object is a way to simulate multiple emission sources while using the resources of only one voice.\nThis can be used to simulate wall openings, area sounds, or multiple objects emitting the same sound in the same area.\nNote: Calling AK::SoundEngine::SetMultiplePositions() with only one position is the same as calling AK::SoundEngine::SetPosition()\n@param GameObjectAkComponent AkComponent of the game object on which to set positions.\n@param ChannelMasks Array of channel configuration to apply for each position.\n@param Positions Array of transforms to apply.\n@param MultiPositionType Position type\n@return AK_Success when successful, AK_InvalidParameter if parameters are not valid." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetMultipleChannelEmitterPositions", nullptr, nullptr, Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::AkGameplayStatics_eventSetMultipleChannelEmitterPositions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::AkGameplayStatics_eventSetMultipleChannelEmitterPositions_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics
	{
		struct AkGameplayStatics_eventSetMultipleChannelMaskEmitterPositions_Parms
		{
			UAkComponent* GameObjectAkComponent;
			TArray<FAkChannelMask> ChannelMasks;
			TArray<FTransform> Positions;
			AkMultiPositionType MultiPositionType;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameObjectAkComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GameObjectAkComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChannelMasks_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ChannelMasks;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Positions_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Positions;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MultiPositionType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MultiPositionType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics::NewProp_GameObjectAkComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics::NewProp_GameObjectAkComponent = { "GameObjectAkComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetMultipleChannelMaskEmitterPositions_Parms, GameObjectAkComponent), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics::NewProp_GameObjectAkComponent_MetaData), Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics::NewProp_GameObjectAkComponent_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics::NewProp_ChannelMasks_Inner = { "ChannelMasks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAkChannelMask, METADATA_PARAMS(0, nullptr) }; // 2579291296
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics::NewProp_ChannelMasks = { "ChannelMasks", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetMultipleChannelMaskEmitterPositions_Parms, ChannelMasks), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2579291296
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics::NewProp_Positions_Inner = { "Positions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics::NewProp_Positions = { "Positions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetMultipleChannelMaskEmitterPositions_Parms, Positions), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics::NewProp_MultiPositionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics::NewProp_MultiPositionType = { "MultiPositionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetMultipleChannelMaskEmitterPositions_Parms, MultiPositionType), Z_Construct_UEnum_AkAudio_AkMultiPositionType, METADATA_PARAMS(0, nullptr) }; // 932612167
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics::NewProp_GameObjectAkComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics::NewProp_ChannelMasks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics::NewProp_ChannelMasks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics::NewProp_Positions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics::NewProp_Positions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics::NewProp_MultiPositionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics::NewProp_MultiPositionType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets multiple positions to a single game object, with flexible assignment of input channels.\n\x09*  Setting multiple positions on a single game object is a way to simulate multiple emission sources while using the resources of only one voice.\n\x09*  This can be used to simulate wall openings, area sounds, or multiple objects emitting the same sound in the same area.\n\x09*  Note: Calling AK::SoundEngine::SetMultiplePositions() with only one position is the same as calling AK::SoundEngine::SetPosition()\n\x09*  @param GameObjectAkComponent AkComponent of the game object on which to set positions.\n\x09*  @param ChannelMasks Array of channel mask to apply for each position.\n\x09*  @param Positions Array of transforms to apply.\n\x09*  @param MultiPositionType Position type\n\x09*  @return AK_Success when successful, AK_InvalidParameter if parameters are not valid.\n\x09*/" },
#endif
		{ "CPP_Default_MultiPositionType", "MultiDirections" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets multiple positions to a single game object, with flexible assignment of input channels.\nSetting multiple positions on a single game object is a way to simulate multiple emission sources while using the resources of only one voice.\nThis can be used to simulate wall openings, area sounds, or multiple objects emitting the same sound in the same area.\nNote: Calling AK::SoundEngine::SetMultiplePositions() with only one position is the same as calling AK::SoundEngine::SetPosition()\n@param GameObjectAkComponent AkComponent of the game object on which to set positions.\n@param ChannelMasks Array of channel mask to apply for each position.\n@param Positions Array of transforms to apply.\n@param MultiPositionType Position type\n@return AK_Success when successful, AK_InvalidParameter if parameters are not valid." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetMultipleChannelMaskEmitterPositions", nullptr, nullptr, Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics::AkGameplayStatics_eventSetMultipleChannelMaskEmitterPositions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics::AkGameplayStatics_eventSetMultipleChannelMaskEmitterPositions_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_SetMultiplePositions_Statics
	{
		struct AkGameplayStatics_eventSetMultiplePositions_Parms
		{
			UAkComponent* GameObjectAkComponent;
			TArray<FTransform> Positions;
			AkMultiPositionType MultiPositionType;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameObjectAkComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GameObjectAkComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Positions_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Positions;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MultiPositionType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MultiPositionType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetMultiplePositions_Statics::NewProp_GameObjectAkComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetMultiplePositions_Statics::NewProp_GameObjectAkComponent = { "GameObjectAkComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetMultiplePositions_Parms, GameObjectAkComponent), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetMultiplePositions_Statics::NewProp_GameObjectAkComponent_MetaData), Z_Construct_UFunction_UAkGameplayStatics_SetMultiplePositions_Statics::NewProp_GameObjectAkComponent_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetMultiplePositions_Statics::NewProp_Positions_Inner = { "Positions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetMultiplePositions_Statics::NewProp_Positions = { "Positions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetMultiplePositions_Parms, Positions), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetMultiplePositions_Statics::NewProp_MultiPositionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetMultiplePositions_Statics::NewProp_MultiPositionType = { "MultiPositionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetMultiplePositions_Parms, MultiPositionType), Z_Construct_UEnum_AkAudio_AkMultiPositionType, METADATA_PARAMS(0, nullptr) }; // 932612167
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_SetMultiplePositions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetMultiplePositions_Statics::NewProp_GameObjectAkComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetMultiplePositions_Statics::NewProp_Positions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetMultiplePositions_Statics::NewProp_Positions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetMultiplePositions_Statics::NewProp_MultiPositionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetMultiplePositions_Statics::NewProp_MultiPositionType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetMultiplePositions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets multiple positions to a single game object.\n    *  Setting multiple positions on a single game object is a way to simulate multiple emission sources while using the resources of only one voice.\n    *  This can be used to simulate wall openings, area sounds, or multiple objects emitting the same sound in the same area.\n    *  Note: Calling SetMultiplePositions() with only one position is the same as calling SetPosition()\n    *  @param GameObjectAkComponent AkComponent of the game object on which to set positions.\n    *  @param Positions Array of transforms to apply.\n    *  @param MultiPositionType Position type\n    *  @return AK_Success when successful, AK_InvalidParameter if parameters are not valid.\n    *\n    */" },
#endif
		{ "CPP_Default_MultiPositionType", "MultiDirections" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets multiple positions to a single game object.\nSetting multiple positions on a single game object is a way to simulate multiple emission sources while using the resources of only one voice.\nThis can be used to simulate wall openings, area sounds, or multiple objects emitting the same sound in the same area.\nNote: Calling SetMultiplePositions() with only one position is the same as calling SetPosition()\n@param GameObjectAkComponent AkComponent of the game object on which to set positions.\n@param Positions Array of transforms to apply.\n@param MultiPositionType Position type\n@return AK_Success when successful, AK_InvalidParameter if parameters are not valid." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_SetMultiplePositions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetMultiplePositions", nullptr, nullptr, Z_Construct_UFunction_UAkGameplayStatics_SetMultiplePositions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetMultiplePositions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkGameplayStatics_SetMultiplePositions_Statics::AkGameplayStatics_eventSetMultiplePositions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetMultiplePositions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGameplayStatics_SetMultiplePositions_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetMultiplePositions_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkGameplayStatics_SetMultiplePositions_Statics::AkGameplayStatics_eventSetMultiplePositions_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetMultiplePositions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_SetMultiplePositions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_SetNumberOfPrimaryRays_Statics
	{
		struct AkGameplayStatics_eventSetNumberOfPrimaryRays_Parms
		{
			int32 InNbPrimaryRays;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InNbPrimaryRays;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetNumberOfPrimaryRays_Statics::NewProp_InNbPrimaryRays = { "InNbPrimaryRays", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetNumberOfPrimaryRays_Parms, InNbPrimaryRays), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_SetNumberOfPrimaryRays_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetNumberOfPrimaryRays_Statics::NewProp_InNbPrimaryRays,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetNumberOfPrimaryRays_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|Spatial Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Set the number of primary rays used in the ray tracing engine.\n\x09* A larger value increases the chances of finding reflection and diffraction paths but results in higher CPU usage.\n\x09* When the CPU limit is active (see the CPU Limit Percentage Spatial Audio Setting), this setting represents the maximum allowed number of primary rays.\n\x09*\n\x09* @param InNbPrimaryRays - Number of rays cast from the listener. Valid range [0, [.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the number of primary rays used in the ray tracing engine.\nA larger value increases the chances of finding reflection and diffraction paths but results in higher CPU usage.\nWhen the CPU limit is active (see the CPU Limit Percentage Spatial Audio Setting), this setting represents the maximum allowed number of primary rays.\n\n@param InNbPrimaryRays - Number of rays cast from the listener. Valid range [0, [." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_SetNumberOfPrimaryRays_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetNumberOfPrimaryRays", nullptr, nullptr, Z_Construct_UFunction_UAkGameplayStatics_SetNumberOfPrimaryRays_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetNumberOfPrimaryRays_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkGameplayStatics_SetNumberOfPrimaryRays_Statics::AkGameplayStatics_eventSetNumberOfPrimaryRays_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetNumberOfPrimaryRays_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGameplayStatics_SetNumberOfPrimaryRays_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetNumberOfPrimaryRays_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkGameplayStatics_SetNumberOfPrimaryRays_Statics::AkGameplayStatics_eventSetNumberOfPrimaryRays_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetNumberOfPrimaryRays()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_SetNumberOfPrimaryRays_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionRefreshInterval_Statics
	{
		struct AkGameplayStatics_eventSetOcclusionRefreshInterval_Parms
		{
			float RefreshInterval;
			AActor* Actor;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RefreshInterval;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionRefreshInterval_Statics::NewProp_RefreshInterval = { "RefreshInterval", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetOcclusionRefreshInterval_Parms, RefreshInterval), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionRefreshInterval_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetOcclusionRefreshInterval_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionRefreshInterval_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionRefreshInterval_Statics::NewProp_RefreshInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionRefreshInterval_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionRefreshInterval_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|Actor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets the obstruction/occlusion calculation refresh interval, targeting the root component of a specified actor.\n\x09 * @param RefreshInterval - Value of the wanted refresh interval. Valid range [0, [.\n\x09 * @param Actor - Actor on which to set the refresh interval\n\x09 */" },
#endif
		{ "DisplayName", "Set Obstruction Occlusion Refresh Interval" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the obstruction/occlusion calculation refresh interval, targeting the root component of a specified actor.\n@param RefreshInterval - Value of the wanted refresh interval. Valid range [0, [.\n@param Actor - Actor on which to set the refresh interval" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionRefreshInterval_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetOcclusionRefreshInterval", nullptr, nullptr, Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionRefreshInterval_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionRefreshInterval_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionRefreshInterval_Statics::AkGameplayStatics_eventSetOcclusionRefreshInterval_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionRefreshInterval_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionRefreshInterval_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionRefreshInterval_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionRefreshInterval_Statics::AkGameplayStatics_eventSetOcclusionRefreshInterval_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionRefreshInterval()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionRefreshInterval_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_SetOutputBusVolume_Statics
	{
		struct AkGameplayStatics_eventSetOutputBusVolume_Parms
		{
			float BusVolume;
			AActor* Actor;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BusVolume;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetOutputBusVolume_Statics::NewProp_BusVolume = { "BusVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetOutputBusVolume_Parms, BusVolume), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetOutputBusVolume_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetOutputBusVolume_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_SetOutputBusVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetOutputBusVolume_Statics::NewProp_BusVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetOutputBusVolume_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetOutputBusVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|Actor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Set the output bus volume (direct) to be used for the specified game object.\n\x09* The control value is a number ranging from 0.0f to 1.0f.\n\x09*\n\x09* @param BusVolume - Bus volume to set\n\x09* @param Actor - Actor on which to set the flag\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the output bus volume (direct) to be used for the specified game object.\nThe control value is a number ranging from 0.0f to 1.0f.\n\n@param BusVolume - Bus volume to set\n@param Actor - Actor on which to set the flag" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_SetOutputBusVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetOutputBusVolume", nullptr, nullptr, Z_Construct_UFunction_UAkGameplayStatics_SetOutputBusVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetOutputBusVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkGameplayStatics_SetOutputBusVolume_Statics::AkGameplayStatics_eventSetOutputBusVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetOutputBusVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGameplayStatics_SetOutputBusVolume_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetOutputBusVolume_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkGameplayStatics_SetOutputBusVolume_Statics::AkGameplayStatics_eventSetOutputBusVolume_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetOutputBusVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_SetOutputBusVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_SetOutputDeviceEffect_Statics
	{
		struct AkGameplayStatics_eventSetOutputDeviceEffect_Parms
		{
			FAkOutputDeviceID InDeviceID;
			int32 InEffectIndex;
			const UAkEffectShareSet* InEffectShareSet;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDeviceID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InDeviceID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InEffectIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InEffectIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InEffectShareSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InEffectShareSet;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetOutputDeviceEffect_Statics::NewProp_InDeviceID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetOutputDeviceEffect_Statics::NewProp_InDeviceID = { "InDeviceID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetOutputDeviceEffect_Parms, InDeviceID), Z_Construct_UScriptStruct_FAkOutputDeviceID, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetOutputDeviceEffect_Statics::NewProp_InDeviceID_MetaData), Z_Construct_UFunction_UAkGameplayStatics_SetOutputDeviceEffect_Statics::NewProp_InDeviceID_MetaData) }; // 163289064
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetOutputDeviceEffect_Statics::NewProp_InEffectIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetOutputDeviceEffect_Statics::NewProp_InEffectIndex = { "InEffectIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetOutputDeviceEffect_Parms, InEffectIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetOutputDeviceEffect_Statics::NewProp_InEffectIndex_MetaData), Z_Construct_UFunction_UAkGameplayStatics_SetOutputDeviceEffect_Statics::NewProp_InEffectIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetOutputDeviceEffect_Statics::NewProp_InEffectShareSet_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetOutputDeviceEffect_Statics::NewProp_InEffectShareSet = { "InEffectShareSet", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetOutputDeviceEffect_Parms, InEffectShareSet), Z_Construct_UClass_UAkEffectShareSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetOutputDeviceEffect_Statics::NewProp_InEffectShareSet_MetaData), Z_Construct_UFunction_UAkGameplayStatics_SetOutputDeviceEffect_Statics::NewProp_InEffectShareSet_MetaData) };
	void Z_Construct_UFunction_UAkGameplayStatics_SetOutputDeviceEffect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AkGameplayStatics_eventSetOutputDeviceEffect_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetOutputDeviceEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AkGameplayStatics_eventSetOutputDeviceEffect_Parms), &Z_Construct_UFunction_UAkGameplayStatics_SetOutputDeviceEffect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_SetOutputDeviceEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetOutputDeviceEffect_Statics::NewProp_InDeviceID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetOutputDeviceEffect_Statics::NewProp_InEffectIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetOutputDeviceEffect_Statics::NewProp_InEffectShareSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetOutputDeviceEffect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetOutputDeviceEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets an effect ShareSet on an output device\n\x09*\n\x09*  @param InDeviceID Output ID, as returned from AddOutput or GetOutputID. You can pass 0 for the main (default) output\n\x09*  @param InEffectIndex Effect slot index (0-3)\n\x09*  @param InEffectShareSet  Effect ShareSet asset\n\x09*  @return Always returns True\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets an effect ShareSet on an output device\n\n@param InDeviceID Output ID, as returned from AddOutput or GetOutputID. You can pass 0 for the main (default) output\n@param InEffectIndex Effect slot index (0-3)\n@param InEffectShareSet  Effect ShareSet asset\n@return Always returns True" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_SetOutputDeviceEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetOutputDeviceEffect", nullptr, nullptr, Z_Construct_UFunction_UAkGameplayStatics_SetOutputDeviceEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetOutputDeviceEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkGameplayStatics_SetOutputDeviceEffect_Statics::AkGameplayStatics_eventSetOutputDeviceEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetOutputDeviceEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGameplayStatics_SetOutputDeviceEffect_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetOutputDeviceEffect_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkGameplayStatics_SetOutputDeviceEffect_Statics::AkGameplayStatics_eventSetOutputDeviceEffect_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetOutputDeviceEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_SetOutputDeviceEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_SetPanningRule_Statics
	{
		struct AkGameplayStatics_eventSetPanningRule_Parms
		{
			PanningRule PanRule;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_PanRule_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PanRule;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetPanningRule_Statics::NewProp_PanRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetPanningRule_Statics::NewProp_PanRule = { "PanRule", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetPanningRule_Parms, PanRule), Z_Construct_UEnum_AkAudio_PanningRule, METADATA_PARAMS(0, nullptr) }; // 4075859156
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_SetPanningRule_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetPanningRule_Statics::NewProp_PanRule_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetPanningRule_Statics::NewProp_PanRule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetPanningRule_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09*  Set the panning rule of the specified output.\n\x09*  This may be changed anytime once the sound engine is initialized.\n\x09*  @warning This function posts a message through the sound engine's internal message queue, whereas GetPanningRule() queries the current panning rule directly.\n\x09*\n\x09* @param PanRule\x09Panning rule.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the panning rule of the specified output.\nThis may be changed anytime once the sound engine is initialized.\n@warning This function posts a message through the sound engine's internal message queue, whereas GetPanningRule() queries the current panning rule directly.\n\n@param PanRule        Panning rule." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_SetPanningRule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetPanningRule", nullptr, nullptr, Z_Construct_UFunction_UAkGameplayStatics_SetPanningRule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetPanningRule_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkGameplayStatics_SetPanningRule_Statics::AkGameplayStatics_eventSetPanningRule_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetPanningRule_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGameplayStatics_SetPanningRule_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetPanningRule_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkGameplayStatics_SetPanningRule_Statics::AkGameplayStatics_eventSetPanningRule_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetPanningRule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_SetPanningRule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_SetPortalObstructionAndOcclusion_Statics
	{
		struct AkGameplayStatics_eventSetPortalObstructionAndOcclusion_Parms
		{
			UAkPortalComponent* PortalComponent;
			float ObstructionValue;
			float OcclusionValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PortalComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PortalComponent;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ObstructionValue;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OcclusionValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetPortalObstructionAndOcclusion_Statics::NewProp_PortalComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetPortalObstructionAndOcclusion_Statics::NewProp_PortalComponent = { "PortalComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetPortalObstructionAndOcclusion_Parms, PortalComponent), Z_Construct_UClass_UAkPortalComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetPortalObstructionAndOcclusion_Statics::NewProp_PortalComponent_MetaData), Z_Construct_UFunction_UAkGameplayStatics_SetPortalObstructionAndOcclusion_Statics::NewProp_PortalComponent_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetPortalObstructionAndOcclusion_Statics::NewProp_ObstructionValue = { "ObstructionValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetPortalObstructionAndOcclusion_Parms, ObstructionValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetPortalObstructionAndOcclusion_Statics::NewProp_OcclusionValue = { "OcclusionValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetPortalObstructionAndOcclusion_Parms, OcclusionValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_SetPortalObstructionAndOcclusion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetPortalObstructionAndOcclusion_Statics::NewProp_PortalComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetPortalObstructionAndOcclusion_Statics::NewProp_ObstructionValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetPortalObstructionAndOcclusion_Statics::NewProp_OcclusionValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetPortalObstructionAndOcclusion_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|Spatial Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Sets the obstruction and occlusion value of sounds going through this portal.\n\x09*\n\x09* @param PortalComponent - The portal through which sound path need to pass to get obstructed and occluded.\n\x09* @param ObstructionValue - The obstruction value. Can be 0 to 1.\n\x09* @param OcclusionValue - The occlusion value. Can be 0 to 1.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the obstruction and occlusion value of sounds going through this portal.\n\n@param PortalComponent - The portal through which sound path need to pass to get obstructed and occluded.\n@param ObstructionValue - The obstruction value. Can be 0 to 1.\n@param OcclusionValue - The occlusion value. Can be 0 to 1." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_SetPortalObstructionAndOcclusion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetPortalObstructionAndOcclusion", nullptr, nullptr, Z_Construct_UFunction_UAkGameplayStatics_SetPortalObstructionAndOcclusion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetPortalObstructionAndOcclusion_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkGameplayStatics_SetPortalObstructionAndOcclusion_Statics::AkGameplayStatics_eventSetPortalObstructionAndOcclusion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetPortalObstructionAndOcclusion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGameplayStatics_SetPortalObstructionAndOcclusion_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetPortalObstructionAndOcclusion_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkGameplayStatics_SetPortalObstructionAndOcclusion_Statics::AkGameplayStatics_eventSetPortalObstructionAndOcclusion_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetPortalObstructionAndOcclusion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_SetPortalObstructionAndOcclusion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_SetPortalToPortalObstruction_Statics
	{
		struct AkGameplayStatics_eventSetPortalToPortalObstruction_Parms
		{
			UAkPortalComponent* PortalComponent0;
			UAkPortalComponent* PortalComponent1;
			float ObstructionValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PortalComponent0_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PortalComponent0;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PortalComponent1_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PortalComponent1;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ObstructionValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetPortalToPortalObstruction_Statics::NewProp_PortalComponent0_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetPortalToPortalObstruction_Statics::NewProp_PortalComponent0 = { "PortalComponent0", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetPortalToPortalObstruction_Parms, PortalComponent0), Z_Construct_UClass_UAkPortalComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetPortalToPortalObstruction_Statics::NewProp_PortalComponent0_MetaData), Z_Construct_UFunction_UAkGameplayStatics_SetPortalToPortalObstruction_Statics::NewProp_PortalComponent0_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetPortalToPortalObstruction_Statics::NewProp_PortalComponent1_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetPortalToPortalObstruction_Statics::NewProp_PortalComponent1 = { "PortalComponent1", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetPortalToPortalObstruction_Parms, PortalComponent1), Z_Construct_UClass_UAkPortalComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetPortalToPortalObstruction_Statics::NewProp_PortalComponent1_MetaData), Z_Construct_UFunction_UAkGameplayStatics_SetPortalToPortalObstruction_Statics::NewProp_PortalComponent1_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetPortalToPortalObstruction_Statics::NewProp_ObstructionValue = { "ObstructionValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetPortalToPortalObstruction_Parms, ObstructionValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_SetPortalToPortalObstruction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetPortalToPortalObstruction_Statics::NewProp_PortalComponent0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetPortalToPortalObstruction_Statics::NewProp_PortalComponent1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetPortalToPortalObstruction_Statics::NewProp_ObstructionValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetPortalToPortalObstruction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|Spatial Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Sets the obstruction value of sounds going from a first portal through the next portal.\n\x09*\n\x09* @param PortalComponent0 - The first portal through which a sound path goes.\n\x09* @param PortalComponent1 - The next portal through which the sound path goes from the first portal.\n\x09* @param ObstructionValue - The obstruction value. Can be 0 to 1.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the obstruction value of sounds going from a first portal through the next portal.\n\n@param PortalComponent0 - The first portal through which a sound path goes.\n@param PortalComponent1 - The next portal through which the sound path goes from the first portal.\n@param ObstructionValue - The obstruction value. Can be 0 to 1." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_SetPortalToPortalObstruction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetPortalToPortalObstruction", nullptr, nullptr, Z_Construct_UFunction_UAkGameplayStatics_SetPortalToPortalObstruction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetPortalToPortalObstruction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkGameplayStatics_SetPortalToPortalObstruction_Statics::AkGameplayStatics_eventSetPortalToPortalObstruction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetPortalToPortalObstruction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGameplayStatics_SetPortalToPortalObstruction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetPortalToPortalObstruction_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkGameplayStatics_SetPortalToPortalObstruction_Statics::AkGameplayStatics_eventSetPortalToPortalObstruction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetPortalToPortalObstruction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_SetPortalToPortalObstruction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_SetReflectionsOrder_Statics
	{
		struct AkGameplayStatics_eventSetReflectionsOrder_Parms
		{
			int32 Order;
			bool RefreshPaths;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Order;
		static void NewProp_RefreshPaths_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RefreshPaths;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetReflectionsOrder_Statics::NewProp_Order = { "Order", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetReflectionsOrder_Parms, Order), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UAkGameplayStatics_SetReflectionsOrder_Statics::NewProp_RefreshPaths_SetBit(void* Obj)
	{
		((AkGameplayStatics_eventSetReflectionsOrder_Parms*)Obj)->RefreshPaths = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetReflectionsOrder_Statics::NewProp_RefreshPaths = { "RefreshPaths", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AkGameplayStatics_eventSetReflectionsOrder_Parms), &Z_Construct_UFunction_UAkGameplayStatics_SetReflectionsOrder_Statics::NewProp_RefreshPaths_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_SetReflectionsOrder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetReflectionsOrder_Statics::NewProp_Order,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetReflectionsOrder_Statics::NewProp_RefreshPaths,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetReflectionsOrder_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|Spatial Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Sets the Reflections Order for Spatial Audio Reflect.\n\x09* The reflection order indicates the number of \"bounces\" in a reflection path. A higher reflection order renders more detail at the expense of higher CPU usage.\n\x09*\n\x09* @param Order - The order of Reflection. Can be 0 to 4.\n\x09* @param RefreshPaths - whether the paths should be refreshed immediately.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the Reflections Order for Spatial Audio Reflect.\nThe reflection order indicates the number of \"bounces\" in a reflection path. A higher reflection order renders more detail at the expense of higher CPU usage.\n\n@param Order - The order of Reflection. Can be 0 to 4.\n@param RefreshPaths - whether the paths should be refreshed immediately." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_SetReflectionsOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetReflectionsOrder", nullptr, nullptr, Z_Construct_UFunction_UAkGameplayStatics_SetReflectionsOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetReflectionsOrder_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkGameplayStatics_SetReflectionsOrder_Statics::AkGameplayStatics_eventSetReflectionsOrder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetReflectionsOrder_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGameplayStatics_SetReflectionsOrder_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetReflectionsOrder_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkGameplayStatics_SetReflectionsOrder_Statics::AkGameplayStatics_eventSetReflectionsOrder_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetReflectionsOrder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_SetReflectionsOrder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue_Statics
	{
		struct AkGameplayStatics_eventSetRTPCValue_Parms
		{
			UAkRtpc* RTPCValue;
			float Value;
			int32 InterpolationTimeMs;
			AActor* Actor;
			FName RTPC;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RTPCValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RTPCValue;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InterpolationTimeMs;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FNamePropertyParams NewProp_RTPC;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue_Statics::NewProp_RTPCValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue_Statics::NewProp_RTPCValue = { "RTPCValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetRTPCValue_Parms, RTPCValue), Z_Construct_UClass_UAkRtpc_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue_Statics::NewProp_RTPCValue_MetaData), Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue_Statics::NewProp_RTPCValue_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetRTPCValue_Parms, Value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue_Statics::NewProp_InterpolationTimeMs = { "InterpolationTimeMs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetRTPCValue_Parms, InterpolationTimeMs), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetRTPCValue_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue_Statics::NewProp_RTPC = { "RTPC", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetRTPCValue_Parms, RTPC), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue_Statics::NewProp_RTPCValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue_Statics::NewProp_InterpolationTimeMs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue_Statics::NewProp_RTPC,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "4" },
		{ "Category", "Audiokinetic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Sets the value of a Game Parameter, optionally targeting the root component of a specified actor.\n\x09* @param RTPC - The name of the Game Parameter to set\n\x09* @param Value - The value of the Game Parameter\n\x09* @param InterpolationTimeMs - Duration during which the Game Parameter is interpolated towards Value (in ms)\n\x09* @param Actor - (Optional) Actor on which to set the Game Parameter value\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the value of a Game Parameter, optionally targeting the root component of a specified actor.\n@param RTPC - The name of the Game Parameter to set\n@param Value - The value of the Game Parameter\n@param InterpolationTimeMs - Duration during which the Game Parameter is interpolated towards Value (in ms)\n@param Actor - (Optional) Actor on which to set the Game Parameter value" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetRTPCValue", nullptr, nullptr, Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue_Statics::AkGameplayStatics_eventSetRTPCValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue_Statics::AkGameplayStatics_eventSetRTPCValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles_Statics
	{
		struct AkGameplayStatics_eventSetSpeakerAngles_Parms
		{
			TArray<float> SpeakerAngles;
			float HeightAngle;
			FString DeviceShareSet;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeakerAngles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeakerAngles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SpeakerAngles;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HeightAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceShareSet_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceShareSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles_Statics::NewProp_SpeakerAngles_Inner = { "SpeakerAngles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles_Statics::NewProp_SpeakerAngles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles_Statics::NewProp_SpeakerAngles = { "SpeakerAngles", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetSpeakerAngles_Parms, SpeakerAngles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles_Statics::NewProp_SpeakerAngles_MetaData), Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles_Statics::NewProp_SpeakerAngles_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles_Statics::NewProp_HeightAngle = { "HeightAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetSpeakerAngles_Parms, HeightAngle), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles_Statics::NewProp_DeviceShareSet_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles_Statics::NewProp_DeviceShareSet = { "DeviceShareSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetSpeakerAngles_Parms, DeviceShareSet), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles_Statics::NewProp_DeviceShareSet_MetaData), Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles_Statics::NewProp_DeviceShareSet_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles_Statics::NewProp_SpeakerAngles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles_Statics::NewProp_SpeakerAngles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles_Statics::NewProp_HeightAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles_Statics::NewProp_DeviceShareSet,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets speaker angles of the specified device. Speaker angles are used for 3D positioning of sounds over standard configurations.\n\x09 * Note that the current version of Wwise only supports positioning on the plane.\n\x09 * The speaker angles are expressed as an array of loudspeaker pairs, in degrees, relative to azimuth ]0,180].\n\x09 * Supported loudspeaker setups are always symmetric; the center speaker is always in the middle and thus not specified by angles.\n\x09 * Angles must be set in ascending order.\n\x09 *\n\x09 * @param SpeakerAngles Array of loudspeaker pair angles, in degrees relative to azimuth [0,180]\n\x09 * @param HeightAngle Elevation of the height layer, in degrees relative to the plane [-90,90]\n\x09 * @param DeviceShareSet ShareSet for which to set the angles on.\n\x09 */" },
#endif
		{ "CPP_Default_DeviceShareSet", "" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets speaker angles of the specified device. Speaker angles are used for 3D positioning of sounds over standard configurations.\nNote that the current version of Wwise only supports positioning on the plane.\nThe speaker angles are expressed as an array of loudspeaker pairs, in degrees, relative to azimuth ]0,180].\nSupported loudspeaker setups are always symmetric; the center speaker is always in the middle and thus not specified by angles.\nAngles must be set in ascending order.\n\n@param SpeakerAngles Array of loudspeaker pair angles, in degrees relative to azimuth [0,180]\n@param HeightAngle Elevation of the height layer, in degrees relative to the plane [-90,90]\n@param DeviceShareSet ShareSet for which to set the angles on." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetSpeakerAngles", nullptr, nullptr, Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles_Statics::AkGameplayStatics_eventSetSpeakerAngles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles_Statics::AkGameplayStatics_eventSetSpeakerAngles_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_SetState_Statics
	{
		struct AkGameplayStatics_eventSetState_Parms
		{
			UAkStateValue* StateValue;
			FName StateGroup;
			FName State;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StateValue;
		static const UECodeGen_Private::FNamePropertyParams NewProp_StateGroup;
		static const UECodeGen_Private::FNamePropertyParams NewProp_State;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetState_Statics::NewProp_StateValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetState_Statics::NewProp_StateValue = { "StateValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetState_Parms, StateValue), Z_Construct_UClass_UAkStateValue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetState_Statics::NewProp_StateValue_MetaData), Z_Construct_UFunction_UAkGameplayStatics_SetState_Statics::NewProp_StateValue_MetaData) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetState_Statics::NewProp_StateGroup = { "StateGroup", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetState_Parms, StateGroup), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetState_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetState_Parms, State), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_SetState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetState_Statics::NewProp_StateValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetState_Statics::NewProp_StateGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetState_Statics::NewProp_State,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetState_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Audiokinetic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set the active State for a given State Group.\n\x09 * @param StateGroup - Name of the State Group to be modified\n\x09 * @param State - Name of the State to be made active\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the active State for a given State Group.\n@param StateGroup - Name of the State Group to be modified\n@param State - Name of the State to be made active" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_SetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetState", nullptr, nullptr, Z_Construct_UFunction_UAkGameplayStatics_SetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkGameplayStatics_SetState_Statics::AkGameplayStatics_eventSetState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGameplayStatics_SetState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkGameplayStatics_SetState_Statics::AkGameplayStatics_eventSetState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_SetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_SetSwitch_Statics
	{
		struct AkGameplayStatics_eventSetSwitch_Parms
		{
			UAkSwitchValue* SwitchValue;
			AActor* Actor;
			FName SwitchGroup;
			FName SwitchState;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwitchValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SwitchValue;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SwitchGroup;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SwitchState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetSwitch_Statics::NewProp_SwitchValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetSwitch_Statics::NewProp_SwitchValue = { "SwitchValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetSwitch_Parms, SwitchValue), Z_Construct_UClass_UAkSwitchValue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetSwitch_Statics::NewProp_SwitchValue_MetaData), Z_Construct_UFunction_UAkGameplayStatics_SetSwitch_Statics::NewProp_SwitchValue_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetSwitch_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetSwitch_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetSwitch_Statics::NewProp_SwitchGroup = { "SwitchGroup", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetSwitch_Parms, SwitchGroup), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetSwitch_Statics::NewProp_SwitchState = { "SwitchState", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetSwitch_Parms, SwitchState), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_SetSwitch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetSwitch_Statics::NewProp_SwitchValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetSwitch_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetSwitch_Statics::NewProp_SwitchGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetSwitch_Statics::NewProp_SwitchState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetSwitch_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "Audiokinetic|Actor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets the active Switch for a given Switch Group, targeting the root component of a specified actor.\n\x09 * @param SwitchGroup - Name of the Switch Group to be modified\n\x09 * @param SwitchState - Name of the Switch to be made active\n\x09 * @param Actor - Actor on which to set the switch\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the active Switch for a given Switch Group, targeting the root component of a specified actor.\n@param SwitchGroup - Name of the Switch Group to be modified\n@param SwitchState - Name of the Switch to be made active\n@param Actor - Actor on which to set the switch" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_SetSwitch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetSwitch", nullptr, nullptr, Z_Construct_UFunction_UAkGameplayStatics_SetSwitch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetSwitch_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkGameplayStatics_SetSwitch_Statics::AkGameplayStatics_eventSetSwitch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetSwitch_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGameplayStatics_SetSwitch_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetSwitch_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkGameplayStatics_SetSwitch_Statics::AkGameplayStatics_eventSetSwitch_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetSwitch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_SetSwitch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics
	{
		struct AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms
		{
			UObject* WorldContextObject;
			UAkAudioEvent* AkEvent;
			FVector Location;
			FRotator Orientation;
			bool AutoPost;
			FString EventName;
			bool AutoDestroy;
			UAkComponent* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AkEvent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Orientation;
		static void NewProp_AutoPost_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AutoPost;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EventName;
		static void NewProp_AutoDestroy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AutoDestroy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::NewProp_AkEvent = { "AkEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms, AkEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms, Orientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::NewProp_AutoPost_SetBit(void* Obj)
	{
		((AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms*)Obj)->AutoPost = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::NewProp_AutoPost = { "AutoPost", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms), &Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::NewProp_AutoPost_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::NewProp_EventName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms, EventName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::NewProp_EventName_MetaData), Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::NewProp_EventName_MetaData) };
	void Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::NewProp_AutoDestroy_SetBit(void* Obj)
	{
		((AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms*)Obj)->AutoDestroy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::NewProp_AutoDestroy = { "AutoDestroy", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms), &Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::NewProp_AutoDestroy_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms, ReturnValue), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::NewProp_AkEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::NewProp_Orientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::NewProp_AutoPost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::NewProp_EventName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::NewProp_AutoDestroy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "6" },
		{ "Category", "Audiokinetic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Spawn an AkComponent at a location. Allows, for example, to set a switch on a fire and forget sound.\n\x09 * @param AkEvent - Wwise Event to post.\n\x09 * @param Location - Location from which to post the Wwise Event.\n\x09 * @param Orientation - Orientation of the event.\n\x09 * @param AutoPost - Automatically post the event once the AkComponent is created.\n\x09 * @param AutoDestroy - Automatically destroy the AkComponent once the event is finished.\n\x09 */" },
#endif
		{ "CPP_Default_AutoDestroy", "true" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spawn an AkComponent at a location. Allows, for example, to set a switch on a fire and forget sound.\n@param AkEvent - Wwise Event to post.\n@param Location - Location from which to post the Wwise Event.\n@param Orientation - Orientation of the event.\n@param AutoPost - Automatically post the event once the AkComponent is created.\n@param AutoDestroy - Automatically destroy the AkComponent once the event is finished." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "SpawnAkComponentAtLocation", nullptr, nullptr, Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_StartAllAmbientSounds_Statics
	{
		struct AkGameplayStatics_eventStartAllAmbientSounds_Parms
		{
			UObject* WorldContextObject;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_StartAllAmbientSounds_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventStartAllAmbientSounds_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_StartAllAmbientSounds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_StartAllAmbientSounds_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_StartAllAmbientSounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkAmbientSound" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Start all Ak ambient sounds.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Start all Ak ambient sounds." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_StartAllAmbientSounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "StartAllAmbientSounds", nullptr, nullptr, Z_Construct_UFunction_UAkGameplayStatics_StartAllAmbientSounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_StartAllAmbientSounds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkGameplayStatics_StartAllAmbientSounds_Statics::AkGameplayStatics_eventStartAllAmbientSounds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_StartAllAmbientSounds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGameplayStatics_StartAllAmbientSounds_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_StartAllAmbientSounds_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkGameplayStatics_StartAllAmbientSounds_Statics::AkGameplayStatics_eventStartAllAmbientSounds_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_StartAllAmbientSounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_StartAllAmbientSounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_StartOutputCapture_Statics
	{
		struct AkGameplayStatics_eventStartOutputCapture_Parms
		{
			FString Filename;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_StartOutputCapture_Statics::NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkGameplayStatics_StartOutputCapture_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventStartOutputCapture_Parms, Filename), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_StartOutputCapture_Statics::NewProp_Filename_MetaData), Z_Construct_UFunction_UAkGameplayStatics_StartOutputCapture_Statics::NewProp_Filename_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_StartOutputCapture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_StartOutputCapture_Statics::NewProp_Filename,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_StartOutputCapture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Starts a Wwise output capture. The output file will be located in the same folder as the SoundBanks.\n\x09 * @param Filename - The name to give to the output file.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Starts a Wwise output capture. The output file will be located in the same folder as the SoundBanks.\n@param Filename - The name to give to the output file." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_StartOutputCapture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "StartOutputCapture", nullptr, nullptr, Z_Construct_UFunction_UAkGameplayStatics_StartOutputCapture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_StartOutputCapture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkGameplayStatics_StartOutputCapture_Statics::AkGameplayStatics_eventStartOutputCapture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_StartOutputCapture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGameplayStatics_StartOutputCapture_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_StartOutputCapture_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkGameplayStatics_StartOutputCapture_Statics::AkGameplayStatics_eventStartOutputCapture_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_StartOutputCapture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_StartOutputCapture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_StartProfilerCapture_Statics
	{
		struct AkGameplayStatics_eventStartProfilerCapture_Parms
		{
			FString Filename;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_StartProfilerCapture_Statics::NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkGameplayStatics_StartProfilerCapture_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventStartProfilerCapture_Parms, Filename), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_StartProfilerCapture_Statics::NewProp_Filename_MetaData), Z_Construct_UFunction_UAkGameplayStatics_StartProfilerCapture_Statics::NewProp_Filename_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_StartProfilerCapture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_StartProfilerCapture_Statics::NewProp_Filename,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_StartProfilerCapture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Starts a Wwise profiler capture. The output file will be located in the same folder as the SoundBanks.\n\x09 * @param Filename - The name to give to the output file.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Starts a Wwise profiler capture. The output file will be located in the same folder as the SoundBanks.\n@param Filename - The name to give to the output file." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_StartProfilerCapture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "StartProfilerCapture", nullptr, nullptr, Z_Construct_UFunction_UAkGameplayStatics_StartProfilerCapture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_StartProfilerCapture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkGameplayStatics_StartProfilerCapture_Statics::AkGameplayStatics_eventStartProfilerCapture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_StartProfilerCapture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGameplayStatics_StartProfilerCapture_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_StartProfilerCapture_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkGameplayStatics_StartProfilerCapture_Statics::AkGameplayStatics_eventStartProfilerCapture_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_StartProfilerCapture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_StartProfilerCapture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_StopActor_Statics
	{
		struct AkGameplayStatics_eventStopActor_Parms
		{
			AActor* Actor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_StopActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventStopActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_StopActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_StopActor_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_StopActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|Actor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Stop all sounds for an actor.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stop all sounds for an actor." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_StopActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "StopActor", nullptr, nullptr, Z_Construct_UFunction_UAkGameplayStatics_StopActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_StopActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkGameplayStatics_StopActor_Statics::AkGameplayStatics_eventStopActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_StopActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGameplayStatics_StopActor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_StopActor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkGameplayStatics_StopActor_Statics::AkGameplayStatics_eventStopActor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_StopActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_StopActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_StopAll_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_StopAll_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Stop all sounds.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stop all sounds." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_StopAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "StopAll", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_StopAll_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGameplayStatics_StopAll_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_StopAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_StopAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_StopAllAmbientSounds_Statics
	{
		struct AkGameplayStatics_eventStopAllAmbientSounds_Parms
		{
			UObject* WorldContextObject;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_StopAllAmbientSounds_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventStopAllAmbientSounds_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_StopAllAmbientSounds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_StopAllAmbientSounds_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_StopAllAmbientSounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkAmbientSound" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Stop all Ak ambient sounds.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stop all Ak ambient sounds." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_StopAllAmbientSounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "StopAllAmbientSounds", nullptr, nullptr, Z_Construct_UFunction_UAkGameplayStatics_StopAllAmbientSounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_StopAllAmbientSounds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkGameplayStatics_StopAllAmbientSounds_Statics::AkGameplayStatics_eventStopAllAmbientSounds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_StopAllAmbientSounds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGameplayStatics_StopAllAmbientSounds_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_StopAllAmbientSounds_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkGameplayStatics_StopAllAmbientSounds_Statics::AkGameplayStatics_eventStopAllAmbientSounds_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_StopAllAmbientSounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_StopAllAmbientSounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_StopOutputCapture_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_StopOutputCapture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Stops a Wwise output capture. The output file will be located in the same folder as the SoundBanks.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stops a Wwise output capture. The output file will be located in the same folder as the SoundBanks." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_StopOutputCapture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "StopOutputCapture", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_StopOutputCapture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGameplayStatics_StopOutputCapture_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_StopOutputCapture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_StopOutputCapture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_StopProfilerCapture_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_StopProfilerCapture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Stops a Wwise profiler capture. The output file will be located in the same folder as the SoundBanks.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stops a Wwise profiler capture. The output file will be located in the same folder as the SoundBanks." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_StopProfilerCapture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "StopProfilerCapture", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_StopProfilerCapture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGameplayStatics_StopProfilerCapture_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_StopProfilerCapture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_StopProfilerCapture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_UnloadInitBank_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_UnloadInitBank_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|SoundBanks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Unloads the Init SoundBank\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unloads the Init SoundBank" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_UnloadInitBank_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "UnloadInitBank", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_UnloadInitBank_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGameplayStatics_UnloadInitBank_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_UnloadInitBank()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_UnloadInitBank_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_UseReverbVolumes_Statics
	{
		struct AkGameplayStatics_eventUseReverbVolumes_Parms
		{
			bool inUseReverbVolumes;
			AActor* Actor;
		};
		static void NewProp_inUseReverbVolumes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_inUseReverbVolumes;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAkGameplayStatics_UseReverbVolumes_Statics::NewProp_inUseReverbVolumes_SetBit(void* Obj)
	{
		((AkGameplayStatics_eventUseReverbVolumes_Parms*)Obj)->inUseReverbVolumes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkGameplayStatics_UseReverbVolumes_Statics::NewProp_inUseReverbVolumes = { "inUseReverbVolumes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AkGameplayStatics_eventUseReverbVolumes_Parms), &Z_Construct_UFunction_UAkGameplayStatics_UseReverbVolumes_Statics::NewProp_inUseReverbVolumes_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_UseReverbVolumes_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkGameplayStatics_eventUseReverbVolumes_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_UseReverbVolumes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_UseReverbVolumes_Statics::NewProp_inUseReverbVolumes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_UseReverbVolumes_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_UseReverbVolumes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|Actor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Sets UseReverbVolumes flag on a specified actor. Set value to true to use reverb volumes on this component.\n\x09*\n\x09* @param inUseReverbVolumes - Whether to use reverb volumes or not.\n\x09* @param Actor - Actor on which to set the flag\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets UseReverbVolumes flag on a specified actor. Set value to true to use reverb volumes on this component.\n\n@param inUseReverbVolumes - Whether to use reverb volumes or not.\n@param Actor - Actor on which to set the flag" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_UseReverbVolumes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "UseReverbVolumes", nullptr, nullptr, Z_Construct_UFunction_UAkGameplayStatics_UseReverbVolumes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_UseReverbVolumes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkGameplayStatics_UseReverbVolumes_Statics::AkGameplayStatics_eventUseReverbVolumes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_UseReverbVolumes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGameplayStatics_UseReverbVolumes_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_UseReverbVolumes_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkGameplayStatics_UseReverbVolumes_Statics::AkGameplayStatics_eventUseReverbVolumes_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_UseReverbVolumes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_UseReverbVolumes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkGameplayStatics);
	UClass* Z_Construct_UClass_UAkGameplayStatics_NoRegister()
	{
		return UAkGameplayStatics::StaticClass();
	}
	struct Z_Construct_UClass_UAkGameplayStatics_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkGameplayStatics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkGameplayStatics_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAkGameplayStatics_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkGameplayStatics_AddOutput, "AddOutput" }, // 1116906645
		{ &Z_Construct_UFunction_UAkGameplayStatics_AddOutputCaptureMarker, "AddOutputCaptureMarker" }, // 3052593919
		{ &Z_Construct_UFunction_UAkGameplayStatics_CancelEventCallback, "CancelEventCallback" }, // 903028415
		{ &Z_Construct_UFunction_UAkGameplayStatics_ClearSoundBanksAndMedia, "ClearSoundBanksAndMedia" }, // 1679296885
		{ &Z_Construct_UFunction_UAkGameplayStatics_GetAkAudioTypeUserData, "GetAkAudioTypeUserData" }, // 3863953399
		{ &Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent, "GetAkComponent" }, // 2384929699
		{ &Z_Construct_UFunction_UAkGameplayStatics_GetAvailableAudioCultures, "GetAvailableAudioCultures" }, // 3827383540
		{ &Z_Construct_UFunction_UAkGameplayStatics_GetCurrentAudioCulture, "GetCurrentAudioCulture" }, // 3855694387
		{ &Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue, "GetRTPCValue" }, // 1226731443
		{ &Z_Construct_UFunction_UAkGameplayStatics_GetSpeakerAngles, "GetSpeakerAngles" }, // 1183533777
		{ &Z_Construct_UFunction_UAkGameplayStatics_IsEditor, "IsEditor" }, // 3146930095
		{ &Z_Construct_UFunction_UAkGameplayStatics_IsGame, "IsGame" }, // 877936394
		{ &Z_Construct_UFunction_UAkGameplayStatics_LoadInitBank, "LoadInitBank" }, // 1157056212
		{ &Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent, "PostAndWaitForEndOfEvent" }, // 3238943555
		{ &Z_Construct_UFunction_UAkGameplayStatics_PostEvent, "PostEvent" }, // 955168017
		{ &Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation, "PostEventAtLocation" }, // 2717443622
		{ &Z_Construct_UFunction_UAkGameplayStatics_PostTrigger, "PostTrigger" }, // 2577208448
		{ &Z_Construct_UFunction_UAkGameplayStatics_RemoveOutput, "RemoveOutput" }, // 1757853877
		{ &Z_Construct_UFunction_UAkGameplayStatics_ReplaceMainOutput, "ReplaceMainOutput" }, // 857268531
		{ &Z_Construct_UFunction_UAkGameplayStatics_ResetRTPCValue, "ResetRTPCValue" }, // 2160082298
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetActorMixerEffect, "SetActorMixerEffect" }, // 2713438432
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetAuxBusEffect, "SetAuxBusEffect" }, // 2976722920
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetBusConfig, "SetBusConfig" }, // 15937416
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByID, "SetBusEffectByID" }, // 1458838507
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetBusEffectByName, "SetBusEffectByName" }, // 514841547
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCulture, "SetCurrentAudioCulture" }, // 3116553237
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCultureAsync, "SetCurrentAudioCultureAsync" }, // 456589112
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetDiffractionOrder, "SetDiffractionOrder" }, // 3441614229
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetDistanceProbe, "SetDistanceProbe" }, // 368987233
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetGameObjectToPortalObstruction, "SetGameObjectToPortalObstruction" }, // 3850318947
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetLoadBalancingSpread, "SetLoadBalancingSpread" }, // 4178907693
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetMaxEmitterRoomAuxSends, "SetMaxEmitterRoomAuxSends" }, // 3483007055
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions, "SetMultipleChannelEmitterPositions" }, // 389982609
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions, "SetMultipleChannelMaskEmitterPositions" }, // 360015643
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetMultiplePositions, "SetMultiplePositions" }, // 2284192865
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetNumberOfPrimaryRays, "SetNumberOfPrimaryRays" }, // 1834908269
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionRefreshInterval, "SetOcclusionRefreshInterval" }, // 1420399763
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetOutputBusVolume, "SetOutputBusVolume" }, // 2359133475
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetOutputDeviceEffect, "SetOutputDeviceEffect" }, // 2666448949
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetPanningRule, "SetPanningRule" }, // 703705658
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetPortalObstructionAndOcclusion, "SetPortalObstructionAndOcclusion" }, // 562124238
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetPortalToPortalObstruction, "SetPortalToPortalObstruction" }, // 1151862298
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetReflectionsOrder, "SetReflectionsOrder" }, // 91998896
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue, "SetRTPCValue" }, // 1345864115
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles, "SetSpeakerAngles" }, // 556735050
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetState, "SetState" }, // 2079886735
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetSwitch, "SetSwitch" }, // 1389236689
		{ &Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation, "SpawnAkComponentAtLocation" }, // 2419928672
		{ &Z_Construct_UFunction_UAkGameplayStatics_StartAllAmbientSounds, "StartAllAmbientSounds" }, // 911834384
		{ &Z_Construct_UFunction_UAkGameplayStatics_StartOutputCapture, "StartOutputCapture" }, // 487429439
		{ &Z_Construct_UFunction_UAkGameplayStatics_StartProfilerCapture, "StartProfilerCapture" }, // 1104244869
		{ &Z_Construct_UFunction_UAkGameplayStatics_StopActor, "StopActor" }, // 1256505613
		{ &Z_Construct_UFunction_UAkGameplayStatics_StopAll, "StopAll" }, // 422520046
		{ &Z_Construct_UFunction_UAkGameplayStatics_StopAllAmbientSounds, "StopAllAmbientSounds" }, // 1393749123
		{ &Z_Construct_UFunction_UAkGameplayStatics_StopOutputCapture, "StopOutputCapture" }, // 2444379462
		{ &Z_Construct_UFunction_UAkGameplayStatics_StopProfilerCapture, "StopProfilerCapture" }, // 3653610576
		{ &Z_Construct_UFunction_UAkGameplayStatics_UnloadInitBank, "UnloadInitBank" }, // 2646793173
		{ &Z_Construct_UFunction_UAkGameplayStatics_UseReverbVolumes, "UseReverbVolumes" }, // 1722140169
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkGameplayStatics_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkGameplayStatics_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AkGameplayStatics.h" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkGameplayStatics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkGameplayStatics>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkGameplayStatics_Statics::ClassParams = {
		&UAkGameplayStatics::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkGameplayStatics_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkGameplayStatics_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAkGameplayStatics()
	{
		if (!Z_Registration_Info_UClass_UAkGameplayStatics.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkGameplayStatics.OuterSingleton, Z_Construct_UClass_UAkGameplayStatics_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkGameplayStatics.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkGameplayStatics>()
	{
		return UAkGameplayStatics::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkGameplayStatics);
	UAkGameplayStatics::~UAkGameplayStatics() {}
	struct Z_CompiledInDeferFile_FID_Users_danii_RiderProjects_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayStatics_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_danii_RiderProjects_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayStatics_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAkGameplayStatics, UAkGameplayStatics::StaticClass, TEXT("UAkGameplayStatics"), &Z_Registration_Info_UClass_UAkGameplayStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkGameplayStatics), 4101289125U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_danii_RiderProjects_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayStatics_h_1242182567(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_Users_danii_RiderProjects_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayStatics_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_danii_RiderProjects_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayStatics_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
