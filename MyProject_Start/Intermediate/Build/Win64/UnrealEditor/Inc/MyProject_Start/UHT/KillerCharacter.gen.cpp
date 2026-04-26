// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject_Start/KillerCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeKillerCharacter() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
MYPROJECT_START_API UClass* Z_Construct_UClass_AKillerCharacter();
MYPROJECT_START_API UClass* Z_Construct_UClass_AKillerCharacter_NoRegister();
MYPROJECT_START_API UClass* Z_Construct_UClass_ATutorialCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject_Start();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AKillerCharacter Function CheckHit ***************************************
struct Z_Construct_UFunction_AKillerCharacter_CheckHit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "KillerCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function CheckHit constinit property declarations ******************************
// ********** End Function CheckHit constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AKillerCharacter_CheckHit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AKillerCharacter, nullptr, "CheckHit", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AKillerCharacter_CheckHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AKillerCharacter_CheckHit_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AKillerCharacter_CheckHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AKillerCharacter_CheckHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AKillerCharacter::execCheckHit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CheckHit();
	P_NATIVE_END;
}
// ********** End Class AKillerCharacter Function CheckHit *****************************************

// ********** Begin Class AKillerCharacter Function EndAttack **************************************
struct Z_Construct_UFunction_AKillerCharacter_EndAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "KillerCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function EndAttack constinit property declarations *****************************
// ********** End Function EndAttack constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AKillerCharacter_EndAttack_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AKillerCharacter, nullptr, "EndAttack", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AKillerCharacter_EndAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_AKillerCharacter_EndAttack_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AKillerCharacter_EndAttack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AKillerCharacter_EndAttack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AKillerCharacter::execEndAttack)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndAttack();
	P_NATIVE_END;
}
// ********** End Class AKillerCharacter Function EndAttack ****************************************

// ********** Begin Class AKillerCharacter Function MoveForward ************************************
struct Z_Construct_UFunction_AKillerCharacter_MoveForward_Statics
{
	struct KillerCharacter_eventMoveForward_Parms
	{
		float AxisValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "KillerCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function MoveForward constinit property declarations ***************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AxisValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MoveForward constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MoveForward Property Definitions **************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AKillerCharacter_MoveForward_Statics::NewProp_AxisValue = { "AxisValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KillerCharacter_eventMoveForward_Parms, AxisValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AKillerCharacter_MoveForward_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKillerCharacter_MoveForward_Statics::NewProp_AxisValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AKillerCharacter_MoveForward_Statics::PropPointers) < 2048);
// ********** End Function MoveForward Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AKillerCharacter_MoveForward_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AKillerCharacter, nullptr, "MoveForward", 	Z_Construct_UFunction_AKillerCharacter_MoveForward_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AKillerCharacter_MoveForward_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AKillerCharacter_MoveForward_Statics::KillerCharacter_eventMoveForward_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AKillerCharacter_MoveForward_Statics::Function_MetaDataParams), Z_Construct_UFunction_AKillerCharacter_MoveForward_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AKillerCharacter_MoveForward_Statics::KillerCharacter_eventMoveForward_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AKillerCharacter_MoveForward()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AKillerCharacter_MoveForward_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AKillerCharacter::execMoveForward)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_AxisValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveForward(Z_Param_AxisValue);
	P_NATIVE_END;
}
// ********** End Class AKillerCharacter Function MoveForward **************************************

// ********** Begin Class AKillerCharacter Function MoveRight **************************************
struct Z_Construct_UFunction_AKillerCharacter_MoveRight_Statics
{
	struct KillerCharacter_eventMoveRight_Parms
	{
		float AxisValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "KillerCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function MoveRight constinit property declarations *****************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AxisValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MoveRight constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MoveRight Property Definitions ****************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AKillerCharacter_MoveRight_Statics::NewProp_AxisValue = { "AxisValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KillerCharacter_eventMoveRight_Parms, AxisValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AKillerCharacter_MoveRight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKillerCharacter_MoveRight_Statics::NewProp_AxisValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AKillerCharacter_MoveRight_Statics::PropPointers) < 2048);
// ********** End Function MoveRight Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AKillerCharacter_MoveRight_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AKillerCharacter, nullptr, "MoveRight", 	Z_Construct_UFunction_AKillerCharacter_MoveRight_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AKillerCharacter_MoveRight_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AKillerCharacter_MoveRight_Statics::KillerCharacter_eventMoveRight_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AKillerCharacter_MoveRight_Statics::Function_MetaDataParams), Z_Construct_UFunction_AKillerCharacter_MoveRight_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AKillerCharacter_MoveRight_Statics::KillerCharacter_eventMoveRight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AKillerCharacter_MoveRight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AKillerCharacter_MoveRight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AKillerCharacter::execMoveRight)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_AxisValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveRight(Z_Param_AxisValue);
	P_NATIVE_END;
}
// ********** End Class AKillerCharacter Function MoveRight ****************************************

// ********** Begin Class AKillerCharacter Function StartAttack ************************************
struct Z_Construct_UFunction_AKillerCharacter_StartAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "KillerCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function StartAttack constinit property declarations ***************************
// ********** End Function StartAttack constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AKillerCharacter_StartAttack_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AKillerCharacter, nullptr, "StartAttack", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AKillerCharacter_StartAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_AKillerCharacter_StartAttack_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AKillerCharacter_StartAttack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AKillerCharacter_StartAttack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AKillerCharacter::execStartAttack)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartAttack();
	P_NATIVE_END;
}
// ********** End Class AKillerCharacter Function StartAttack **************************************

// ********** Begin Class AKillerCharacter *********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AKillerCharacter;
UClass* AKillerCharacter::GetPrivateStaticClass()
{
	using TClass = AKillerCharacter;
	if (!Z_Registration_Info_UClass_AKillerCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("KillerCharacter"),
			Z_Registration_Info_UClass_AKillerCharacter.InnerSingleton,
			StaticRegisterNativesAKillerCharacter,
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
	return Z_Registration_Info_UClass_AKillerCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_AKillerCharacter_NoRegister()
{
	return AKillerCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AKillerCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "KillerCharacter.h" },
		{ "ModuleRelativePath", "KillerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackRange_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "KillerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CarriedSurvivor_MetaData[] = {
		{ "Category", "Carry" },
		{ "ModuleRelativePath", "KillerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickupMontage_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "KillerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "KillerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemoteMovementSpeed_MetaData[] = {
		{ "Category", "NetworkData" },
		{ "ModuleRelativePath", "KillerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveForwardValue_MetaData[] = {
		{ "ModuleRelativePath", "KillerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveRightValue_MetaData[] = {
		{ "ModuleRelativePath", "KillerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemoteForwardValue_MetaData[] = {
		{ "Category", "NetworkData" },
		{ "ModuleRelativePath", "KillerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemoteRightValue_MetaData[] = {
		{ "Category", "NetworkData" },
		{ "ModuleRelativePath", "KillerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemoteIsAttacking_MetaData[] = {
		{ "Category", "NetworkData" },
		{ "ModuleRelativePath", "KillerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyPlayerId_MetaData[] = {
		{ "Category", "Network" },
		{ "ModuleRelativePath", "KillerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAttacking_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "KillerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackMontage_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "KillerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FPSCamerComponent_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "KillerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FPSMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "KillerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KillerBPClass_MetaData[] = {
		{ "Category", "Multiplayer|Classes" },
		{ "ModuleRelativePath", "KillerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SurvivorBPClass_MetaData[] = {
		{ "Category", "Multiplayer|Classes" },
		{ "ModuleRelativePath", "KillerCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AKillerCharacter constinit property declarations *************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackRange;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CarriedSurvivor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PickupMontage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RemoteMovementSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveForwardValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveRightValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RemoteForwardValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RemoteRightValue;
	static void NewProp_RemoteIsAttacking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RemoteIsAttacking;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MyPlayerId;
	static void NewProp_bIsAttacking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAttacking;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FPSCamerComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FPSMesh;
	static const UECodeGen_Private::FClassPropertyParams NewProp_KillerBPClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_SurvivorBPClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AKillerCharacter constinit property declarations ***************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CheckHit"), .Pointer = &AKillerCharacter::execCheckHit },
		{ .NameUTF8 = UTF8TEXT("EndAttack"), .Pointer = &AKillerCharacter::execEndAttack },
		{ .NameUTF8 = UTF8TEXT("MoveForward"), .Pointer = &AKillerCharacter::execMoveForward },
		{ .NameUTF8 = UTF8TEXT("MoveRight"), .Pointer = &AKillerCharacter::execMoveRight },
		{ .NameUTF8 = UTF8TEXT("StartAttack"), .Pointer = &AKillerCharacter::execStartAttack },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AKillerCharacter_CheckHit, "CheckHit" }, // 3241188550
		{ &Z_Construct_UFunction_AKillerCharacter_EndAttack, "EndAttack" }, // 3926289655
		{ &Z_Construct_UFunction_AKillerCharacter_MoveForward, "MoveForward" }, // 1835947914
		{ &Z_Construct_UFunction_AKillerCharacter_MoveRight, "MoveRight" }, // 2319253993
		{ &Z_Construct_UFunction_AKillerCharacter_StartAttack, "StartAttack" }, // 646112793
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKillerCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AKillerCharacter_Statics

// ********** Begin Class AKillerCharacter Property Definitions ************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AKillerCharacter_Statics::NewProp_AttackRange = { "AttackRange", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKillerCharacter, AttackRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackRange_MetaData), NewProp_AttackRange_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKillerCharacter_Statics::NewProp_CarriedSurvivor = { "CarriedSurvivor", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKillerCharacter, CarriedSurvivor), Z_Construct_UClass_ATutorialCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CarriedSurvivor_MetaData), NewProp_CarriedSurvivor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKillerCharacter_Statics::NewProp_PickupMontage = { "PickupMontage", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKillerCharacter, PickupMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickupMontage_MetaData), NewProp_PickupMontage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AKillerCharacter_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKillerCharacter, MovementSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementSpeed_MetaData), NewProp_MovementSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AKillerCharacter_Statics::NewProp_RemoteMovementSpeed = { "RemoteMovementSpeed", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKillerCharacter, RemoteMovementSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemoteMovementSpeed_MetaData), NewProp_RemoteMovementSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AKillerCharacter_Statics::NewProp_MoveForwardValue = { "MoveForwardValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKillerCharacter, MoveForwardValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveForwardValue_MetaData), NewProp_MoveForwardValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AKillerCharacter_Statics::NewProp_MoveRightValue = { "MoveRightValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKillerCharacter, MoveRightValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveRightValue_MetaData), NewProp_MoveRightValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AKillerCharacter_Statics::NewProp_RemoteForwardValue = { "RemoteForwardValue", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKillerCharacter, RemoteForwardValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemoteForwardValue_MetaData), NewProp_RemoteForwardValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AKillerCharacter_Statics::NewProp_RemoteRightValue = { "RemoteRightValue", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKillerCharacter, RemoteRightValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemoteRightValue_MetaData), NewProp_RemoteRightValue_MetaData) };
void Z_Construct_UClass_AKillerCharacter_Statics::NewProp_RemoteIsAttacking_SetBit(void* Obj)
{
	((AKillerCharacter*)Obj)->RemoteIsAttacking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AKillerCharacter_Statics::NewProp_RemoteIsAttacking = { "RemoteIsAttacking", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AKillerCharacter), &Z_Construct_UClass_AKillerCharacter_Statics::NewProp_RemoteIsAttacking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemoteIsAttacking_MetaData), NewProp_RemoteIsAttacking_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AKillerCharacter_Statics::NewProp_MyPlayerId = { "MyPlayerId", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKillerCharacter, MyPlayerId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyPlayerId_MetaData), NewProp_MyPlayerId_MetaData) };
void Z_Construct_UClass_AKillerCharacter_Statics::NewProp_bIsAttacking_SetBit(void* Obj)
{
	((AKillerCharacter*)Obj)->bIsAttacking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AKillerCharacter_Statics::NewProp_bIsAttacking = { "bIsAttacking", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AKillerCharacter), &Z_Construct_UClass_AKillerCharacter_Statics::NewProp_bIsAttacking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsAttacking_MetaData), NewProp_bIsAttacking_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKillerCharacter_Statics::NewProp_AttackMontage = { "AttackMontage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKillerCharacter, AttackMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackMontage_MetaData), NewProp_AttackMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKillerCharacter_Statics::NewProp_FPSCamerComponent = { "FPSCamerComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKillerCharacter, FPSCamerComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FPSCamerComponent_MetaData), NewProp_FPSCamerComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKillerCharacter_Statics::NewProp_FPSMesh = { "FPSMesh", nullptr, (EPropertyFlags)0x00100000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKillerCharacter, FPSMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FPSMesh_MetaData), NewProp_FPSMesh_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AKillerCharacter_Statics::NewProp_KillerBPClass = { "KillerBPClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKillerCharacter, KillerBPClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_AKillerCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KillerBPClass_MetaData), NewProp_KillerBPClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AKillerCharacter_Statics::NewProp_SurvivorBPClass = { "SurvivorBPClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKillerCharacter, SurvivorBPClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_ATutorialCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SurvivorBPClass_MetaData), NewProp_SurvivorBPClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AKillerCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKillerCharacter_Statics::NewProp_AttackRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKillerCharacter_Statics::NewProp_CarriedSurvivor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKillerCharacter_Statics::NewProp_PickupMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKillerCharacter_Statics::NewProp_MovementSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKillerCharacter_Statics::NewProp_RemoteMovementSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKillerCharacter_Statics::NewProp_MoveForwardValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKillerCharacter_Statics::NewProp_MoveRightValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKillerCharacter_Statics::NewProp_RemoteForwardValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKillerCharacter_Statics::NewProp_RemoteRightValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKillerCharacter_Statics::NewProp_RemoteIsAttacking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKillerCharacter_Statics::NewProp_MyPlayerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKillerCharacter_Statics::NewProp_bIsAttacking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKillerCharacter_Statics::NewProp_AttackMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKillerCharacter_Statics::NewProp_FPSCamerComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKillerCharacter_Statics::NewProp_FPSMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKillerCharacter_Statics::NewProp_KillerBPClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKillerCharacter_Statics::NewProp_SurvivorBPClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AKillerCharacter_Statics::PropPointers) < 2048);
// ********** End Class AKillerCharacter Property Definitions **************************************
UObject* (*const Z_Construct_UClass_AKillerCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject_Start,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AKillerCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AKillerCharacter_Statics::ClassParams = {
	&AKillerCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AKillerCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AKillerCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AKillerCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AKillerCharacter_Statics::Class_MetaDataParams)
};
void AKillerCharacter::StaticRegisterNativesAKillerCharacter()
{
	UClass* Class = AKillerCharacter::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_AKillerCharacter_Statics::Funcs));
}
UClass* Z_Construct_UClass_AKillerCharacter()
{
	if (!Z_Registration_Info_UClass_AKillerCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AKillerCharacter.OuterSingleton, Z_Construct_UClass_AKillerCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AKillerCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AKillerCharacter);
AKillerCharacter::~AKillerCharacter() {}
// ********** End Class AKillerCharacter ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_user_Desktop_KYU_main_MyProject_Start_Source_MyProject_Start_KillerCharacter_h__Script_MyProject_Start_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AKillerCharacter, AKillerCharacter::StaticClass, TEXT("AKillerCharacter"), &Z_Registration_Info_UClass_AKillerCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AKillerCharacter), 4184781686U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_user_Desktop_KYU_main_MyProject_Start_Source_MyProject_Start_KillerCharacter_h__Script_MyProject_Start_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Desktop_KYU_main_MyProject_Start_Source_MyProject_Start_KillerCharacter_h__Script_MyProject_Start_2404790120{
	TEXT("/Script/MyProject_Start"),
	Z_CompiledInDeferFile_FID_Users_user_Desktop_KYU_main_MyProject_Start_Source_MyProject_Start_KillerCharacter_h__Script_MyProject_Start_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Desktop_KYU_main_MyProject_Start_Source_MyProject_Start_KillerCharacter_h__Script_MyProject_Start_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
