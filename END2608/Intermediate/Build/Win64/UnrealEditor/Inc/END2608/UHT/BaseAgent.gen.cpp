// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Actors/BaseAgent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBaseAgent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
END2608_API UClass* Z_Construct_UClass_ABaseAgent();
END2608_API UClass* Z_Construct_UClass_ABaseAgent_NoRegister();
END2608_API UClass* Z_Construct_UClass_ABaseCharacter();
UPackage* Z_Construct_UPackage__Script_END2608();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ABaseAgent ***************************************************************
void ABaseAgent::StaticRegisterNativesABaseAgent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ABaseAgent;
UClass* ABaseAgent::GetPrivateStaticClass()
{
	using TClass = ABaseAgent;
	if (!Z_Registration_Info_UClass_ABaseAgent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BaseAgent"),
			Z_Registration_Info_UClass_ABaseAgent.InnerSingleton,
			StaticRegisterNativesABaseAgent,
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
	return Z_Registration_Info_UClass_ABaseAgent.InnerSingleton;
}
UClass* Z_Construct_UClass_ABaseAgent_NoRegister()
{
	return ABaseAgent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ABaseAgent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Actors/BaseAgent.h" },
		{ "ModuleRelativePath", "Public/Actors/BaseAgent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TintName_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Actors/BaseAgent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AgentColor_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Actors/BaseAgent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_TintName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AgentColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseAgent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ABaseAgent_Statics::NewProp_TintName = { "TintName", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseAgent, TintName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TintName_MetaData), NewProp_TintName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseAgent_Statics::NewProp_AgentColor = { "AgentColor", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseAgent, AgentColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AgentColor_MetaData), NewProp_AgentColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseAgent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseAgent_Statics::NewProp_TintName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseAgent_Statics::NewProp_AgentColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseAgent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABaseAgent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABaseCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_END2608,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseAgent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseAgent_Statics::ClassParams = {
	&ABaseAgent::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABaseAgent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABaseAgent_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseAgent_Statics::Class_MetaDataParams), Z_Construct_UClass_ABaseAgent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABaseAgent()
{
	if (!Z_Registration_Info_UClass_ABaseAgent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseAgent.OuterSingleton, Z_Construct_UClass_ABaseAgent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABaseAgent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseAgent);
ABaseAgent::~ABaseAgent() {}
// ********** End Class ABaseAgent *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Actors_BaseAgent_h__Script_END2608_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABaseAgent, ABaseAgent::StaticClass, TEXT("ABaseAgent"), &Z_Registration_Info_UClass_ABaseAgent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseAgent), 2291138347U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Actors_BaseAgent_h__Script_END2608_2897280889(TEXT("/Script/END2608"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Actors_BaseAgent_h__Script_END2608_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Actors_BaseAgent_h__Script_END2608_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
