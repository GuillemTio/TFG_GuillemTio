// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TFG_Guillem_Unreal/Public/ActorPlataforma.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorPlataforma() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
TFG_GUILLEM_UNREAL_API UClass* Z_Construct_UClass_AActorPlataforma();
TFG_GUILLEM_UNREAL_API UClass* Z_Construct_UClass_AActorPlataforma_NoRegister();
UPackage* Z_Construct_UPackage__Script_TFG_Guillem_Unreal();
// End Cross Module References

// Begin Class AActorPlataforma
void AActorPlataforma::StaticRegisterNativesAActorPlataforma()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AActorPlataforma);
UClass* Z_Construct_UClass_AActorPlataforma_NoRegister()
{
	return AActorPlataforma::StaticClass();
}
struct Z_Construct_UClass_AActorPlataforma_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ActorPlataforma.h" },
		{ "ModuleRelativePath", "Public/ActorPlataforma.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlatformMesh_MetaData[] = {
		{ "Category", "ActorPlataforma" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ActorPlataforma.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlatformMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AActorPlataforma>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AActorPlataforma_Statics::NewProp_PlatformMesh = { "PlatformMesh", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActorPlataforma, PlatformMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlatformMesh_MetaData), NewProp_PlatformMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AActorPlataforma_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActorPlataforma_Statics::NewProp_PlatformMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AActorPlataforma_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AActorPlataforma_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_TFG_Guillem_Unreal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AActorPlataforma_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AActorPlataforma_Statics::ClassParams = {
	&AActorPlataforma::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AActorPlataforma_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AActorPlataforma_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AActorPlataforma_Statics::Class_MetaDataParams), Z_Construct_UClass_AActorPlataforma_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AActorPlataforma()
{
	if (!Z_Registration_Info_UClass_AActorPlataforma.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AActorPlataforma.OuterSingleton, Z_Construct_UClass_AActorPlataforma_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AActorPlataforma.OuterSingleton;
}
template<> TFG_GUILLEM_UNREAL_API UClass* StaticClass<AActorPlataforma>()
{
	return AActorPlataforma::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AActorPlataforma);
AActorPlataforma::~AActorPlataforma() {}
// End Class AActorPlataforma

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Guillem_Desktop_UNI_Treball_de_Fi_de_Grau_TFG_GuillemTio_TFG_Guillem_Unreal_Source_TFG_Guillem_Unreal_Public_ActorPlataforma_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AActorPlataforma, AActorPlataforma::StaticClass, TEXT("AActorPlataforma"), &Z_Registration_Info_UClass_AActorPlataforma, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AActorPlataforma), 3624801704U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Guillem_Desktop_UNI_Treball_de_Fi_de_Grau_TFG_GuillemTio_TFG_Guillem_Unreal_Source_TFG_Guillem_Unreal_Public_ActorPlataforma_h_3905901509(TEXT("/Script/TFG_Guillem_Unreal"),
	Z_CompiledInDeferFile_FID_Users_Guillem_Desktop_UNI_Treball_de_Fi_de_Grau_TFG_GuillemTio_TFG_Guillem_Unreal_Source_TFG_Guillem_Unreal_Public_ActorPlataforma_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Guillem_Desktop_UNI_Treball_de_Fi_de_Grau_TFG_GuillemTio_TFG_Guillem_Unreal_Source_TFG_Guillem_Unreal_Public_ActorPlataforma_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
