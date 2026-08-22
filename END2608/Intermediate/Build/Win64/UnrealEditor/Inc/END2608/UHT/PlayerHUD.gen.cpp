// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Both/PlayerHUD.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePlayerHUD() {}

// ********** Begin Cross Module References ********************************************************
END2608_API UClass* Z_Construct_UClass_UPlayerHUD();
END2608_API UClass* Z_Construct_UClass_UPlayerHUD_NoRegister();
UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_END2608();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPlayerHUD Function SetHealth ********************************************
struct Z_Construct_UFunction_UPlayerHUD_SetHealth_Statics
{
	struct PlayerHUD_eventSetHealth_Parms
	{
		float Percent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Both/PlayerHUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Percent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerHUD_SetHealth_Statics::NewProp_Percent = { "Percent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerHUD_eventSetHealth_Parms, Percent), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerHUD_SetHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerHUD_SetHealth_Statics::NewProp_Percent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerHUD_SetHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerHUD_SetHealth_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerHUD, nullptr, "SetHealth", Z_Construct_UFunction_UPlayerHUD_SetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerHUD_SetHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerHUD_SetHealth_Statics::PlayerHUD_eventSetHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerHUD_SetHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerHUD_SetHealth_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPlayerHUD_SetHealth_Statics::PlayerHUD_eventSetHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerHUD_SetHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerHUD_SetHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerHUD::execSetHealth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Percent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHealth(Z_Param_Percent);
	P_NATIVE_END;
}
// ********** End Class UPlayerHUD Function SetHealth **********************************************

// ********** Begin Class UPlayerHUD ***************************************************************
void UPlayerHUD::StaticRegisterNativesUPlayerHUD()
{
	UClass* Class = UPlayerHUD::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetHealth", &UPlayerHUD::execSetHealth },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPlayerHUD;
UClass* UPlayerHUD::GetPrivateStaticClass()
{
	using TClass = UPlayerHUD;
	if (!Z_Registration_Info_UClass_UPlayerHUD.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PlayerHUD"),
			Z_Registration_Info_UClass_UPlayerHUD.InnerSingleton,
			StaticRegisterNativesUPlayerHUD,
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
	return Z_Registration_Info_UClass_UPlayerHUD.InnerSingleton;
}
UClass* Z_Construct_UClass_UPlayerHUD_NoRegister()
{
	return UPlayerHUD::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPlayerHUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Both/PlayerHUD.h" },
		{ "ModuleRelativePath", "Public/Both/PlayerHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PlayerHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Both/PlayerHUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthBar;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerHUD_SetHealth, "SetHealth" }, // 3687770474
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerHUD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerHUD_Statics::NewProp_HealthBar = { "HealthBar", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerHUD, HealthBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthBar_MetaData), NewProp_HealthBar_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerHUD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerHUD_Statics::NewProp_HealthBar,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHUD_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlayerHUD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_END2608,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHUD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerHUD_Statics::ClassParams = {
	&UPlayerHUD::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPlayerHUD_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHUD_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerHUD_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerHUD()
{
	if (!Z_Registration_Info_UClass_UPlayerHUD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerHUD.OuterSingleton, Z_Construct_UClass_UPlayerHUD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerHUD.OuterSingleton;
}
UPlayerHUD::UPlayerHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerHUD);
UPlayerHUD::~UPlayerHUD() {}
// ********** End Class UPlayerHUD *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Both_PlayerHUD_h__Script_END2608_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerHUD, UPlayerHUD::StaticClass, TEXT("UPlayerHUD"), &Z_Registration_Info_UClass_UPlayerHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerHUD), 4105559045U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Both_PlayerHUD_h__Script_END2608_3136682992(TEXT("/Script/END2608"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Both_PlayerHUD_h__Script_END2608_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Both_PlayerHUD_h__Script_END2608_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
