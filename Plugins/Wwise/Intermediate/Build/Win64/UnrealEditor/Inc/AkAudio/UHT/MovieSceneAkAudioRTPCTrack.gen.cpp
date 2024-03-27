// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/MovieSceneAkAudioRTPCTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneAkAudioRTPCTrack() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneAkAudioRTPCTrack();
	AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneAkAudioRTPCTrack_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneAkTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UMovieSceneAkAudioRTPCTrack::StaticRegisterNativesUMovieSceneAkAudioRTPCTrack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneAkAudioRTPCTrack);
	UClass* Z_Construct_UClass_UMovieSceneAkAudioRTPCTrack_NoRegister()
	{
		return UMovieSceneAkAudioRTPCTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneAkAudioRTPCTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneAkAudioRTPCTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneAkTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAkAudioRTPCTrack_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAkAudioRTPCTrack_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Handles manipulation of float properties in a movie scene\n */" },
#endif
		{ "IncludePath", "MovieSceneAkAudioRTPCTrack.h" },
		{ "ModuleRelativePath", "Classes/MovieSceneAkAudioRTPCTrack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles manipulation of float properties in a movie scene" },
#endif
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneAkAudioRTPCTrack_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneAkAudioRTPCTrack, IMovieSceneTrackTemplateProducer), false },  // 3839488910
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAkAudioRTPCTrack_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneAkAudioRTPCTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneAkAudioRTPCTrack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneAkAudioRTPCTrack_Statics::ClassParams = {
		&UMovieSceneAkAudioRTPCTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x00A800A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAkAudioRTPCTrack_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneAkAudioRTPCTrack_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMovieSceneAkAudioRTPCTrack()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneAkAudioRTPCTrack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneAkAudioRTPCTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneAkAudioRTPCTrack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneAkAudioRTPCTrack.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UMovieSceneAkAudioRTPCTrack>()
	{
		return UMovieSceneAkAudioRTPCTrack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneAkAudioRTPCTrack);
	UMovieSceneAkAudioRTPCTrack::~UMovieSceneAkAudioRTPCTrack() {}
	struct Z_CompiledInDeferFile_FID_Users_danii_RiderProjects_MainProject_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkAudioRTPCTrack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_danii_RiderProjects_MainProject_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkAudioRTPCTrack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneAkAudioRTPCTrack, UMovieSceneAkAudioRTPCTrack::StaticClass, TEXT("UMovieSceneAkAudioRTPCTrack"), &Z_Registration_Info_UClass_UMovieSceneAkAudioRTPCTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneAkAudioRTPCTrack), 2719129791U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_danii_RiderProjects_MainProject_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkAudioRTPCTrack_h_827401470(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_Users_danii_RiderProjects_MainProject_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkAudioRTPCTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_danii_RiderProjects_MainProject_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkAudioRTPCTrack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
