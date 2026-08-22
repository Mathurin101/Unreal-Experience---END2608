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
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
END2608_API UClass* Z_Construct_UClass_ABaseRifle();
END2608_API UClass* Z_Construct_UClass_ABaseRifle_NoRegister();
END2608_API UFunction* Z_Construct_UDelegateFunction_END2608_DelegateEvent__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_END2608();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FDelegateEvent ********************************************************
struct Z_Construct_UDelegateFunction_END2608_DelegateEvent__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Create delegate class and sets the signature\n" },
#endif
		{ "ModuleRelativePath", "Public/Actors/BaseRifle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create delegate class and sets the signature" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_END2608_DelegateEvent__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_END2608, nullptr, "DelegateEvent__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_END2608_DelegateEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_END2608_DelegateEvent__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_END2608_DelegateEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_END2608_DelegateEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FDelegateEvent_DelegateWrapper(const FMulticastScriptDelegate& DelegateEvent)
{
	DelegateEvent.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FDelegateEvent **********************************************************

// ********** Begin Class ABaseRifle Function ActionStopped ****************************************
struct Z_Construct_UFunction_ABaseRifle_ActionStopped_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Timer things\n//call this method in the \n" },
#endif
		{ "ModuleRelativePath", "Public/Actors/BaseRifle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Timer things\ncall this method in the" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseRifle_ActionStopped_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABaseRifle, nullptr, "ActionStopped", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseRifle_ActionStopped_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseRifle_ActionStopped_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ABaseRifle_ActionStopped()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseRifle_ActionStopped_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseRifle::execActionStopped)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ActionStopped();
	P_NATIVE_END;
}
// ********** End Class ABaseRifle Function ActionStopped ******************************************

// ********** Begin Class ABaseRifle ***************************************************************
void ABaseRifle::StaticRegisterNativesABaseRifle()
{
	UClass* Class = ABaseRifle::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ActionStopped", &ABaseRifle::execActionStopped },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//create the Projectile class (prefab of the projectile) here to be casted and spawned in  \n" },
#endif
		{ "ModuleRelativePath", "Public/Actors/BaseRifle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "create the Projectile class (prefab of the projectile) here to be casted and spawned in" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkellyMesh_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//needed to give and get the mesh from the editor/code \n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/BaseRifle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "needed to give and get the mesh from the editor/code" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponSocketName_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Actors/BaseRifle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkellyMesh;
	static const UECodeGen_Private::FNamePropertyParams NewProp_WeaponSocketName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseRifle_ActionStopped, "ActionStopped" }, // 2552076759
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseRifle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABaseRifle_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseRifle, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileClass_MetaData), NewProp_ProjectileClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseRifle_Statics::NewProp_SkellyMesh = { "SkellyMesh", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseRifle, SkellyMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkellyMesh_MetaData), NewProp_SkellyMesh_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ABaseRifle_Statics::NewProp_WeaponSocketName = { "WeaponSocketName", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseRifle, WeaponSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponSocketName_MetaData), NewProp_WeaponSocketName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseRifle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseRifle_Statics::NewProp_ProjectileClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseRifle_Statics::NewProp_SkellyMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseRifle_Statics::NewProp_WeaponSocketName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRifle_Statics::PropPointers) < 2048);
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
	FuncInfo,
	Z_Construct_UClass_ABaseRifle_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRifle_Statics::PropPointers),
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
		{ Z_Construct_UClass_ABaseRifle, ABaseRifle::StaticClass, TEXT("ABaseRifle"), &Z_Registration_Info_UClass_ABaseRifle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseRifle), 1769552190U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Actors_BaseRifle_h__Script_END2608_310136948(TEXT("/Script/END2608"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Actors_BaseRifle_h__Script_END2608_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Actors_BaseRifle_h__Script_END2608_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
