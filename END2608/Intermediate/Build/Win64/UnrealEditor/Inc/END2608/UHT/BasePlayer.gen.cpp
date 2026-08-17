// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Actors/BasePlayer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBasePlayer() {}

// ********** Begin Cross Module References ********************************************************
END2608_API UClass* Z_Construct_UClass_ABaseCharacter();
END2608_API UClass* Z_Construct_UClass_ABasePlayer();
END2608_API UClass* Z_Construct_UClass_ABasePlayer_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_END2608();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ABasePlayer **************************************************************
void ABasePlayer::StaticRegisterNativesABasePlayer()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ABasePlayer;
UClass* ABasePlayer::GetPrivateStaticClass()
{
	using TClass = ABasePlayer;
	if (!Z_Registration_Info_UClass_ABasePlayer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BasePlayer"),
			Z_Registration_Info_UClass_ABasePlayer.InnerSingleton,
			StaticRegisterNativesABasePlayer,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ABasePlayer.InnerSingleton;
}
UClass* Z_Construct_UClass_ABasePlayer_NoRegister()
{
	return ABasePlayer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ABasePlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Actors/BasePlayer.h" },
		{ "ModuleRelativePath", "Public/Actors/BasePlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[] = {
		{ "Category", "Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/BasePlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABasePlayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasePlayer_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasePlayer, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArm_MetaData), NewProp_SpringArm_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABasePlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePlayer_Statics::NewProp_SpringArm,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABasePlayer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABasePlayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABaseCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_END2608,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABasePlayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABasePlayer_Statics::ClassParams = {
	&ABasePlayer::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABasePlayer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABasePlayer_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABasePlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_ABasePlayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABasePlayer()
{
	if (!Z_Registration_Info_UClass_ABasePlayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABasePlayer.OuterSingleton, Z_Construct_UClass_ABasePlayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABasePlayer.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABasePlayer);
ABasePlayer::~ABasePlayer() {}
// ********** End Class ABasePlayer ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Actors_BasePlayer_h__Script_END2608_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABasePlayer, ABasePlayer::StaticClass, TEXT("ABasePlayer"), &Z_Registration_Info_UClass_ABasePlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABasePlayer), 2959016091U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Actors_BasePlayer_h__Script_END2608_2701600599(TEXT("/Script/END2608"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Actors_BasePlayer_h__Script_END2608_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Actors_BasePlayer_h__Script_END2608_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
