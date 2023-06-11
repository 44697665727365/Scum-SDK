#pragma once 
#include <HairStrandsCore_Structs.h>
 
 
 
// Class HairStrandsCore.GroomImportOptions
// Size: 0x50(Inherited: 0x28) 
struct UGroomImportOptions : public UObject
{
	struct FGroomConversionSettings ConversionSettings;  // 0x28(0x18)
	struct TArray<struct FHairGroupsInterpolation> InterpolationSettings;  // 0x40(0x10)

}; 



// Class HairStrandsCore.GroomActor
// Size: 0x228(Inherited: 0x220) 
struct AGroomActor : public AActor
{
	struct UGroomComponent* GroomComponent;  // 0x220(0x8)

}; 



// Class HairStrandsCore.GroomBlueprintLibrary
// Size: 0x28(Inherited: 0x28) 
struct UGroomBlueprintLibrary : public UBlueprintFunctionLibrary
{

	struct UGroomBindingAsset* CreateNewGroomBindingAssetWithPath(struct FString InDesiredPackagePath, struct UGroomAsset* InGroomAsset, struct USkeletalMesh* InSkeletalMesh, int32_t InNumInterpolationPoints, struct USkeletalMesh* InSourceSkeletalMeshForTransfer, int32_t InMatchingSection); // Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGroomBindingAssetWithPath
	struct UGroomBindingAsset* CreateNewGroomBindingAsset(struct UGroomAsset* InGroomAsset, struct USkeletalMesh* InSkeletalMesh, int32_t InNumInterpolationPoints, struct USkeletalMesh* InSourceSkeletalMeshForTransfer, int32_t InMatchingSection); // Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGroomBindingAsset
	struct UGroomBindingAsset* CreateNewGeometryCacheGroomBindingAssetWithPath(struct FString DesiredPackagePath, struct UGroomAsset* GroomAsset, struct UGeometryCache* GeometryCache, int32_t NumInterpolationPoints, struct UGeometryCache* SourceGeometryCacheForTransfer, int32_t MatchingSection); // Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGeometryCacheGroomBindingAssetWithPath
	struct UGroomBindingAsset* CreateNewGeometryCacheGroomBindingAsset(struct UGroomAsset* GroomAsset, struct UGeometryCache* GeometryCache, int32_t NumInterpolationPoints, struct UGeometryCache* SourceGeometryCacheForTransfer, int32_t MatchingSection); // Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGeometryCacheGroomBindingAsset
}; 



// Class HairStrandsCore.GroomAssetImportData
// Size: 0x30(Inherited: 0x28) 
struct UGroomAssetImportData : public UAssetImportData
{
	struct UGroomImportOptions* ImportOptions;  // 0x28(0x8)

}; 



// Class HairStrandsCore.GroomAsset
// Size: 0xF8(Inherited: 0x28) 
struct UGroomAsset : public UObject
{
	char pad_40[8];  // 0x28(0x8)
	struct TArray<struct FHairGroupInfoWithVisibility> HairGroupsInfo;  // 0x30(0x10)
	struct TArray<struct FHairGroupsRendering> HairGroupsRendering;  // 0x40(0x10)
	struct TArray<struct FHairGroupsPhysics> HairGroupsPhysics;  // 0x50(0x10)
	struct TArray<struct FHairGroupsInterpolation> HairGroupsInterpolation;  // 0x60(0x10)
	struct TArray<struct FHairGroupsLOD> HairGroupsLOD;  // 0x70(0x10)
	struct TArray<struct FHairGroupsCardsSourceDescription> HairGroupsCards;  // 0x80(0x10)
	struct TArray<struct FHairGroupsMeshesSourceDescription> HairGroupsMeshes;  // 0x90(0x10)
	struct TArray<struct FHairGroupsMaterial> HairGroupsMaterials;  // 0xA0(0x10)
	char pad_176[16];  // 0xB0(0x10)
	char pad_192_1 : 7;  // 0xC0(0x1)
	bool EnableGlobalInterpolation : 1;  // 0xC0(0x1)
	uint8_t  HairInterpolationType;  // 0xC1(0x1)
	uint8_t  LODSelectionType;  // 0xC2(0x1)
	char pad_195[1];  // 0xC3(0x1)
	struct FPerPlatformInt MinLOD;  // 0xC4(0x4)
	struct FPerPlatformBool DisableBelowMinLodStripping;  // 0xC8(0x1)
	char pad_201[7];  // 0xC9(0x7)
	struct TArray<float> EffectiveLODBias;  // 0xD0(0x10)
	struct TArray<struct UAssetUserData*> AssetUserData;  // 0xE0(0x10)
	char pad_240[8];  // 0xF0(0x8)

}; 



// Class HairStrandsCore.GroomCacheImportData
// Size: 0x48(Inherited: 0x28) 
struct UGroomCacheImportData : public UAssetImportData
{
	struct FGroomCacheImportSettings Settings;  // 0x28(0x20)

}; 



// Class HairStrandsCore.GroomBindingAsset
// Size: 0xB0(Inherited: 0x28) 
struct UGroomBindingAsset : public UObject
{
	uint8_t  GroomBindingType;  // 0x28(0x1)
	char pad_41[7];  // 0x29(0x7)
	struct UGroomAsset* Groom;  // 0x30(0x8)
	struct USkeletalMesh* SourceSkeletalMesh;  // 0x38(0x8)
	struct USkeletalMesh* TargetSkeletalMesh;  // 0x40(0x8)
	struct UGeometryCache* SourceGeometryCache;  // 0x48(0x8)
	struct UGeometryCache* TargetGeometryCache;  // 0x50(0x8)
	int32_t NumInterpolationPoints;  // 0x58(0x4)
	int32_t MatchingSection;  // 0x5C(0x4)
	struct TArray<struct FGoomBindingGroupInfo> GroupInfos;  // 0x60(0x10)
	char pad_112[64];  // 0x70(0x40)

}; 



// Class HairStrandsCore.GroomCache
// Size: 0x68(Inherited: 0x28) 
struct UGroomCache : public UObject
{
	char pad_40[8];  // 0x28(0x8)
	struct FGroomCacheInfo GroomCacheInfo;  // 0x30(0x28)
	char pad_88[16];  // 0x58(0x10)

}; 



// Class HairStrandsCore.GroomCacheImportOptions
// Size: 0x48(Inherited: 0x28) 
struct UGroomCacheImportOptions : public UObject
{
	struct FGroomCacheImportSettings ImportSettings;  // 0x28(0x20)

}; 



// Class HairStrandsCore.GroomComponent
// Size: 0x5A0(Inherited: 0x480) 
struct UGroomComponent : public UMeshComponent
{
	struct UGroomAsset* GroomAsset;  // 0x480(0x8)
	struct UGroomCache* GroomCache;  // 0x488(0x8)
	struct TArray<struct UNiagaraComponent*> NiagaraComponents;  // 0x490(0x10)
	struct USkeletalMesh* SourceSkeletalMesh;  // 0x4A0(0x8)
	struct UGroomBindingAsset* BindingAsset;  // 0x4A8(0x8)
	struct UPhysicsAsset* PhysicsAsset;  // 0x4B0(0x8)
	struct UMaterialInterface* Strands_DebugMaterial;  // 0x4B8(0x8)
	struct UMaterialInterface* Strands_DefaultMaterial;  // 0x4C0(0x8)
	struct UMaterialInterface* Cards_DefaultMaterial;  // 0x4C8(0x8)
	struct UMaterialInterface* Meshes_DefaultMaterial;  // 0x4D0(0x8)
	struct UNiagaraSystem* AngularSpringsSystem;  // 0x4D8(0x8)
	struct UNiagaraSystem* CosseratRodsSystem;  // 0x4E0(0x8)
	struct FString AttachmentName;  // 0x4E8(0x10)
	char pad_1272[72];  // 0x4F8(0x48)
	struct TArray<struct FHairGroupDesc> GroomGroupsDesc;  // 0x540(0x10)
	char pad_1360_1 : 7;  // 0x550(0x1)
	bool bRunning : 1;  // 0x550(0x1)
	char pad_1361_1 : 7;  // 0x551(0x1)
	bool bLooping : 1;  // 0x551(0x1)
	char pad_1362_1 : 7;  // 0x552(0x1)
	bool bManualTick : 1;  // 0x552(0x1)
	char pad_1363[1];  // 0x553(0x1)
	float ElapsedTime;  // 0x554(0x4)
	char pad_1368[72];  // 0x558(0x48)

	void SetGroomAsset(struct UGroomAsset* Asset); // Function HairStrandsCore.GroomComponent.SetGroomAsset
	void SetBindingAsset(struct UGroomBindingAsset* InBinding); // Function HairStrandsCore.GroomComponent.SetBindingAsset
}; 



// Class HairStrandsCore.GroomCreateBindingOptions
// Size: 0x58(Inherited: 0x28) 
struct UGroomCreateBindingOptions : public UObject
{
	uint8_t  GroomBindingType;  // 0x28(0x1)
	char pad_41[7];  // 0x29(0x7)
	struct USkeletalMesh* SourceSkeletalMesh;  // 0x30(0x8)
	struct USkeletalMesh* TargetSkeletalMesh;  // 0x38(0x8)
	struct UGeometryCache* SourceGeometryCache;  // 0x40(0x8)
	struct UGeometryCache* TargetGeometryCache;  // 0x48(0x8)
	int32_t NumInterpolationPoints;  // 0x50(0x4)
	int32_t MatchingSection;  // 0x54(0x4)

}; 



// Class HairStrandsCore.GroomCreateFollicleMaskOptions
// Size: 0x40(Inherited: 0x28) 
struct UGroomCreateFollicleMaskOptions : public UObject
{
	int32_t Resolution;  // 0x28(0x4)
	int32_t RootRadius;  // 0x2C(0x4)
	struct TArray<struct FFollicleMaskOptions> Grooms;  // 0x30(0x10)

}; 



// Class HairStrandsCore.GroomCreateStrandsTexturesOptions
// Size: 0x68(Inherited: 0x28) 
struct UGroomCreateStrandsTexturesOptions : public UObject
{
	int32_t Resolution;  // 0x28(0x4)
	uint8_t  TraceType;  // 0x2C(0x1)
	char pad_45[3];  // 0x2D(0x3)
	float TraceDistance;  // 0x30(0x4)
	uint8_t  MeshType;  // 0x34(0x1)
	char pad_53[3];  // 0x35(0x3)
	struct UStaticMesh* StaticMesh;  // 0x38(0x8)
	struct USkeletalMesh* SkeletalMesh;  // 0x40(0x8)
	int32_t LODIndex;  // 0x48(0x4)
	int32_t SectionIndex;  // 0x4C(0x4)
	int32_t UVChannelIndex;  // 0x50(0x4)
	char pad_84[4];  // 0x54(0x4)
	struct TArray<int32_t> GroupIndex;  // 0x58(0x10)

}; 



// Class HairStrandsCore.NiagaraDataInterfacePhysicsAsset
// Size: 0x68(Inherited: 0x38) 
struct UNiagaraDataInterfacePhysicsAsset : public UNiagaraDataInterface
{
	struct UPhysicsAsset* DefaultSource;  // 0x38(0x8)
	struct AActor* SourceActor;  // 0x40(0x8)
	char pad_72[32];  // 0x48(0x20)

}; 



// Class HairStrandsCore.GroomHairGroupsPreview
// Size: 0x38(Inherited: 0x28) 
struct UGroomHairGroupsPreview : public UObject
{
	struct TArray<struct FGroomHairGroupPreview> Groups;  // 0x28(0x10)

}; 



// Class HairStrandsCore.GroomPluginSettings
// Size: 0x30(Inherited: 0x28) 
struct UGroomPluginSettings : public UObject
{
	float GroomCacheLookAheadBuffer;  // 0x28(0x4)
	char pad_44[4];  // 0x2C(0x4)

}; 



// Class HairStrandsCore.MovieSceneGroomCacheSection
// Size: 0x108(Inherited: 0xE8) 
struct UMovieSceneGroomCacheSection : public UMovieSceneSection
{
	struct FMovieSceneGroomCacheParams Params;  // 0xE8(0x20)

}; 



// Class HairStrandsCore.MovieSceneGroomCacheTrack
// Size: 0xA8(Inherited: 0x90) 
struct UMovieSceneGroomCacheTrack : public UMovieSceneNameableTrack
{
	char pad_144[8];  // 0x90(0x8)
	struct TArray<struct UMovieSceneSection*> AnimationSections;  // 0x98(0x10)

}; 



// Class HairStrandsCore.NiagaraDataInterfaceHairStrands
// Size: 0x50(Inherited: 0x38) 
struct UNiagaraDataInterfaceHairStrands : public UNiagaraDataInterface
{
	struct UGroomAsset* DefaultSource;  // 0x38(0x8)
	struct AActor* SourceActor;  // 0x40(0x8)
	char pad_72[8];  // 0x48(0x8)

}; 



// Class HairStrandsCore.NiagaraDataInterfaceVelocityGrid
// Size: 0xE8(Inherited: 0xD8) 
struct UNiagaraDataInterfaceVelocityGrid : public UNiagaraDataInterfaceRWBase
{
	struct FIntVector GridSize;  // 0xD8(0xC)
	char pad_228[4];  // 0xE4(0x4)

}; 



// Class HairStrandsCore.NiagaraDataInterfacePressureGrid
// Size: 0xE8(Inherited: 0xE8) 
struct UNiagaraDataInterfacePressureGrid : public UNiagaraDataInterfaceVelocityGrid
{

}; 



