#pragma once 
#include "SDK.h" 
 
 
// Function AssetTags.AssetTagsSubsystem.CollectionExists
// Size: 0xC(Inherited: 0x0) 
struct FCollectionExists
{
	struct FName Name;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)

}; 
// Function AssetTags.AssetTagsSubsystem.GetAssetsInCollection
// Size: 0x18(Inherited: 0x0) 
struct FGetAssetsInCollection
{
	struct FName Name;  // 0x0(0x8)
	struct TArray<struct FAssetData> ReturnValue;  // 0x8(0x10)

}; 
// Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAssetData
// Size: 0x70(Inherited: 0x0) 
struct FGetCollectionsContainingAssetData
{
	struct FAssetData AssetData;  // 0x0(0x60)
	struct TArray<struct FName> ReturnValue;  // 0x60(0x10)

}; 
// Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAsset
// Size: 0x18(Inherited: 0x0) 
struct FGetCollectionsContainingAsset
{
	struct FName AssetPathName;  // 0x0(0x8)
	struct TArray<struct FName> ReturnValue;  // 0x8(0x10)

}; 
// Function AssetTags.AssetTagsSubsystem.GetCollections
// Size: 0x10(Inherited: 0x0) 
struct FGetCollections
{
	struct TArray<struct FName> ReturnValue;  // 0x0(0x10)

}; 
// Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAssetPtr
// Size: 0x18(Inherited: 0x0) 
struct FGetCollectionsContainingAssetPtr
{
	struct UObject* AssetPtr;  // 0x0(0x8)
	struct TArray<struct FName> ReturnValue;  // 0x8(0x10)

}; 
