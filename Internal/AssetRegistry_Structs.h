#pragma once 
#include "SDK.h" 
 
 
// Function AssetRegistry.AssetRegistryHelpers.GetExportTextName
// Size: 0x70(Inherited: 0x0) 
struct FGetExportTextName
{
	struct FAssetData InAssetData;  // 0x0(0x60)
	struct FString ReturnValue;  // 0x60(0x10)

}; 
// ScriptStruct AssetRegistry.AssetRegistryDependencyOptions
// Size: 0x5(Inherited: 0x0) 
struct FAssetRegistryDependencyOptions
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bIncludeSoftPackageReferences : 1;  // 0x0(0x1)
	char pad_1_1 : 7;  // 0x1(0x1)
	bool bIncludeHardPackageReferences : 1;  // 0x1(0x1)
	char pad_2_1 : 7;  // 0x2(0x1)
	bool bIncludeSearchableNames : 1;  // 0x2(0x1)
	char pad_3_1 : 7;  // 0x3(0x1)
	bool bIncludeSoftManagementReferences : 1;  // 0x3(0x1)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool bIncludeHardManagementReferences : 1;  // 0x4(0x1)

}; 
// ScriptStruct AssetRegistry.TagAndValue
// Size: 0x18(Inherited: 0x0) 
struct FTagAndValue
{
	struct FName Tag;  // 0x0(0x8)
	struct FString Value;  // 0x8(0x10)

}; 
// Function AssetRegistry.AssetRegistryHelpers.CreateAssetData
// Size: 0x70(Inherited: 0x0) 
struct FCreateAssetData
{
	struct UObject* InAsset;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool bAllowBlueprintClass : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)
	struct FAssetData ReturnValue;  // 0x10(0x60)

}; 
// Function AssetRegistry.AssetRegistryHelpers.GetFullName
// Size: 0x70(Inherited: 0x0) 
struct FGetFullName
{
	struct FAssetData InAssetData;  // 0x0(0x60)
	struct FString ReturnValue;  // 0x60(0x10)

}; 
// Function AssetRegistry.AssetRegistryHelpers.GetClass
// Size: 0x68(Inherited: 0x0) 
struct FGetClass
{
	struct FAssetData InAssetData;  // 0x0(0x60)
	UObject* ReturnValue;  // 0x60(0x8)

}; 
// Function AssetRegistry.AssetRegistryHelpers.GetAsset
// Size: 0x68(Inherited: 0x0) 
struct FGetAsset
{
	struct FAssetData InAssetData;  // 0x0(0x60)
	struct UObject* ReturnValue;  // 0x60(0x8)

}; 
// Function AssetRegistry.AssetRegistryHelpers.GetAssetRegistry
// Size: 0x10(Inherited: 0x0) 
struct FGetAssetRegistry
{
	struct TScriptInterface<IAssetRegistry> ReturnValue;  // 0x0(0x10)

}; 
// Function AssetRegistry.AssetRegistryHelpers.GetTagValue
// Size: 0x80(Inherited: 0x0) 
struct FGetTagValue
{
	struct FAssetData InAssetData;  // 0x0(0x60)
	struct FName InTagName;  // 0x60(0x8)
	struct FString OutTagValue;  // 0x68(0x10)
	char pad_120_1 : 7;  // 0x78(0x1)
	bool ReturnValue : 1;  // 0x78(0x1)
	char pad_121[7];  // 0x79(0x7)

}; 
// Function AssetRegistry.AssetRegistryHelpers.IsAssetLoaded
// Size: 0x68(Inherited: 0x0) 
struct FIsAssetLoaded
{
	struct FAssetData InAssetData;  // 0x0(0x60)
	char pad_96_1 : 7;  // 0x60(0x1)
	bool ReturnValue : 1;  // 0x60(0x1)
	char pad_97[7];  // 0x61(0x7)

}; 
// Function AssetRegistry.AssetRegistry.GetAllCachedPaths
// Size: 0x10(Inherited: 0x0) 
struct FGetAllCachedPaths
{
	struct TArray<struct FString> OutPathList;  // 0x0(0x10)

}; 
// Function AssetRegistry.AssetRegistryHelpers.IsRedirector
// Size: 0x68(Inherited: 0x0) 
struct FIsRedirector
{
	struct FAssetData InAssetData;  // 0x0(0x60)
	char pad_96_1 : 7;  // 0x60(0x1)
	bool ReturnValue : 1;  // 0x60(0x1)
	char pad_97[7];  // 0x61(0x7)

}; 
// Function AssetRegistry.AssetRegistryHelpers.IsUAsset
// Size: 0x68(Inherited: 0x0) 
struct FIsUAsset
{
	struct FAssetData InAssetData;  // 0x0(0x60)
	char pad_96_1 : 7;  // 0x60(0x1)
	bool ReturnValue : 1;  // 0x60(0x1)
	char pad_97[7];  // 0x61(0x7)

}; 
// Function AssetRegistry.AssetRegistryHelpers.IsValid
// Size: 0x68(Inherited: 0x0) 
struct FIsValid
{
	struct FAssetData InAssetData;  // 0x0(0x60)
	char pad_96_1 : 7;  // 0x60(0x1)
	bool ReturnValue : 1;  // 0x60(0x1)
	char pad_97[7];  // 0x61(0x7)

}; 
// Function AssetRegistry.AssetRegistry.GetAllAssets
// Size: 0x18(Inherited: 0x0) 
struct FGetAllAssets
{
	struct TArray<struct FAssetData> OutAssetData;  // 0x0(0x10)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool bIncludeOnlyOnDiskAssets : 1;  // 0x10(0x1)
	char pad_17_1 : 7;  // 0x11(0x1)
	bool ReturnValue : 1;  // 0x11(0x1)
	char pad_18[6];  // 0x12(0x6)

}; 
// Function AssetRegistry.AssetRegistryHelpers.SetFilterTagsAndValues
// Size: 0x1F0(Inherited: 0x0) 
struct FSetFilterTagsAndValues
{
	struct FARFilter InFilter;  // 0x0(0xF0)
	struct TArray<struct FTagAndValue> InTagsAndValues;  // 0xF0(0x10)
	struct FARFilter ReturnValue;  // 0x100(0xF0)

}; 
// Function AssetRegistry.AssetRegistryHelpers.ToSoftObjectPath
// Size: 0x78(Inherited: 0x0) 
struct FToSoftObjectPath
{
	struct FAssetData InAssetData;  // 0x0(0x60)
	struct FSoftObjectPath ReturnValue;  // 0x60(0x18)

}; 
// Function AssetRegistry.AssetRegistry.GetAssetByObjectPath
// Size: 0x70(Inherited: 0x0) 
struct FGetAssetByObjectPath
{
	struct FName ObjectPath;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool bIncludeOnlyOnDiskAssets : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)
	struct FAssetData ReturnValue;  // 0x10(0x60)

}; 
// Function AssetRegistry.AssetRegistry.UseFilterToExcludeAssets
// Size: 0x100(Inherited: 0x0) 
struct FUseFilterToExcludeAssets
{
	struct TArray<struct FAssetData> AssetDataList;  // 0x0(0x10)
	struct FARFilter Filter;  // 0x10(0xF0)

}; 
// Function AssetRegistry.AssetRegistry.GetAssetsByPackageName
// Size: 0x20(Inherited: 0x0) 
struct FGetAssetsByPackageName
{
	struct FName PackageName;  // 0x0(0x8)
	struct TArray<struct FAssetData> OutAssetData;  // 0x8(0x10)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool bIncludeOnlyOnDiskAssets : 1;  // 0x18(0x1)
	char pad_25_1 : 7;  // 0x19(0x1)
	bool ReturnValue : 1;  // 0x19(0x1)
	char pad_26[6];  // 0x1A(0x6)

}; 
// Function AssetRegistry.AssetRegistry.GetAssets
// Size: 0x108(Inherited: 0x0) 
struct FGetAssets
{
	struct FARFilter Filter;  // 0x0(0xF0)
	struct TArray<struct FAssetData> OutAssetData;  // 0xF0(0x10)
	char pad_256_1 : 7;  // 0x100(0x1)
	bool ReturnValue : 1;  // 0x100(0x1)
	char pad_257[7];  // 0x101(0x7)

}; 
// Function AssetRegistry.AssetRegistry.ScanPathsSynchronous
// Size: 0x18(Inherited: 0x0) 
struct FScanPathsSynchronous
{
	struct TArray<struct FString> InPaths;  // 0x0(0x10)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool bForceRescan : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function AssetRegistry.AssetRegistry.GetAssetsByClass
// Size: 0x20(Inherited: 0x0) 
struct FGetAssetsByClass
{
	struct FName ClassName;  // 0x0(0x8)
	struct TArray<struct FAssetData> OutAssetData;  // 0x8(0x10)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool bSearchSubClasses : 1;  // 0x18(0x1)
	char pad_25_1 : 7;  // 0x19(0x1)
	bool ReturnValue : 1;  // 0x19(0x1)
	char pad_26[6];  // 0x1A(0x6)

}; 
// Function AssetRegistry.AssetRegistry.GetAssetsByPath
// Size: 0x20(Inherited: 0x0) 
struct FGetAssetsByPath
{
	struct FName PackagePath;  // 0x0(0x8)
	struct TArray<struct FAssetData> OutAssetData;  // 0x8(0x10)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool bRecursive : 1;  // 0x18(0x1)
	char pad_25_1 : 7;  // 0x19(0x1)
	bool bIncludeOnlyOnDiskAssets : 1;  // 0x19(0x1)
	char pad_26_1 : 7;  // 0x1A(0x1)
	bool ReturnValue : 1;  // 0x1A(0x1)
	char pad_27[5];  // 0x1B(0x5)

}; 
// Function AssetRegistry.AssetRegistry.GetSubPaths
// Size: 0x28(Inherited: 0x0) 
struct FGetSubPaths
{
	struct FString InBasePath;  // 0x0(0x10)
	struct TArray<struct FString> OutPathList;  // 0x10(0x10)
	char pad_32_1 : 7;  // 0x20(0x1)
	bool bInRecurse : 1;  // 0x20(0x1)
	char pad_33[7];  // 0x21(0x7)

}; 
// Function AssetRegistry.AssetRegistry.HasAssets
// Size: 0xC(Inherited: 0x0) 
struct FHasAssets
{
	struct FName PackagePath;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool bRecursive : 1;  // 0x8(0x1)
	char pad_9_1 : 7;  // 0x9(0x1)
	bool ReturnValue : 1;  // 0x9(0x1)
	char pad_10[2];  // 0xA(0x2)

}; 
// Function AssetRegistry.AssetRegistry.IsLoadingAssets
// Size: 0x1(Inherited: 0x0) 
struct FIsLoadingAssets
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function AssetRegistry.AssetRegistry.K2_GetDependencies
// Size: 0x28(Inherited: 0x0) 
struct FK2_GetDependencies
{
	struct FName PackageName;  // 0x0(0x8)
	struct FAssetRegistryDependencyOptions DependencyOptions;  // 0x8(0x5)
	char pad_13[3];  // 0xD(0x3)
	struct TArray<struct FName> OutDependencies;  // 0x10(0x10)
	char pad_32_1 : 7;  // 0x20(0x1)
	bool ReturnValue : 1;  // 0x20(0x1)
	char pad_33[7];  // 0x21(0x7)

}; 
// Function AssetRegistry.AssetRegistry.K2_GetReferencers
// Size: 0x28(Inherited: 0x0) 
struct FK2_GetReferencers
{
	struct FName PackageName;  // 0x0(0x8)
	struct FAssetRegistryDependencyOptions ReferenceOptions;  // 0x8(0x5)
	char pad_13[3];  // 0xD(0x3)
	struct TArray<struct FName> OutReferencers;  // 0x10(0x10)
	char pad_32_1 : 7;  // 0x20(0x1)
	bool ReturnValue : 1;  // 0x20(0x1)
	char pad_33[7];  // 0x21(0x7)

}; 
// Function AssetRegistry.AssetRegistry.PrioritizeSearchPath
// Size: 0x10(Inherited: 0x0) 
struct FPrioritizeSearchPath
{
	struct FString PathToPrioritize;  // 0x0(0x10)

}; 
// Function AssetRegistry.AssetRegistry.RunAssetsThroughFilter
// Size: 0x100(Inherited: 0x0) 
struct FRunAssetsThroughFilter
{
	struct TArray<struct FAssetData> AssetDataList;  // 0x0(0x10)
	struct FARFilter Filter;  // 0x10(0xF0)

}; 
// Function AssetRegistry.AssetRegistry.ScanFilesSynchronous
// Size: 0x18(Inherited: 0x0) 
struct FScanFilesSynchronous
{
	struct TArray<struct FString> InFilePaths;  // 0x0(0x10)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool bForceRescan : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function AssetRegistry.AssetRegistry.ScanModifiedAssetFiles
// Size: 0x10(Inherited: 0x0) 
struct FScanModifiedAssetFiles
{
	struct TArray<struct FString> InFilePaths;  // 0x0(0x10)

}; 
// Function AssetRegistry.AssetRegistry.SearchAllAssets
// Size: 0x1(Inherited: 0x0) 
struct FSearchAllAssets
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bSynchronousSearch : 1;  // 0x0(0x1)

}; 
