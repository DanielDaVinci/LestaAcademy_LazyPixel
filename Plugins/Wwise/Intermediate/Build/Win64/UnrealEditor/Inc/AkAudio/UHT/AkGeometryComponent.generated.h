// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AkGeometryComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_AkGeometryComponent_generated_h
#error "AkGeometryComponent.generated.h already included, missing '#pragma once' in AkGeometryComponent.h"
#endif
#define AKAUDIO_AkGeometryComponent_generated_h

#define FID_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_45_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct();


template<> AKAUDIO_API UScriptStruct* StaticStruct<struct FAkGeometrySurfaceOverride>();

#define FID_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_82_SPARSE_DATA
#define FID_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_82_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_82_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_82_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveGeometry); \
	DECLARE_FUNCTION(execUpdateGeometry); \
	DECLARE_FUNCTION(execSendGeometry); \
	DECLARE_FUNCTION(execConvertMesh);


#define FID_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_82_ACCESSORS
#define FID_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_82_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAkGeometryComponent, NO_API)


#define FID_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_82_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkGeometryComponent(); \
	friend struct Z_Construct_UClass_UAkGeometryComponent_Statics; \
public: \
	DECLARE_CLASS(UAkGeometryComponent, UAkAcousticTextureSetComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkGeometryComponent) \
	FID_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_82_ARCHIVESERIALIZER


#define FID_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_82_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkGeometryComponent(UAkGeometryComponent&&); \
	NO_API UAkGeometryComponent(const UAkGeometryComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkGeometryComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkGeometryComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkGeometryComponent) \
	NO_API virtual ~UAkGeometryComponent();


#define FID_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_79_PROLOG
#define FID_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_82_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_82_SPARSE_DATA \
	FID_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_82_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_82_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_82_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_82_ACCESSORS \
	FID_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_82_INCLASS_NO_PURE_DECLS \
	FID_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_82_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkGeometryComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MainProject_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h


#define FOREACH_ENUM_AKMESHTYPE(op) \
	op(AkMeshType::StaticMesh) \
	op(AkMeshType::CollisionMesh) 

enum class AkMeshType : uint8;
template<> struct TIsUEnumClass<AkMeshType> { enum { Value = true }; };
template<> AKAUDIO_API UEnum* StaticEnum<AkMeshType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
