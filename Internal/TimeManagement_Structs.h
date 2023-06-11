#pragma once 
#include "SDK.h" 
 
 
// ScriptStruct TimeManagement.TimedDataInputEvaluationData
// Size: 0x8(Inherited: 0x0) 
struct FTimedDataInputEvaluationData
{
	float DistanceToNewestSampleSeconds;  // 0x0(0x4)
	float DistanceToOldestSampleSeconds;  // 0x4(0x4)

}; 
// Function TimeManagement.TimeManagementBlueprintLibrary.Conv_QualifiedFrameTimeToSeconds
// Size: 0x14(Inherited: 0x0) 
struct FConv_QualifiedFrameTimeToSeconds
{
	struct FQualifiedFrameTime InFrameTime;  // 0x0(0x10)
	float ReturnValue;  // 0x10(0x4)

}; 
// Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_FrameNumberInteger
// Size: 0xC(Inherited: 0x0) 
struct FMultiply_FrameNumberInteger
{
	struct FFrameNumber A;  // 0x0(0x4)
	int32_t B;  // 0x4(0x4)
	struct FFrameNumber ReturnValue;  // 0x8(0x4)

}; 
// ScriptStruct TimeManagement.TimedDataChannelSampleTime
// Size: 0x18(Inherited: 0x0) 
struct FTimedDataChannelSampleTime
{
	char pad_0[24];  // 0x0(0x18)

}; 
// Function TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberFrameNumber
// Size: 0xC(Inherited: 0x0) 
struct FAdd_FrameNumberFrameNumber
{
	struct FFrameNumber A;  // 0x0(0x4)
	struct FFrameNumber B;  // 0x4(0x4)
	struct FFrameNumber ReturnValue;  // 0x8(0x4)

}; 
// Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameRateToSeconds
// Size: 0xC(Inherited: 0x0) 
struct FConv_FrameRateToSeconds
{
	struct FFrameRate InFrameRate;  // 0x0(0x8)
	float ReturnValue;  // 0x8(0x4)

}; 
// Function TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberInteger
// Size: 0xC(Inherited: 0x0) 
struct FAdd_FrameNumberInteger
{
	struct FFrameNumber A;  // 0x0(0x4)
	int32_t B;  // 0x4(0x4)
	struct FFrameNumber ReturnValue;  // 0x8(0x4)

}; 
// Function TimeManagement.TimeManagementBlueprintLibrary.IsValid_Framerate
// Size: 0xC(Inherited: 0x0) 
struct FIsValid_Framerate
{
	struct FFrameRate InFrameRate;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)

}; 
// Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameNumberToInteger
// Size: 0x8(Inherited: 0x0) 
struct FConv_FrameNumberToInteger
{
	struct FFrameNumber InFrameNumber;  // 0x0(0x4)
	int32_t ReturnValue;  // 0x4(0x4)

}; 
// Function TimeManagement.TimeManagementBlueprintLibrary.Conv_TimecodeToString
// Size: 0x28(Inherited: 0x0) 
struct FConv_TimecodeToString
{
	struct FTimecode InTimecode;  // 0x0(0x14)
	char pad_20_1 : 7;  // 0x14(0x1)
	bool bForceSignDisplay : 1;  // 0x14(0x1)
	char pad_21[3];  // 0x15(0x3)
	struct FString ReturnValue;  // 0x18(0x10)

}; 
// Function TimeManagement.TimeManagementBlueprintLibrary.Divide_FrameNumberInteger
// Size: 0xC(Inherited: 0x0) 
struct FDivide_FrameNumberInteger
{
	struct FFrameNumber A;  // 0x0(0x4)
	int32_t B;  // 0x4(0x4)
	struct FFrameNumber ReturnValue;  // 0x8(0x4)

}; 
// Function TimeManagement.TimeManagementBlueprintLibrary.GetTimecode
// Size: 0x14(Inherited: 0x0) 
struct FGetTimecode
{
	struct FTimecode ReturnValue;  // 0x0(0x14)

}; 
// Function TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberFrameNumber
// Size: 0xC(Inherited: 0x0) 
struct FSubtract_FrameNumberFrameNumber
{
	struct FFrameNumber A;  // 0x0(0x4)
	struct FFrameNumber B;  // 0x4(0x4)
	struct FFrameNumber ReturnValue;  // 0x8(0x4)

}; 
// Function TimeManagement.TimeManagementBlueprintLibrary.GetTimecodeFrameRate
// Size: 0x8(Inherited: 0x0) 
struct FGetTimecodeFrameRate
{
	struct FFrameRate ReturnValue;  // 0x0(0x8)

}; 
// Function TimeManagement.TimeManagementBlueprintLibrary.IsValid_MultipleOf
// Size: 0x14(Inherited: 0x0) 
struct FIsValid_MultipleOf
{
	struct FFrameRate InFrameRate;  // 0x0(0x8)
	struct FFrameRate OtherFramerate;  // 0x8(0x8)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool ReturnValue : 1;  // 0x10(0x1)
	char pad_17[3];  // 0x11(0x3)

}; 
// Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_SecondsFrameRate
// Size: 0x14(Inherited: 0x0) 
struct FMultiply_SecondsFrameRate
{
	float TimeInSeconds;  // 0x0(0x4)
	struct FFrameRate FrameRate;  // 0x4(0x8)
	struct FFrameTime ReturnValue;  // 0xC(0x8)

}; 
// Function TimeManagement.TimeManagementBlueprintLibrary.SnapFrameTimeToRate
// Size: 0x20(Inherited: 0x0) 
struct FSnapFrameTimeToRate
{
	struct FFrameTime SourceTime;  // 0x0(0x8)
	struct FFrameRate SourceRate;  // 0x8(0x8)
	struct FFrameRate SnapToRate;  // 0x10(0x8)
	struct FFrameTime ReturnValue;  // 0x18(0x8)

}; 
// Function TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberInteger
// Size: 0xC(Inherited: 0x0) 
struct FSubtract_FrameNumberInteger
{
	struct FFrameNumber A;  // 0x0(0x4)
	int32_t B;  // 0x4(0x4)
	struct FFrameNumber ReturnValue;  // 0x8(0x4)

}; 
// Function TimeManagement.TimeManagementBlueprintLibrary.TransformTime
// Size: 0x20(Inherited: 0x0) 
struct FTransformTime
{
	struct FFrameTime SourceTime;  // 0x0(0x8)
	struct FFrameRate SourceRate;  // 0x8(0x8)
	struct FFrameRate DestinationRate;  // 0x10(0x8)
	struct FFrameTime ReturnValue;  // 0x18(0x8)

}; 
