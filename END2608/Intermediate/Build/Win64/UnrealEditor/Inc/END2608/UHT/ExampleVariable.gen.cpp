// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Example/ExampleVariable.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeExampleVariable() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
END2608_API UClass* Z_Construct_UClass_AExampleVariable();
END2608_API UClass* Z_Construct_UClass_AExampleVariable_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_END2608();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AExampleVariable *********************************************************
void AExampleVariable::StaticRegisterNativesAExampleVariable()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AExampleVariable;
UClass* AExampleVariable::GetPrivateStaticClass()
{
	using TClass = AExampleVariable;
	if (!Z_Registration_Info_UClass_AExampleVariable.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ExampleVariable"),
			Z_Registration_Info_UClass_AExampleVariable.InnerSingleton,
			StaticRegisterNativesAExampleVariable,
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
	return Z_Registration_Info_UClass_AExampleVariable.InnerSingleton;
}
UClass* Z_Construct_UClass_AExampleVariable_NoRegister()
{
	return AExampleVariable::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AExampleVariable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Example/ExampleVariable.h" },
		{ "ModuleRelativePath", "Public/Example/ExampleVariable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisibleAnywhere_MetaData[] = {
		{ "Category", "Variable|ReadOnly" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Blueprint Read Only variables\n" },
#endif
		{ "ModuleRelativePath", "Public/Example/ExampleVariable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint Read Only variables" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisibleDefaultsOnly_MetaData[] = {
		{ "Category", "Variable|ReadOnly" },
		{ "ModuleRelativePath", "Public/Example/ExampleVariable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisibleInstanceOdd_MetaData[] = {
		{ "Category", "Variable|ReadOnly" },
		{ "ModuleRelativePath", "Public/Example/ExampleVariable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisibleInstanceOnly_MetaData[] = {
		{ "Category", "Variable|ReadOnly" },
		{ "ModuleRelativePath", "Public/Example/ExampleVariable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditAnywhere_MetaData[] = {
		{ "Category", "Variable|ReadWrite" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Blueprint Read write variables\n" },
#endif
		{ "ModuleRelativePath", "Public/Example/ExampleVariable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint Read write variables" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditDefaultsOdd_MetaData[] = {
		{ "Category", "Variable|ReadWrite" },
		{ "ModuleRelativePath", "Public/Example/ExampleVariable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditInstanceOdd_MetaData[] = {
		{ "Category", "Variable|ReadWrite" },
		{ "ModuleRelativePath", "Public/Example/ExampleVariable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditDefaultsOnly_MetaData[] = {
		{ "Category", "Variable|ReadWrite" },
		{ "ModuleRelativePath", "Public/Example/ExampleVariable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditInstanceOnly_MetaData[] = {
		{ "Category", "Variable|ReadWrite" },
		{ "ModuleRelativePath", "Public/Example/ExampleVariable.h" },
	};
#endif // WITH_METADATA
	static void NewProp_VisibleAnywhere_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_VisibleAnywhere;
	static const UECodeGen_Private::FBytePropertyParams NewProp_VisibleDefaultsOnly;
	static const UECodeGen_Private::FIntPropertyParams NewProp_VisibleInstanceOdd;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_VisibleInstanceOnly;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EditAnywhere;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EditDefaultsOdd;
	static const UECodeGen_Private::FStrPropertyParams NewProp_EditInstanceOdd;
	static const UECodeGen_Private::FTextPropertyParams NewProp_EditDefaultsOnly;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EditInstanceOnly;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AExampleVariable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_AExampleVariable_Statics::NewProp_VisibleAnywhere_SetBit(void* Obj)
{
	((AExampleVariable*)Obj)->VisibleAnywhere = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AExampleVariable_Statics::NewProp_VisibleAnywhere = { "VisibleAnywhere", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AExampleVariable), &Z_Construct_UClass_AExampleVariable_Statics::NewProp_VisibleAnywhere_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisibleAnywhere_MetaData), NewProp_VisibleAnywhere_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AExampleVariable_Statics::NewProp_VisibleDefaultsOnly = { "VisibleDefaultsOnly", nullptr, (EPropertyFlags)0x0020080000030015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AExampleVariable, VisibleDefaultsOnly), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisibleDefaultsOnly_MetaData), NewProp_VisibleDefaultsOnly_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AExampleVariable_Statics::NewProp_VisibleInstanceOdd = { "VisibleInstanceOdd", nullptr, (EPropertyFlags)0x0020080000020815, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AExampleVariable, VisibleInstanceOdd), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisibleInstanceOdd_MetaData), NewProp_VisibleInstanceOdd_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UClass_AExampleVariable_Statics::NewProp_VisibleInstanceOnly = { "VisibleInstanceOnly", nullptr, (EPropertyFlags)0x0020080000020801, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AExampleVariable, VisibleInstanceOnly), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisibleInstanceOnly_MetaData), NewProp_VisibleInstanceOnly_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AExampleVariable_Statics::NewProp_EditAnywhere = { "EditAnywhere", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AExampleVariable, EditAnywhere), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditAnywhere_MetaData), NewProp_EditAnywhere_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AExampleVariable_Statics::NewProp_EditDefaultsOdd = { "EditDefaultsOdd", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AExampleVariable, EditDefaultsOdd), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditDefaultsOdd_MetaData), NewProp_EditDefaultsOdd_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AExampleVariable_Statics::NewProp_EditInstanceOdd = { "EditInstanceOdd", nullptr, (EPropertyFlags)0x0020080000000805, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AExampleVariable, EditInstanceOdd), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditInstanceOdd_MetaData), NewProp_EditInstanceOdd_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_AExampleVariable_Statics::NewProp_EditDefaultsOnly = { "EditDefaultsOnly", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AExampleVariable, EditDefaultsOnly), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditDefaultsOnly_MetaData), NewProp_EditDefaultsOnly_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AExampleVariable_Statics::NewProp_EditInstanceOnly = { "EditInstanceOnly", nullptr, (EPropertyFlags)0x0020080000000801, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AExampleVariable, EditInstanceOnly), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditInstanceOnly_MetaData), NewProp_EditInstanceOnly_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AExampleVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExampleVariable_Statics::NewProp_VisibleAnywhere,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExampleVariable_Statics::NewProp_VisibleDefaultsOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExampleVariable_Statics::NewProp_VisibleInstanceOdd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExampleVariable_Statics::NewProp_VisibleInstanceOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExampleVariable_Statics::NewProp_EditAnywhere,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExampleVariable_Statics::NewProp_EditDefaultsOdd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExampleVariable_Statics::NewProp_EditInstanceOdd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExampleVariable_Statics::NewProp_EditDefaultsOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExampleVariable_Statics::NewProp_EditInstanceOnly,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AExampleVariable_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AExampleVariable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_END2608,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AExampleVariable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AExampleVariable_Statics::ClassParams = {
	&AExampleVariable::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AExampleVariable_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AExampleVariable_Statics::PropPointers),
	0,
	0x009001A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AExampleVariable_Statics::Class_MetaDataParams), Z_Construct_UClass_AExampleVariable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AExampleVariable()
{
	if (!Z_Registration_Info_UClass_AExampleVariable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AExampleVariable.OuterSingleton, Z_Construct_UClass_AExampleVariable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AExampleVariable.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AExampleVariable);
AExampleVariable::~AExampleVariable() {}
// ********** End Class AExampleVariable ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Example_ExampleVariable_h__Script_END2608_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AExampleVariable, AExampleVariable::StaticClass, TEXT("AExampleVariable"), &Z_Registration_Info_UClass_AExampleVariable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AExampleVariable), 1343040088U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Example_ExampleVariable_h__Script_END2608_1012546735(TEXT("/Script/END2608"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Example_ExampleVariable_h__Script_END2608_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Example_ExampleVariable_h__Script_END2608_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
