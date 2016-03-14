// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Boilerplate C++ definitions for a single module.
	This is automatically generated by UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "Learning.h"
#include "Learning.generated.dep.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLearning() {}
	void AFloatingActor::StaticRegisterNativesAFloatingActor()
	{
	}
	IMPLEMENT_CLASS(AFloatingActor, 32623183);
	void ALearningGameMode::StaticRegisterNativesALearningGameMode()
	{
	}
	IMPLEMENT_CLASS(ALearningGameMode, 2784764307);
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_AActor();
	ENGINE_API class UClass* Z_Construct_UClass_AGameMode();

	LEARNING_API class UClass* Z_Construct_UClass_AFloatingActor_NoRegister();
	LEARNING_API class UClass* Z_Construct_UClass_AFloatingActor();
	LEARNING_API class UClass* Z_Construct_UClass_ALearningGameMode_NoRegister();
	LEARNING_API class UClass* Z_Construct_UClass_ALearningGameMode();
	LEARNING_API class UPackage* Z_Construct_UPackage__Script_Learning();
	UClass* Z_Construct_UClass_AFloatingActor_NoRegister()
	{
		return AFloatingActor::StaticClass();
	}
	UClass* Z_Construct_UClass_AFloatingActor()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_Learning();
			OuterClass = AFloatingActor::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("FloatingActor.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("FloatingActor.h"));
				MetaData->SetValue(OuterClass, TEXT("OnlyDefaultConstructorDeclared"), TEXT(""));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFloatingActor(Z_Construct_UClass_AFloatingActor, &AFloatingActor::StaticClass, TEXT("AFloatingActor"), false, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFloatingActor);
	UClass* Z_Construct_UClass_ALearningGameMode_NoRegister()
	{
		return ALearningGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_ALearningGameMode()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameMode();
			Z_Construct_UPackage__Script_Learning();
			OuterClass = ALearningGameMode::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x2090028C;


				OuterClass->ClassConfigName = FName(TEXT("Game"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("LearningGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("LearningGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALearningGameMode(Z_Construct_UClass_ALearningGameMode, &ALearningGameMode::StaticClass, TEXT("ALearningGameMode"), false, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALearningGameMode);
	UPackage* Z_Construct_UPackage__Script_Learning()
	{
		static UPackage* ReturnPackage = NULL;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), NULL, FName(TEXT("/Script/Learning")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x3F75DE37;
			Guid.B = 0xDF59213C;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif

PRAGMA_ENABLE_DEPRECATION_WARNINGS
