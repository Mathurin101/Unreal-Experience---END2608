// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Both/CharacterAnimation.h"
#include "Components/SkeletalMeshComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCharacterAnimation() {}

// ********** Begin Cross Module References ********************************************************
END2608_API UClass* Z_Construct_UClass_UCharacterAnimation();
END2608_API UClass* Z_Construct_UClass_UCharacterAnimation_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
UPackage* Z_Construct_UPackage__Script_END2608();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCharacterAnimation Function FireAnimation *******************************
struct Z_Construct_UFunction_UCharacterAnimation_FireAnimation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Both/CharacterAnimation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterAnimation_FireAnimation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterAnimation, nullptr, "FireAnimation", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterAnimation_FireAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterAnimation_FireAnimation_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCharacterAnimation_FireAnimation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterAnimation_FireAnimation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterAnimation::execFireAnimation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FireAnimation();
	P_NATIVE_END;
}
// ********** End Class UCharacterAnimation Function FireAnimation *********************************

// ********** Begin Class UCharacterAnimation Function PreviewWindowUpdate *************************
static FName NAME_UCharacterAnimation_PreviewWindowUpdate = FName(TEXT("PreviewWindowUpdate"));
void UCharacterAnimation::PreviewWindowUpdate()
{
	UFunction* Func = FindFunctionChecked(NAME_UCharacterAnimation_PreviewWindowUpdate);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		PreviewWindowUpdate_Implementation();
	}
}
struct Z_Construct_UFunction_UCharacterAnimation_PreviewWindowUpdate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Both/CharacterAnimation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterAnimation_PreviewWindowUpdate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterAnimation, nullptr, "PreviewWindowUpdate", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterAnimation_PreviewWindowUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterAnimation_PreviewWindowUpdate_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCharacterAnimation_PreviewWindowUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterAnimation_PreviewWindowUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterAnimation::execPreviewWindowUpdate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PreviewWindowUpdate_Implementation();
	P_NATIVE_END;
}
// ********** End Class UCharacterAnimation Function PreviewWindowUpdate ***************************

// ********** Begin Class UCharacterAnimation ******************************************************
void UCharacterAnimation::StaticRegisterNativesUCharacterAnimation()
{
	UClass* Class = UCharacterAnimation::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FireAnimation", &UCharacterAnimation::execFireAnimation },
		{ "PreviewWindowUpdate", &UCharacterAnimation::execPreviewWindowUpdate },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCharacterAnimation;
UClass* UCharacterAnimation::GetPrivateStaticClass()
{
	using TClass = UCharacterAnimation;
	if (!Z_Registration_Info_UClass_UCharacterAnimation.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CharacterAnimation"),
			Z_Registration_Info_UClass_UCharacterAnimation.InnerSingleton,
			StaticRegisterNativesUCharacterAnimation,
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
	return Z_Registration_Info_UClass_UCharacterAnimation.InnerSingleton;
}
UClass* Z_Construct_UClass_UCharacterAnimation_NoRegister()
{
	return UCharacterAnimation::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCharacterAnimation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Both/CharacterAnimation.h" },
		{ "ModuleRelativePath", "Public/Both/CharacterAnimation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Both/CharacterAnimation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Both/CharacterAnimation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugFire_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Both/CharacterAnimation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireAsset_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Both/CharacterAnimation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionSlotName_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Both/CharacterAnimation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Velocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Direction;
	static void NewProp_DebugFire_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DebugFire;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FireAsset;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ActionSlotName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCharacterAnimation_FireAnimation, "FireAnimation" }, // 2556266060
		{ &Z_Construct_UFunction_UCharacterAnimation_PreviewWindowUpdate, "PreviewWindowUpdate" }, // 2718223656
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterAnimation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAnimation, Velocity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Velocity_MetaData), NewProp_Velocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAnimation, Direction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) };
void Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_DebugFire_SetBit(void* Obj)
{
	((UCharacterAnimation*)Obj)->DebugFire = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_DebugFire = { "DebugFire", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCharacterAnimation), &Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_DebugFire_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugFire_MetaData), NewProp_DebugFire_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_FireAsset = { "FireAsset", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAnimation, FireAsset), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireAsset_MetaData), NewProp_FireAsset_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_ActionSlotName = { "ActionSlotName", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAnimation, ActionSlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionSlotName_MetaData), NewProp_ActionSlotName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterAnimation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_Velocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_DebugFire,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_FireAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_ActionSlotName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimation_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCharacterAnimation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_END2608,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterAnimation_Statics::ClassParams = {
	&UCharacterAnimation::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCharacterAnimation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimation_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimation_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterAnimation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharacterAnimation()
{
	if (!Z_Registration_Info_UClass_UCharacterAnimation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterAnimation.OuterSingleton, Z_Construct_UClass_UCharacterAnimation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacterAnimation.OuterSingleton;
}
UCharacterAnimation::UCharacterAnimation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterAnimation);
UCharacterAnimation::~UCharacterAnimation() {}
// ********** End Class UCharacterAnimation ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Both_CharacterAnimation_h__Script_END2608_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterAnimation, UCharacterAnimation::StaticClass, TEXT("UCharacterAnimation"), &Z_Registration_Info_UClass_UCharacterAnimation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterAnimation), 1862674152U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Both_CharacterAnimation_h__Script_END2608_3163995789(TEXT("/Script/END2608"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Both_CharacterAnimation_h__Script_END2608_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Both_CharacterAnimation_h__Script_END2608_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
