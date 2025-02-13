// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TFG_Guillem_Unreal/Public/ActivableActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActivableActor() {}

// Begin Cross Module References
TFG_GUILLEM_UNREAL_API UClass* Z_Construct_UClass_AActivableActor();
TFG_GUILLEM_UNREAL_API UClass* Z_Construct_UClass_AActivableActor_NoRegister();
TFG_GUILLEM_UNREAL_API UClass* Z_Construct_UClass_AAttachableActor();
UPackage* Z_Construct_UPackage__Script_TFG_Guillem_Unreal();
// End Cross Module References

// Begin Class AActivableActor
void AActivableActor::StaticRegisterNativesAActivableActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AActivableActor);
UClass* Z_Construct_UClass_AActivableActor_NoRegister()
{
	return AActivableActor::StaticClass();
}
struct Z_Construct_UClass_AActivableActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ActivableActor.h" },
		{ "ModuleRelativePath", "Public/ActivableActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AActivableActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AActivableActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAttachableActor,
	(UObject* (*)())Z_Construct_UPackage__Script_TFG_Guillem_Unreal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AActivableActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AActivableActor_Statics::ClassParams = {
	&AActivableActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AActivableActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AActivableActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AActivableActor()
{
	if (!Z_Registration_Info_UClass_AActivableActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AActivableActor.OuterSingleton, Z_Construct_UClass_AActivableActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AActivableActor.OuterSingleton;
}
template<> TFG_GUILLEM_UNREAL_API UClass* StaticClass<AActivableActor>()
{
	return AActivableActor::StaticClass();
}
AActivableActor::AActivableActor() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AActivableActor);
AActivableActor::~AActivableActor() {}
// End Class AActivableActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Guillem_Desktop_UNI_Treball_de_Fi_de_Grau_TFG_GuillemTio_TFG_Guillem_Unreal_Source_TFG_Guillem_Unreal_Public_ActivableActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AActivableActor, AActivableActor::StaticClass, TEXT("AActivableActor"), &Z_Registration_Info_UClass_AActivableActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AActivableActor), 3086070250U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Guillem_Desktop_UNI_Treball_de_Fi_de_Grau_TFG_GuillemTio_TFG_Guillem_Unreal_Source_TFG_Guillem_Unreal_Public_ActivableActor_h_1350185516(TEXT("/Script/TFG_Guillem_Unreal"),
	Z_CompiledInDeferFile_FID_Users_Guillem_Desktop_UNI_Treball_de_Fi_de_Grau_TFG_GuillemTio_TFG_Guillem_Unreal_Source_TFG_Guillem_Unreal_Public_ActivableActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Guillem_Desktop_UNI_Treball_de_Fi_de_Grau_TFG_GuillemTio_TFG_Guillem_Unreal_Source_TFG_Guillem_Unreal_Public_ActivableActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
