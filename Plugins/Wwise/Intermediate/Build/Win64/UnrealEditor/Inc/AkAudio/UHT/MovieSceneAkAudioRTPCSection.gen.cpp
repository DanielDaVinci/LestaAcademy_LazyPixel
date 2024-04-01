// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/MovieSceneAkAudioRTPCSection.h"
#include "../../Source/Runtime/Engine/Classes/Curves/RichCurve.h"
#include "AkAudio/Classes/MovieSceneFloatChannelSerializationHelper.h"
#include "Channels/MovieSceneFloatChannel.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneAkAudioRTPCSection() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkRtpc_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneAkAudioRTPCSection();
	AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_NoRegister();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurve();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannel();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UMovieSceneAkAudioRTPCSection::StaticRegisterNativesUMovieSceneAkAudioRTPCSection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneAkAudioRTPCSection);
	UClass* Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_NoRegister()
	{
		return UMovieSceneAkAudioRTPCSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RTPC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RTPC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FloatCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatChannelSerializationHelper_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FloatChannelSerializationHelper;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RTPCChannel_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RTPCChannel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* A single floating point section\n*/" },
#endif
		{ "IncludePath", "MovieSceneAkAudioRTPCSection.h" },
		{ "ModuleRelativePath", "Classes/MovieSceneAkAudioRTPCSection.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A single floating point section" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::NewProp_RTPC_MetaData[] = {
		{ "Category", "AkAudioRTPC" },
		{ "ModuleRelativePath", "Classes/MovieSceneAkAudioRTPCSection.h" },
		{ "NoResetToDefault", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::NewProp_RTPC = { "RTPC", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneAkAudioRTPCSection, RTPC), Z_Construct_UClass_UAkRtpc_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::NewProp_RTPC_MetaData), Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::NewProp_RTPC_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "AkAudioRTPC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Name of the RTPC to modify. */" },
#endif
		{ "ModuleRelativePath", "Classes/MovieSceneAkAudioRTPCSection.h" },
		{ "NoResetToDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the RTPC to modify." },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x00200c0000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneAkAudioRTPCSection, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::NewProp_Name_MetaData), Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::NewProp_FloatCurve_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Curve data */" },
#endif
		{ "ModuleRelativePath", "Classes/MovieSceneAkAudioRTPCSection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Curve data" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::NewProp_FloatCurve = { "FloatCurve", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneAkAudioRTPCSection, FloatCurve), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::NewProp_FloatCurve_MetaData), Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::NewProp_FloatCurve_MetaData) }; // 4189057203
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::NewProp_FloatChannelSerializationHelper_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Enabled serialization of RTPCChannel when 4.24 support was added. \n" },
#endif
		{ "ModuleRelativePath", "Classes/MovieSceneAkAudioRTPCSection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enabled serialization of RTPCChannel when 4.24 support was added." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::NewProp_FloatChannelSerializationHelper = { "FloatChannelSerializationHelper", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneAkAudioRTPCSection, FloatChannelSerializationHelper), Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::NewProp_FloatChannelSerializationHelper_MetaData), Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::NewProp_FloatChannelSerializationHelper_MetaData) }; // 2318022518
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::NewProp_RTPCChannel_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MovieSceneAkAudioRTPCSection.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::NewProp_RTPCChannel = { "RTPCChannel", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneAkAudioRTPCSection, RTPCChannel), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::NewProp_RTPCChannel_MetaData), Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::NewProp_RTPCChannel_MetaData) }; // 3861024830
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::NewProp_RTPC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::NewProp_FloatCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::NewProp_FloatChannelSerializationHelper,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::NewProp_RTPCChannel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneAkAudioRTPCSection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::ClassParams = {
		&UMovieSceneAkAudioRTPCSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMovieSceneAkAudioRTPCSection()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneAkAudioRTPCSection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneAkAudioRTPCSection.OuterSingleton, Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneAkAudioRTPCSection.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UMovieSceneAkAudioRTPCSection>()
	{
		return UMovieSceneAkAudioRTPCSection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneAkAudioRTPCSection);
	UMovieSceneAkAudioRTPCSection::~UMovieSceneAkAudioRTPCSection() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneAkAudioRTPCSection)
	struct Z_CompiledInDeferFile_FID_MainProject_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkAudioRTPCSection_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MainProject_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkAudioRTPCSection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneAkAudioRTPCSection, UMovieSceneAkAudioRTPCSection::StaticClass, TEXT("UMovieSceneAkAudioRTPCSection"), &Z_Registration_Info_UClass_UMovieSceneAkAudioRTPCSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneAkAudioRTPCSection), 3281471507U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MainProject_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkAudioRTPCSection_h_3687671039(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_MainProject_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkAudioRTPCSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MainProject_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkAudioRTPCSection_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
