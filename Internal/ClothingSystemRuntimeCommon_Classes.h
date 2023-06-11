#pragma once 
#include <ClothingSystemRuntimeCommon_Structs.h>
 
 
 
// Class ClothingSystemRuntimeCommon.ClothingAssetCommon
// Size: 0xF0(Inherited: 0x48) 
struct UClothingAssetCommon : public UClothingAssetBase
{
	struct UPhysicsAsset* PhysicsAsset;  // 0x48(0x8)
	struct TMap<struct FName, struct UClothConfigBase*> ClothConfigs;  // 0x50(0x50)
	struct TArray<struct FClothLODDataCommon> LODData;  // 0xA0(0x10)
	struct TArray<int32_t> LodMap;  // 0xB0(0x10)
	struct TArray<struct FName> UsedBoneNames;  // 0xC0(0x10)
	struct TArray<int32_t> UsedBoneIndices;  // 0xD0(0x10)
	int32_t ReferenceBoneIndex;  // 0xE0(0x4)
	char pad_228[4];  // 0xE4(0x4)
	struct UClothingAssetCustomData* CustomData;  // 0xE8(0x8)

}; 



// Class ClothingSystemRuntimeCommon.ClothConfigCommon
// Size: 0x28(Inherited: 0x28) 
struct UClothConfigCommon : public UClothConfigBase
{

}; 



// Class ClothingSystemRuntimeCommon.ClothSharedConfigCommon
// Size: 0x28(Inherited: 0x28) 
struct UClothSharedConfigCommon : public UClothConfigCommon
{

}; 



// Class ClothingSystemRuntimeCommon.ClothingAssetCustomData
// Size: 0x28(Inherited: 0x28) 
struct UClothingAssetCustomData : public UObject
{

}; 



// Class ClothingSystemRuntimeCommon.ClothLODDataCommon_Legacy
// Size: 0x188(Inherited: 0x28) 
struct UClothLODDataCommon_Legacy : public UObject
{
	struct UClothPhysicalMeshDataBase_Legacy* PhysicalMeshData;  // 0x28(0x8)
	struct FClothPhysicalMeshData ClothPhysicalMeshData;  // 0x30(0xF8)
	struct FClothCollisionData CollisionData;  // 0x128(0x40)
	char pad_360[32];  // 0x168(0x20)

}; 



