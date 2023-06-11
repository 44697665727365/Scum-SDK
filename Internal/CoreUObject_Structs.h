#pragma once 
#include "SDK.h" 
 
 
// ScriptStruct CoreUObject.JoinabilitySettings
// Size: 0x14(Inherited: 0x0) 
struct FJoinabilitySettings
{
	struct FName SessionName;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool bPublicSearchable : 1;  // 0x8(0x1)
	char pad_9_1 : 7;  // 0x9(0x1)
	bool bAllowInvites : 1;  // 0x9(0x1)
	char pad_10_1 : 7;  // 0xA(0x1)
	bool bJoinViaPresence : 1;  // 0xA(0x1)
	char pad_11_1 : 7;  // 0xB(0x1)
	bool bJoinViaPresenceFriendsOnly : 1;  // 0xB(0x1)
	int32_t MaxPlayers;  // 0xC(0x4)
	int32_t MaxPartySize;  // 0x10(0x4)

}; 
// ScriptStruct CoreUObject.PrimaryAssetType
// Size: 0x8(Inherited: 0x0) 
struct FPrimaryAssetType
{
	struct FName Name;  // 0x0(0x8)

}; 
// ScriptStruct CoreUObject.TwoVectors
// Size: 0x18(Inherited: 0x0) 
struct FTwoVectors
{
	struct FVector v1;  // 0x0(0xC)
	struct FVector v2;  // 0xC(0xC)

}; 
// ScriptStruct CoreUObject.UniqueNetIdWrapper
// Size: 0x1(Inherited: 0x0) 
struct FUniqueNetIdWrapper
{
	char pad_0[1];  // 0x0(0x1)

}; 
// ScriptStruct CoreUObject.Guid
// Size: 0x10(Inherited: 0x0) 
struct FGuid
{
	int32_t A;  // 0x0(0x4)
	int32_t B;  // 0x4(0x4)
	int32_t C;  // 0x8(0x4)
	int32_t D;  // 0xC(0x4)

}; 
// ScriptStruct CoreUObject.ARFilter
// Size: 0xF0(Inherited: 0x0) 
struct FARFilter
{
	struct TArray<struct FName> PackageNames;  // 0x0(0x10)
	struct TArray<struct FName> PackagePaths;  // 0x10(0x10)
	struct TArray<struct FName> ObjectPaths;  // 0x20(0x10)
	struct TArray<struct FName> ClassNames;  // 0x30(0x10)
	char pad_64[80];  // 0x40(0x50)
	struct TSet<struct FName> RecursiveClassesExclusionSet;  // 0x90(0x50)
	char pad_224_1 : 7;  // 0xE0(0x1)
	bool bRecursivePaths : 1;  // 0xE0(0x1)
	char pad_225_1 : 7;  // 0xE1(0x1)
	bool bRecursiveClasses : 1;  // 0xE1(0x1)
	char pad_226_1 : 7;  // 0xE2(0x1)
	bool bIncludeOnlyOnDiskAssets : 1;  // 0xE2(0x1)
	char pad_227[13];  // 0xE3(0xD)

}; 
// ScriptStruct CoreUObject.Vector2D
// Size: 0x8(Inherited: 0x0) 
struct FVector2D
{
	float X;  // 0x0(0x4)
	float Y;  // 0x4(0x4)

}; 
// ScriptStruct CoreUObject.FallbackStruct
// Size: 0x1(Inherited: 0x0) 
struct FFallbackStruct
{
	char pad_0[1];  // 0x0(0x1)

}; 
// ScriptStruct CoreUObject.OrientedBox
// Size: 0x3C(Inherited: 0x0) 
struct FOrientedBox
{
	struct FVector Center;  // 0x0(0xC)
	struct FVector AxisX;  // 0xC(0xC)
	struct FVector AxisY;  // 0x18(0xC)
	struct FVector AxisZ;  // 0x24(0xC)
	float ExtentX;  // 0x30(0x4)
	float ExtentY;  // 0x34(0x4)
	float ExtentZ;  // 0x38(0x4)

}; 
// ScriptStruct CoreUObject.Box
// Size: 0x1C(Inherited: 0x0) 
struct FBox
{
	struct FVector Min;  // 0x0(0xC)
	struct FVector Max;  // 0xC(0xC)
	char IsValid;  // 0x18(0x1)
	char pad_25[3];  // 0x19(0x3)

}; 
// ScriptStruct CoreUObject.Vector4
// Size: 0x10(Inherited: 0x0) 
struct FVector4
{
	float X;  // 0x0(0x4)
	float Y;  // 0x4(0x4)
	float Z;  // 0x8(0x4)
	float W;  // 0xC(0x4)

}; 
// ScriptStruct CoreUObject.PackedRGBA16N
// Size: 0x8(Inherited: 0x0) 
struct FPackedRGBA16N
{
	int32_t XY;  // 0x0(0x4)
	int32_t ZW;  // 0x4(0x4)

}; 
// ScriptStruct CoreUObject.Rotator
// Size: 0xC(Inherited: 0x0) 
struct FRotator
{
	float Pitch;  // 0x0(0x4)
	float Yaw;  // 0x4(0x4)
	float Roll;  // 0x8(0x4)

}; 
// ScriptStruct CoreUObject.Vector
// Size: 0xC(Inherited: 0x0) 
struct FVector
{
	float X;  // 0x0(0x4)
	float Y;  // 0x4(0x4)
	float Z;  // 0x8(0x4)

}; 
// ScriptStruct CoreUObject.InterpCurveQuat
// Size: 0x18(Inherited: 0x0) 
struct FInterpCurveQuat
{
	struct TArray<struct FInterpCurvePointQuat> Points;  // 0x0(0x10)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool bIsLooped : 1;  // 0x10(0x1)
	char pad_17[3];  // 0x11(0x3)
	float LoopKeyOffset;  // 0x14(0x4)

}; 
// ScriptStruct CoreUObject.Plane
// Size: 0x10(Inherited: 0xC) 
struct FPlane : public FVector
{
	float W;  // 0xC(0x4)

}; 
// ScriptStruct CoreUObject.Int32Interval
// Size: 0x8(Inherited: 0x0) 
struct FInt32Interval
{
	int32_t Min;  // 0x0(0x4)
	int32_t Max;  // 0x4(0x4)

}; 
// ScriptStruct CoreUObject.Quat
// Size: 0x10(Inherited: 0x0) 
struct FQuat
{
	float X;  // 0x0(0x4)
	float Y;  // 0x4(0x4)
	float Z;  // 0x8(0x4)
	float W;  // 0xC(0x4)

}; 
// ScriptStruct CoreUObject.PackedNormal
// Size: 0x4(Inherited: 0x0) 
struct FPackedNormal
{
	char X;  // 0x0(0x1)
	char Y;  // 0x1(0x1)
	char Z;  // 0x2(0x1)
	char W;  // 0x3(0x1)

}; 
// Function CoreUObject.Object.ExecuteUbergraph
// Size: 0x4(Inherited: 0x0) 
struct FExecuteUbergraph
{
	int32_t EntryPoint;  // 0x0(0x4)

}; 
// ScriptStruct CoreUObject.PolyglotTextData
// Size: 0xB8(Inherited: 0x0) 
struct FPolyglotTextData
{
	uint8_t  Category;  // 0x0(0x1)
	char pad_1[7];  // 0x1(0x7)
	struct FString NativeCulture;  // 0x8(0x10)
	struct FString Namespace;  // 0x18(0x10)
	struct FString Key;  // 0x28(0x10)
	struct FString NativeString;  // 0x38(0x10)
	struct TMap<struct FString, struct FString> LocalizedStrings;  // 0x48(0x50)
	char pad_152_1 : 7;  // 0x98(0x1)
	bool bIsMinimalPatch : 1;  // 0x98(0x1)
	char pad_153[7];  // 0x99(0x7)
	struct FText CachedText;  // 0xA0(0x18)

}; 
// ScriptStruct CoreUObject.FloatInterval
// Size: 0x8(Inherited: 0x0) 
struct FFloatInterval
{
	float Min;  // 0x0(0x4)
	float Max;  // 0x4(0x4)

}; 
// ScriptStruct CoreUObject.PackedRGB10A2N
// Size: 0x4(Inherited: 0x0) 
struct FPackedRGB10A2N
{
	int32_t Packed;  // 0x0(0x4)

}; 
// ScriptStruct CoreUObject.InterpCurveFloat
// Size: 0x18(Inherited: 0x0) 
struct FInterpCurveFloat
{
	struct TArray<struct FInterpCurvePointFloat> Points;  // 0x0(0x10)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool bIsLooped : 1;  // 0x10(0x1)
	char pad_17[3];  // 0x11(0x3)
	float LoopKeyOffset;  // 0x14(0x4)

}; 
// ScriptStruct CoreUObject.IntPoint
// Size: 0x8(Inherited: 0x0) 
struct FIntPoint
{
	int32_t X;  // 0x0(0x4)
	int32_t Y;  // 0x4(0x4)

}; 
// ScriptStruct CoreUObject.IntVector
// Size: 0xC(Inherited: 0x0) 
struct FIntVector
{
	int32_t X;  // 0x0(0x4)
	int32_t Y;  // 0x4(0x4)
	int32_t Z;  // 0x8(0x4)

}; 
// ScriptStruct CoreUObject.FrameNumberRangeBound
// Size: 0x8(Inherited: 0x0) 
struct FFrameNumberRangeBound
{
	char ERangeBoundTypes Type;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	struct FFrameNumber Value;  // 0x4(0x4)

}; 
// ScriptStruct CoreUObject.Color
// Size: 0x4(Inherited: 0x0) 
struct FColor
{
	char B;  // 0x0(0x1)
	char G;  // 0x1(0x1)
	char R;  // 0x2(0x1)
	char A;  // 0x3(0x1)

}; 
// ScriptStruct CoreUObject.LinearColor
// Size: 0x10(Inherited: 0x0) 
struct FLinearColor
{
	float R;  // 0x0(0x4)
	float G;  // 0x4(0x4)
	float B;  // 0x8(0x4)
	float A;  // 0xC(0x4)

}; 
// ScriptStruct CoreUObject.Box2D
// Size: 0x14(Inherited: 0x0) 
struct FBox2D
{
	struct FVector2D Min;  // 0x0(0x8)
	struct FVector2D Max;  // 0x8(0x8)
	char bIsValid;  // 0x10(0x1)
	char pad_17[3];  // 0x11(0x3)

}; 
// ScriptStruct CoreUObject.FloatRange
// Size: 0x10(Inherited: 0x0) 
struct FFloatRange
{
	struct FFloatRangeBound LowerBound;  // 0x0(0x8)
	struct FFloatRangeBound UpperBound;  // 0x8(0x8)

}; 
// ScriptStruct CoreUObject.InterpCurvePointTwoVectors
// Size: 0x50(Inherited: 0x0) 
struct FInterpCurvePointTwoVectors
{
	float InVal;  // 0x0(0x4)
	struct FTwoVectors OutVal;  // 0x4(0x18)
	struct FTwoVectors ArriveTangent;  // 0x1C(0x18)
	struct FTwoVectors LeaveTangent;  // 0x34(0x18)
	char EInterpCurveMode InterpMode;  // 0x4C(0x1)
	char pad_77[3];  // 0x4D(0x3)

}; 
// ScriptStruct CoreUObject.BoxSphereBounds
// Size: 0x1C(Inherited: 0x0) 
struct FBoxSphereBounds
{
	struct FVector Origin;  // 0x0(0xC)
	struct FVector BoxExtent;  // 0xC(0xC)
	float SphereRadius;  // 0x18(0x4)

}; 
// ScriptStruct CoreUObject.Matrix
// Size: 0x40(Inherited: 0x0) 
struct FMatrix
{
	struct FPlane XPlane;  // 0x0(0x10)
	struct FPlane YPlane;  // 0x10(0x10)
	struct FPlane ZPlane;  // 0x20(0x10)
	struct FPlane WPlane;  // 0x30(0x10)

}; 
// ScriptStruct CoreUObject.InterpCurvePointFloat
// Size: 0x14(Inherited: 0x0) 
struct FInterpCurvePointFloat
{
	float InVal;  // 0x0(0x4)
	float OutVal;  // 0x4(0x4)
	float ArriveTangent;  // 0x8(0x4)
	float LeaveTangent;  // 0xC(0x4)
	char EInterpCurveMode InterpMode;  // 0x10(0x1)
	char pad_17[3];  // 0x11(0x3)

}; 
// ScriptStruct CoreUObject.InterpCurvePointVector2D
// Size: 0x20(Inherited: 0x0) 
struct FInterpCurvePointVector2D
{
	float InVal;  // 0x0(0x4)
	struct FVector2D OutVal;  // 0x4(0x8)
	struct FVector2D ArriveTangent;  // 0xC(0x8)
	struct FVector2D LeaveTangent;  // 0x14(0x8)
	char EInterpCurveMode InterpMode;  // 0x1C(0x1)
	char pad_29[3];  // 0x1D(0x3)

}; 
// ScriptStruct CoreUObject.InterpCurveVector2D
// Size: 0x18(Inherited: 0x0) 
struct FInterpCurveVector2D
{
	struct TArray<struct FInterpCurvePointVector2D> Points;  // 0x0(0x10)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool bIsLooped : 1;  // 0x10(0x1)
	char pad_17[3];  // 0x11(0x3)
	float LoopKeyOffset;  // 0x14(0x4)

}; 
// ScriptStruct CoreUObject.InterpCurvePointVector
// Size: 0x2C(Inherited: 0x0) 
struct FInterpCurvePointVector
{
	float InVal;  // 0x0(0x4)
	struct FVector OutVal;  // 0x4(0xC)
	struct FVector ArriveTangent;  // 0x10(0xC)
	struct FVector LeaveTangent;  // 0x1C(0xC)
	char EInterpCurveMode InterpMode;  // 0x28(0x1)
	char pad_41[3];  // 0x29(0x3)

}; 
// ScriptStruct CoreUObject.InterpCurveVector
// Size: 0x18(Inherited: 0x0) 
struct FInterpCurveVector
{
	struct TArray<struct FInterpCurvePointVector> Points;  // 0x0(0x10)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool bIsLooped : 1;  // 0x10(0x1)
	char pad_17[3];  // 0x11(0x3)
	float LoopKeyOffset;  // 0x14(0x4)

}; 
// ScriptStruct CoreUObject.Transform
// Size: 0x30(Inherited: 0x0) 
struct FTransform
{
	struct FQuat Rotation;  // 0x0(0x10)
	struct FVector Translation;  // 0x10(0xC)
	char pad_28[4];  // 0x1C(0x4)
	struct FVector Scale3D;  // 0x20(0xC)
	char pad_44[4];  // 0x2C(0x4)

}; 
// ScriptStruct CoreUObject.InterpCurvePointQuat
// Size: 0x50(Inherited: 0x0) 
struct FInterpCurvePointQuat
{
	float InVal;  // 0x0(0x4)
	char pad_4[12];  // 0x4(0xC)
	struct FQuat OutVal;  // 0x10(0x10)
	struct FQuat ArriveTangent;  // 0x20(0x10)
	struct FQuat LeaveTangent;  // 0x30(0x10)
	char EInterpCurveMode InterpMode;  // 0x40(0x1)
	char pad_65[15];  // 0x41(0xF)

}; 
// ScriptStruct CoreUObject.AutomationExecutionEntry
// Size: 0x58(Inherited: 0x0) 
struct FAutomationExecutionEntry
{
	struct FAutomationEvent Event;  // 0x0(0x38)
	struct FString Filename;  // 0x38(0x10)
	int32_t LineNumber;  // 0x48(0x4)
	char pad_76[4];  // 0x4C(0x4)
	struct FDateTime Timestamp;  // 0x50(0x8)

}; 
// ScriptStruct CoreUObject.Timespan
// Size: 0x8(Inherited: 0x0) 
struct FTimespan
{
	char pad_0[8];  // 0x0(0x8)

}; 
// ScriptStruct CoreUObject.InterpCurveTwoVectors
// Size: 0x18(Inherited: 0x0) 
struct FInterpCurveTwoVectors
{
	struct TArray<struct FInterpCurvePointTwoVectors> Points;  // 0x0(0x10)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool bIsLooped : 1;  // 0x10(0x1)
	char pad_17[3];  // 0x11(0x3)
	float LoopKeyOffset;  // 0x14(0x4)

}; 
// ScriptStruct CoreUObject.InterpCurvePointLinearColor
// Size: 0x38(Inherited: 0x0) 
struct FInterpCurvePointLinearColor
{
	float InVal;  // 0x0(0x4)
	struct FLinearColor OutVal;  // 0x4(0x10)
	struct FLinearColor ArriveTangent;  // 0x14(0x10)
	struct FLinearColor LeaveTangent;  // 0x24(0x10)
	char EInterpCurveMode InterpMode;  // 0x34(0x1)
	char pad_53[3];  // 0x35(0x3)

}; 
// ScriptStruct CoreUObject.InterpCurveLinearColor
// Size: 0x18(Inherited: 0x0) 
struct FInterpCurveLinearColor
{
	struct TArray<struct FInterpCurvePointLinearColor> Points;  // 0x0(0x10)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool bIsLooped : 1;  // 0x10(0x1)
	char pad_17[3];  // 0x11(0x3)
	float LoopKeyOffset;  // 0x14(0x4)

}; 
// ScriptStruct CoreUObject.RandomStream
// Size: 0x8(Inherited: 0x0) 
struct FRandomStream
{
	int32_t InitialSeed;  // 0x0(0x4)
	int32_t Seed;  // 0x4(0x4)

}; 
// ScriptStruct CoreUObject.DateTime
// Size: 0x8(Inherited: 0x0) 
struct FDateTime
{
	char pad_0[8];  // 0x0(0x8)

}; 
// ScriptStruct CoreUObject.AssetBundleData
// Size: 0x10(Inherited: 0x0) 
struct FAssetBundleData
{
	struct TArray<struct FAssetBundleEntry> Bundles;  // 0x0(0x10)

}; 
// ScriptStruct CoreUObject.FrameNumber
// Size: 0x4(Inherited: 0x0) 
struct FFrameNumber
{
	int32_t Value;  // 0x0(0x4)

}; 
// ScriptStruct CoreUObject.FrameRate
// Size: 0x8(Inherited: 0x0) 
struct FFrameRate
{
	int32_t Numerator;  // 0x0(0x4)
	int32_t Denominator;  // 0x4(0x4)

}; 
// ScriptStruct CoreUObject.FrameTime
// Size: 0x8(Inherited: 0x0) 
struct FFrameTime
{
	struct FFrameNumber FrameNumber;  // 0x0(0x4)
	float SubFrame;  // 0x4(0x4)

}; 
// ScriptStruct CoreUObject.QualifiedFrameTime
// Size: 0x10(Inherited: 0x0) 
struct FQualifiedFrameTime
{
	struct FFrameTime Time;  // 0x0(0x8)
	struct FFrameRate Rate;  // 0x8(0x8)

}; 
// ScriptStruct CoreUObject.Timecode
// Size: 0x14(Inherited: 0x0) 
struct FTimecode
{
	int32_t Hours;  // 0x0(0x4)
	int32_t Minutes;  // 0x4(0x4)
	int32_t Seconds;  // 0x8(0x4)
	int32_t Frames;  // 0xC(0x4)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool bDropFrameFormat : 1;  // 0x10(0x1)
	char pad_17[3];  // 0x11(0x3)

}; 
// ScriptStruct CoreUObject.SoftObjectPath
// Size: 0x18(Inherited: 0x0) 
struct FSoftObjectPath
{
	struct FName AssetPathName;  // 0x0(0x8)
	struct FString SubPathString;  // 0x8(0x10)

}; 
// ScriptStruct CoreUObject.SoftClassPath
// Size: 0x18(Inherited: 0x18) 
struct FSoftClassPath : public FSoftObjectPath
{

}; 
// ScriptStruct CoreUObject.PrimaryAssetId
// Size: 0x10(Inherited: 0x0) 
struct FPrimaryAssetId
{
	struct FPrimaryAssetType PrimaryAssetType;  // 0x0(0x8)
	struct FName PrimaryAssetName;  // 0x8(0x8)

}; 
// ScriptStruct CoreUObject.FloatRangeBound
// Size: 0x8(Inherited: 0x0) 
struct FFloatRangeBound
{
	char ERangeBoundTypes Type;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	float Value;  // 0x4(0x4)

}; 
// ScriptStruct CoreUObject.Int32RangeBound
// Size: 0x8(Inherited: 0x0) 
struct FInt32RangeBound
{
	char ERangeBoundTypes Type;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	int32_t Value;  // 0x4(0x4)

}; 
// ScriptStruct CoreUObject.Int32Range
// Size: 0x10(Inherited: 0x0) 
struct FInt32Range
{
	struct FInt32RangeBound LowerBound;  // 0x0(0x8)
	struct FInt32RangeBound UpperBound;  // 0x8(0x8)

}; 
// ScriptStruct CoreUObject.FrameNumberRange
// Size: 0x10(Inherited: 0x0) 
struct FFrameNumberRange
{
	struct FFrameNumberRangeBound LowerBound;  // 0x0(0x8)
	struct FFrameNumberRangeBound UpperBound;  // 0x8(0x8)

}; 
// ScriptStruct CoreUObject.AutomationEvent
// Size: 0x38(Inherited: 0x0) 
struct FAutomationEvent
{
	uint8_t  Type;  // 0x0(0x1)
	char pad_1[7];  // 0x1(0x7)
	struct FString Message;  // 0x8(0x10)
	struct FString Context;  // 0x18(0x10)
	struct FGuid Artifact;  // 0x28(0x10)

}; 
// ScriptStruct CoreUObject.AssetBundleEntry
// Size: 0x18(Inherited: 0x0) 
struct FAssetBundleEntry
{
	struct FName BundleName;  // 0x0(0x8)
	struct TArray<struct FSoftObjectPath> BundleAssets;  // 0x8(0x10)

}; 
// ScriptStruct CoreUObject.AssetData
// Size: 0x60(Inherited: 0x0) 
struct FAssetData
{
	struct FName ObjectPath;  // 0x0(0x8)
	struct FName PackageName;  // 0x8(0x8)
	struct FName PackagePath;  // 0x10(0x8)
	struct FName AssetName;  // 0x18(0x8)
	struct FName AssetClass;  // 0x20(0x8)
	char pad_40[56];  // 0x28(0x38)

}; 
// ScriptStruct CoreUObject.TestUninitializedScriptStructMembersTest
// Size: 0x18(Inherited: 0x0) 
struct FTestUninitializedScriptStructMembersTest
{
	struct UObject* UninitializedObjectReference;  // 0x0(0x8)
	struct UObject* InitializedObjectReference;  // 0x8(0x8)
	float UnusedValue;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)

}; 
