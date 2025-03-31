// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VideoCheckers3DPlayer/Public/StaticCamerasCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStaticCamerasCharacter() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_ACameraActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_VideoCheckers3DPlayer();
	VIDEOCHECKERS3DPLAYER_API UClass* Z_Construct_UClass_AStaticCamerasCharacter();
	VIDEOCHECKERS3DPLAYER_API UClass* Z_Construct_UClass_AStaticCamerasCharacter_NoRegister();
// End Cross Module References
	void AStaticCamerasCharacter::StaticRegisterNativesAStaticCamerasCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AStaticCamerasCharacter);
	UClass* Z_Construct_UClass_AStaticCamerasCharacter_NoRegister()
	{
		return AStaticCamerasCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AStaticCamerasCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraToFind_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CameraToFind;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStaticCamerasCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_VideoCheckers3DPlayer,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AStaticCamerasCharacter_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStaticCamerasCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "StaticCamerasCharacter.h" },
		{ "ModuleRelativePath", "Public/StaticCamerasCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStaticCamerasCharacter_Statics::NewProp_CameraToFind_MetaData[] = {
		{ "Category", "StaticCamerasCharacter" },
		{ "ModuleRelativePath", "Public/StaticCamerasCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AStaticCamerasCharacter_Statics::NewProp_CameraToFind = { "CameraToFind", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStaticCamerasCharacter, CameraToFind), Z_Construct_UClass_UClass, Z_Construct_UClass_ACameraActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AStaticCamerasCharacter_Statics::NewProp_CameraToFind_MetaData), Z_Construct_UClass_AStaticCamerasCharacter_Statics::NewProp_CameraToFind_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStaticCamerasCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStaticCamerasCharacter_Statics::NewProp_CameraToFind,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStaticCamerasCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStaticCamerasCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AStaticCamerasCharacter_Statics::ClassParams = {
		&AStaticCamerasCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AStaticCamerasCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AStaticCamerasCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AStaticCamerasCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AStaticCamerasCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AStaticCamerasCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AStaticCamerasCharacter()
	{
		if (!Z_Registration_Info_UClass_AStaticCamerasCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AStaticCamerasCharacter.OuterSingleton, Z_Construct_UClass_AStaticCamerasCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AStaticCamerasCharacter.OuterSingleton;
	}
	template<> VIDEOCHECKERS3DPLAYER_API UClass* StaticClass<AStaticCamerasCharacter>()
	{
		return AStaticCamerasCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStaticCamerasCharacter);
	AStaticCamerasCharacter::~AStaticCamerasCharacter() {}
	struct Z_CompiledInDeferFile_FID_Users_leovb_Documents_Unreal_Projects_Sandbox_Plugins_VideoCheckers3DPlayer_Source_VideoCheckers3DPlayer_Public_StaticCamerasCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_leovb_Documents_Unreal_Projects_Sandbox_Plugins_VideoCheckers3DPlayer_Source_VideoCheckers3DPlayer_Public_StaticCamerasCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AStaticCamerasCharacter, AStaticCamerasCharacter::StaticClass, TEXT("AStaticCamerasCharacter"), &Z_Registration_Info_UClass_AStaticCamerasCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AStaticCamerasCharacter), 3395557875U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_leovb_Documents_Unreal_Projects_Sandbox_Plugins_VideoCheckers3DPlayer_Source_VideoCheckers3DPlayer_Public_StaticCamerasCharacter_h_4236927411(TEXT("/Script/VideoCheckers3DPlayer"),
		Z_CompiledInDeferFile_FID_Users_leovb_Documents_Unreal_Projects_Sandbox_Plugins_VideoCheckers3DPlayer_Source_VideoCheckers3DPlayer_Public_StaticCamerasCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_leovb_Documents_Unreal_Projects_Sandbox_Plugins_VideoCheckers3DPlayer_Source_VideoCheckers3DPlayer_Public_StaticCamerasCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
