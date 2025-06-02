// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCGTool/PCGToolGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGToolGameModeBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
PCGTOOL_API UClass* Z_Construct_UClass_APCGToolGameModeBase();
PCGTOOL_API UClass* Z_Construct_UClass_APCGToolGameModeBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_PCGTool();
// End Cross Module References

// Begin Class APCGToolGameModeBase
void APCGToolGameModeBase::StaticRegisterNativesAPCGToolGameModeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APCGToolGameModeBase);
UClass* Z_Construct_UClass_APCGToolGameModeBase_NoRegister()
{
	return APCGToolGameModeBase::StaticClass();
}
struct Z_Construct_UClass_APCGToolGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PCGToolGameModeBase.h" },
		{ "ModuleRelativePath", "PCGToolGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APCGToolGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APCGToolGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGTool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APCGToolGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APCGToolGameModeBase_Statics::ClassParams = {
	&APCGToolGameModeBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APCGToolGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_APCGToolGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APCGToolGameModeBase()
{
	if (!Z_Registration_Info_UClass_APCGToolGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APCGToolGameModeBase.OuterSingleton, Z_Construct_UClass_APCGToolGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APCGToolGameModeBase.OuterSingleton;
}
template<> PCGTOOL_API UClass* StaticClass<APCGToolGameModeBase>()
{
	return APCGToolGameModeBase::StaticClass();
}
APCGToolGameModeBase::APCGToolGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(APCGToolGameModeBase);
APCGToolGameModeBase::~APCGToolGameModeBase() {}
// End Class APCGToolGameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_PCGTool_Source_PCGTool_PCGToolGameModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APCGToolGameModeBase, APCGToolGameModeBase::StaticClass, TEXT("APCGToolGameModeBase"), &Z_Registration_Info_UClass_APCGToolGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APCGToolGameModeBase), 2448378580U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PCGTool_Source_PCGTool_PCGToolGameModeBase_h_867299901(TEXT("/Script/PCGTool"),
	Z_CompiledInDeferFile_FID_PCGTool_Source_PCGTool_PCGToolGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PCGTool_Source_PCGTool_PCGToolGameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
