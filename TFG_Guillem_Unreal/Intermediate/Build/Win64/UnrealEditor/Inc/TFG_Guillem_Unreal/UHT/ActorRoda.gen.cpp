// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TFG_Guillem_Unreal/Public/ActorRoda.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorRoda() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
TFG_GUILLEM_UNREAL_API UClass* Z_Construct_UClass_AActorRoda();
TFG_GUILLEM_UNREAL_API UClass* Z_Construct_UClass_AActorRoda_NoRegister();
UPackage* Z_Construct_UPackage__Script_TFG_Guillem_Unreal();
// End Cross Module References

// Begin Class AActorRoda
void AActorRoda::StaticRegisterNativesAActorRoda()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AActorRoda);
UClass* Z_Construct_UClass_AActorRoda_NoRegister()
{
	return AActorRoda::StaticClass();
}
struct Z_Construct_UClass_AActorRoda_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ActorRoda.h" },
		{ "ModuleRelativePath", "Public/ActorRoda.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WheelMesh_MetaData[] = {
		{ "Category", "ActorRoda" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ActorRoda.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WheelMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AActorRoda>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AActorRoda_Statics::NewProp_WheelMesh = { "WheelMesh", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActorRoda, WheelMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WheelMesh_MetaData), NewProp_WheelMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AActorRoda_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActorRoda_Statics::NewProp_WheelMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AActorRoda_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AActorRoda_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_TFG_Guillem_Unreal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AActorRoda_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AActorRoda_Statics::ClassParams = {
	&AActorRoda::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AActorRoda_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AActorRoda_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AActorRoda_Statics::Class_MetaDataParams), Z_Construct_UClass_AActorRoda_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AActorRoda()
{
	if (!Z_Registration_Info_UClass_AActorRoda.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AActorRoda.OuterSingleton, Z_Construct_UClass_AActorRoda_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AActorRoda.OuterSingleton;
}
template<> TFG_GUILLEM_UNREAL_API UClass* StaticClass<AActorRoda>()
{
	return AActorRoda::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AActorRoda);
AActorRoda::~AActorRoda() {}
// End Class AActorRoda

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Guillem_Desktop_UNI_Treball_de_Fi_de_Grau_TFG_GuillemTio_TFG_Guillem_Unreal_Source_TFG_Guillem_Unreal_Public_ActorRoda_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AActorRoda, AActorRoda::StaticClass, TEXT("AActorRoda"), &Z_Registration_Info_UClass_AActorRoda, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AActorRoda), 2246497401U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Guillem_Desktop_UNI_Treball_de_Fi_de_Grau_TFG_GuillemTio_TFG_Guillem_Unreal_Source_TFG_Guillem_Unreal_Public_ActorRoda_h_2080931263(TEXT("/Script/TFG_Guillem_Unreal"),
	Z_CompiledInDeferFile_FID_Users_Guillem_Desktop_UNI_Treball_de_Fi_de_Grau_TFG_GuillemTio_TFG_Guillem_Unreal_Source_TFG_Guillem_Unreal_Public_ActorRoda_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Guillem_Desktop_UNI_Treball_de_Fi_de_Grau_TFG_GuillemTio_TFG_Guillem_Unreal_Source_TFG_Guillem_Unreal_Public_ActorRoda_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
