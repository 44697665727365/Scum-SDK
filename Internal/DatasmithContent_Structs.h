#pragma once 
#include "SDK.h" 
 
 
// ScriptStruct DatasmithContent.DatasmithCameraLookatTrackingSettingsTemplate
// Size: 0x30(Inherited: 0x0) 
struct FDatasmithCameraLookatTrackingSettingsTemplate
{
	char bEnableLookAtTracking : 1;  // 0x0(0x1)
	char bAllowRoll : 1;  // 0x0(0x1)
	char pad_0_1 : 6;  // 0x0(0x1)
	char pad_1[8];  // 0x1(0x8)
	struct TSoftObjectPtr<AActor> ActorToTrack;  // 0x8(0x28)

}; 
// ScriptStruct DatasmithContent.DatasmithCameraLensSettingsTemplate
// Size: 0x4(Inherited: 0x0) 
struct FDatasmithCameraLensSettingsTemplate
{
	float MaxFStop;  // 0x0(0x4)

}; 
// ScriptStruct DatasmithContent.DatasmithPostProcessSettingsTemplate
// Size: 0x40(Inherited: 0x0) 
struct FDatasmithPostProcessSettingsTemplate
{
	char bOverride_WhiteTemp : 1;  // 0x0(0x1)
	char bOverride_ColorSaturation : 1;  // 0x0(0x1)
	char bOverride_VignetteIntensity : 1;  // 0x0(0x1)
	char bOverride_FilmWhitePoint : 1;  // 0x0(0x1)
	char bOverride_AutoExposureMethod : 1;  // 0x0(0x1)
	char bOverride_CameraISO : 1;  // 0x0(0x1)
	char bOverride_CameraShutterSpeed : 1;  // 0x0(0x1)
	char pad_0_1 : 1;  // 0x0(0x1)
	char pad_1[4];  // 0x1(0x4)
	char bOverride_DepthOfFieldFstop : 1;  // 0x4(0x1)
	char pad_4_1 : 7;  // 0x4(0x1)
	char pad_5[4];  // 0x5(0x4)
	float WhiteTemp;  // 0x8(0x4)
	float VignetteIntensity;  // 0xC(0x4)
	struct FLinearColor FilmWhitePoint;  // 0x10(0x10)
	struct FVector4 ColorSaturation;  // 0x20(0x10)
	char EAutoExposureMethod AutoExposureMethod;  // 0x30(0x1)
	char pad_49[3];  // 0x31(0x3)
	float CameraISO;  // 0x34(0x4)
	float CameraShutterSpeed;  // 0x38(0x4)
	float DepthOfFieldFstop;  // 0x3C(0x4)

}; 
// ScriptStruct DatasmithContent.DatasmithImportBaseOptions
// Size: 0x14(Inherited: 0x0) 
struct FDatasmithImportBaseOptions
{
	uint8_t  SceneHandling;  // 0x0(0x1)
	char pad_1_1 : 7;  // 0x1(0x1)
	bool bIncludeGeometry : 1;  // 0x1(0x1)
	char pad_2_1 : 7;  // 0x2(0x1)
	bool bIncludeMaterial : 1;  // 0x2(0x1)
	char pad_3_1 : 7;  // 0x3(0x1)
	bool bIncludeLight : 1;  // 0x3(0x1)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool bIncludeCamera : 1;  // 0x4(0x1)
	char pad_5_1 : 7;  // 0x5(0x1)
	bool bIncludeAnimation : 1;  // 0x5(0x1)
	char pad_6[2];  // 0x6(0x2)
	struct FDatasmithAssetImportOptions AssetOptions;  // 0x8(0x8)
	struct FDatasmithStaticMeshImportOptions StaticMeshOptions;  // 0x10(0x4)

}; 
// ScriptStruct DatasmithContent.DatasmithCameraFocusSettingsTemplate
// Size: 0x8(Inherited: 0x0) 
struct FDatasmithCameraFocusSettingsTemplate
{
	uint8_t  FocusMethod;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	float ManualFocusDistance;  // 0x4(0x4)

}; 
// ScriptStruct DatasmithContent.DatasmithTessellationOptions
// Size: 0x10(Inherited: 0x0) 
struct FDatasmithTessellationOptions
{
	float ChordTolerance;  // 0x0(0x4)
	float MaxEdgeLength;  // 0x4(0x4)
	float NormalTolerance;  // 0x8(0x4)
	uint8_t  StitchingTechnique;  // 0xC(0x1)
	char pad_13[3];  // 0xD(0x3)

}; 
// ScriptStruct DatasmithContent.DatasmithCameraFilmbackSettingsTemplate
// Size: 0x8(Inherited: 0x0) 
struct FDatasmithCameraFilmbackSettingsTemplate
{
	float SensorWidth;  // 0x0(0x4)
	float SensorHeight;  // 0x4(0x4)

}; 
// ScriptStruct DatasmithContent.DatasmithRetessellationOptions
// Size: 0x14(Inherited: 0x10) 
struct FDatasmithRetessellationOptions : public FDatasmithTessellationOptions
{
	uint8_t  RetessellationRule;  // 0x10(0x1)
	char pad_17[3];  // 0x11(0x3)

}; 
// ScriptStruct DatasmithContent.DatasmithStaticMeshImportOptions
// Size: 0x4(Inherited: 0x0) 
struct FDatasmithStaticMeshImportOptions
{
	uint8_t  MinLightmapResolution;  // 0x0(0x1)
	uint8_t  MaxLightmapResolution;  // 0x1(0x1)
	char pad_2_1 : 7;  // 0x2(0x1)
	bool bGenerateLightmapUVs : 1;  // 0x2(0x1)
	char pad_3_1 : 7;  // 0x3(0x1)
	bool bRemoveDegenerates : 1;  // 0x3(0x1)

}; 
// ScriptStruct DatasmithContent.DatasmithStaticParameterSetTemplate
// Size: 0x50(Inherited: 0x0) 
struct FDatasmithStaticParameterSetTemplate
{
	struct TMap<struct FName, bool> StaticSwitchParameters;  // 0x0(0x50)

}; 
// ScriptStruct DatasmithContent.DatasmithAssetImportOptions
// Size: 0x8(Inherited: 0x0) 
struct FDatasmithAssetImportOptions
{
	struct FName PackagePath;  // 0x0(0x8)

}; 
// ScriptStruct DatasmithContent.DatasmithReimportOptions
// Size: 0x2(Inherited: 0x0) 
struct FDatasmithReimportOptions
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bUpdateActors : 1;  // 0x0(0x1)
	char pad_1_1 : 7;  // 0x1(0x1)
	bool bRespawnDeletedActors : 1;  // 0x1(0x1)

}; 
// ScriptStruct DatasmithContent.DatasmithMeshSectionInfoMapTemplate
// Size: 0x50(Inherited: 0x0) 
struct FDatasmithMeshSectionInfoMapTemplate
{
	struct TMap<uint32_t, struct FDatasmithMeshSectionInfoTemplate> Map;  // 0x0(0x50)

}; 
// Function DatasmithContent.DatasmithImportedSequencesActor.PlayLevelSequence
// Size: 0x8(Inherited: 0x0) 
struct FPlayLevelSequence
{
	struct ULevelSequence* SequenceToPlay;  // 0x0(0x8)

}; 
// ScriptStruct DatasmithContent.DatasmithMeshSectionInfoTemplate
// Size: 0x4(Inherited: 0x0) 
struct FDatasmithMeshSectionInfoTemplate
{
	int32_t MaterialIndex;  // 0x0(0x4)

}; 
// ScriptStruct DatasmithContent.DatasmithStaticMaterialTemplate
// Size: 0x10(Inherited: 0x0) 
struct FDatasmithStaticMaterialTemplate
{
	struct FName MaterialSlotName;  // 0x0(0x8)
	struct UMaterialInterface* MaterialInterface;  // 0x8(0x8)

}; 
// ScriptStruct DatasmithContent.DatasmithMeshBuildSettingsTemplate
// Size: 0x10(Inherited: 0x0) 
struct FDatasmithMeshBuildSettingsTemplate
{
	char bUseMikkTSpace : 1;  // 0x0(0x1)
	char bRecomputeNormals : 1;  // 0x0(0x1)
	char bRecomputeTangents : 1;  // 0x0(0x1)
	char bRemoveDegenerates : 1;  // 0x0(0x1)
	char bBuildAdjacencyBuffer : 1;  // 0x0(0x1)
	char bUseHighPrecisionTangentBasis : 1;  // 0x0(0x1)
	char bUseFullPrecisionUVs : 1;  // 0x0(0x1)
	char bGenerateLightmapUVs : 1;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	int32_t MinLightmapResolution;  // 0x4(0x4)
	int32_t SrcLightmapIndex;  // 0x8(0x4)
	int32_t DstLightmapIndex;  // 0xC(0x4)

}; 
// Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserData
// Size: 0x10(Inherited: 0x0) 
struct FGetDatasmithUserData
{
	struct UObject* Object;  // 0x0(0x8)
	struct UDatasmithAssetUserData* ReturnValue;  // 0x8(0x8)

}; 
// Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataKeysAndValuesForValue
// Size: 0x38(Inherited: 0x0) 
struct FGetDatasmithUserDataKeysAndValuesForValue
{
	struct UObject* Object;  // 0x0(0x8)
	struct FString StringToMatch;  // 0x8(0x10)
	struct TArray<struct FName> OutKeys;  // 0x18(0x10)
	struct TArray<struct FString> OutValues;  // 0x28(0x10)

}; 
// Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataValueForKey
// Size: 0x20(Inherited: 0x0) 
struct FGetDatasmithUserDataValueForKey
{
	struct UObject* Object;  // 0x0(0x8)
	struct FName Key;  // 0x8(0x8)
	struct FString ReturnValue;  // 0x10(0x10)

}; 
