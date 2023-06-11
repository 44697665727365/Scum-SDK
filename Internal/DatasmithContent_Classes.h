#pragma once 
#include <DatasmithContent_Structs.h>
 
 
 
// Class DatasmithContent.DatasmithMaterialInstanceTemplate
// Size: 0x198(Inherited: 0x30) 
struct UDatasmithMaterialInstanceTemplate : public UDatasmithObjectTemplate
{
	struct TSoftObjectPtr<UMaterialInterface> ParentMaterial;  // 0x30(0x28)
	struct TMap<struct FName, float> ScalarParameterValues;  // 0x58(0x50)
	struct TMap<struct FName, struct FLinearColor> VectorParameterValues;  // 0xA8(0x50)
	struct TMap<struct FName, struct TSoftObjectPtr<UTexture>> TextureParameterValues;  // 0xF8(0x50)
	struct FDatasmithStaticParameterSetTemplate StaticParameters;  // 0x148(0x50)

}; 



// Class DatasmithContent.DatasmithOptionsBase
// Size: 0x28(Inherited: 0x28) 
struct UDatasmithOptionsBase : public UObject
{

}; 



// Class DatasmithContent.DatasmithAssetImportData
// Size: 0x28(Inherited: 0x28) 
struct UDatasmithAssetImportData : public UAssetImportData
{

}; 



// Class DatasmithContent.DatasmithAdditionalData
// Size: 0x28(Inherited: 0x28) 
struct UDatasmithAdditionalData : public UObject
{

}; 



// Class DatasmithContent.DatasmithObjectTemplate
// Size: 0x30(Inherited: 0x28) 
struct UDatasmithObjectTemplate : public UObject
{
	char pad_40[8];  // 0x28(0x8)

}; 



// Class DatasmithContent.DatasmithLightComponentTemplate
// Size: 0x68(Inherited: 0x30) 
struct UDatasmithLightComponentTemplate : public UDatasmithObjectTemplate
{
	char bVisible : 1;  // 0x30(0x1)
	char pad_48_1 : 7;  // 0x30(0x1)
	char pad_49[4];  // 0x31(0x4)
	char CastShadows : 1;  // 0x34(0x1)
	char bUseTemperature : 1;  // 0x34(0x1)
	char bUseIESBrightness : 1;  // 0x34(0x1)
	char pad_52_1 : 5;  // 0x34(0x1)
	char pad_53[4];  // 0x35(0x4)
	float Intensity;  // 0x38(0x4)
	float Temperature;  // 0x3C(0x4)
	float IESBrightnessScale;  // 0x40(0x4)
	struct FLinearColor LightColor;  // 0x44(0x10)
	char pad_84[4];  // 0x54(0x4)
	struct UMaterialInterface* LightFunctionMaterial;  // 0x58(0x8)
	struct UTextureLightProfile* IESTexture;  // 0x60(0x8)

}; 



// Class DatasmithContent.DatasmithContentBlueprintLibrary
// Size: 0x28(Inherited: 0x28) 
struct UDatasmithContentBlueprintLibrary : public UBlueprintFunctionLibrary
{

	struct FString GetDatasmithUserDataValueForKey(struct UObject* Object, struct FName Key); // Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataValueForKey
	void GetDatasmithUserDataKeysAndValuesForValue(struct UObject* Object, struct FString StringToMatch, struct TArray<struct FName>& OutKeys, struct TArray<struct FString>& OutValues); // Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataKeysAndValuesForValue
	struct UDatasmithAssetUserData* GetDatasmithUserData(struct UObject* Object); // Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserData
}; 



// Class DatasmithContent.DatasmithStaticMeshCADImportData
// Size: 0x28(Inherited: 0x28) 
struct UDatasmithStaticMeshCADImportData : public UDatasmithStaticMeshImportData
{

}; 



// Class DatasmithContent.DatasmithScene
// Size: 0x30(Inherited: 0x28) 
struct UDatasmithScene : public UObject
{
	char pad_40[8];  // 0x28(0x8)

}; 



// Class DatasmithContent.DatasmithCineCameraComponentTemplate
// Size: 0x90(Inherited: 0x30) 
struct UDatasmithCineCameraComponentTemplate : public UDatasmithObjectTemplate
{
	struct FDatasmithCameraFilmbackSettingsTemplate FilmbackSettings;  // 0x30(0x8)
	struct FDatasmithCameraLensSettingsTemplate LensSettings;  // 0x38(0x4)
	struct FDatasmithCameraFocusSettingsTemplate FocusSettings;  // 0x3C(0x8)
	float CurrentFocalLength;  // 0x44(0x4)
	float CurrentAperture;  // 0x48(0x4)
	char pad_76[4];  // 0x4C(0x4)
	struct FDatasmithPostProcessSettingsTemplate PostProcessSettings;  // 0x50(0x40)

}; 



// Class DatasmithContent.DatasmithActorTemplate
// Size: 0xD0(Inherited: 0x30) 
struct UDatasmithActorTemplate : public UDatasmithObjectTemplate
{
	struct TSet<struct FName> Layers;  // 0x30(0x50)
	struct TSet<struct FName> Tags;  // 0x80(0x50)

}; 



// Class DatasmithContent.DatasmithAreaLightActor
// Size: 0x278(Inherited: 0x220) 
struct ADatasmithAreaLightActor : public AActor
{
	char EComponentMobility Mobility;  // 0x220(0x1)
	uint8_t  LightType;  // 0x221(0x1)
	uint8_t  LightShape;  // 0x222(0x1)
	char pad_547[1];  // 0x223(0x1)
	struct FVector2D Dimensions;  // 0x224(0x8)
	float Intensity;  // 0x22C(0x4)
	uint8_t  IntensityUnits;  // 0x230(0x1)
	char pad_561[3];  // 0x231(0x3)
	struct FLinearColor Color;  // 0x234(0x10)
	float Temperature;  // 0x244(0x4)
	struct UTextureLightProfile* IESTexture;  // 0x248(0x8)
	char pad_592_1 : 7;  // 0x250(0x1)
	bool bUseIESBrightness : 1;  // 0x250(0x1)
	char pad_593[3];  // 0x251(0x3)
	float IESBrightnessScale;  // 0x254(0x4)
	struct FRotator Rotation;  // 0x258(0xC)
	float SourceRadius;  // 0x264(0x4)
	float SourceLength;  // 0x268(0x4)
	float AttenuationRadius;  // 0x26C(0x4)
	float SpotlightInnerAngle;  // 0x270(0x4)
	float SpotlightOuterAngle;  // 0x274(0x4)

}; 



// Class DatasmithContent.DatasmithStaticMeshImportData
// Size: 0x28(Inherited: 0x28) 
struct UDatasmithStaticMeshImportData : public UDatasmithAssetImportData
{

}; 



// Class DatasmithContent.DatasmithAreaLightActorTemplate
// Size: 0xA0(Inherited: 0x30) 
struct UDatasmithAreaLightActorTemplate : public UDatasmithObjectTemplate
{
	uint8_t  LightType;  // 0x30(0x1)
	uint8_t  LightShape;  // 0x31(0x1)
	char pad_50[2];  // 0x32(0x2)
	struct FVector2D Dimensions;  // 0x34(0x8)
	struct FLinearColor Color;  // 0x3C(0x10)
	float Intensity;  // 0x4C(0x4)
	uint8_t  IntensityUnits;  // 0x50(0x1)
	char pad_81[3];  // 0x51(0x3)
	float Temperature;  // 0x54(0x4)
	struct TSoftObjectPtr<UTextureLightProfile> IESTexture;  // 0x58(0x28)
	char pad_128_1 : 7;  // 0x80(0x1)
	bool bUseIESBrightness : 1;  // 0x80(0x1)
	char pad_129[3];  // 0x81(0x3)
	float IESBrightnessScale;  // 0x84(0x4)
	struct FRotator Rotation;  // 0x88(0xC)
	float SourceRadius;  // 0x94(0x4)
	float SourceLength;  // 0x98(0x4)
	float AttenuationRadius;  // 0x9C(0x4)

}; 



// Class DatasmithContent.DatasmithSceneImportData
// Size: 0x28(Inherited: 0x28) 
struct UDatasmithSceneImportData : public UAssetImportData
{

}; 



// Class DatasmithContent.DatasmithTranslatedSceneImportData
// Size: 0x28(Inherited: 0x28) 
struct UDatasmithTranslatedSceneImportData : public UDatasmithSceneImportData
{

}; 



// Class DatasmithContent.DatasmithCADImportSceneData
// Size: 0x28(Inherited: 0x28) 
struct UDatasmithCADImportSceneData : public UDatasmithSceneImportData
{

}; 



// Class DatasmithContent.DatasmithMDLSceneImportData
// Size: 0x28(Inherited: 0x28) 
struct UDatasmithMDLSceneImportData : public UDatasmithSceneImportData
{

}; 



// Class DatasmithContent.DatasmithImportedSequencesActor
// Size: 0x230(Inherited: 0x220) 
struct ADatasmithImportedSequencesActor : public AActor
{
	struct TArray<struct ULevelSequence*> ImportedSequences;  // 0x220(0x10)

	void PlayLevelSequence(struct ULevelSequence* SequenceToPlay); // Function DatasmithContent.DatasmithImportedSequencesActor.PlayLevelSequence
}; 



// Class DatasmithContent.DatasmithVREDSceneImportData
// Size: 0xA8(Inherited: 0x48) 
struct UDatasmithVREDSceneImportData : public UDatasmithFBXSceneImportData
{
	char pad_72_1 : 7;  // 0x48(0x1)
	bool bMergeNodes : 1;  // 0x48(0x1)
	char pad_73_1 : 7;  // 0x49(0x1)
	bool bOptimizeDuplicatedNodes : 1;  // 0x49(0x1)
	char pad_74_1 : 7;  // 0x4A(0x1)
	bool bImportMats : 1;  // 0x4A(0x1)
	char pad_75[5];  // 0x4B(0x5)
	struct FString MatsPath;  // 0x50(0x10)
	char pad_96_1 : 7;  // 0x60(0x1)
	bool bImportVar : 1;  // 0x60(0x1)
	char pad_97_1 : 7;  // 0x61(0x1)
	bool bCleanVar : 1;  // 0x61(0x1)
	char pad_98[6];  // 0x62(0x6)
	struct FString VarPath;  // 0x68(0x10)
	char pad_120_1 : 7;  // 0x78(0x1)
	bool bImportLightInfo : 1;  // 0x78(0x1)
	char pad_121[7];  // 0x79(0x7)
	struct FString LightInfoPath;  // 0x80(0x10)
	char pad_144_1 : 7;  // 0x90(0x1)
	bool bImportClipInfo : 1;  // 0x90(0x1)
	char pad_145[7];  // 0x91(0x7)
	struct FString ClipInfoPath;  // 0x98(0x10)

}; 



// Class DatasmithContent.DatasmithGLTFSceneImportData
// Size: 0x70(Inherited: 0x28) 
struct UDatasmithGLTFSceneImportData : public UDatasmithSceneImportData
{
	struct FString Generator;  // 0x28(0x10)
	float Version;  // 0x38(0x4)
	char pad_60[4];  // 0x3C(0x4)
	struct FString Author;  // 0x40(0x10)
	struct FString License;  // 0x50(0x10)
	struct FString Source;  // 0x60(0x10)

}; 



// Class DatasmithContent.DatasmithStaticMeshGLTFImportData
// Size: 0x38(Inherited: 0x28) 
struct UDatasmithStaticMeshGLTFImportData : public UDatasmithStaticMeshImportData
{
	struct FString SourceMeshName;  // 0x28(0x10)

}; 



// Class DatasmithContent.DatasmithFBXSceneImportData
// Size: 0x48(Inherited: 0x28) 
struct UDatasmithFBXSceneImportData : public UDatasmithSceneImportData
{
	char pad_40_1 : 7;  // 0x28(0x1)
	bool bGenerateLightmapUVs : 1;  // 0x28(0x1)
	char pad_41[7];  // 0x29(0x7)
	struct FString TexturesDir;  // 0x30(0x10)
	char IntermediateSerialization;  // 0x40(0x1)
	char pad_65_1 : 7;  // 0x41(0x1)
	bool bColorizeMaterials : 1;  // 0x41(0x1)
	char pad_66[6];  // 0x42(0x6)

}; 



// Class DatasmithContent.DatasmithSpotLightComponentTemplate
// Size: 0x38(Inherited: 0x30) 
struct UDatasmithSpotLightComponentTemplate : public UDatasmithObjectTemplate
{
	float InnerConeAngle;  // 0x30(0x4)
	float OuterConeAngle;  // 0x34(0x4)

}; 



// Class DatasmithContent.DatasmithPointLightComponentTemplate
// Size: 0x40(Inherited: 0x30) 
struct UDatasmithPointLightComponentTemplate : public UDatasmithObjectTemplate
{
	uint8_t  IntensityUnits;  // 0x30(0x1)
	char pad_49[3];  // 0x31(0x3)
	float SourceRadius;  // 0x34(0x4)
	float SourceLength;  // 0x38(0x4)
	float AttenuationRadius;  // 0x3C(0x4)

}; 



// Class DatasmithContent.DatasmithLandscapeTemplate
// Size: 0x40(Inherited: 0x30) 
struct UDatasmithLandscapeTemplate : public UDatasmithObjectTemplate
{
	struct UMaterialInterface* LandscapeMaterial;  // 0x30(0x8)
	int32_t StaticLightingLOD;  // 0x38(0x4)
	char pad_60[4];  // 0x3C(0x4)

}; 



// Class DatasmithContent.DatasmithStaticMeshIFCImportData
// Size: 0x38(Inherited: 0x28) 
struct UDatasmithStaticMeshIFCImportData : public UDatasmithStaticMeshImportData
{
	struct FString SourceGlobalId;  // 0x28(0x10)

}; 



// Class DatasmithContent.DatasmithDeltaGenAssetImportData
// Size: 0x28(Inherited: 0x28) 
struct UDatasmithDeltaGenAssetImportData : public UDatasmithAssetImportData
{

}; 



// Class DatasmithContent.DatasmithDeltaGenSceneImportData
// Size: 0x90(Inherited: 0x48) 
struct UDatasmithDeltaGenSceneImportData : public UDatasmithFBXSceneImportData
{
	char pad_72_1 : 7;  // 0x48(0x1)
	bool bMergeNodes : 1;  // 0x48(0x1)
	char pad_73_1 : 7;  // 0x49(0x1)
	bool bOptimizeDuplicatedNodes : 1;  // 0x49(0x1)
	char pad_74_1 : 7;  // 0x4A(0x1)
	bool bRemoveInvisibleNodes : 1;  // 0x4A(0x1)
	char pad_75_1 : 7;  // 0x4B(0x1)
	bool bSimplifyNodeHierarchy : 1;  // 0x4B(0x1)
	char pad_76_1 : 7;  // 0x4C(0x1)
	bool bImportVar : 1;  // 0x4C(0x1)
	char pad_77[3];  // 0x4D(0x3)
	struct FString VarPath;  // 0x50(0x10)
	char pad_96_1 : 7;  // 0x60(0x1)
	bool bImportPos : 1;  // 0x60(0x1)
	char pad_97[7];  // 0x61(0x7)
	struct FString PosPath;  // 0x68(0x10)
	char pad_120_1 : 7;  // 0x78(0x1)
	bool bImportTml : 1;  // 0x78(0x1)
	char pad_121[7];  // 0x79(0x7)
	struct FString TmlPath;  // 0x80(0x10)

}; 



// Class DatasmithContent.DatasmithVREDAssetImportData
// Size: 0x28(Inherited: 0x28) 
struct UDatasmithVREDAssetImportData : public UDatasmithAssetImportData
{

}; 



// Class DatasmithContent.DatasmithIFCSceneImportData
// Size: 0x28(Inherited: 0x28) 
struct UDatasmithIFCSceneImportData : public UDatasmithSceneImportData
{

}; 



// Class DatasmithContent.DatasmithAssetUserData
// Size: 0x78(Inherited: 0x28) 
struct UDatasmithAssetUserData : public UAssetUserData
{
	struct TMap<struct FName, struct FString> MetaData;  // 0x28(0x50)

}; 



// Class DatasmithContent.DatasmithCineCameraActorTemplate
// Size: 0x60(Inherited: 0x30) 
struct UDatasmithCineCameraActorTemplate : public UDatasmithObjectTemplate
{
	struct FDatasmithCameraLookatTrackingSettingsTemplate LookatTrackingSettings;  // 0x30(0x30)

}; 



// Class DatasmithContent.DatasmithCustomActionBase
// Size: 0x30(Inherited: 0x28) 
struct UDatasmithCustomActionBase : public UObject
{
	char pad_40[8];  // 0x28(0x8)

}; 



// Class DatasmithContent.DatasmithDecalComponentTemplate
// Size: 0x48(Inherited: 0x30) 
struct UDatasmithDecalComponentTemplate : public UDatasmithObjectTemplate
{
	int32_t sortOrder;  // 0x30(0x4)
	struct FVector DecalSize;  // 0x34(0xC)
	struct UMaterialInterface* Material;  // 0x40(0x8)

}; 



// Class DatasmithContent.DatasmithCommonTessellationOptions
// Size: 0x38(Inherited: 0x28) 
struct UDatasmithCommonTessellationOptions : public UDatasmithOptionsBase
{
	struct FDatasmithTessellationOptions Options;  // 0x28(0x10)

}; 



// Class DatasmithContent.DatasmithImportOptions
// Size: 0x70(Inherited: 0x28) 
struct UDatasmithImportOptions : public UDatasmithOptionsBase
{
	uint8_t  SearchPackagePolicy;  // 0x28(0x1)
	uint8_t  MaterialConflictPolicy;  // 0x29(0x1)
	uint8_t  TextureConflictPolicy;  // 0x2A(0x1)
	uint8_t  StaticMeshActorImportPolicy;  // 0x2B(0x1)
	uint8_t  LightImportPolicy;  // 0x2C(0x1)
	uint8_t  CameraImportPolicy;  // 0x2D(0x1)
	uint8_t  OtherActorImportPolicy;  // 0x2E(0x1)
	uint8_t  MaterialQuality;  // 0x2F(0x1)
	struct FDatasmithImportBaseOptions BaseOptions;  // 0x30(0x14)
	struct FDatasmithReimportOptions ReimportOptions;  // 0x44(0x2)
	char pad_70[2];  // 0x46(0x2)
	struct FString Filename;  // 0x48(0x10)
	struct FString FilePath;  // 0x58(0x10)
	char pad_104[8];  // 0x68(0x8)

}; 



// Class DatasmithContent.DatasmithPostProcessVolumeTemplate
// Size: 0x80(Inherited: 0x30) 
struct UDatasmithPostProcessVolumeTemplate : public UDatasmithObjectTemplate
{
	struct FDatasmithPostProcessSettingsTemplate Settings;  // 0x30(0x40)
	char bEnabled : 1;  // 0x70(0x1)
	char bUnbound : 1;  // 0x70(0x1)
	char pad_112_1 : 6;  // 0x70(0x1)
	char pad_113[16];  // 0x71(0x10)

}; 



// Class DatasmithContent.DatasmithSceneActor
// Size: 0x278(Inherited: 0x220) 
struct ADatasmithSceneActor : public AActor
{
	struct UDatasmithScene* Scene;  // 0x220(0x8)
	struct TMap<struct FName, struct TSoftObjectPtr<AActor>> RelatedActors;  // 0x228(0x50)

}; 



// Class DatasmithContent.DatasmithSceneComponentTemplate
// Size: 0xF0(Inherited: 0x30) 
struct UDatasmithSceneComponentTemplate : public UDatasmithObjectTemplate
{
	struct FTransform RelativeTransform;  // 0x30(0x30)
	char EComponentMobility Mobility;  // 0x60(0x1)
	char pad_97[7];  // 0x61(0x7)
	struct TSoftObjectPtr<USceneComponent> AttachParent;  // 0x68(0x28)
	char pad_144_1 : 7;  // 0x90(0x1)
	bool bVisible : 1;  // 0x90(0x1)
	char pad_145[7];  // 0x91(0x7)
	struct TSet<struct FName> Tags;  // 0x98(0x50)
	char pad_232[8];  // 0xE8(0x8)

}; 



// Class DatasmithContent.DatasmithSkyLightComponentTemplate
// Size: 0x40(Inherited: 0x30) 
struct UDatasmithSkyLightComponentTemplate : public UDatasmithObjectTemplate
{
	char ESkyLightSourceType SourceType;  // 0x30(0x1)
	char pad_49[3];  // 0x31(0x3)
	int32_t CubemapResolution;  // 0x34(0x4)
	struct UTextureCube* Cubemap;  // 0x38(0x8)

}; 



// Class DatasmithContent.DatasmithStaticMeshComponentTemplate
// Size: 0x48(Inherited: 0x30) 
struct UDatasmithStaticMeshComponentTemplate : public UDatasmithObjectTemplate
{
	struct UStaticMesh* StaticMesh;  // 0x30(0x8)
	struct TArray<struct UMaterialInterface*> OverrideMaterials;  // 0x38(0x10)

}; 



// Class DatasmithContent.DatasmithStaticMeshTemplate
// Size: 0xA8(Inherited: 0x30) 
struct UDatasmithStaticMeshTemplate : public UDatasmithObjectTemplate
{
	struct FDatasmithMeshSectionInfoMapTemplate SectionInfoMap;  // 0x30(0x50)
	int32_t LightMapCoordinateIndex;  // 0x80(0x4)
	int32_t LightMapResolution;  // 0x84(0x4)
	struct TArray<struct FDatasmithMeshBuildSettingsTemplate> BuildSettings;  // 0x88(0x10)
	struct TArray<struct FDatasmithStaticMaterialTemplate> StaticMaterials;  // 0x98(0x10)

}; 



