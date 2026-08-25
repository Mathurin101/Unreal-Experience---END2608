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

// ********** Begin Class UCharacterAnimation Function DeathAnimation ******************************
struct Z_Construct_UFunction_UCharacterAnimation_DeathAnimation_Statics
{
	struct CharacterAnimation_eventDeathAnimation_Parms
	{
		float NotUsed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_NotUsed", "0.000000" },
		{ "ModuleRelativePath", "Public/Both/CharacterAnimation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NotUsed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCharacterAnimation_DeathAnimation_Statics::NewProp_NotUsed = { "NotUsed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterAnimation_eventDeathAnimation_Parms, NotUsed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterAnimation_DeathAnimation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterAnimation_DeathAnimation_Statics::NewProp_NotUsed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterAnimation_DeathAnimation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterAnimation_DeathAnimation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterAnimation, nullptr, "DeathAnimation", Z_Construct_UFunction_UCharacterAnimation_DeathAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterAnimation_DeathAnimation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterAnimation_DeathAnimation_Statics::CharacterAnimation_eventDeathAnimation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterAnimation_DeathAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterAnimation_DeathAnimation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCharacterAnimation_DeathAnimation_Statics::CharacterAnimation_eventDeathAnimation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterAnimation_DeathAnimation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterAnimation_DeathAnimation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterAnimation::execDeathAnimation)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NotUsed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeathAnimation(Z_Param_NotUsed);
	P_NATIVE_END;
}
// ********** End Class UCharacterAnimation Function DeathAnimation ********************************

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

// ********** Begin Class UCharacterAnimation Function HitAnimation ********************************
struct Z_Construct_UFunction_UCharacterAnimation_HitAnimation_Statics
{
	struct CharacterAnimation_eventHitAnimation_Parms
	{
		float NotUsed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_NotUsed", "0.000000" },
		{ "ModuleRelativePath", "Public/Both/CharacterAnimation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NotUsed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCharacterAnimation_HitAnimation_Statics::NewProp_NotUsed = { "NotUsed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterAnimation_eventHitAnimation_Parms, NotUsed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterAnimation_HitAnimation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterAnimation_HitAnimation_Statics::NewProp_NotUsed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterAnimation_HitAnimation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterAnimation_HitAnimation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterAnimation, nullptr, "HitAnimation", Z_Construct_UFunction_UCharacterAnimation_HitAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterAnimation_HitAnimation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterAnimation_HitAnimation_Statics::CharacterAnimation_eventHitAnimation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterAnimation_HitAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterAnimation_HitAnimation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCharacterAnimation_HitAnimation_Statics::CharacterAnimation_eventHitAnimation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterAnimation_HitAnimation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterAnimation_HitAnimation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterAnimation::execHitAnimation)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NotUsed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HitAnimation(Z_Param_NotUsed);
	P_NATIVE_END;
}
// ********** End Class UCharacterAnimation Function HitAnimation **********************************

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
		{ "DeathAnimation", &UCharacterAnimation::execDeathAnimation },
		{ "FireAnimation", &UCharacterAnimation::execFireAnimation },
		{ "HitAnimation", &UCharacterAnimation::execHitAnimation },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugHit_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//hit animation\n" },
#endif
		{ "ModuleRelativePath", "Public/Both/CharacterAnimation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "hit animation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitAsset_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Both/CharacterAnimation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeathAssets_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//death animation things\n//is an array of death animations\n" },
#endif
		{ "ModuleRelativePath", "Public/Both/CharacterAnimation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "death animation things\nis an array of death animations" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentDeathAsset_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//this Uproperty allows me to edit the blueprint variable without removing \n" },
#endif
		{ "ModuleRelativePath", "Public/Both/CharacterAnimation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "this Uproperty allows me to edit the blueprint variable without removing" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugDeath_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//hit animation\n" },
#endif
		{ "ModuleRelativePath", "Public/Both/CharacterAnimation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "hit animation" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Velocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Direction;
	static void NewProp_DebugFire_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DebugFire;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FireAsset;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ActionSlotName;
	static void NewProp_DebugHit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DebugHit;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DeathAssets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DeathAssets;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentDeathAsset;
	static void NewProp_DebugDeath_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DebugDeath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCharacterAnimation_DeathAnimation, "DeathAnimation" }, // 2090918111
		{ &Z_Construct_UFunction_UCharacterAnimation_FireAnimation, "FireAnimation" }, // 2556266060
		{ &Z_Construct_UFunction_UCharacterAnimation_HitAnimation, "HitAnimation" }, // 4094883957
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
void Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_DebugHit_SetBit(void* Obj)
{
	((UCharacterAnimation*)Obj)->DebugHit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_DebugHit = { "DebugHit", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCharacterAnimation), &Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_DebugHit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugHit_MetaData), NewProp_DebugHit_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_HitAsset = { "HitAsset", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAnimation, HitAsset), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitAsset_MetaData), NewProp_HitAsset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_DeathAssets_Inner = { "DeathAssets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_DeathAssets = { "DeathAssets", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAnimation, DeathAssets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeathAssets_MetaData), NewProp_DeathAssets_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_CurrentDeathAsset = { "CurrentDeathAsset", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAnimation, CurrentDeathAsset), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentDeathAsset_MetaData), NewProp_CurrentDeathAsset_MetaData) };
void Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_DebugDeath_SetBit(void* Obj)
{
	((UCharacterAnimation*)Obj)->DebugDeath = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_DebugDeath = { "DebugDeath", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCharacterAnimation), &Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_DebugDeath_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugDeath_MetaData), NewProp_DebugDeath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterAnimation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_Velocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_DebugFire,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_FireAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_ActionSlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_DebugHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_HitAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_DeathAssets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_DeathAssets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_CurrentDeathAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimation_Statics::NewProp_DebugDeath,
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
		{ Z_Construct_UClass_UCharacterAnimation, UCharacterAnimation::StaticClass, TEXT("UCharacterAnimation"), &Z_Registration_Info_UClass_UCharacterAnimation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterAnimation), 364819382U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Both_CharacterAnimation_h__Script_END2608_2682383901(TEXT("/Script/END2608"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Both_CharacterAnimation_h__Script_END2608_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Both_CharacterAnimation_h__Script_END2608_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
