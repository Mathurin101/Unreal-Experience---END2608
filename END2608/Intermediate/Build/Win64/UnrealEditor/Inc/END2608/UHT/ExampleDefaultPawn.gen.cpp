// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Example/ExampleDefaultPawn.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeExampleDefaultPawn() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
END2608_API UClass* Z_Construct_UClass_AExampleDefaultPawn();
END2608_API UClass* Z_Construct_UClass_AExampleDefaultPawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
UPackage* Z_Construct_UPackage__Script_END2608();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AExampleDefaultPawn ******************************************************
void AExampleDefaultPawn::StaticRegisterNativesAExampleDefaultPawn()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AExampleDefaultPawn;
UClass* AExampleDefaultPawn::GetPrivateStaticClass()
{
	using TClass = AExampleDefaultPawn;
	if (!Z_Registration_Info_UClass_AExampleDefaultPawn.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ExampleDefaultPawn"),
			Z_Registration_Info_UClass_AExampleDefaultPawn.InnerSingleton,
			StaticRegisterNativesAExampleDefaultPawn,
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
	return Z_Registration_Info_UClass_AExampleDefaultPawn.InnerSingleton;
}
UClass* Z_Construct_UClass_AExampleDefaultPawn_NoRegister()
{
	return AExampleDefaultPawn::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AExampleDefaultPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Example/ExampleDefaultPawn.h" },
		{ "ModuleRelativePath", "Public/Example/ExampleDefaultPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnBlueprintClass_MetaData[] = {
		{ "Category", "default" },
		{ "ModuleRelativePath", "Public/Example/ExampleDefaultPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_SpawnBlueprintClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AExampleDefaultPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AExampleDefaultPawn_Statics::NewProp_SpawnBlueprintClass = { "SpawnBlueprintClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AExampleDefaultPawn, SpawnBlueprintClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnBlueprintClass_MetaData), NewProp_SpawnBlueprintClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AExampleDefaultPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExampleDefaultPawn_Statics::NewProp_SpawnBlueprintClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AExampleDefaultPawn_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AExampleDefaultPawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_END2608,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AExampleDefaultPawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AExampleDefaultPawn_Statics::ClassParams = {
	&AExampleDefaultPawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AExampleDefaultPawn_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AExampleDefaultPawn_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AExampleDefaultPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_AExampleDefaultPawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AExampleDefaultPawn()
{
	if (!Z_Registration_Info_UClass_AExampleDefaultPawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AExampleDefaultPawn.OuterSingleton, Z_Construct_UClass_AExampleDefaultPawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AExampleDefaultPawn.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AExampleDefaultPawn);
AExampleDefaultPawn::~AExampleDefaultPawn() {}
// ********** End Class AExampleDefaultPawn ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Example_ExampleDefaultPawn_h__Script_END2608_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AExampleDefaultPawn, AExampleDefaultPawn::StaticClass, TEXT("AExampleDefaultPawn"), &Z_Registration_Info_UClass_AExampleDefaultPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AExampleDefaultPawn), 1857389572U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Example_ExampleDefaultPawn_h__Script_END2608_1297521526(TEXT("/Script/END2608"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Example_ExampleDefaultPawn_h__Script_END2608_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Example_ExampleDefaultPawn_h__Script_END2608_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
