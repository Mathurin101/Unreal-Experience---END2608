// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Actors/BaseRifle.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBaseRifle() {}

// ********** Begin Cross Module References ********************************************************
END2608_API UClass* Z_Construct_UClass_ABaseRifle();
END2608_API UClass* Z_Construct_UClass_ABaseRifle_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_END2608();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ABaseRifle ***************************************************************
void ABaseRifle::StaticRegisterNativesABaseRifle()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ABaseRifle;
UClass* ABaseRifle::GetPrivateStaticClass()
{
	using TClass = ABaseRifle;
	if (!Z_Registration_Info_UClass_ABaseRifle.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BaseRifle"),
			Z_Registration_Info_UClass_ABaseRifle.InnerSingleton,
			StaticRegisterNativesABaseRifle,
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
	return Z_Registration_Info_UClass_ABaseRifle.InnerSingleton;
}
UClass* Z_Construct_UClass_ABaseRifle_NoRegister()
{
	return ABaseRifle::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ABaseRifle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/BaseRifle.h" },
		{ "ModuleRelativePath", "Public/Actors/BaseRifle.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseRifle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABaseRifle_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_END2608,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRifle_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseRifle_Statics::ClassParams = {
	&ABaseRifle::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRifle_Statics::Class_MetaDataParams), Z_Construct_UClass_ABaseRifle_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABaseRifle()
{
	if (!Z_Registration_Info_UClass_ABaseRifle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseRifle.OuterSingleton, Z_Construct_UClass_ABaseRifle_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABaseRifle.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseRifle);
ABaseRifle::~ABaseRifle() {}
// ********** End Class ABaseRifle *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Actors_BaseRifle_h__Script_END2608_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABaseRifle, ABaseRifle::StaticClass, TEXT("ABaseRifle"), &Z_Registration_Info_UClass_ABaseRifle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseRifle), 1711017742U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Actors_BaseRifle_h__Script_END2608_771980830(TEXT("/Script/END2608"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Actors_BaseRifle_h__Script_END2608_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Actors_BaseRifle_h__Script_END2608_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
