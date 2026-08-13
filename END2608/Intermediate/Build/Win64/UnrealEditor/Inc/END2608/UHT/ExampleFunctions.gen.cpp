// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Example/ExampleFunctions.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeExampleFunctions() {}

// ********** Begin Cross Module References ********************************************************
END2608_API UClass* Z_Construct_UClass_AExampleFunctions();
END2608_API UClass* Z_Construct_UClass_AExampleFunctions_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_END2608();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AExampleFunctions Function BlueprintCallable *****************************
struct Z_Construct_UFunction_AExampleFunctions_BlueprintCallable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Example/ExampleFunctions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AExampleFunctions_BlueprintCallable_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AExampleFunctions, nullptr, "BlueprintCallable", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AExampleFunctions_BlueprintCallable_Statics::Function_MetaDataParams), Z_Construct_UFunction_AExampleFunctions_BlueprintCallable_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AExampleFunctions_BlueprintCallable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AExampleFunctions_BlueprintCallable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AExampleFunctions::execBlueprintCallable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BlueprintCallable();
	P_NATIVE_END;
}
// ********** End Class AExampleFunctions Function BlueprintCallable *******************************

// ********** Begin Class AExampleFunctions Function BlueprintNativeEvent **************************
static FName NAME_AExampleFunctions_BlueprintNativeEvent = FName(TEXT("BlueprintNativeEvent"));
void AExampleFunctions::BlueprintNativeEvent()
{
	UFunction* Func = FindFunctionChecked(NAME_AExampleFunctions_BlueprintNativeEvent);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		BlueprintNativeEvent_Implementation();
	}
}
struct Z_Construct_UFunction_AExampleFunctions_BlueprintNativeEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Example/ExampleFunctions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AExampleFunctions_BlueprintNativeEvent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AExampleFunctions, nullptr, "BlueprintNativeEvent", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AExampleFunctions_BlueprintNativeEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AExampleFunctions_BlueprintNativeEvent_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AExampleFunctions_BlueprintNativeEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AExampleFunctions_BlueprintNativeEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AExampleFunctions::execBlueprintNativeEvent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BlueprintNativeEvent_Implementation();
	P_NATIVE_END;
}
// ********** End Class AExampleFunctions Function BlueprintNativeEvent ****************************

// ********** Begin Class AExampleFunctions Function ImplementableEvent ****************************
static FName NAME_AExampleFunctions_ImplementableEvent = FName(TEXT("ImplementableEvent"));
void AExampleFunctions::ImplementableEvent()
{
	UFunction* Func = FindFunctionChecked(NAME_AExampleFunctions_ImplementableEvent);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AExampleFunctions_ImplementableEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Example/ExampleFunctions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AExampleFunctions_ImplementableEvent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AExampleFunctions, nullptr, "ImplementableEvent", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AExampleFunctions_ImplementableEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AExampleFunctions_ImplementableEvent_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AExampleFunctions_ImplementableEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AExampleFunctions_ImplementableEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AExampleFunctions Function ImplementableEvent ******************************

// ********** Begin Class AExampleFunctions ********************************************************
void AExampleFunctions::StaticRegisterNativesAExampleFunctions()
{
	UClass* Class = AExampleFunctions::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BlueprintCallable", &AExampleFunctions::execBlueprintCallable },
		{ "BlueprintNativeEvent", &AExampleFunctions::execBlueprintNativeEvent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AExampleFunctions;
UClass* AExampleFunctions::GetPrivateStaticClass()
{
	using TClass = AExampleFunctions;
	if (!Z_Registration_Info_UClass_AExampleFunctions.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ExampleFunctions"),
			Z_Registration_Info_UClass_AExampleFunctions.InnerSingleton,
			StaticRegisterNativesAExampleFunctions,
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
	return Z_Registration_Info_UClass_AExampleFunctions.InnerSingleton;
}
UClass* Z_Construct_UClass_AExampleFunctions_NoRegister()
{
	return AExampleFunctions::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AExampleFunctions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Example/ExampleFunctions.h" },
		{ "ModuleRelativePath", "Public/Example/ExampleFunctions.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AExampleFunctions_BlueprintCallable, "BlueprintCallable" }, // 2942406293
		{ &Z_Construct_UFunction_AExampleFunctions_BlueprintNativeEvent, "BlueprintNativeEvent" }, // 3512330251
		{ &Z_Construct_UFunction_AExampleFunctions_ImplementableEvent, "ImplementableEvent" }, // 1731765698
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AExampleFunctions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AExampleFunctions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_END2608,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AExampleFunctions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AExampleFunctions_Statics::ClassParams = {
	&AExampleFunctions::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AExampleFunctions_Statics::Class_MetaDataParams), Z_Construct_UClass_AExampleFunctions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AExampleFunctions()
{
	if (!Z_Registration_Info_UClass_AExampleFunctions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AExampleFunctions.OuterSingleton, Z_Construct_UClass_AExampleFunctions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AExampleFunctions.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AExampleFunctions);
AExampleFunctions::~AExampleFunctions() {}
// ********** End Class AExampleFunctions **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Example_ExampleFunctions_h__Script_END2608_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AExampleFunctions, AExampleFunctions::StaticClass, TEXT("AExampleFunctions"), &Z_Registration_Info_UClass_AExampleFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AExampleFunctions), 2427919600U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Example_ExampleFunctions_h__Script_END2608_4092495301(TEXT("/Script/END2608"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Example_ExampleFunctions_h__Script_END2608_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Example_ExampleFunctions_h__Script_END2608_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
