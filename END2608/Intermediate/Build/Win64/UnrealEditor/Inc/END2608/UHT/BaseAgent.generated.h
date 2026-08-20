// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/BaseAgent.h"

#ifdef END2608_BaseAgent_generated_h
#error "BaseAgent.generated.h already included, missing '#pragma once' in BaseAgent.h"
#endif
#define END2608_BaseAgent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ABaseAgent ***************************************************************
END2608_API UClass* Z_Construct_UClass_ABaseAgent_NoRegister();

#define FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Actors_BaseAgent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseAgent(); \
	friend struct Z_Construct_UClass_ABaseAgent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend END2608_API UClass* Z_Construct_UClass_ABaseAgent_NoRegister(); \
public: \
	DECLARE_CLASS2(ABaseAgent, ABaseCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/END2608"), Z_Construct_UClass_ABaseAgent_NoRegister) \
	DECLARE_SERIALIZER(ABaseAgent)


#define FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Actors_BaseAgent_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ABaseAgent(ABaseAgent&&) = delete; \
	ABaseAgent(const ABaseAgent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseAgent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseAgent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseAgent) \
	NO_API virtual ~ABaseAgent();


#define FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Actors_BaseAgent_h_12_PROLOG
#define FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Actors_BaseAgent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Actors_BaseAgent_h_15_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Actors_BaseAgent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ABaseAgent;

// ********** End Class ABaseAgent *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Actors_BaseAgent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
