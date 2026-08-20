// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Actors/BaseHealthComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBaseHealthComponent() {}

// ********** Begin Cross Module References ********************************************************
END2608_API UClass* Z_Construct_UClass_ABaseHealthComponent();
END2608_API UClass* Z_Construct_UClass_ABaseHealthComponent_NoRegister();
END2608_API UFunction* Z_Construct_UDelegateFunction_END2608_DelegateBindEvent__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_END2608();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FDelegateBindEvent ****************************************************
struct Z_Construct_UDelegateFunction_END2608_DelegateBindEvent__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Create delegate class and sets the signature\n" },
#endif
		{ "ModuleRelativePath", "Public/Actors/BaseHealthComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create delegate class and sets the signature" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_END2608_DelegateBindEvent__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_END2608, nullptr, "DelegateBindEvent__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_END2608_DelegateBindEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_END2608_DelegateBindEvent__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_END2608_DelegateBindEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_END2608_DelegateBindEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FDelegateBindEvent_DelegateWrapper(const FMulticastScriptDelegate& DelegateBindEvent)
{
	DelegateBindEvent.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FDelegateBindEvent ******************************************************

// ********** Begin Class ABaseHealthComponent Function OnTakeAnyDamage ****************************
struct Z_Construct_UFunction_ABaseHealthComponent_OnTakeAnyDamage_Statics
{
	struct BaseHealthComponent_eventOnTakeAnyDamage_Parms
	{
		float DamageTaken;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/BaseHealthComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageTaken;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABaseHealthComponent_OnTakeAnyDamage_Statics::NewProp_DamageTaken = { "DamageTaken", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseHealthComponent_eventOnTakeAnyDamage_Parms, DamageTaken), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseHealthComponent_OnTakeAnyDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseHealthComponent_OnTakeAnyDamage_Statics::NewProp_DamageTaken,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseHealthComponent_OnTakeAnyDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseHealthComponent_OnTakeAnyDamage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABaseHealthComponent, nullptr, "OnTakeAnyDamage", Z_Construct_UFunction_ABaseHealthComponent_OnTakeAnyDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseHealthComponent_OnTakeAnyDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseHealthComponent_OnTakeAnyDamage_Statics::BaseHealthComponent_eventOnTakeAnyDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseHealthComponent_OnTakeAnyDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseHealthComponent_OnTakeAnyDamage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABaseHealthComponent_OnTakeAnyDamage_Statics::BaseHealthComponent_eventOnTakeAnyDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABaseHealthComponent_OnTakeAnyDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseHealthComponent_OnTakeAnyDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseHealthComponent::execOnTakeAnyDamage)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DamageTaken);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTakeAnyDamage(Z_Param_DamageTaken);
	P_NATIVE_END;
}
// ********** End Class ABaseHealthComponent Function OnTakeAnyDamage ******************************

// ********** Begin Class ABaseHealthComponent *****************************************************
void ABaseHealthComponent::StaticRegisterNativesABaseHealthComponent()
{
	UClass* Class = ABaseHealthComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnTakeAnyDamage", &ABaseHealthComponent::execOnTakeAnyDamage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ABaseHealthComponent;
UClass* ABaseHealthComponent::GetPrivateStaticClass()
{
	using TClass = ABaseHealthComponent;
	if (!Z_Registration_Info_UClass_ABaseHealthComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BaseHealthComponent"),
			Z_Registration_Info_UClass_ABaseHealthComponent.InnerSingleton,
			StaticRegisterNativesABaseHealthComponent,
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
	return Z_Registration_Info_UClass_ABaseHealthComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_ABaseHealthComponent_NoRegister()
{
	return ABaseHealthComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ABaseHealthComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/BaseHealthComponent.h" },
		{ "ModuleRelativePath", "Public/Actors/BaseHealthComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseHealthComponent_OnTakeAnyDamage, "OnTakeAnyDamage" }, // 197687618
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseHealthComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABaseHealthComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_END2608,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseHealthComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseHealthComponent_Statics::ClassParams = {
	&ABaseHealthComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseHealthComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_ABaseHealthComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABaseHealthComponent()
{
	if (!Z_Registration_Info_UClass_ABaseHealthComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseHealthComponent.OuterSingleton, Z_Construct_UClass_ABaseHealthComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABaseHealthComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseHealthComponent);
ABaseHealthComponent::~ABaseHealthComponent() {}
// ********** End Class ABaseHealthComponent *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Actors_BaseHealthComponent_h__Script_END2608_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABaseHealthComponent, ABaseHealthComponent::StaticClass, TEXT("ABaseHealthComponent"), &Z_Registration_Info_UClass_ABaseHealthComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseHealthComponent), 4179861159U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Actors_BaseHealthComponent_h__Script_END2608_4114051084(TEXT("/Script/END2608"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Actors_BaseHealthComponent_h__Script_END2608_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Actors_BaseHealthComponent_h__Script_END2608_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
