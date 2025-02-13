// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TFG_Guillem_Unreal/Public/AttachableActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttachableActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
TFG_GUILLEM_UNREAL_API UClass* Z_Construct_UClass_AAttachableActor();
TFG_GUILLEM_UNREAL_API UClass* Z_Construct_UClass_AAttachableActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_TFG_Guillem_Unreal();
// End Cross Module References

// Begin Class AAttachableActor
void AAttachableActor::StaticRegisterNativesAAttachableActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAttachableActor);
UClass* Z_Construct_UClass_AAttachableActor_NoRegister()
{
	return AAttachableActor::StaticClass();
}
struct Z_Construct_UClass_AAttachableActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AttachableActor.h" },
		{ "ModuleRelativePath", "Public/AttachableActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_numConnectors_MetaData[] = {
		{ "Category", "AttachableActor" },
		{ "ModuleRelativePath", "Public/AttachableActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_numConnectors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAttachableActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAttachableActor_Statics::NewProp_numConnectors = { "numConnectors", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAttachableActor, numConnectors), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_numConnectors_MetaData), NewProp_numConnectors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAttachableActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAttachableActor_Statics::NewProp_numConnectors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAttachableActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAttachableActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_TFG_Guillem_Unreal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAttachableActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAttachableActor_Statics::ClassParams = {
	&AAttachableActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AAttachableActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AAttachableActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAttachableActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AAttachableActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAttachableActor()
{
	if (!Z_Registration_Info_UClass_AAttachableActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAttachableActor.OuterSingleton, Z_Construct_UClass_AAttachableActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAttachableActor.OuterSingleton;
}
template<> TFG_GUILLEM_UNREAL_API UClass* StaticClass<AAttachableActor>()
{
	return AAttachableActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAttachableActor);
AAttachableActor::~AAttachableActor() {}
// End Class AAttachableActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Guillem_Desktop_UNI_Treball_de_Fi_de_Grau_TFG_GuillemTio_TFG_Guillem_Unreal_Source_TFG_Guillem_Unreal_Public_AttachableActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAttachableActor, AAttachableActor::StaticClass, TEXT("AAttachableActor"), &Z_Registration_Info_UClass_AAttachableActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAttachableActor), 1515146235U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Guillem_Desktop_UNI_Treball_de_Fi_de_Grau_TFG_GuillemTio_TFG_Guillem_Unreal_Source_TFG_Guillem_Unreal_Public_AttachableActor_h_556878547(TEXT("/Script/TFG_Guillem_Unreal"),
	Z_CompiledInDeferFile_FID_Users_Guillem_Desktop_UNI_Treball_de_Fi_de_Grau_TFG_GuillemTio_TFG_Guillem_Unreal_Source_TFG_Guillem_Unreal_Public_AttachableActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Guillem_Desktop_UNI_Treball_de_Fi_de_Grau_TFG_GuillemTio_TFG_Guillem_Unreal_Source_TFG_Guillem_Unreal_Public_AttachableActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
