// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TFG_Guillem_Unreal/Public/PlatformActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlatformActor() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
TFG_GUILLEM_UNREAL_API UClass* Z_Construct_UClass_ANonActivableActor();
TFG_GUILLEM_UNREAL_API UClass* Z_Construct_UClass_APlatformActor();
TFG_GUILLEM_UNREAL_API UClass* Z_Construct_UClass_APlatformActor_NoRegister();
TFG_GUILLEM_UNREAL_API UClass* Z_Construct_UClass_UConnector_NoRegister();
UPackage* Z_Construct_UPackage__Script_TFG_Guillem_Unreal();
// End Cross Module References

// Begin Class APlatformActor Function Connect
struct Z_Construct_UFunction_APlatformActor_Connect_Statics
{
	struct PlatformActor_eventConnect_Parms
	{
		UConnector* passedConnector;
		FVector toAttachLocation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlatformActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_passedConnector;
	static const UECodeGen_Private::FStructPropertyParams NewProp_toAttachLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlatformActor_Connect_Statics::NewProp_passedConnector = { "passedConnector", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlatformActor_eventConnect_Parms, passedConnector), Z_Construct_UClass_UConnector_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlatformActor_Connect_Statics::NewProp_toAttachLocation = { "toAttachLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlatformActor_eventConnect_Parms, toAttachLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlatformActor_Connect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlatformActor_Connect_Statics::NewProp_passedConnector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlatformActor_Connect_Statics::NewProp_toAttachLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlatformActor_Connect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlatformActor_Connect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlatformActor, nullptr, "Connect", nullptr, nullptr, Z_Construct_UFunction_APlatformActor_Connect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlatformActor_Connect_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlatformActor_Connect_Statics::PlatformActor_eventConnect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlatformActor_Connect_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlatformActor_Connect_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlatformActor_Connect_Statics::PlatformActor_eventConnect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlatformActor_Connect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlatformActor_Connect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlatformActor::execConnect)
{
	P_GET_OBJECT(UConnector,Z_Param_passedConnector);
	P_GET_STRUCT(FVector,Z_Param_toAttachLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Connect(Z_Param_passedConnector,Z_Param_toAttachLocation);
	P_NATIVE_END;
}
// End Class APlatformActor Function Connect

// Begin Class APlatformActor
void APlatformActor::StaticRegisterNativesAPlatformActor()
{
	UClass* Class = APlatformActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Connect", &APlatformActor::execConnect },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlatformActor);
UClass* Z_Construct_UClass_APlatformActor_NoRegister()
{
	return APlatformActor::StaticClass();
}
struct Z_Construct_UClass_APlatformActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PlatformActor.h" },
		{ "ModuleRelativePath", "Public/PlatformActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlatformMesh_MetaData[] = {
		{ "Category", "PlatformActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlatformActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlatformMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APlatformActor_Connect, "Connect" }, // 1366506856
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlatformActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlatformActor_Statics::NewProp_PlatformMesh = { "PlatformMesh", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlatformActor, PlatformMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlatformMesh_MetaData), NewProp_PlatformMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlatformActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformActor_Statics::NewProp_PlatformMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APlatformActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ANonActivableActor,
	(UObject* (*)())Z_Construct_UPackage__Script_TFG_Guillem_Unreal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlatformActor_Statics::ClassParams = {
	&APlatformActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APlatformActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APlatformActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformActor_Statics::Class_MetaDataParams), Z_Construct_UClass_APlatformActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlatformActor()
{
	if (!Z_Registration_Info_UClass_APlatformActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlatformActor.OuterSingleton, Z_Construct_UClass_APlatformActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlatformActor.OuterSingleton;
}
template<> TFG_GUILLEM_UNREAL_API UClass* StaticClass<APlatformActor>()
{
	return APlatformActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlatformActor);
APlatformActor::~APlatformActor() {}
// End Class APlatformActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Guillem_Desktop_UNI_Treball_de_Fi_de_Grau_TFG_GuillemTio_TFG_Guillem_Unreal_Source_TFG_Guillem_Unreal_Public_PlatformActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlatformActor, APlatformActor::StaticClass, TEXT("APlatformActor"), &Z_Registration_Info_UClass_APlatformActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlatformActor), 2945979362U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Guillem_Desktop_UNI_Treball_de_Fi_de_Grau_TFG_GuillemTio_TFG_Guillem_Unreal_Source_TFG_Guillem_Unreal_Public_PlatformActor_h_595432401(TEXT("/Script/TFG_Guillem_Unreal"),
	Z_CompiledInDeferFile_FID_Users_Guillem_Desktop_UNI_Treball_de_Fi_de_Grau_TFG_GuillemTio_TFG_Guillem_Unreal_Source_TFG_Guillem_Unreal_Public_PlatformActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Guillem_Desktop_UNI_Treball_de_Fi_de_Grau_TFG_GuillemTio_TFG_Guillem_Unreal_Source_TFG_Guillem_Unreal_Public_PlatformActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
