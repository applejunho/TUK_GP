// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InteractionInterface.h"

#ifdef MYPROJECT_START_InteractionInterface_generated_h
#error "InteractionInterface.generated.h already included, missing '#pragma once' in InteractionInterface.h"
#endif
#define MYPROJECT_START_InteractionInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACharacter;

// ********** Begin Interface UInteractionInterface ************************************************
#define FID_Users_user_Desktop_KYU_main_MyProject_Start_Source_MyProject_Start_InteractionInterface_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetInteractDuration); \
	DECLARE_FUNCTION(execCompleteInteract); \
	DECLARE_FUNCTION(execCancelInteract); \
	DECLARE_FUNCTION(execUpdateInteract); \
	DECLARE_FUNCTION(execStartInteract);


#define FID_Users_user_Desktop_KYU_main_MyProject_Start_Source_MyProject_Start_InteractionInterface_h_9_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UInteractionInterface_Statics;
MYPROJECT_START_API UClass* Z_Construct_UClass_UInteractionInterface_NoRegister();

#define FID_Users_user_Desktop_KYU_main_MyProject_Start_Source_MyProject_Start_InteractionInterface_h_9_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MYPROJECT_START_API UInteractionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInteractionInterface(UInteractionInterface&&) = delete; \
	UInteractionInterface(const UInteractionInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MYPROJECT_START_API, UInteractionInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractionInterface) \
	virtual ~UInteractionInterface() = default;


#define FID_Users_user_Desktop_KYU_main_MyProject_Start_Source_MyProject_Start_InteractionInterface_h_9_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractionInterface(); \
	friend struct ::Z_Construct_UClass_UInteractionInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MYPROJECT_START_API UClass* ::Z_Construct_UClass_UInteractionInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UInteractionInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MyProject_Start"), Z_Construct_UClass_UInteractionInterface_NoRegister) \
	DECLARE_SERIALIZER(UInteractionInterface)


#define FID_Users_user_Desktop_KYU_main_MyProject_Start_Source_MyProject_Start_InteractionInterface_h_9_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_user_Desktop_KYU_main_MyProject_Start_Source_MyProject_Start_InteractionInterface_h_9_GENERATED_UINTERFACE_BODY() \
	FID_Users_user_Desktop_KYU_main_MyProject_Start_Source_MyProject_Start_InteractionInterface_h_9_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_user_Desktop_KYU_main_MyProject_Start_Source_MyProject_Start_InteractionInterface_h_9_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractionInterface() {} \
public: \
	typedef UInteractionInterface UClassType; \
	typedef IInteractionInterface ThisClass; \
	static void Execute_CancelInteract(UObject* O); \
	static void Execute_CompleteInteract(UObject* O); \
	static float Execute_GetInteractDuration(const UObject* O); \
	static void Execute_StartInteract(UObject* O, ACharacter* Interactor); \
	static void Execute_UpdateInteract(UObject* O, float DeltaTime); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_user_Desktop_KYU_main_MyProject_Start_Source_MyProject_Start_InteractionInterface_h_6_PROLOG
#define FID_Users_user_Desktop_KYU_main_MyProject_Start_Source_MyProject_Start_InteractionInterface_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_user_Desktop_KYU_main_MyProject_Start_Source_MyProject_Start_InteractionInterface_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_user_Desktop_KYU_main_MyProject_Start_Source_MyProject_Start_InteractionInterface_h_9_CALLBACK_WRAPPERS \
	FID_Users_user_Desktop_KYU_main_MyProject_Start_Source_MyProject_Start_InteractionInterface_h_9_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInteractionInterface;

// ********** End Interface UInteractionInterface **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_user_Desktop_KYU_main_MyProject_Start_Source_MyProject_Start_InteractionInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
