// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject_Start/InteractionInterface.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeInteractionInterface() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
MYPROJECT_START_API UClass* Z_Construct_UClass_UInteractionInterface();
MYPROJECT_START_API UClass* Z_Construct_UClass_UInteractionInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject_Start();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UInteractionInterface Function CancelInteract ************************
void IInteractionInterface::CancelInteract()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CancelInteract instead.");
}
static FName NAME_UInteractionInterface_CancelInteract = FName(TEXT("CancelInteract"));
void IInteractionInterface::Execute_CancelInteract(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInteractionInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UInteractionInterface_CancelInteract);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IInteractionInterface*)(O->GetNativeInterfaceAddress(UInteractionInterface::StaticClass())))
	{
		I->CancelInteract_Implementation();
	}
}
struct Z_Construct_UFunction_UInteractionInterface_CancelInteract_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InteractionInterface.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function CancelInteract constinit property declarations ************************
// ********** End Function CancelInteract constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionInterface_CancelInteract_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInteractionInterface, nullptr, "CancelInteract", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionInterface_CancelInteract_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractionInterface_CancelInteract_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UInteractionInterface_CancelInteract()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractionInterface_CancelInteract_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInteractionInterface::execCancelInteract)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CancelInteract_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UInteractionInterface Function CancelInteract **************************

// ********** Begin Interface UInteractionInterface Function CompleteInteract **********************
void IInteractionInterface::CompleteInteract()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CompleteInteract instead.");
}
static FName NAME_UInteractionInterface_CompleteInteract = FName(TEXT("CompleteInteract"));
void IInteractionInterface::Execute_CompleteInteract(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInteractionInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UInteractionInterface_CompleteInteract);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IInteractionInterface*)(O->GetNativeInterfaceAddress(UInteractionInterface::StaticClass())))
	{
		I->CompleteInteract_Implementation();
	}
}
struct Z_Construct_UFunction_UInteractionInterface_CompleteInteract_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InteractionInterface.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function CompleteInteract constinit property declarations **********************
// ********** End Function CompleteInteract constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionInterface_CompleteInteract_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInteractionInterface, nullptr, "CompleteInteract", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionInterface_CompleteInteract_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractionInterface_CompleteInteract_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UInteractionInterface_CompleteInteract()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractionInterface_CompleteInteract_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInteractionInterface::execCompleteInteract)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CompleteInteract_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UInteractionInterface Function CompleteInteract ************************

// ********** Begin Interface UInteractionInterface Function GetInteractDuration *******************
struct InteractionInterface_eventGetInteractDuration_Parms
{
	float ReturnValue;

	/** Constructor, initializes return property only **/
	InteractionInterface_eventGetInteractDuration_Parms()
		: ReturnValue(0)
	{
	}
};
float IInteractionInterface::GetInteractDuration() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetInteractDuration instead.");
	InteractionInterface_eventGetInteractDuration_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UInteractionInterface_GetInteractDuration = FName(TEXT("GetInteractDuration"));
float IInteractionInterface::Execute_GetInteractDuration(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInteractionInterface::StaticClass()));
	InteractionInterface_eventGetInteractDuration_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInteractionInterface_GetInteractDuration);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IInteractionInterface*)(O->GetNativeInterfaceAddress(UInteractionInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetInteractDuration_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UInteractionInterface_GetInteractDuration_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe0\xb5\xb5 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd 0.f \xef\xbf\xbd\xef\xbf\xbd\xc8\xaf\n" },
#endif
		{ "ModuleRelativePath", "InteractionInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe0\xb5\xb5 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd 0.f \xef\xbf\xbd\xef\xbf\xbd\xc8\xaf" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetInteractDuration constinit property declarations *******************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetInteractDuration constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetInteractDuration Property Definitions ******************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInteractionInterface_GetInteractDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractionInterface_eventGetInteractDuration_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionInterface_GetInteractDuration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionInterface_GetInteractDuration_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionInterface_GetInteractDuration_Statics::PropPointers) < 2048);
// ********** End Function GetInteractDuration Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionInterface_GetInteractDuration_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInteractionInterface, nullptr, "GetInteractDuration", 	Z_Construct_UFunction_UInteractionInterface_GetInteractDuration_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionInterface_GetInteractDuration_Statics::PropPointers), 
sizeof(InteractionInterface_eventGetInteractDuration_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionInterface_GetInteractDuration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractionInterface_GetInteractDuration_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(InteractionInterface_eventGetInteractDuration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractionInterface_GetInteractDuration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractionInterface_GetInteractDuration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInteractionInterface::execGetInteractDuration)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetInteractDuration_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UInteractionInterface Function GetInteractDuration *********************

// ********** Begin Interface UInteractionInterface Function StartInteract *************************
struct InteractionInterface_eventStartInteract_Parms
{
	ACharacter* Interactor;
};
void IInteractionInterface::StartInteract(ACharacter* Interactor)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_StartInteract instead.");
}
static FName NAME_UInteractionInterface_StartInteract = FName(TEXT("StartInteract"));
void IInteractionInterface::Execute_StartInteract(UObject* O, ACharacter* Interactor)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInteractionInterface::StaticClass()));
	InteractionInterface_eventStartInteract_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInteractionInterface_StartInteract);
	if (Func)
	{
		Parms.Interactor=std::move(Interactor);
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IInteractionInterface*)(O->GetNativeInterfaceAddress(UInteractionInterface::StaticClass())))
	{
		I->StartInteract_Implementation(Interactor);
	}
}
struct Z_Construct_UFunction_UInteractionInterface_StartInteract_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InteractionInterface.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function StartInteract constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Interactor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function StartInteract constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function StartInteract Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionInterface_StartInteract_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractionInterface_eventStartInteract_Parms, Interactor), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionInterface_StartInteract_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionInterface_StartInteract_Statics::NewProp_Interactor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionInterface_StartInteract_Statics::PropPointers) < 2048);
// ********** End Function StartInteract Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionInterface_StartInteract_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInteractionInterface, nullptr, "StartInteract", 	Z_Construct_UFunction_UInteractionInterface_StartInteract_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionInterface_StartInteract_Statics::PropPointers), 
sizeof(InteractionInterface_eventStartInteract_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionInterface_StartInteract_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractionInterface_StartInteract_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(InteractionInterface_eventStartInteract_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractionInterface_StartInteract()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractionInterface_StartInteract_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInteractionInterface::execStartInteract)
{
	P_GET_OBJECT(ACharacter,Z_Param_Interactor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartInteract_Implementation(Z_Param_Interactor);
	P_NATIVE_END;
}
// ********** End Interface UInteractionInterface Function StartInteract ***************************

// ********** Begin Interface UInteractionInterface Function UpdateInteract ************************
struct InteractionInterface_eventUpdateInteract_Parms
{
	float DeltaTime;
};
void IInteractionInterface::UpdateInteract(float DeltaTime)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UpdateInteract instead.");
}
static FName NAME_UInteractionInterface_UpdateInteract = FName(TEXT("UpdateInteract"));
void IInteractionInterface::Execute_UpdateInteract(UObject* O, float DeltaTime)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInteractionInterface::StaticClass()));
	InteractionInterface_eventUpdateInteract_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInteractionInterface_UpdateInteract);
	if (Func)
	{
		Parms.DeltaTime=std::move(DeltaTime);
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IInteractionInterface*)(O->GetNativeInterfaceAddress(UInteractionInterface::StaticClass())))
	{
		I->UpdateInteract_Implementation(DeltaTime);
	}
}
struct Z_Construct_UFunction_UInteractionInterface_UpdateInteract_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InteractionInterface.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function UpdateInteract constinit property declarations ************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UpdateInteract constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UpdateInteract Property Definitions ***********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInteractionInterface_UpdateInteract_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractionInterface_eventUpdateInteract_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionInterface_UpdateInteract_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionInterface_UpdateInteract_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionInterface_UpdateInteract_Statics::PropPointers) < 2048);
// ********** End Function UpdateInteract Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionInterface_UpdateInteract_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInteractionInterface, nullptr, "UpdateInteract", 	Z_Construct_UFunction_UInteractionInterface_UpdateInteract_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionInterface_UpdateInteract_Statics::PropPointers), 
sizeof(InteractionInterface_eventUpdateInteract_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionInterface_UpdateInteract_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractionInterface_UpdateInteract_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(InteractionInterface_eventUpdateInteract_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractionInterface_UpdateInteract()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractionInterface_UpdateInteract_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInteractionInterface::execUpdateInteract)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateInteract_Implementation(Z_Param_DeltaTime);
	P_NATIVE_END;
}
// ********** End Interface UInteractionInterface Function UpdateInteract **************************

// ********** Begin Interface UInteractionInterface ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UInteractionInterface;
UClass* UInteractionInterface::GetPrivateStaticClass()
{
	using TClass = UInteractionInterface;
	if (!Z_Registration_Info_UClass_UInteractionInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("InteractionInterface"),
			Z_Registration_Info_UClass_UInteractionInterface.InnerSingleton,
			StaticRegisterNativesUInteractionInterface,
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
	return Z_Registration_Info_UClass_UInteractionInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_UInteractionInterface_NoRegister()
{
	return UInteractionInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInteractionInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "InteractionInterface.h" },
	};
#endif // WITH_METADATA

// ********** Begin Interface UInteractionInterface constinit property declarations ****************
// ********** End Interface UInteractionInterface constinit property declarations ******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CancelInteract"), .Pointer = &IInteractionInterface::execCancelInteract },
		{ .NameUTF8 = UTF8TEXT("CompleteInteract"), .Pointer = &IInteractionInterface::execCompleteInteract },
		{ .NameUTF8 = UTF8TEXT("GetInteractDuration"), .Pointer = &IInteractionInterface::execGetInteractDuration },
		{ .NameUTF8 = UTF8TEXT("StartInteract"), .Pointer = &IInteractionInterface::execStartInteract },
		{ .NameUTF8 = UTF8TEXT("UpdateInteract"), .Pointer = &IInteractionInterface::execUpdateInteract },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractionInterface_CancelInteract, "CancelInteract" }, // 2463901984
		{ &Z_Construct_UFunction_UInteractionInterface_CompleteInteract, "CompleteInteract" }, // 2833387835
		{ &Z_Construct_UFunction_UInteractionInterface_GetInteractDuration, "GetInteractDuration" }, // 1421356378
		{ &Z_Construct_UFunction_UInteractionInterface_StartInteract, "StartInteract" }, // 2481354152
		{ &Z_Construct_UFunction_UInteractionInterface_UpdateInteract, "UpdateInteract" }, // 952468323
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInteractionInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UInteractionInterface_Statics
UObject* (*const Z_Construct_UClass_UInteractionInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject_Start,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractionInterface_Statics::ClassParams = {
	&UInteractionInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractionInterface_Statics::Class_MetaDataParams)
};
void UInteractionInterface::StaticRegisterNativesUInteractionInterface()
{
	UClass* Class = UInteractionInterface::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UInteractionInterface_Statics::Funcs));
}
UClass* Z_Construct_UClass_UInteractionInterface()
{
	if (!Z_Registration_Info_UClass_UInteractionInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractionInterface.OuterSingleton, Z_Construct_UClass_UInteractionInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInteractionInterface.OuterSingleton;
}
UInteractionInterface::UInteractionInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UInteractionInterface);
// ********** End Interface UInteractionInterface **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_user_Desktop_KYU_main_MyProject_Start_Source_MyProject_Start_InteractionInterface_h__Script_MyProject_Start_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInteractionInterface, UInteractionInterface::StaticClass, TEXT("UInteractionInterface"), &Z_Registration_Info_UClass_UInteractionInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractionInterface), 3786705525U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_user_Desktop_KYU_main_MyProject_Start_Source_MyProject_Start_InteractionInterface_h__Script_MyProject_Start_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Desktop_KYU_main_MyProject_Start_Source_MyProject_Start_InteractionInterface_h__Script_MyProject_Start_3764349978{
	TEXT("/Script/MyProject_Start"),
	Z_CompiledInDeferFile_FID_Users_user_Desktop_KYU_main_MyProject_Start_Source_MyProject_Start_InteractionInterface_h__Script_MyProject_Start_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Desktop_KYU_main_MyProject_Start_Source_MyProject_Start_InteractionInterface_h__Script_MyProject_Start_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
