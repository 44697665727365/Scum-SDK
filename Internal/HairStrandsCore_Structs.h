#pragma once 
#include "SDK.h" 
 
 
// Function HairStrandsCore.GroomComponent.SetBindingAsset
// Size: 0x8(Inherited: 0x0) 
struct FSetBindingAsset
{
	struct UGroomBindingAsset* InBinding;  // 0x0(0x8)

}; 
// ScriptStruct HairStrandsCore.HairGroupsMaterial
// Size: 0x10(Inherited: 0x0) 
struct FHairGroupsMaterial
{
	struct UMaterialInterface* Material;  // 0x0(0x8)
	struct FName SlotName;  // 0x8(0x8)

}; 
// ScriptStruct HairStrandsCore.HairGroupsLOD
// Size: 0x18(Inherited: 0x0) 
struct FHairGroupsLOD
{
	struct TArray<struct FHairLODSettings> LODs;  // 0x0(0x10)
	float ClusterWorldSize;  // 0x10(0x4)
	float ClusterScreenSizeScale;  // 0x14(0x4)

}; 
// ScriptStruct HairStrandsCore.HairGroupInfoWithVisibility
// Size: 0x1C(Inherited: 0x18) 
struct FHairGroupInfoWithVisibility : public FHairGroupInfo
{
	char pad_24_1 : 7;  // 0x18(0x1)
	bool bIsVisible : 1;  // 0x18(0x1)
	char pad_25[3];  // 0x19(0x3)

}; 
// ScriptStruct HairStrandsCore.HairInterpolationSettings
// Size: 0xC(Inherited: 0x0) 
struct FHairInterpolationSettings
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bOverrideGuides : 1;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	float HairToGuideDensity;  // 0x4(0x4)
	uint8_t  InterpolationQuality;  // 0x8(0x1)
	uint8_t  InterpolationDistance;  // 0x9(0x1)
	char pad_10_1 : 7;  // 0xA(0x1)
	bool bRandomizeGuide : 1;  // 0xA(0x1)
	char pad_11_1 : 7;  // 0xB(0x1)
	bool bUseUniqueGuide : 1;  // 0xB(0x1)

}; 
// ScriptStruct HairStrandsCore.HairGroupInfo
// Size: 0x18(Inherited: 0x0) 
struct FHairGroupInfo
{
	int32_t GroupID;  // 0x0(0x4)
	int32_t NumCurves;  // 0x4(0x4)
	int32_t NumGuides;  // 0x8(0x4)
	int32_t NumCurveVertices;  // 0xC(0x4)
	int32_t NumGuideVertices;  // 0x10(0x4)
	float MaxCurveLength;  // 0x14(0x4)

}; 
// ScriptStruct HairStrandsCore.MovieSceneGroomCacheSectionTemplateParameters
// Size: 0x28(Inherited: 0x20) 
struct FMovieSceneGroomCacheSectionTemplateParameters : public FMovieSceneGroomCacheParams
{
	struct FFrameNumber SectionStartTime;  // 0x20(0x4)
	struct FFrameNumber SectionEndTime;  // 0x24(0x4)

}; 
// ScriptStruct HairStrandsCore.HairGroupsCardsSourceDescription
// Size: 0xC0(Inherited: 0x0) 
struct FHairGroupsCardsSourceDescription
{
	struct UMaterialInterface* Material;  // 0x0(0x8)
	struct FName MaterialSlotName;  // 0x8(0x8)
	uint8_t  SourceType;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)
	struct UStaticMesh* ProceduralMesh;  // 0x18(0x8)
	struct FString ProceduralMeshKey;  // 0x20(0x10)
	struct UStaticMesh* ImportedMesh;  // 0x30(0x8)
	struct FHairGroupsProceduralCards ProceduralSettings;  // 0x38(0x38)
	struct FHairGroupCardsTextures Textures;  // 0x70(0x30)
	int32_t GroupIndex;  // 0xA0(0x4)
	int32_t LODIndex;  // 0xA4(0x4)
	struct FHairGroupCardsInfo CardsInfo;  // 0xA8(0x8)
	struct FString ImportedMeshKey;  // 0xB0(0x10)

}; 
// ScriptStruct HairStrandsCore.HairGroupCardsInfo
// Size: 0x8(Inherited: 0x0) 
struct FHairGroupCardsInfo
{
	int32_t NumCards;  // 0x0(0x4)
	int32_t NumCardVertices;  // 0x4(0x4)

}; 
// ScriptStruct HairStrandsCore.HairSolverSettings
// Size: 0x38(Inherited: 0x0) 
struct FHairSolverSettings
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool EnableSimulation : 1;  // 0x0(0x1)
	uint8_t  NiagaraSolver;  // 0x1(0x1)
	char pad_2[6];  // 0x2(0x6)
	struct TSoftObjectPtr<UNiagaraSystem> CustomSystem;  // 0x8(0x28)
	int32_t SubSteps;  // 0x30(0x4)
	int32_t IterationCount;  // 0x34(0x4)

}; 
// ScriptStruct HairStrandsCore.HairGroupCardsTextures
// Size: 0x30(Inherited: 0x0) 
struct FHairGroupCardsTextures
{
	struct UTexture2D* DepthTexture;  // 0x0(0x8)
	struct UTexture2D* CoverageTexture;  // 0x8(0x8)
	struct UTexture2D* TangentTexture;  // 0x10(0x8)
	struct UTexture2D* AttributeTexture;  // 0x18(0x8)
	struct UTexture2D* AuxilaryDataTexture;  // 0x20(0x8)
	char pad_40[8];  // 0x28(0x8)

}; 
// ScriptStruct HairStrandsCore.HairBendConstraint
// Size: 0x98(Inherited: 0x0) 
struct FHairBendConstraint
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool SolveBend : 1;  // 0x0(0x1)
	char pad_1_1 : 7;  // 0x1(0x1)
	bool ProjectBend : 1;  // 0x1(0x1)
	char pad_2[2];  // 0x2(0x2)
	float BendDamping;  // 0x4(0x4)
	float BendStiffness;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)
	struct FRuntimeFloatCurve BendScale;  // 0x10(0x88)

}; 
// ScriptStruct HairStrandsCore.HairGroupsProceduralCards
// Size: 0x38(Inherited: 0x0) 
struct FHairGroupsProceduralCards
{
	struct FHairCardsClusterSettings ClusterSettings;  // 0x0(0x8)
	struct FHairCardsGeometrySettings GeometrySettings;  // 0x8(0x1C)
	struct FHairCardsTextureSettings TextureSettings;  // 0x24(0x10)
	int32_t Version;  // 0x34(0x4)

}; 
// ScriptStruct HairStrandsCore.GroomBuildSettings
// Size: 0xC(Inherited: 0x0) 
struct FGroomBuildSettings
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bOverrideGuides : 1;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	float HairToGuideDensity;  // 0x4(0x4)
	uint8_t  InterpolationQuality;  // 0x8(0x1)
	uint8_t  InterpolationDistance;  // 0x9(0x1)
	char pad_10_1 : 7;  // 0xA(0x1)
	bool bRandomizeGuide : 1;  // 0xA(0x1)
	char pad_11_1 : 7;  // 0xB(0x1)
	bool bUseUniqueGuide : 1;  // 0xB(0x1)

}; 
// ScriptStruct HairStrandsCore.HairCardsTextureSettings
// Size: 0x10(Inherited: 0x0) 
struct FHairCardsTextureSettings
{
	int32_t AtlasMaxResolution;  // 0x0(0x4)
	int32_t PixelPerCentimeters;  // 0x4(0x4)
	int32_t LengthTextureCount;  // 0x8(0x4)
	int32_t DensityTextureCount;  // 0xC(0x4)

}; 
// ScriptStruct HairStrandsCore.FollicleMaskOptions
// Size: 0x10(Inherited: 0x0) 
struct FFollicleMaskOptions
{
	struct UGroomAsset* Groom;  // 0x0(0x8)
	uint8_t  Channel;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// ScriptStruct HairStrandsCore.HairCardsGeometrySettings
// Size: 0x1C(Inherited: 0x0) 
struct FHairCardsGeometrySettings
{
	uint8_t  GenerationType;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	int32_t CardsCount;  // 0x4(0x4)
	uint8_t  ClusterType;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)
	float MinSegmentLength;  // 0xC(0x4)
	float AngularThreshold;  // 0x10(0x4)
	float MinCardsLength;  // 0x14(0x4)
	float MaxCardsLength;  // 0x18(0x4)

}; 
// ScriptStruct HairStrandsCore.HairCardsClusterSettings
// Size: 0x8(Inherited: 0x0) 
struct FHairCardsClusterSettings
{
	float ClusterDecimation;  // 0x0(0x4)
	uint8_t  Type;  // 0x4(0x1)
	char pad_5_1 : 7;  // 0x5(0x1)
	bool bUseGuide : 1;  // 0x5(0x1)
	char pad_6[2];  // 0x6(0x2)

}; 
// ScriptStruct HairStrandsCore.HairLODSettings
// Size: 0x18(Inherited: 0x0) 
struct FHairLODSettings
{
	float CurveDecimation;  // 0x0(0x4)
	float VertexDecimation;  // 0x4(0x4)
	float AngularThreshold;  // 0x8(0x4)
	float ScreenSize;  // 0xC(0x4)
	float ThicknessScale;  // 0x10(0x4)
	char pad_20_1 : 7;  // 0x14(0x1)
	bool bVisible : 1;  // 0x14(0x1)
	uint8_t  GeometryType;  // 0x15(0x1)
	char pad_22[2];  // 0x16(0x2)

}; 
// Function HairStrandsCore.GroomComponent.SetGroomAsset
// Size: 0x8(Inherited: 0x0) 
struct FSetGroomAsset
{
	struct UGroomAsset* Asset;  // 0x0(0x8)

}; 
// ScriptStruct HairStrandsCore.HairGroupsInterpolation
// Size: 0x14(Inherited: 0x0) 
struct FHairGroupsInterpolation
{
	struct FHairDecimationSettings DecimationSettings;  // 0x0(0x8)
	struct FHairInterpolationSettings InterpolationSettings;  // 0x8(0xC)

}; 
// ScriptStruct HairStrandsCore.HairDecimationSettings
// Size: 0x8(Inherited: 0x0) 
struct FHairDecimationSettings
{
	float CurveDecimation;  // 0x0(0x4)
	float VertexDecimation;  // 0x4(0x4)

}; 
// ScriptStruct HairStrandsCore.HairGroupsMeshesSourceDescription
// Size: 0x60(Inherited: 0x0) 
struct FHairGroupsMeshesSourceDescription
{
	struct UMaterialInterface* Material;  // 0x0(0x8)
	struct FName MaterialSlotName;  // 0x8(0x8)
	struct UStaticMesh* ImportedMesh;  // 0x10(0x8)
	struct FHairGroupCardsTextures Textures;  // 0x18(0x30)
	int32_t GroupIndex;  // 0x48(0x4)
	int32_t LODIndex;  // 0x4C(0x4)
	struct FString ImportedMeshKey;  // 0x50(0x10)

}; 
// ScriptStruct HairStrandsCore.HairGroupsPhysics
// Size: 0x2C8(Inherited: 0x0) 
struct FHairGroupsPhysics
{
	struct FHairSolverSettings SolverSettings;  // 0x0(0x38)
	struct FHairExternalForces ExternalForces;  // 0x38(0x1C)
	char pad_84[4];  // 0x54(0x4)
	struct FHairMaterialConstraints MaterialConstraints;  // 0x58(0x1D8)
	struct FHairStrandsParameters StrandsParameters;  // 0x230(0x98)

}; 
// ScriptStruct HairStrandsCore.HairStrandsParameters
// Size: 0x98(Inherited: 0x0) 
struct FHairStrandsParameters
{
	uint8_t  StrandsSize;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	float StrandsDensity;  // 0x4(0x4)
	float StrandsSmoothing;  // 0x8(0x4)
	float StrandsThickness;  // 0xC(0x4)
	struct FRuntimeFloatCurve ThicknessScale;  // 0x10(0x88)

}; 
// ScriptStruct HairStrandsCore.HairGeometrySettings
// Size: 0x10(Inherited: 0x0) 
struct FHairGeometrySettings
{
	float HairWidth;  // 0x0(0x4)
	float HairRootScale;  // 0x4(0x4)
	float HairTipScale;  // 0x8(0x4)
	float HairClipScale;  // 0xC(0x4)

}; 
// ScriptStruct HairStrandsCore.HairShadowSettings
// Size: 0xC(Inherited: 0x0) 
struct FHairShadowSettings
{
	float HairShadowDensity;  // 0x0(0x4)
	float HairRaytracingRadiusScale;  // 0x4(0x4)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool bUseHairRaytracingGeometry : 1;  // 0x8(0x1)
	char pad_9_1 : 7;  // 0x9(0x1)
	bool bVoxelize : 1;  // 0x9(0x1)
	char pad_10[2];  // 0xA(0x2)

}; 
// ScriptStruct HairStrandsCore.HairMaterialConstraints
// Size: 0x1D8(Inherited: 0x0) 
struct FHairMaterialConstraints
{
	struct FHairBendConstraint BendConstraint;  // 0x0(0x98)
	struct FHairStretchConstraint StretchConstraint;  // 0x98(0x98)
	struct FHairCollisionConstraint CollisionConstraint;  // 0x130(0xA8)

}; 
// ScriptStruct HairStrandsCore.HairCollisionConstraint
// Size: 0xA8(Inherited: 0x0) 
struct FHairCollisionConstraint
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool SolveCollision : 1;  // 0x0(0x1)
	char pad_1_1 : 7;  // 0x1(0x1)
	bool ProjectCollision : 1;  // 0x1(0x1)
	char pad_2[2];  // 0x2(0x2)
	float StaticFriction;  // 0x4(0x4)
	float KineticFriction;  // 0x8(0x4)
	float StrandsViscosity;  // 0xC(0x4)
	struct FIntVector GridDimension;  // 0x10(0xC)
	float CollisionRadius;  // 0x1C(0x4)
	struct FRuntimeFloatCurve RadiusScale;  // 0x20(0x88)

}; 
// ScriptStruct HairStrandsCore.GroomCacheInfo
// Size: 0x28(Inherited: 0x0) 
struct FGroomCacheInfo
{
	int32_t Version;  // 0x0(0x4)
	uint8_t  Type;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)
	struct FGroomAnimationInfo AnimationInfo;  // 0x8(0x20)

}; 
// ScriptStruct HairStrandsCore.HairStretchConstraint
// Size: 0x98(Inherited: 0x0) 
struct FHairStretchConstraint
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool SolveStretch : 1;  // 0x0(0x1)
	char pad_1_1 : 7;  // 0x1(0x1)
	bool ProjectStretch : 1;  // 0x1(0x1)
	char pad_2[2];  // 0x2(0x2)
	float StretchDamping;  // 0x4(0x4)
	float StretchStiffness;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)
	struct FRuntimeFloatCurve StretchScale;  // 0x10(0x88)

}; 
// ScriptStruct HairStrandsCore.HairExternalForces
// Size: 0x1C(Inherited: 0x0) 
struct FHairExternalForces
{
	struct FVector GravityVector;  // 0x0(0xC)
	float AirDrag;  // 0xC(0x4)
	struct FVector AirVelocity;  // 0x10(0xC)

}; 
// ScriptStruct HairStrandsCore.HairGroupsRendering
// Size: 0x30(Inherited: 0x0) 
struct FHairGroupsRendering
{
	struct FName MaterialSlotName;  // 0x0(0x8)
	struct UMaterialInterface* Material;  // 0x8(0x8)
	struct FHairGeometrySettings GeometrySettings;  // 0x10(0x10)
	struct FHairShadowSettings ShadowSettings;  // 0x20(0xC)
	struct FHairAdvancedRenderingSettings AdvancedSettings;  // 0x2C(0x2)
	char pad_46[2];  // 0x2E(0x2)

}; 
// ScriptStruct HairStrandsCore.HairAdvancedRenderingSettings
// Size: 0x2(Inherited: 0x0) 
struct FHairAdvancedRenderingSettings
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bUseStableRasterization : 1;  // 0x0(0x1)
	char pad_1_1 : 7;  // 0x1(0x1)
	bool bScatterSceneLighting : 1;  // 0x1(0x1)

}; 
// ScriptStruct HairStrandsCore.MovieSceneGroomCacheParams
// Size: 0x20(Inherited: 0x0) 
struct FMovieSceneGroomCacheParams
{
	struct UGroomCache* GroomCache;  // 0x0(0x8)
	struct FFrameNumber FirstLoopStartFrameOffset;  // 0x8(0x4)
	struct FFrameNumber StartFrameOffset;  // 0xC(0x4)
	struct FFrameNumber EndFrameOffset;  // 0x10(0x4)
	float PlayRate;  // 0x14(0x4)
	char bReverse : 1;  // 0x18(0x1)
	char pad_24_1 : 7;  // 0x18(0x1)
	char pad_25[8];  // 0x19(0x8)

}; 
// ScriptStruct HairStrandsCore.GoomBindingGroupInfo
// Size: 0x10(Inherited: 0x0) 
struct FGoomBindingGroupInfo
{
	int32_t RenRootCount;  // 0x0(0x4)
	int32_t RenLODCount;  // 0x4(0x4)
	int32_t SimRootCount;  // 0x8(0x4)
	int32_t SimLODCount;  // 0xC(0x4)

}; 
// ScriptStruct HairStrandsCore.GroomAnimationInfo
// Size: 0x20(Inherited: 0x0) 
struct FGroomAnimationInfo
{
	uint32_t NumFrames;  // 0x0(0x4)
	float SecondsPerFrame;  // 0x4(0x4)
	float Duration;  // 0x8(0x4)
	float StartTime;  // 0xC(0x4)
	float EndTime;  // 0x10(0x4)
	int32_t StartFrame;  // 0x14(0x4)
	int32_t EndFrame;  // 0x18(0x4)
	uint8_t  Attributes;  // 0x1C(0x1)
	char pad_29[3];  // 0x1D(0x3)

}; 
// ScriptStruct HairStrandsCore.GroomCacheImportSettings
// Size: 0x20(Inherited: 0x0) 
struct FGroomCacheImportSettings
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bImportGroomCache : 1;  // 0x0(0x1)
	char pad_1_1 : 7;  // 0x1(0x1)
	bool bImportGroomAsset : 1;  // 0x1(0x1)
	char pad_2[6];  // 0x2(0x6)
	struct FSoftObjectPath GroomAsset;  // 0x8(0x18)

}; 
// Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGeometryCacheGroomBindingAssetWithPath
// Size: 0x40(Inherited: 0x0) 
struct FCreateNewGeometryCacheGroomBindingAssetWithPath
{
	struct FString DesiredPackagePath;  // 0x0(0x10)
	struct UGroomAsset* GroomAsset;  // 0x10(0x8)
	struct UGeometryCache* GeometryCache;  // 0x18(0x8)
	int32_t NumInterpolationPoints;  // 0x20(0x4)
	char pad_36[4];  // 0x24(0x4)
	struct UGeometryCache* SourceGeometryCacheForTransfer;  // 0x28(0x8)
	int32_t MatchingSection;  // 0x30(0x4)
	char pad_52[4];  // 0x34(0x4)
	struct UGroomBindingAsset* ReturnValue;  // 0x38(0x8)

}; 
// ScriptStruct HairStrandsCore.HairGroupDesc
// Size: 0x44(Inherited: 0x0) 
struct FHairGroupDesc
{
	float HairLength;  // 0x0(0x4)
	float HairWidth;  // 0x4(0x4)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool HairWidth_Override : 1;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)
	float HairRootScale;  // 0xC(0x4)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool HairRootScale_Override : 1;  // 0x10(0x1)
	char pad_17[3];  // 0x11(0x3)
	float HairTipScale;  // 0x14(0x4)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool HairTipScale_Override : 1;  // 0x18(0x1)
	char pad_25[3];  // 0x19(0x3)
	float HairClipScale;  // 0x1C(0x4)
	char pad_32_1 : 7;  // 0x20(0x1)
	bool HairClipScale_Override : 1;  // 0x20(0x1)
	char pad_33[3];  // 0x21(0x3)
	float HairShadowDensity;  // 0x24(0x4)
	char pad_40_1 : 7;  // 0x28(0x1)
	bool HairShadowDensity_Override : 1;  // 0x28(0x1)
	char pad_41[3];  // 0x29(0x3)
	float HairRaytracingRadiusScale;  // 0x2C(0x4)
	char pad_48_1 : 7;  // 0x30(0x1)
	bool HairRaytracingRadiusScale_Override : 1;  // 0x30(0x1)
	char pad_49_1 : 7;  // 0x31(0x1)
	bool bUseHairRaytracingGeometry : 1;  // 0x31(0x1)
	char pad_50_1 : 7;  // 0x32(0x1)
	bool bUseHairRaytracingGeometry_Override : 1;  // 0x32(0x1)
	char pad_51[1];  // 0x33(0x1)
	float LODBias;  // 0x34(0x4)
	char pad_56_1 : 7;  // 0x38(0x1)
	bool bUseStableRasterization : 1;  // 0x38(0x1)
	char pad_57_1 : 7;  // 0x39(0x1)
	bool bUseStableRasterization_Override : 1;  // 0x39(0x1)
	char pad_58_1 : 7;  // 0x3A(0x1)
	bool bScatterSceneLighting : 1;  // 0x3A(0x1)
	char pad_59_1 : 7;  // 0x3B(0x1)
	bool bScatterSceneLighting_Override : 1;  // 0x3B(0x1)
	char pad_60_1 : 7;  // 0x3C(0x1)
	bool bSupportVoxelization : 1;  // 0x3C(0x1)
	char pad_61_1 : 7;  // 0x3D(0x1)
	bool bSupportVoxelization_Override : 1;  // 0x3D(0x1)
	char pad_62[2];  // 0x3E(0x2)
	int32_t LODForcedIndex;  // 0x40(0x4)

}; 
// ScriptStruct HairStrandsCore.GroomHairGroupPreview
// Size: 0x20(Inherited: 0x0) 
struct FGroomHairGroupPreview
{
	int32_t GroupID;  // 0x0(0x4)
	int32_t CurveCount;  // 0x4(0x4)
	int32_t GuideCount;  // 0x8(0x4)
	struct FHairGroupsInterpolation InterpolationSettings;  // 0xC(0x14)

}; 
// ScriptStruct HairStrandsCore.GroomConversionSettings
// Size: 0x18(Inherited: 0x0) 
struct FGroomConversionSettings
{
	struct FVector Rotation;  // 0x0(0xC)
	struct FVector Scale;  // 0xC(0xC)

}; 
// ScriptStruct HairStrandsCore.MovieSceneGroomCacheSectionTemplate
// Size: 0x48(Inherited: 0x20) 
struct FMovieSceneGroomCacheSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieSceneGroomCacheSectionTemplateParameters Params;  // 0x20(0x28)

}; 
// Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGeometryCacheGroomBindingAsset
// Size: 0x30(Inherited: 0x0) 
struct FCreateNewGeometryCacheGroomBindingAsset
{
	struct UGroomAsset* GroomAsset;  // 0x0(0x8)
	struct UGeometryCache* GeometryCache;  // 0x8(0x8)
	int32_t NumInterpolationPoints;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)
	struct UGeometryCache* SourceGeometryCacheForTransfer;  // 0x18(0x8)
	int32_t MatchingSection;  // 0x20(0x4)
	char pad_36[4];  // 0x24(0x4)
	struct UGroomBindingAsset* ReturnValue;  // 0x28(0x8)

}; 
// Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGroomBindingAsset
// Size: 0x30(Inherited: 0x0) 
struct FCreateNewGroomBindingAsset
{
	struct UGroomAsset* InGroomAsset;  // 0x0(0x8)
	struct USkeletalMesh* InSkeletalMesh;  // 0x8(0x8)
	int32_t InNumInterpolationPoints;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)
	struct USkeletalMesh* InSourceSkeletalMeshForTransfer;  // 0x18(0x8)
	int32_t InMatchingSection;  // 0x20(0x4)
	char pad_36[4];  // 0x24(0x4)
	struct UGroomBindingAsset* ReturnValue;  // 0x28(0x8)

}; 
// Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGroomBindingAssetWithPath
// Size: 0x40(Inherited: 0x0) 
struct FCreateNewGroomBindingAssetWithPath
{
	struct FString InDesiredPackagePath;  // 0x0(0x10)
	struct UGroomAsset* InGroomAsset;  // 0x10(0x8)
	struct USkeletalMesh* InSkeletalMesh;  // 0x18(0x8)
	int32_t InNumInterpolationPoints;  // 0x20(0x4)
	char pad_36[4];  // 0x24(0x4)
	struct USkeletalMesh* InSourceSkeletalMeshForTransfer;  // 0x28(0x8)
	int32_t InMatchingSection;  // 0x30(0x4)
	char pad_52[4];  // 0x34(0x4)
	struct UGroomBindingAsset* ReturnValue;  // 0x38(0x8)

}; 
