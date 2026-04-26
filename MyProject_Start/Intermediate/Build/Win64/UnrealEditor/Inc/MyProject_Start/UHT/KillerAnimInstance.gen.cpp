// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject_Start/KillerAnimInstance.h"
#include "Components/SkeletalMeshComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeKillerAnimInstance() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
MYPROJECT_START_API UClass* Z_Construct_UClass_UKillerAnimInstance();
MYPROJECT_START_API UClass* Z_Construct_UClass_UKillerAnimInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject_Start();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UKillerAnimInstance ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UKillerAnimInstance;
UClass* UKillerAnimInstance::GetPrivateStaticClass()
{
	using TClass = UKillerAnimInstance;
	if (!Z_Registration_Info_UClass_UKillerAnimInstance.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("KillerAnimInstance"),
			Z_Registration_Info_UClass_UKillerAnimInstance.InnerSingleton,
			StaticRegisterNativesUKillerAnimInstance,
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
	return Z_Registration_Info_UClass_UKillerAnimInstance.InnerSingleton;
}
UClass* Z_Construct_UClass_UKillerAnimInstance_NoRegister()
{
	return UKillerAnimInstance::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UKillerAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "KillerAnimInstance.h" },
		{ "ModuleRelativePath", "KillerAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "KillerAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "KillerAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAttacking_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "KillerAnimInstance.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UKillerAnimInstance constinit property declarations **********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Direction;
	static void NewProp_bIsAttacking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAttacking;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UKillerAnimInstance constinit property declarations ************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKillerAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UKillerAnimInstance_Statics

// ********** Begin Class UKillerAnimInstance Property Definitions *********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKillerAnimInstance, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKillerAnimInstance, Direction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) };
void Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp_bIsAttacking_SetBit(void* Obj)
{
	((UKillerAnimInstance*)Obj)->bIsAttacking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp_bIsAttacking = { "bIsAttacking", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UKillerAnimInstance), &Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp_bIsAttacking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsAttacking_MetaData), NewProp_bIsAttacking_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKillerAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKillerAnimInstance_Statics::NewProp_bIsAttacking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKillerAnimInstance_Statics::PropPointers) < 2048);
// ********** End Class UKillerAnimInstance Property Definitions ***********************************
UObject* (*const Z_Construct_UClass_UKillerAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject_Start,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKillerAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UKillerAnimInstance_Statics::ClassParams = {
	&UKillerAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UKillerAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UKillerAnimInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKillerAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UKillerAnimInstance_Statics::Class_MetaDataParams)
};
void UKillerAnimInstance::StaticRegisterNativesUKillerAnimInstance()
{
}
UClass* Z_Construct_UClass_UKillerAnimInstance()
{
	if (!Z_Registration_Info_UClass_UKillerAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKillerAnimInstance.OuterSingleton, Z_Construct_UClass_UKillerAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UKillerAnimInstance.OuterSingleton;
}
UKillerAnimInstance::UKillerAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UKillerAnimInstance);
UKillerAnimInstance::~UKillerAnimInstance() {}
// ********** End Class UKillerAnimInstance ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_user_Desktop_KYU_main_MyProject_Start_Source_MyProject_Start_KillerAnimInstance_h__Script_MyProject_Start_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UKillerAnimInstance, UKillerAnimInstance::StaticClass, TEXT("UKillerAnimInstance"), &Z_Registration_Info_UClass_UKillerAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKillerAnimInstance), 2584506410U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_user_Desktop_KYU_main_MyProject_Start_Source_MyProject_Start_KillerAnimInstance_h__Script_MyProject_Start_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Desktop_KYU_main_MyProject_Start_Source_MyProject_Start_KillerAnimInstance_h__Script_MyProject_Start_192289204{
	TEXT("/Script/MyProject_Start"),
	Z_CompiledInDeferFile_FID_Users_user_Desktop_KYU_main_MyProject_Start_Source_MyProject_Start_KillerAnimInstance_h__Script_MyProject_Start_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Desktop_KYU_main_MyProject_Start_Source_MyProject_Start_KillerAnimInstance_h__Script_MyProject_Start_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
