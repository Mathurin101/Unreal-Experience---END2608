// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Example/ExampleFunctions.h"

#ifdef END2608_ExampleFunctions_generated_h
#error "ExampleFunctions.generated.h already included, missing '#pragma once' in ExampleFunctions.h"
#endif
#define END2608_ExampleFunctions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;

// ********** Begin Class AExampleFunctions ********************************************************
#define FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Example_ExampleFunctions_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPureFunction); \
	DECLARE_FUNCTION(execBlueprintNativeEvent); \
	DECLARE_FUNCTION(execBlueprintCallable);


#define FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Example_ExampleFunctions_h_12_CALLBACK_WRAPPERS
END2608_API UClass* Z_Construct_UClass_AExampleFunctions_NoRegister();

#define FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Example_ExampleFunctions_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAExampleFunctions(); \
	friend struct Z_Construct_UClass_AExampleFunctions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend END2608_API UClass* Z_Construct_UClass_AExampleFunctions_NoRegister(); \
public: \
	DECLARE_CLASS2(AExampleFunctions, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/END2608"), Z_Construct_UClass_AExampleFunctions_NoRegister) \
	DECLARE_SERIALIZER(AExampleFunctions)


#define FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Example_ExampleFunctions_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AExampleFunctions(AExampleFunctions&&) = delete; \
	AExampleFunctions(const AExampleFunctions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AExampleFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExampleFunctions); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AExampleFunctions) \
	NO_API virtual ~AExampleFunctions();


#define FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Example_ExampleFunctions_h_9_PROLOG
#define FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Example_ExampleFunctions_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Example_ExampleFunctions_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Example_ExampleFunctions_h_12_CALLBACK_WRAPPERS \
	FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Example_ExampleFunctions_h_12_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Example_ExampleFunctions_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AExampleFunctions;

// ********** End Class AExampleFunctions **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Example_ExampleFunctions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
