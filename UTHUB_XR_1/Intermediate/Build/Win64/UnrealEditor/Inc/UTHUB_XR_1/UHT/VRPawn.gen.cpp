// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UTHUB_XR_1/VRPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRPawn() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_UTHUB_XR_1();
UTHUB_XR_1_API UClass* Z_Construct_UClass_AVRPawn();
UTHUB_XR_1_API UClass* Z_Construct_UClass_AVRPawn_NoRegister();
// End Cross Module References

// Begin Class AVRPawn
void AVRPawn::StaticRegisterNativesAVRPawn()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVRPawn);
UClass* Z_Construct_UClass_AVRPawn_NoRegister()
{
	return AVRPawn::StaticClass();
}
struct Z_Construct_UClass_AVRPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "VRPawn.h" },
		{ "ModuleRelativePath", "VRPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "VRPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeleportInput_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "VRPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VRCamera_MetaData[] = {
		{ "Category", "VR Set" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VRPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_L_MotionController_MetaData[] = {
		{ "Category", "VR Controllers" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VRPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_R_MotionController_MetaData[] = {
		{ "Category", "VR Controllers" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VRPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnchorPoint_MetaData[] = {
		{ "Category", "VR Controllers" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VRPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_R_AnchorPoint_MetaData[] = {
		{ "Category", "VR Controllers" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VRPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickUpInput_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "VRPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TeleportInput;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VRCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_L_MotionController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_R_MotionController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnchorPoint;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_R_AnchorPoint;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PickUpInput;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVRPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRPawn_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVRPawn, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRPawn_Statics::NewProp_TeleportInput = { "TeleportInput", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVRPawn, TeleportInput), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeleportInput_MetaData), NewProp_TeleportInput_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRPawn_Statics::NewProp_VRCamera = { "VRCamera", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVRPawn, VRCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VRCamera_MetaData), NewProp_VRCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRPawn_Statics::NewProp_L_MotionController = { "L_MotionController", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVRPawn, L_MotionController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_L_MotionController_MetaData), NewProp_L_MotionController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRPawn_Statics::NewProp_R_MotionController = { "R_MotionController", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVRPawn, R_MotionController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_R_MotionController_MetaData), NewProp_R_MotionController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRPawn_Statics::NewProp_AnchorPoint = { "AnchorPoint", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVRPawn, AnchorPoint), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnchorPoint_MetaData), NewProp_AnchorPoint_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRPawn_Statics::NewProp_R_AnchorPoint = { "R_AnchorPoint", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVRPawn, R_AnchorPoint), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_R_AnchorPoint_MetaData), NewProp_R_AnchorPoint_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRPawn_Statics::NewProp_PickUpInput = { "PickUpInput", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVRPawn, PickUpInput), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickUpInput_MetaData), NewProp_PickUpInput_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVRPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRPawn_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRPawn_Statics::NewProp_TeleportInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRPawn_Statics::NewProp_VRCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRPawn_Statics::NewProp_L_MotionController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRPawn_Statics::NewProp_R_MotionController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRPawn_Statics::NewProp_AnchorPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRPawn_Statics::NewProp_R_AnchorPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRPawn_Statics::NewProp_PickUpInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVRPawn_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AVRPawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_UTHUB_XR_1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVRPawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AVRPawn_Statics::ClassParams = {
	&AVRPawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AVRPawn_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AVRPawn_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVRPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_AVRPawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AVRPawn()
{
	if (!Z_Registration_Info_UClass_AVRPawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVRPawn.OuterSingleton, Z_Construct_UClass_AVRPawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AVRPawn.OuterSingleton;
}
template<> UTHUB_XR_1_API UClass* StaticClass<AVRPawn>()
{
	return AVRPawn::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AVRPawn);
AVRPawn::~AVRPawn() {}
// End Class AVRPawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_Master_UTHUB_XR_1_Source_UTHUB_XR_1_VRPawn_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AVRPawn, AVRPawn::StaticClass, TEXT("AVRPawn"), &Z_Registration_Info_UClass_AVRPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVRPawn), 4165043433U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Master_UTHUB_XR_1_Source_UTHUB_XR_1_VRPawn_h_738640419(TEXT("/Script/UTHUB_XR_1"),
	Z_CompiledInDeferFile_FID_Master_UTHUB_XR_1_Source_UTHUB_XR_1_VRPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Master_UTHUB_XR_1_Source_UTHUB_XR_1_VRPawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
