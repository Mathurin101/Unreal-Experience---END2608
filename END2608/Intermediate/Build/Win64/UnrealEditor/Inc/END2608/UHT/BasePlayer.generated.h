// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/BasePlayer.h"

#ifdef END2608_BasePlayer_generated_h
#error "BasePlayer.generated.h already included, missing '#pragma once' in BasePlayer.h"
#endif
#define END2608_BasePlayer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ABasePlayer **************************************************************
END2608_API UClass* Z_Construct_UClass_ABasePlayer_NoRegister();

#define FID_UnrealProjects_END2608_Source_END2608_Public_Actors_BasePlayer_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABasePlayer(); \
	friend struct Z_Construct_UClass_ABasePlayer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend END2608_API UClass* Z_Construct_UClass_ABasePlayer_NoRegister(); \
public: \
	DECLARE_CLASS2(ABasePlayer, ABaseCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/END2608"), Z_Construct_UClass_ABasePlayer_NoRegister) \
	DECLARE_SERIALIZER(ABasePlayer)


#define FID_UnrealProjects_END2608_Source_END2608_Public_Actors_BasePlayer_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ABasePlayer(ABasePlayer&&) = delete; \
	ABasePlayer(const ABasePlayer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasePlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasePlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABasePlayer) \
	NO_API virtual ~ABasePlayer();


#define FID_UnrealProjects_END2608_Source_END2608_Public_Actors_BasePlayer_h_12_PROLOG
#define FID_UnrealProjects_END2608_Source_END2608_Public_Actors_BasePlayer_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_END2608_Source_END2608_Public_Actors_BasePlayer_h_15_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_END2608_Source_END2608_Public_Actors_BasePlayer_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ABasePlayer;

// ********** End Class ABasePlayer ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_END2608_Source_END2608_Public_Actors_BasePlayer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
