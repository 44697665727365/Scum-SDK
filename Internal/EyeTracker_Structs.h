#pragma once 
#include "SDK.h" 
 
 
// ScriptStruct EyeTracker.EyeTrackerGazeData
// Size: 0x28(Inherited: 0x0) 
struct FEyeTrackerGazeData
{
	struct FVector GazeOrigin;  // 0x0(0xC)
	struct FVector GazeDirection;  // 0xC(0xC)
	struct FVector FixationPoint;  // 0x18(0xC)
	float ConfidenceValue;  // 0x24(0x4)

}; 
// ScriptStruct EyeTracker.EyeTrackerStereoGazeData
// Size: 0x40(Inherited: 0x0) 
struct FEyeTrackerStereoGazeData
{
	struct FVector LeftEyeOrigin;  // 0x0(0xC)
	struct FVector LeftEyeDirection;  // 0xC(0xC)
	struct FVector RightEyeOrigin;  // 0x18(0xC)
	struct FVector RightEyeDirection;  // 0x24(0xC)
	struct FVector FixationPoint;  // 0x30(0xC)
	float ConfidenceValue;  // 0x3C(0x4)

}; 
// Function EyeTracker.EyeTrackerFunctionLibrary.GetGazeData
// Size: 0x2C(Inherited: 0x0) 
struct FGetGazeData
{
	struct FEyeTrackerGazeData OutGazeData;  // 0x0(0x28)
	char pad_40_1 : 7;  // 0x28(0x1)
	bool ReturnValue : 1;  // 0x28(0x1)
	char pad_41[3];  // 0x29(0x3)

}; 
// Function EyeTracker.EyeTrackerFunctionLibrary.GetStereoGazeData
// Size: 0x44(Inherited: 0x0) 
struct FGetStereoGazeData
{
	struct FEyeTrackerStereoGazeData OutGazeData;  // 0x0(0x40)
	char pad_64_1 : 7;  // 0x40(0x1)
	bool ReturnValue : 1;  // 0x40(0x1)
	char pad_65[3];  // 0x41(0x3)

}; 
// Function EyeTracker.EyeTrackerFunctionLibrary.IsEyeTrackerConnected
// Size: 0x1(Inherited: 0x0) 
struct FIsEyeTrackerConnected
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function EyeTracker.EyeTrackerFunctionLibrary.SetEyeTrackedPlayer
// Size: 0x8(Inherited: 0x0) 
struct FSetEyeTrackedPlayer
{
	struct APlayerController* PlayerController;  // 0x0(0x8)

}; 
// Function EyeTracker.EyeTrackerFunctionLibrary.IsStereoGazeDataAvailable
// Size: 0x1(Inherited: 0x0) 
struct FIsStereoGazeDataAvailable
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
