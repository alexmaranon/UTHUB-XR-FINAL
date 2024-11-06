// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UTHUB_XR_1/TeleportActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTeleportActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_UTHUB_XR_1();
UTHUB_XR_1_API UClass* Z_Construct_UClass_ATeleportActor();
UTHUB_XR_1_API UClass* Z_Construct_UClass_ATeleportActor_NoRegister();
// End Cross Module References

// Begin Class ATeleportActor
void ATeleportActor::StaticRegisterNativesATeleportActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATeleportActor);
UClass* Z_Construct_UClass_ATeleportActor_NoRegister()
{
	return ATeleportActor::StaticClass();
}
struct Z_Construct_UClass_ATeleportActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TeleportActor.h" },
		{ "ModuleRelativePath", "TeleportActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeleportActor_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TeleportActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TeleportActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATeleportActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATeleportActor_Statics::NewProp_TeleportActor = { "TeleportActor", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATeleportActor, TeleportActor), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeleportActor_MetaData), NewProp_TeleportActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATeleportActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATeleportActor_Statics::NewProp_TeleportActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATeleportActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATeleportActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_UTHUB_XR_1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATeleportActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATeleportActor_Statics::ClassParams = {
	&ATeleportActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ATeleportActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ATeleportActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATeleportActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ATeleportActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATeleportActor()
{
	if (!Z_Registration_Info_UClass_ATeleportActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATeleportActor.OuterSingleton, Z_Construct_UClass_ATeleportActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATeleportActor.OuterSingleton;
}
template<> UTHUB_XR_1_API UClass* StaticClass<ATeleportActor>()
{
	return ATeleportActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATeleportActor);
ATeleportActor::~ATeleportActor() {}
// End Class ATeleportActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Master_UTHUB_XR_1_Source_UTHUB_XR_1_TeleportActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATeleportActor, ATeleportActor::StaticClass, TEXT("ATeleportActor"), &Z_Registration_Info_UClass_ATeleportActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATeleportActor), 4266188285U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Master_UTHUB_XR_1_Source_UTHUB_XR_1_TeleportActor_h_1113152291(TEXT("/Script/UTHUB_XR_1"),
	Z_CompiledInDeferFile_FID_Master_UTHUB_XR_1_Source_UTHUB_XR_1_TeleportActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Master_UTHUB_XR_1_Source_UTHUB_XR_1_TeleportActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
