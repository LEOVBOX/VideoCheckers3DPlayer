// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VideoCheckers3DPlayer/VideoPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVideoPlayer() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_ACameraActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UFileMediaSource_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaPlayer_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaTexture_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VideoCheckers3DPlayer();
	VIDEOCHECKERS3DPLAYER_API UClass* Z_Construct_UClass_AVideoPlayer();
	VIDEOCHECKERS3DPLAYER_API UClass* Z_Construct_UClass_AVideoPlayer_NoRegister();
// End Cross Module References
	void AVideoPlayer::StaticRegisterNativesAVideoPlayer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVideoPlayer);
	UClass* Z_Construct_UClass_AVideoPlayer_NoRegister()
	{
		return AVideoPlayer::StaticClass();
	}
	struct Z_Construct_UClass_AVideoPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraToFind_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CameraToFind;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VideoWidgetResolution_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VideoWidgetResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WindowResolutionCorrection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WindowResolutionCorrection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VideoFilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_VideoFilePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaPlayer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MediaPlayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaSource_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MediaSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VideoMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VideoMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MediaTexture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVideoPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_VideoCheckers3DPlayer,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVideoPlayer_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVideoPlayer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VideoPlayer.h" },
		{ "ModuleRelativePath", "VideoPlayer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVideoPlayer_Statics::NewProp_CameraToFind_MetaData[] = {
		{ "Category", "VideoPlayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Camera Actor which the Actor sets Viewtarget\n" },
#endif
		{ "ModuleRelativePath", "VideoPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera Actor which the Actor sets Viewtarget" },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AVideoPlayer_Statics::NewProp_CameraToFind = { "CameraToFind", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVideoPlayer, CameraToFind), Z_Construct_UClass_UClass, Z_Construct_UClass_ACameraActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVideoPlayer_Statics::NewProp_CameraToFind_MetaData), Z_Construct_UClass_AVideoPlayer_Statics::NewProp_CameraToFind_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVideoPlayer_Statics::NewProp_VideoWidgetResolution_MetaData[] = {
		{ "Category", "Video" },
		{ "ModuleRelativePath", "VideoPlayer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVideoPlayer_Statics::NewProp_VideoWidgetResolution = { "VideoWidgetResolution", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVideoPlayer, VideoWidgetResolution), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVideoPlayer_Statics::NewProp_VideoWidgetResolution_MetaData), Z_Construct_UClass_AVideoPlayer_Statics::NewProp_VideoWidgetResolution_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVideoPlayer_Statics::NewProp_WindowResolutionCorrection_MetaData[] = {
		{ "Category", "Video" },
		{ "ModuleRelativePath", "VideoPlayer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVideoPlayer_Statics::NewProp_WindowResolutionCorrection = { "WindowResolutionCorrection", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVideoPlayer, WindowResolutionCorrection), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVideoPlayer_Statics::NewProp_WindowResolutionCorrection_MetaData), Z_Construct_UClass_AVideoPlayer_Statics::NewProp_WindowResolutionCorrection_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVideoPlayer_Statics::NewProp_VideoFilePath_MetaData[] = {
		{ "Category", "Video" },
		{ "ModuleRelativePath", "VideoPlayer.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AVideoPlayer_Statics::NewProp_VideoFilePath = { "VideoFilePath", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVideoPlayer, VideoFilePath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVideoPlayer_Statics::NewProp_VideoFilePath_MetaData), Z_Construct_UClass_AVideoPlayer_Statics::NewProp_VideoFilePath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVideoPlayer_Statics::NewProp_MediaPlayer_MetaData[] = {
		{ "Category", "Video" },
		{ "ModuleRelativePath", "VideoPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVideoPlayer_Statics::NewProp_MediaPlayer = { "MediaPlayer", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVideoPlayer, MediaPlayer), Z_Construct_UClass_UMediaPlayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVideoPlayer_Statics::NewProp_MediaPlayer_MetaData), Z_Construct_UClass_AVideoPlayer_Statics::NewProp_MediaPlayer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVideoPlayer_Statics::NewProp_MediaSource_MetaData[] = {
		{ "Category", "Video" },
		{ "ModuleRelativePath", "VideoPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVideoPlayer_Statics::NewProp_MediaSource = { "MediaSource", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVideoPlayer, MediaSource), Z_Construct_UClass_UFileMediaSource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVideoPlayer_Statics::NewProp_MediaSource_MetaData), Z_Construct_UClass_AVideoPlayer_Statics::NewProp_MediaSource_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVideoPlayer_Statics::NewProp_VideoMaterial_MetaData[] = {
		{ "ModuleRelativePath", "VideoPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVideoPlayer_Statics::NewProp_VideoMaterial = { "VideoMaterial", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVideoPlayer, VideoMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVideoPlayer_Statics::NewProp_VideoMaterial_MetaData), Z_Construct_UClass_AVideoPlayer_Statics::NewProp_VideoMaterial_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVideoPlayer_Statics::NewProp_SourceMaterial_MetaData[] = {
		{ "Category", "Video" },
		{ "ModuleRelativePath", "VideoPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVideoPlayer_Statics::NewProp_SourceMaterial = { "SourceMaterial", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVideoPlayer, SourceMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVideoPlayer_Statics::NewProp_SourceMaterial_MetaData), Z_Construct_UClass_AVideoPlayer_Statics::NewProp_SourceMaterial_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVideoPlayer_Statics::NewProp_MediaTexture_MetaData[] = {
		{ "Category", "Video" },
		{ "ModuleRelativePath", "VideoPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVideoPlayer_Statics::NewProp_MediaTexture = { "MediaTexture", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVideoPlayer, MediaTexture), Z_Construct_UClass_UMediaTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVideoPlayer_Statics::NewProp_MediaTexture_MetaData), Z_Construct_UClass_AVideoPlayer_Statics::NewProp_MediaTexture_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVideoPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVideoPlayer_Statics::NewProp_CameraToFind,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVideoPlayer_Statics::NewProp_VideoWidgetResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVideoPlayer_Statics::NewProp_WindowResolutionCorrection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVideoPlayer_Statics::NewProp_VideoFilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVideoPlayer_Statics::NewProp_MediaPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVideoPlayer_Statics::NewProp_MediaSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVideoPlayer_Statics::NewProp_VideoMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVideoPlayer_Statics::NewProp_SourceMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVideoPlayer_Statics::NewProp_MediaTexture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVideoPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVideoPlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVideoPlayer_Statics::ClassParams = {
		&AVideoPlayer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AVideoPlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AVideoPlayer_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVideoPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_AVideoPlayer_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVideoPlayer_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AVideoPlayer()
	{
		if (!Z_Registration_Info_UClass_AVideoPlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVideoPlayer.OuterSingleton, Z_Construct_UClass_AVideoPlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVideoPlayer.OuterSingleton;
	}
	template<> VIDEOCHECKERS3DPLAYER_API UClass* StaticClass<AVideoPlayer>()
	{
		return AVideoPlayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVideoPlayer);
	AVideoPlayer::~AVideoPlayer() {}
	struct Z_CompiledInDeferFile_FID_Users_leovb_Documents_Unreal_Projects_Sandbox_Plugins_VideoCheckers3DPlayer_Source_VideoCheckers3DPlayer_VideoPlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_leovb_Documents_Unreal_Projects_Sandbox_Plugins_VideoCheckers3DPlayer_Source_VideoCheckers3DPlayer_VideoPlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVideoPlayer, AVideoPlayer::StaticClass, TEXT("AVideoPlayer"), &Z_Registration_Info_UClass_AVideoPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVideoPlayer), 536026791U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_leovb_Documents_Unreal_Projects_Sandbox_Plugins_VideoCheckers3DPlayer_Source_VideoCheckers3DPlayer_VideoPlayer_h_1385227268(TEXT("/Script/VideoCheckers3DPlayer"),
		Z_CompiledInDeferFile_FID_Users_leovb_Documents_Unreal_Projects_Sandbox_Plugins_VideoCheckers3DPlayer_Source_VideoCheckers3DPlayer_VideoPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_leovb_Documents_Unreal_Projects_Sandbox_Plugins_VideoCheckers3DPlayer_Source_VideoCheckers3DPlayer_VideoPlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
