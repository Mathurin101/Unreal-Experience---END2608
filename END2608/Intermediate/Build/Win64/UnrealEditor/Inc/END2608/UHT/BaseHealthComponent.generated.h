// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/BaseHealthComponent.h"

#ifdef END2608_BaseHealthComponent_generated_h
#error "BaseHealthComponent.generated.h already included, missing '#pragma once' in BaseHealthComponent.h"
#endif
#define END2608_BaseHealthComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FDelegateBindEvent ****************************************************
#define FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Actors_BaseHealthComponent_h_11_DELEGATE \
END2608_API void FDelegateBindEvent_DelegateWrapper(const FMulticastScriptDelegate& DelegateBindEvent);


// ********** End Delegate FDelegateBindEvent ******************************************************

// ********** Begin Class ABaseHealthComponent *****************************************************
END2608_API UClass* Z_Construct_UClass_ABaseHealthComponent_NoRegister();

#define FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Actors_BaseHealthComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseHealthComponent(); \
	friend struct Z_Construct_UClass_ABaseHealthComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend END2608_API UClass* Z_Construct_UClass_ABaseHealthComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(ABaseHealthComponent, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/END2608"), Z_Construct_UClass_ABaseHealthComponent_NoRegister) \
	DECLARE_SERIALIZER(ABaseHealthComponent)


#define FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Actors_BaseHealthComponent_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ABaseHealthComponent(ABaseHealthComponent&&) = delete; \
	ABaseHealthComponent(const ABaseHealthComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseHealthComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseHealthComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseHealthComponent) \
	NO_API virtual ~ABaseHealthComponent();


#define FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Actors_BaseHealthComponent_h_13_PROLOG
#define FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Actors_BaseHealthComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Actors_BaseHealthComponent_h_16_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Actors_BaseHealthComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ABaseHealthComponent;

// ********** End Class ABaseHealthComponent *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_Unreal_Experience___END2608_END2608_Source_END2608_Public_Actors_BaseHealthComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
