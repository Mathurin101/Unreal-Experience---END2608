// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Example/ExampleVariable.h"

#ifdef END2608_ExampleVariable_generated_h
#error "ExampleVariable.generated.h already included, missing '#pragma once' in ExampleVariable.h"
#endif
#define END2608_ExampleVariable_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;

// ********** Begin Delegate FDelegateType *********************************************************
#define FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Example_ExampleVariable_h_10_DELEGATE \
END2608_API void FDelegateType_DelegateWrapper(const FMulticastScriptDelegate& DelegateType, AActor* OtherActor);


// ********** End Delegate FDelegateType ***********************************************************

// ********** Begin Class AExampleVariable *********************************************************
#define FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Example_ExampleVariable_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOtherExampleBindFunction); \
	DECLARE_FUNCTION(execExampleBindFunction);


END2608_API UClass* Z_Construct_UClass_AExampleVariable_NoRegister();

#define FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Example_ExampleVariable_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAExampleVariable(); \
	friend struct Z_Construct_UClass_AExampleVariable_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend END2608_API UClass* Z_Construct_UClass_AExampleVariable_NoRegister(); \
public: \
	DECLARE_CLASS2(AExampleVariable, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/END2608"), Z_Construct_UClass_AExampleVariable_NoRegister) \
	DECLARE_SERIALIZER(AExampleVariable)


#define FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Example_ExampleVariable_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AExampleVariable(AExampleVariable&&) = delete; \
	AExampleVariable(const AExampleVariable&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AExampleVariable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExampleVariable); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AExampleVariable) \
	NO_API virtual ~AExampleVariable();


#define FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Example_ExampleVariable_h_12_PROLOG
#define FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Example_ExampleVariable_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Example_ExampleVariable_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Example_ExampleVariable_h_15_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Example_ExampleVariable_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AExampleVariable;

// ********** End Class AExampleVariable ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Example_ExampleVariable_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
