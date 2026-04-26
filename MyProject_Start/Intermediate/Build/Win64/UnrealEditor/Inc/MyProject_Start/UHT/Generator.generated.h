// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Generator.h"

#ifdef MYPROJECT_START_Generator_generated_h
#error "Generator.generated.h already included, missing '#pragma once' in Generator.h"
#endif
#define MYPROJECT_START_Generator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AGenerator ***************************************************************
struct Z_Construct_UClass_AGenerator_Statics;
MYPROJECT_START_API UClass* Z_Construct_UClass_AGenerator_NoRegister();

#define FID_Users_user_Desktop_KYU_main_MyProject_Start_Source_MyProject_Start_Generator_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGenerator(); \
	friend struct ::Z_Construct_UClass_AGenerator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MYPROJECT_START_API UClass* ::Z_Construct_UClass_AGenerator_NoRegister(); \
public: \
	DECLARE_CLASS2(AGenerator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject_Start"), Z_Construct_UClass_AGenerator_NoRegister) \
	DECLARE_SERIALIZER(AGenerator) \
	virtual UObject* _getUObject() const override { return const_cast<AGenerator*>(this); }


#define FID_Users_user_Desktop_KYU_main_MyProject_Start_Source_MyProject_Start_Generator_h_10_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AGenerator(AGenerator&&) = delete; \
	AGenerator(const AGenerator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGenerator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGenerator) \
	NO_API virtual ~AGenerator();


#define FID_Users_user_Desktop_KYU_main_MyProject_Start_Source_MyProject_Start_Generator_h_7_PROLOG
#define FID_Users_user_Desktop_KYU_main_MyProject_Start_Source_MyProject_Start_Generator_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_user_Desktop_KYU_main_MyProject_Start_Source_MyProject_Start_Generator_h_10_INCLASS_NO_PURE_DECLS \
	FID_Users_user_Desktop_KYU_main_MyProject_Start_Source_MyProject_Start_Generator_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AGenerator;

// ********** End Class AGenerator *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_user_Desktop_KYU_main_MyProject_Start_Source_MyProject_Start_Generator_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
