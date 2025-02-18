// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TFG_Guillem_Unreal/Public/WheelActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWheelActor() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
TFG_GUILLEM_UNREAL_API UClass* Z_Construct_UClass_ANonActivableActor();
TFG_GUILLEM_UNREAL_API UClass* Z_Construct_UClass_AWheelActor();
TFG_GUILLEM_UNREAL_API UClass* Z_Construct_UClass_AWheelActor_NoRegister();
TFG_GUILLEM_UNREAL_API UClass* Z_Construct_UClass_UConnector_NoRegister();
UPackage* Z_Construct_UPackage__Script_TFG_Guillem_Unreal();
// End Cross Module References

// Begin Class AWheelActor Function Connect
struct Z_Construct_UFunction_AWheelActor_Connect_Statics
{
	struct WheelActor_eventConnect_Parms
	{
		UConnector* passedConnector;
		FVector toAttachLocation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WheelActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_passedConnector;
	static const UECodeGen_Private::FStructPropertyParams NewProp_toAttachLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWheelActor_Connect_Statics::NewProp_passedConnector = { "passedConnector", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WheelActor_eventConnect_Parms, passedConnector), Z_Construct_UClass_UConnector_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWheelActor_Connect_Statics::NewProp_toAttachLocation = { "toAttachLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WheelActor_eventConnect_Parms, toAttachLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWheelActor_Connect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWheelActor_Connect_Statics::NewProp_passedConnector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWheelActor_Connect_Statics::NewProp_toAttachLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWheelActor_Connect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWheelActor_Connect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWheelActor, nullptr, "Connect", nullptr, nullptr, Z_Construct_UFunction_AWheelActor_Connect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWheelActor_Connect_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWheelActor_Connect_Statics::WheelActor_eventConnect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWheelActor_Connect_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWheelActor_Connect_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWheelActor_Connect_Statics::WheelActor_eventConnect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWheelActor_Connect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWheelActor_Connect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWheelActor::execConnect)
{
	P_GET_OBJECT(UConnector,Z_Param_passedConnector);
	P_GET_STRUCT(FVector,Z_Param_toAttachLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Connect(Z_Param_passedConnector,Z_Param_toAttachLocation);
	P_NATIVE_END;
}
// End Class AWheelActor Function Connect

// Begin Class AWheelActor
void AWheelActor::StaticRegisterNativesAWheelActor()
{
	UClass* Class = AWheelActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Connect", &AWheelActor::execConnect },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWheelActor);
UClass* Z_Construct_UClass_AWheelActor_NoRegister()
{
	return AWheelActor::StaticClass();
}
struct Z_Construct_UClass_AWheelActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WheelActor.h" },
		{ "ModuleRelativePath", "Public/WheelActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WheelMesh_MetaData[] = {
		{ "Category", "WheelActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WheelActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WheelMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AWheelActor_Connect, "Connect" }, // 2330547458
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWheelActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWheelActor_Statics::NewProp_WheelMesh = { "WheelMesh", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWheelActor, WheelMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WheelMesh_MetaData), NewProp_WheelMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWheelActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWheelActor_Statics::NewProp_WheelMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWheelActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWheelActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ANonActivableActor,
	(UObject* (*)())Z_Construct_UPackage__Script_TFG_Guillem_Unreal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWheelActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWheelActor_Statics::ClassParams = {
	&AWheelActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AWheelActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AWheelActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWheelActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AWheelActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWheelActor()
{
	if (!Z_Registration_Info_UClass_AWheelActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWheelActor.OuterSingleton, Z_Construct_UClass_AWheelActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWheelActor.OuterSingleton;
}
template<> TFG_GUILLEM_UNREAL_API UClass* StaticClass<AWheelActor>()
{
	return AWheelActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWheelActor);
AWheelActor::~AWheelActor() {}
// End Class AWheelActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Guillem_Desktop_UNI_Treball_de_Fi_de_Grau_TFG_GuillemTio_TFG_Guillem_Unreal_Source_TFG_Guillem_Unreal_Public_WheelActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWheelActor, AWheelActor::StaticClass, TEXT("AWheelActor"), &Z_Registration_Info_UClass_AWheelActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWheelActor), 51470442U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Guillem_Desktop_UNI_Treball_de_Fi_de_Grau_TFG_GuillemTio_TFG_Guillem_Unreal_Source_TFG_Guillem_Unreal_Public_WheelActor_h_808764893(TEXT("/Script/TFG_Guillem_Unreal"),
	Z_CompiledInDeferFile_FID_Users_Guillem_Desktop_UNI_Treball_de_Fi_de_Grau_TFG_GuillemTio_TFG_Guillem_Unreal_Source_TFG_Guillem_Unreal_Public_WheelActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Guillem_Desktop_UNI_Treball_de_Fi_de_Grau_TFG_GuillemTio_TFG_Guillem_Unreal_Source_TFG_Guillem_Unreal_Public_WheelActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
