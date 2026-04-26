// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InteractableActor.h"

#ifdef MYPROJECT_START_InteractableActor_generated_h
#error "InteractableActor.generated.h already included, missing '#pragma once' in InteractableActor.h"
#endif
#define MYPROJECT_START_InteractableActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AInteractableActor *******************************************************
struct Z_Construct_UClass_AInteractableActor_Statics;
MYPROJECT_START_API UClass* Z_Construct_UClass_AInteractableActor_NoRegister();

#define FID_Users_user_Desktop_KYU_main_MyProject_Start_Source_MyProject_Start_InteractableActor_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInteractableActor(); \
	friend struct ::Z_Construct_UClass_AInteractableActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MYPROJECT_START_API UClass* ::Z_Construct_UClass_AInteractableActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AInteractableActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject_Start"), Z_Construct_UClass_AInteractableActor_NoRegister) \
	DECLARE_SERIALIZER(AInteractableActor) \
	virtual UObject* _getUObject() const override { return const_cast<AInteractableActor*>(this); }


#define FID_Users_user_Desktop_KYU_main_MyProject_Start_Source_MyProject_Start_InteractableActor_h_10_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AInteractableActor(AInteractableActor&&) = delete; \
	AInteractableActor(const AInteractableActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractableActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractableActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInteractableActor) \
	NO_API virtual ~AInteractableActor();


#define FID_Users_user_Desktop_KYU_main_MyProject_Start_Source_MyProject_Start_InteractableActor_h_7_PROLOG
#define FID_Users_user_Desktop_KYU_main_MyProject_Start_Source_MyProject_Start_InteractableActor_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_user_Desktop_KYU_main_MyProject_Start_Source_MyProject_Start_InteractableActor_h_10_INCLASS_NO_PURE_DECLS \
	FID_Users_user_Desktop_KYU_main_MyProject_Start_Source_MyProject_Start_InteractableActor_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AInteractableActor;

// ********** End Class AInteractableActor *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_user_Desktop_KYU_main_MyProject_Start_Source_MyProject_Start_InteractableActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
