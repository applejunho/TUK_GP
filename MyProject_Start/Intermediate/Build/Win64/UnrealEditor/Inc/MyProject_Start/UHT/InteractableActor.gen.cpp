// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject_Start/InteractableActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeInteractableActor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
MYPROJECT_START_API UClass* Z_Construct_UClass_AInteractableActor();
MYPROJECT_START_API UClass* Z_Construct_UClass_AInteractableActor_NoRegister();
MYPROJECT_START_API UClass* Z_Construct_UClass_UInteractionInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject_Start();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AInteractableActor *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AInteractableActor;
UClass* AInteractableActor::GetPrivateStaticClass()
{
	using TClass = AInteractableActor;
	if (!Z_Registration_Info_UClass_AInteractableActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("InteractableActor"),
			Z_Registration_Info_UClass_AInteractableActor.InnerSingleton,
			StaticRegisterNativesAInteractableActor,
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
	return Z_Registration_Info_UClass_AInteractableActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AInteractableActor_NoRegister()
{
	return AInteractableActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AInteractableActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "InteractableActor.h" },
		{ "ModuleRelativePath", "InteractableActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RepairDuration_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "InteractableActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RepairProgress_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "InteractableActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsRepaired_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "InteractableActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AInteractableActor constinit property declarations ***********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RepairDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RepairProgress;
	static void NewProp_bIsRepaired_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRepaired;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AInteractableActor constinit property declarations *************************
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractableActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AInteractableActor_Statics

// ********** Begin Class AInteractableActor Property Definitions **********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AInteractableActor_Statics::NewProp_RepairDuration = { "RepairDuration", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractableActor, RepairDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RepairDuration_MetaData), NewProp_RepairDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AInteractableActor_Statics::NewProp_RepairProgress = { "RepairProgress", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractableActor, RepairProgress), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RepairProgress_MetaData), NewProp_RepairProgress_MetaData) };
void Z_Construct_UClass_AInteractableActor_Statics::NewProp_bIsRepaired_SetBit(void* Obj)
{
	((AInteractableActor*)Obj)->bIsRepaired = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AInteractableActor_Statics::NewProp_bIsRepaired = { "bIsRepaired", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AInteractableActor), &Z_Construct_UClass_AInteractableActor_Statics::NewProp_bIsRepaired_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsRepaired_MetaData), NewProp_bIsRepaired_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInteractableActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableActor_Statics::NewProp_RepairDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableActor_Statics::NewProp_RepairProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableActor_Statics::NewProp_bIsRepaired,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableActor_Statics::PropPointers) < 2048);
// ********** End Class AInteractableActor Property Definitions ************************************
UObject* (*const Z_Construct_UClass_AInteractableActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject_Start,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AInteractableActor_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractionInterface_NoRegister, (int32)VTABLE_OFFSET(AInteractableActor, IInteractionInterface), false },  // 3786705525
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AInteractableActor_Statics::ClassParams = {
	&AInteractableActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AInteractableActor_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableActor_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AInteractableActor_Statics::Class_MetaDataParams)
};
void AInteractableActor::StaticRegisterNativesAInteractableActor()
{
}
UClass* Z_Construct_UClass_AInteractableActor()
{
	if (!Z_Registration_Info_UClass_AInteractableActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInteractableActor.OuterSingleton, Z_Construct_UClass_AInteractableActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AInteractableActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AInteractableActor);
AInteractableActor::~AInteractableActor() {}
// ********** End Class AInteractableActor *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_user_Desktop_KYU_main_MyProject_Start_Source_MyProject_Start_InteractableActor_h__Script_MyProject_Start_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AInteractableActor, AInteractableActor::StaticClass, TEXT("AInteractableActor"), &Z_Registration_Info_UClass_AInteractableActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInteractableActor), 104777439U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_user_Desktop_KYU_main_MyProject_Start_Source_MyProject_Start_InteractableActor_h__Script_MyProject_Start_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Desktop_KYU_main_MyProject_Start_Source_MyProject_Start_InteractableActor_h__Script_MyProject_Start_2686774668{
	TEXT("/Script/MyProject_Start"),
	Z_CompiledInDeferFile_FID_Users_user_Desktop_KYU_main_MyProject_Start_Source_MyProject_Start_InteractableActor_h__Script_MyProject_Start_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Desktop_KYU_main_MyProject_Start_Source_MyProject_Start_InteractableActor_h__Script_MyProject_Start_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
