// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject_Start/Generator.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeGenerator() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
MYPROJECT_START_API UClass* Z_Construct_UClass_AGenerator();
MYPROJECT_START_API UClass* Z_Construct_UClass_AGenerator_NoRegister();
MYPROJECT_START_API UClass* Z_Construct_UClass_UInteractionInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject_Start();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AGenerator ***************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AGenerator;
UClass* AGenerator::GetPrivateStaticClass()
{
	using TClass = AGenerator;
	if (!Z_Registration_Info_UClass_AGenerator.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("Generator"),
			Z_Registration_Info_UClass_AGenerator.InnerSingleton,
			StaticRegisterNativesAGenerator,
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
	return Z_Registration_Info_UClass_AGenerator.InnerSingleton;
}
UClass* Z_Construct_UClass_AGenerator_NoRegister()
{
	return AGenerator::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AGenerator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Generator.h" },
		{ "ModuleRelativePath", "Generator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RepairProgress_MetaData[] = {
		{ "Category", "Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe0\xb5\xb5 (0.0 ~ 1.0)\n" },
#endif
		{ "ModuleRelativePath", "Generator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe0\xb5\xb5 (0.0 ~ 1.0)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RepairDuration_MetaData[] = {
		{ "Category", "Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc3\xb0\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Generator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc3\xb0\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsRepaired_MetaData[] = {
		{ "Category", "Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcf\xb7\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Generator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcf\xb7\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class AGenerator constinit property declarations *******************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RepairProgress;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RepairDuration;
	static void NewProp_bIsRepaired_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRepaired;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AGenerator constinit property declarations *********************************
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGenerator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AGenerator_Statics

// ********** Begin Class AGenerator Property Definitions ******************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGenerator_Statics::NewProp_RepairProgress = { "RepairProgress", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGenerator, RepairProgress), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RepairProgress_MetaData), NewProp_RepairProgress_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGenerator_Statics::NewProp_RepairDuration = { "RepairDuration", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGenerator, RepairDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RepairDuration_MetaData), NewProp_RepairDuration_MetaData) };
void Z_Construct_UClass_AGenerator_Statics::NewProp_bIsRepaired_SetBit(void* Obj)
{
	((AGenerator*)Obj)->bIsRepaired = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGenerator_Statics::NewProp_bIsRepaired = { "bIsRepaired", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGenerator), &Z_Construct_UClass_AGenerator_Statics::NewProp_bIsRepaired_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsRepaired_MetaData), NewProp_bIsRepaired_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGenerator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGenerator_Statics::NewProp_RepairProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGenerator_Statics::NewProp_RepairDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGenerator_Statics::NewProp_bIsRepaired,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGenerator_Statics::PropPointers) < 2048);
// ********** End Class AGenerator Property Definitions ********************************************
UObject* (*const Z_Construct_UClass_AGenerator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject_Start,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGenerator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AGenerator_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractionInterface_NoRegister, (int32)VTABLE_OFFSET(AGenerator, IInteractionInterface), false },  // 3786705525
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGenerator_Statics::ClassParams = {
	&AGenerator::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGenerator_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGenerator_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGenerator_Statics::Class_MetaDataParams), Z_Construct_UClass_AGenerator_Statics::Class_MetaDataParams)
};
void AGenerator::StaticRegisterNativesAGenerator()
{
}
UClass* Z_Construct_UClass_AGenerator()
{
	if (!Z_Registration_Info_UClass_AGenerator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGenerator.OuterSingleton, Z_Construct_UClass_AGenerator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGenerator.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AGenerator);
AGenerator::~AGenerator() {}
// ********** End Class AGenerator *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_user_Desktop_KYU_main_MyProject_Start_Source_MyProject_Start_Generator_h__Script_MyProject_Start_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGenerator, AGenerator::StaticClass, TEXT("AGenerator"), &Z_Registration_Info_UClass_AGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGenerator), 246146807U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_user_Desktop_KYU_main_MyProject_Start_Source_MyProject_Start_Generator_h__Script_MyProject_Start_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Desktop_KYU_main_MyProject_Start_Source_MyProject_Start_Generator_h__Script_MyProject_Start_1206093154{
	TEXT("/Script/MyProject_Start"),
	Z_CompiledInDeferFile_FID_Users_user_Desktop_KYU_main_MyProject_Start_Source_MyProject_Start_Generator_h__Script_MyProject_Start_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Desktop_KYU_main_MyProject_Start_Source_MyProject_Start_Generator_h__Script_MyProject_Start_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
