// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject_Start/MyGameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMyGameInstance() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
MYPROJECT_START_API UClass* Z_Construct_UClass_UMyGameInstance();
MYPROJECT_START_API UClass* Z_Construct_UClass_UMyGameInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject_Start();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMyGameInstance Function SelectKiller ************************************
struct Z_Construct_UFunction_UMyGameInstance_SelectKiller_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SelectKiller constinit property declarations **************************
// ********** End Function SelectKiller constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyGameInstance_SelectKiller_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMyGameInstance, nullptr, "SelectKiller", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_SelectKiller_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyGameInstance_SelectKiller_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UMyGameInstance_SelectKiller()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyGameInstance_SelectKiller_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyGameInstance::execSelectKiller)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SelectKiller();
	P_NATIVE_END;
}
// ********** End Class UMyGameInstance Function SelectKiller **************************************

// ********** Begin Class UMyGameInstance Function SelectSurvivor **********************************
struct Z_Construct_UFunction_UMyGameInstance_SelectSurvivor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SelectSurvivor constinit property declarations ************************
// ********** End Function SelectSurvivor constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyGameInstance_SelectSurvivor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMyGameInstance, nullptr, "SelectSurvivor", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_SelectSurvivor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyGameInstance_SelectSurvivor_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UMyGameInstance_SelectSurvivor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyGameInstance_SelectSurvivor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyGameInstance::execSelectSurvivor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SelectSurvivor();
	P_NATIVE_END;
}
// ********** End Class UMyGameInstance Function SelectSurvivor ************************************

// ********** Begin Class UMyGameInstance Function SendReady ***************************************
struct Z_Construct_UFunction_UMyGameInstance_SendReady_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SendReady constinit property declarations *****************************
// ********** End Function SendReady constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyGameInstance_SendReady_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMyGameInstance, nullptr, "SendReady", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_SendReady_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyGameInstance_SendReady_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UMyGameInstance_SendReady()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyGameInstance_SendReady_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyGameInstance::execSendReady)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendReady();
	P_NATIVE_END;
}
// ********** End Class UMyGameInstance Function SendReady *****************************************

// ********** Begin Class UMyGameInstance **********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMyGameInstance;
UClass* UMyGameInstance::GetPrivateStaticClass()
{
	using TClass = UMyGameInstance;
	if (!Z_Registration_Info_UClass_UMyGameInstance.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MyGameInstance"),
			Z_Registration_Info_UClass_UMyGameInstance.InnerSingleton,
			StaticRegisterNativesUMyGameInstance,
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
	return Z_Registration_Info_UClass_UMyGameInstance.InnerSingleton;
}
UClass* Z_Construct_UClass_UMyGameInstance_NoRegister()
{
	return UMyGameInstance::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMyGameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyGameInstance.h" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalSelectedRole_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMyGameInstance constinit property declarations **************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_LocalSelectedRole;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UMyGameInstance constinit property declarations ****************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("SelectKiller"), .Pointer = &UMyGameInstance::execSelectKiller },
		{ .NameUTF8 = UTF8TEXT("SelectSurvivor"), .Pointer = &UMyGameInstance::execSelectSurvivor },
		{ .NameUTF8 = UTF8TEXT("SendReady"), .Pointer = &UMyGameInstance::execSendReady },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyGameInstance_SelectKiller, "SelectKiller" }, // 272894036
		{ &Z_Construct_UFunction_UMyGameInstance_SelectSurvivor, "SelectSurvivor" }, // 2848433633
		{ &Z_Construct_UFunction_UMyGameInstance_SendReady, "SendReady" }, // 495692265
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMyGameInstance_Statics

// ********** Begin Class UMyGameInstance Property Definitions *************************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_LocalSelectedRole = { "LocalSelectedRole", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyGameInstance, LocalSelectedRole), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalSelectedRole_MetaData), NewProp_LocalSelectedRole_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyGameInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_LocalSelectedRole,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::PropPointers) < 2048);
// ********** End Class UMyGameInstance Property Definitions ***************************************
UObject* (*const Z_Construct_UClass_UMyGameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject_Start,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyGameInstance_Statics::ClassParams = {
	&UMyGameInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMyGameInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyGameInstance_Statics::Class_MetaDataParams)
};
void UMyGameInstance::StaticRegisterNativesUMyGameInstance()
{
	UClass* Class = UMyGameInstance::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UMyGameInstance_Statics::Funcs));
}
UClass* Z_Construct_UClass_UMyGameInstance()
{
	if (!Z_Registration_Info_UClass_UMyGameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyGameInstance.OuterSingleton, Z_Construct_UClass_UMyGameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyGameInstance.OuterSingleton;
}
UMyGameInstance::UMyGameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMyGameInstance);
UMyGameInstance::~UMyGameInstance() {}
// ********** End Class UMyGameInstance ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_user_Desktop_KYU_main_MyProject_Start_Source_MyProject_Start_MyGameInstance_h__Script_MyProject_Start_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyGameInstance, UMyGameInstance::StaticClass, TEXT("UMyGameInstance"), &Z_Registration_Info_UClass_UMyGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyGameInstance), 1694933109U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_user_Desktop_KYU_main_MyProject_Start_Source_MyProject_Start_MyGameInstance_h__Script_MyProject_Start_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Desktop_KYU_main_MyProject_Start_Source_MyProject_Start_MyGameInstance_h__Script_MyProject_Start_2236691130{
	TEXT("/Script/MyProject_Start"),
	Z_CompiledInDeferFile_FID_Users_user_Desktop_KYU_main_MyProject_Start_Source_MyProject_Start_MyGameInstance_h__Script_MyProject_Start_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Desktop_KYU_main_MyProject_Start_Source_MyProject_Start_MyGameInstance_h__Script_MyProject_Start_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
