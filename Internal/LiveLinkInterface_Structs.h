#pragma once 
#include "SDK.h" 
 
 
// ScriptStruct LiveLinkInterface.LiveLinkCurveElement
// Size: 0xC(Inherited: 0x0) 
struct FLiveLinkCurveElement
{
	struct FName CurveName;  // 0x0(0x8)
	float CurveValue;  // 0x8(0x4)

}; 
// ScriptStruct LiveLinkInterface.CachedSubjectFrame
// Size: 0x160(Inherited: 0x0) 
struct FCachedSubjectFrame
{
	char pad_0[352];  // 0x0(0x160)

}; 
// ScriptStruct LiveLinkInterface.LiveLinkSubjectPreset
// Size: 0x38(Inherited: 0x0) 
struct FLiveLinkSubjectPreset
{
	struct FLiveLinkSubjectKey Key;  // 0x0(0x18)
	ULiveLinkRole* Role;  // 0x18(0x8)
	struct ULiveLinkSubjectSettings* Settings;  // 0x20(0x8)
	struct ULiveLinkVirtualSubject* VirtualSubject;  // 0x28(0x8)
	char pad_48_1 : 7;  // 0x30(0x1)
	bool bEnabled : 1;  // 0x30(0x1)
	char pad_49[7];  // 0x31(0x7)

}; 
// ScriptStruct LiveLinkInterface.SubjectMetadata
// Size: 0x70(Inherited: 0x0) 
struct FSubjectMetadata
{
	struct TMap<struct FName, struct FString> StringMetadata;  // 0x0(0x50)
	struct FTimecode SceneTimecode;  // 0x50(0x14)
	struct FFrameRate SceneFramerate;  // 0x64(0x8)
	char pad_108[4];  // 0x6C(0x4)

}; 
// ScriptStruct LiveLinkInterface.LiveLinkSubjectName
// Size: 0x8(Inherited: 0x0) 
struct FLiveLinkSubjectName
{
	struct FName Name;  // 0x0(0x8)

}; 
// ScriptStruct LiveLinkInterface.LiveLinkSourceHandle
// Size: 0x18(Inherited: 0x0) 
struct FLiveLinkSourceHandle
{
	char pad_0[24];  // 0x0(0x18)

}; 
// ScriptStruct LiveLinkInterface.LiveLinkSubjectKey
// Size: 0x18(Inherited: 0x0) 
struct FLiveLinkSubjectKey
{
	struct FGuid Source;  // 0x0(0x10)
	struct FLiveLinkSubjectName SubjectName;  // 0x10(0x8)

}; 
// ScriptStruct LiveLinkInterface.LiveLinkBaseBlueprintData
// Size: 0x8(Inherited: 0x0) 
struct FLiveLinkBaseBlueprintData
{
	char pad_0[8];  // 0x0(0x8)

}; 
// ScriptStruct LiveLinkInterface.SubjectFrameHandle
// Size: 0x18(Inherited: 0x8) 
struct FSubjectFrameHandle : public FLiveLinkBaseBlueprintData
{
	char pad_8[16];  // 0x8(0x10)

}; 
// ScriptStruct LiveLinkInterface.LiveLinkCameraFrameData
// Size: 0xF0(Inherited: 0xD0) 
struct FLiveLinkCameraFrameData : public FLiveLinkTransformFrameData
{
	float FieldOfView;  // 0xD0(0x4)
	float AspectRatio;  // 0xD4(0x4)
	float FocalLength;  // 0xD8(0x4)
	float Aperture;  // 0xDC(0x4)
	float FocusDistance;  // 0xE0(0x4)
	uint8_t  ProjectionMode;  // 0xE4(0x1)
	char pad_229[11];  // 0xE5(0xB)

}; 
// ScriptStruct LiveLinkInterface.LiveLinkTransform
// Size: 0x20(Inherited: 0x0) 
struct FLiveLinkTransform
{
	char pad_0[32];  // 0x0(0x20)

}; 
// ScriptStruct LiveLinkInterface.LiveLinkBasicBlueprintData
// Size: 0xB8(Inherited: 0x8) 
struct FLiveLinkBasicBlueprintData : public FLiveLinkBaseBlueprintData
{
	struct FLiveLinkBaseStaticData StaticData;  // 0x8(0x10)
	struct FLiveLinkBaseFrameData FrameData;  // 0x18(0xA0)

}; 
// ScriptStruct LiveLinkInterface.LiveLinkBaseFrameData
// Size: 0xA0(Inherited: 0x0) 
struct FLiveLinkBaseFrameData
{
	struct FLiveLinkWorldTime WorldTime;  // 0x0(0x10)
	struct FLiveLinkMetaData MetaData;  // 0x10(0x60)
	struct TArray<float> PropertyValues;  // 0x70(0x10)
	char pad_128[32];  // 0x80(0x20)

}; 
// ScriptStruct LiveLinkInterface.LiveLinkMetaData
// Size: 0x60(Inherited: 0x0) 
struct FLiveLinkMetaData
{
	struct TMap<struct FName, struct FString> StringMetadata;  // 0x0(0x50)
	struct FQualifiedFrameTime SceneTime;  // 0x50(0x10)

}; 
// ScriptStruct LiveLinkInterface.LiveLinkWorldTime
// Size: 0x10(Inherited: 0x0) 
struct FLiveLinkWorldTime
{
	double Time;  // 0x0(0x8)
	double Offset;  // 0x8(0x8)

}; 
// ScriptStruct LiveLinkInterface.LiveLinkTimeCode_Base_DEPRECATED
// Size: 0x10(Inherited: 0x0) 
struct FLiveLinkTimeCode_Base_DEPRECATED
{
	int32_t Seconds;  // 0x0(0x4)
	int32_t Frames;  // 0x4(0x4)
	struct FLiveLinkFrameRate FrameRate;  // 0x8(0x8)

}; 
// ScriptStruct LiveLinkInterface.LiveLinkAnimationFrameData
// Size: 0xB0(Inherited: 0xA0) 
struct FLiveLinkAnimationFrameData : public FLiveLinkBaseFrameData
{
	struct TArray<struct FTransform> Transforms;  // 0xA0(0x10)

}; 
// ScriptStruct LiveLinkInterface.LiveLinkBaseStaticData
// Size: 0x10(Inherited: 0x0) 
struct FLiveLinkBaseStaticData
{
	struct TArray<struct FName> PropertyNames;  // 0x0(0x10)

}; 
// ScriptStruct LiveLinkInterface.LiveLinkInterpolationSettings
// Size: 0x8(Inherited: 0x0) 
struct FLiveLinkInterpolationSettings
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bUseInterpolation : 1;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	float InterpolationOffset;  // 0x4(0x4)

}; 
// ScriptStruct LiveLinkInterface.LiveLinkSkeletonStaticData
// Size: 0x30(Inherited: 0x10) 
struct FLiveLinkSkeletonStaticData : public FLiveLinkBaseStaticData
{
	struct TArray<struct FName> BoneNames;  // 0x10(0x10)
	struct TArray<int32_t> BoneParents;  // 0x20(0x10)

}; 
// ScriptStruct LiveLinkInterface.LiveLinkTime
// Size: 0x18(Inherited: 0x0) 
struct FLiveLinkTime
{
	double WorldTime;  // 0x0(0x8)
	struct FQualifiedFrameTime SceneTime;  // 0x8(0x10)

}; 
// ScriptStruct LiveLinkInterface.LiveLinkFrameRate
// Size: 0x8(Inherited: 0x8) 
struct FLiveLinkFrameRate : public FFrameRate
{

}; 
// ScriptStruct LiveLinkInterface.LiveLinkCameraBlueprintData
// Size: 0x120(Inherited: 0x8) 
struct FLiveLinkCameraBlueprintData : public FLiveLinkBaseBlueprintData
{
	struct FLiveLinkCameraStaticData StaticData;  // 0x8(0x28)
	struct FLiveLinkCameraFrameData FrameData;  // 0x30(0xF0)

}; 
// ScriptStruct LiveLinkInterface.LiveLinkTransformStaticData
// Size: 0x18(Inherited: 0x10) 
struct FLiveLinkTransformStaticData : public FLiveLinkBaseStaticData
{
	char pad_16_1 : 7;  // 0x10(0x1)
	bool bIsLocationSupported : 1;  // 0x10(0x1)
	char pad_17_1 : 7;  // 0x11(0x1)
	bool bIsRotationSupported : 1;  // 0x11(0x1)
	char pad_18_1 : 7;  // 0x12(0x1)
	bool bIsScaleSupported : 1;  // 0x12(0x1)
	char pad_19[5];  // 0x13(0x5)

}; 
// ScriptStruct LiveLinkInterface.LiveLinkTransformFrameData
// Size: 0xD0(Inherited: 0xA0) 
struct FLiveLinkTransformFrameData : public FLiveLinkBaseFrameData
{
	struct FTransform Transform;  // 0xA0(0x30)

}; 
// ScriptStruct LiveLinkInterface.LiveLinkCameraStaticData
// Size: 0x28(Inherited: 0x18) 
struct FLiveLinkCameraStaticData : public FLiveLinkTransformStaticData
{
	char pad_24_1 : 7;  // 0x18(0x1)
	bool bIsFieldOfViewSupported : 1;  // 0x18(0x1)
	char pad_25_1 : 7;  // 0x19(0x1)
	bool bIsAspectRatioSupported : 1;  // 0x19(0x1)
	char pad_26_1 : 7;  // 0x1A(0x1)
	bool bIsFocalLengthSupported : 1;  // 0x1A(0x1)
	char pad_27_1 : 7;  // 0x1B(0x1)
	bool bIsProjectionModeSupported : 1;  // 0x1B(0x1)
	float FilmBackWidth;  // 0x1C(0x4)
	float FilmBackHeight;  // 0x20(0x4)
	char pad_36_1 : 7;  // 0x24(0x1)
	bool bIsApertureSupported : 1;  // 0x24(0x1)
	char pad_37_1 : 7;  // 0x25(0x1)
	bool bIsFocusDistanceSupported : 1;  // 0x25(0x1)
	char pad_38[2];  // 0x26(0x2)

}; 
// ScriptStruct LiveLinkInterface.LiveLinkCurveConversionSettings
// Size: 0x50(Inherited: 0x0) 
struct FLiveLinkCurveConversionSettings
{
	struct TMap<struct FString, struct FSoftObjectPath> CurveConversionAssetMap;  // 0x0(0x50)

}; 
// ScriptStruct LiveLinkInterface.LiveLinkLightBlueprintData
// Size: 0x130(Inherited: 0x8) 
struct FLiveLinkLightBlueprintData : public FLiveLinkBaseBlueprintData
{
	struct FLiveLinkLightStaticData StaticData;  // 0x8(0x28)
	struct FLiveLinkLightFrameData FrameData;  // 0x30(0x100)

}; 
// ScriptStruct LiveLinkInterface.LiveLinkLightFrameData
// Size: 0x100(Inherited: 0xD0) 
struct FLiveLinkLightFrameData : public FLiveLinkTransformFrameData
{
	float Temperature;  // 0xD0(0x4)
	float Intensity;  // 0xD4(0x4)
	struct FColor LightColor;  // 0xD8(0x4)
	float InnerConeAngle;  // 0xDC(0x4)
	float OuterConeAngle;  // 0xE0(0x4)
	float AttenuationRadius;  // 0xE4(0x4)
	float SourceRadius;  // 0xE8(0x4)
	float SoftSourceRadius;  // 0xEC(0x4)
	float SourceLength;  // 0xF0(0x4)
	char pad_244[12];  // 0xF4(0xC)

}; 
// ScriptStruct LiveLinkInterface.LiveLinkSubjectRepresentation
// Size: 0x10(Inherited: 0x0) 
struct FLiveLinkSubjectRepresentation
{
	struct FLiveLinkSubjectName Subject;  // 0x0(0x8)
	ULiveLinkRole* Role;  // 0x8(0x8)

}; 
// ScriptStruct LiveLinkInterface.LiveLinkLightStaticData
// Size: 0x28(Inherited: 0x18) 
struct FLiveLinkLightStaticData : public FLiveLinkTransformStaticData
{
	char pad_24_1 : 7;  // 0x18(0x1)
	bool bIsTemperatureSupported : 1;  // 0x18(0x1)
	char pad_25_1 : 7;  // 0x19(0x1)
	bool bIsIntensitySupported : 1;  // 0x19(0x1)
	char pad_26_1 : 7;  // 0x1A(0x1)
	bool bIsLightColorSupported : 1;  // 0x1A(0x1)
	char pad_27_1 : 7;  // 0x1B(0x1)
	bool bIsInnerConeAngleSupported : 1;  // 0x1B(0x1)
	char pad_28_1 : 7;  // 0x1C(0x1)
	bool bIsOuterConeAngleSupported : 1;  // 0x1C(0x1)
	char pad_29_1 : 7;  // 0x1D(0x1)
	bool bIsAttenuationRadiusSupported : 1;  // 0x1D(0x1)
	char pad_30_1 : 7;  // 0x1E(0x1)
	bool bIsSourceLenghtSupported : 1;  // 0x1E(0x1)
	char pad_31_1 : 7;  // 0x1F(0x1)
	bool bIsSourceRadiusSupported : 1;  // 0x1F(0x1)
	char pad_32_1 : 7;  // 0x20(0x1)
	bool bIsSoftSourceRadiusSupported : 1;  // 0x20(0x1)
	char pad_33[7];  // 0x21(0x7)

}; 
// ScriptStruct LiveLinkInterface.LiveLinkSourcePreset
// Size: 0x30(Inherited: 0x0) 
struct FLiveLinkSourcePreset
{
	struct FGuid Guid;  // 0x0(0x10)
	struct ULiveLinkSourceSettings* Settings;  // 0x10(0x8)
	struct FText SourceType;  // 0x18(0x18)

}; 
// ScriptStruct LiveLinkInterface.LiveLinkRefSkeleton
// Size: 0x20(Inherited: 0x0) 
struct FLiveLinkRefSkeleton
{
	struct TArray<struct FName> BoneNames;  // 0x0(0x10)
	struct TArray<int32_t> BoneParents;  // 0x10(0x10)

}; 
// ScriptStruct LiveLinkInterface.LiveLinkTimeSynchronizationSettings
// Size: 0xC(Inherited: 0x0) 
struct FLiveLinkTimeSynchronizationSettings
{
	struct FFrameRate FrameRate;  // 0x0(0x8)
	struct FFrameNumber FrameOffset;  // 0x8(0x4)

}; 
// ScriptStruct LiveLinkInterface.LiveLinkSourceDebugInfo
// Size: 0x10(Inherited: 0x0) 
struct FLiveLinkSourceDebugInfo
{
	struct FLiveLinkSubjectName SubjectName;  // 0x0(0x8)
	int32_t SnapshotIndex;  // 0x8(0x4)
	int32_t NumberOfBufferAtSnapshot;  // 0xC(0x4)

}; 
// ScriptStruct LiveLinkInterface.LiveLinkSourceBufferManagementSettings
// Size: 0x58(Inherited: 0x0) 
struct FLiveLinkSourceBufferManagementSettings
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bValidEngineTimeEnabled : 1;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	float ValidEngineTime;  // 0x4(0x4)
	float EngineTimeOffset;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)
	double EngineTimeClockOffset;  // 0x10(0x8)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool bGenerateSubFrame : 1;  // 0x18(0x1)
	char pad_25[3];  // 0x19(0x3)
	struct FFrameRate DetectedFrameRate;  // 0x1C(0x8)
	char pad_36_1 : 7;  // 0x24(0x1)
	bool bUseTimecodeSmoothLatest : 1;  // 0x24(0x1)
	char pad_37[3];  // 0x25(0x3)
	struct FFrameRate SourceTimecodeFrameRate;  // 0x28(0x8)
	char pad_48_1 : 7;  // 0x30(0x1)
	bool bValidTimecodeFrameEnabled : 1;  // 0x30(0x1)
	char pad_49[3];  // 0x31(0x3)
	int32_t ValidTimecodeFrame;  // 0x34(0x4)
	float TimecodeFrameOffset;  // 0x38(0x4)
	char pad_60[4];  // 0x3C(0x4)
	double TimecodeClockOffset;  // 0x40(0x8)
	int32_t LatestOffset;  // 0x48(0x4)
	int32_t MaxNumberOfFrameToBuffered;  // 0x4C(0x4)
	char pad_80_1 : 7;  // 0x50(0x1)
	bool bKeepAtLeastOneFrame : 1;  // 0x50(0x1)
	char pad_81[7];  // 0x51(0x7)

}; 
// ScriptStruct LiveLinkInterface.LiveLinkTransformBlueprintData
// Size: 0xF0(Inherited: 0x8) 
struct FLiveLinkTransformBlueprintData : public FLiveLinkBaseBlueprintData
{
	struct FLiveLinkTransformStaticData StaticData;  // 0x8(0x18)
	struct FLiveLinkTransformFrameData FrameData;  // 0x20(0xD0)

}; 
// ScriptStruct LiveLinkInterface.LiveLinkFrameData
// Size: 0x90(Inherited: 0x0) 
struct FLiveLinkFrameData
{
	struct TArray<struct FTransform> Transforms;  // 0x0(0x10)
	struct TArray<struct FLiveLinkCurveElement> CurveElements;  // 0x10(0x10)
	struct FLiveLinkWorldTime WorldTime;  // 0x20(0x10)
	struct FLiveLinkMetaData MetaData;  // 0x30(0x60)

}; 
// ScriptStruct LiveLinkInterface.LiveLinkTimeCode
// Size: 0x10(Inherited: 0x10) 
struct FLiveLinkTimeCode : public FLiveLinkTimeCode_Base_DEPRECATED
{

}; 
