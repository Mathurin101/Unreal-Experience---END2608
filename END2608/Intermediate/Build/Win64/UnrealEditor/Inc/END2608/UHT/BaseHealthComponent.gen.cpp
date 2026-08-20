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

// ********** Begin Class ABaseHealthComponent *****************************************************
void ABaseHealthComponent::StaticRegisterNativesABaseHealthComponent()
{
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
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
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
		{ Z_Construct_UClass_ABaseHealthComponent, ABaseHealthComponent::StaticClass, TEXT("ABaseHealthComponent"), &Z_Registration_Info_UClass_ABaseHealthComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseHealthComponent), 1833402912U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Actors_BaseHealthComponent_h__Script_END2608_201755822(TEXT("/Script/END2608"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Actors_BaseHealthComponent_h__Script_END2608_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Actors_BaseHealthComponent_h__Script_END2608_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
