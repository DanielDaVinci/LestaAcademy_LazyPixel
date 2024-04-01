// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AkLateReverbComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAkAcousticTextureSetComponent;
#ifdef AKAUDIO_AkLateReverbComponent_generated_h
#error "AkLateReverbComponent.generated.h already included, missing '#pragma once' in AkLateReverbComponent.h"
#endif
#define AKAUDIO_AkLateReverbComponent_generated_h

#define FID_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkLateReverbComponent_h_34_SPARSE_DATA
#define FID_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkLateReverbComponent_h_34_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkLateReverbComponent_h_34_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkLateReverbComponent_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAssociateAkTextureSetComponent); \
	DECLARE_FUNCTION(execSetAutoAssignAuxBus);


#define FID_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkLateReverbComponent_h_34_ACCESSORS
#define FID_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkLateReverbComponent_h_34_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAkLateReverbComponent, NO_API)


#define FID_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkLateReverbComponent_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkLateReverbComponent(); \
	friend struct Z_Construct_UClass_UAkLateReverbComponent_Statics; \
public: \
	DECLARE_CLASS(UAkLateReverbComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkLateReverbComponent) \
	FID_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkLateReverbComponent_h_34_ARCHIVESERIALIZER


#define FID_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkLateReverbComponent_h_34_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkLateReverbComponent(UAkLateReverbComponent&&); \
	NO_API UAkLateReverbComponent(const UAkLateReverbComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkLateReverbComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkLateReverbComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkLateReverbComponent) \
	NO_API virtual ~UAkLateReverbComponent();


#define FID_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkLateReverbComponent_h_31_PROLOG
#define FID_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkLateReverbComponent_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkLateReverbComponent_h_34_SPARSE_DATA \
	FID_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkLateReverbComponent_h_34_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkLateReverbComponent_h_34_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkLateReverbComponent_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkLateReverbComponent_h_34_ACCESSORS \
	FID_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkLateReverbComponent_h_34_INCLASS_NO_PURE_DECLS \
	FID_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkLateReverbComponent_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkLateReverbComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkLateReverbComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
