#pragma once 
#include "SDK.h" 
 
 
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetClippingPlanes
// Size: 0x8(Inherited: 0x0) 
struct FSetClippingPlanes
{
	float Near;  // 0x0(0x4)
	float Far;  // 0x4(0x4)

}; 
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsDeviceTracking
// Size: 0x10(Inherited: 0x0) 
struct FIsDeviceTracking
{
	struct FXRDeviceId XRDeviceId;  // 0x0(0xC)
	char pad_12_1 : 7;  // 0xC(0x1)
	bool ReturnValue : 1;  // 0xC(0x1)
	char pad_13[3];  // 0xD(0x3)

}; 
// DelegateFunction HeadMountedDisplay.XRDeviceOnDisconnectDelegate__DelegateSignature
// Size: 0x10(Inherited: 0x0) 
struct FXRDeviceOnDisconnectDelegate__DelegateSignature
{
	struct FString OutReason;  // 0x0(0x10)

}; 
// ScriptStruct HeadMountedDisplay.XRDeviceId
// Size: 0xC(Inherited: 0x0) 
struct FXRDeviceId
{
	struct FName SystemName;  // 0x0(0x8)
	int32_t DeviceID;  // 0x8(0x4)

}; 
// ScriptStruct HeadMountedDisplay.XRGestureConfig
// Size: 0x6(Inherited: 0x0) 
struct FXRGestureConfig
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bTap : 1;  // 0x0(0x1)
	char pad_1_1 : 7;  // 0x1(0x1)
	bool bHold : 1;  // 0x1(0x1)
	uint8_t  AxisGesture;  // 0x2(0x1)
	char pad_3_1 : 7;  // 0x3(0x1)
	bool bNavigationAxisX : 1;  // 0x3(0x1)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool bNavigationAxisY : 1;  // 0x4(0x1)
	char pad_5_1 : 7;  // 0x5(0x1)
	bool bNavigationAxisZ : 1;  // 0x5(0x1)

}; 
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetTrackingOrigin
// Size: 0x1(Inherited: 0x0) 
struct FSetTrackingOrigin
{
	char EHMDTrackingOrigin Origin;  // 0x0(0x1)

}; 
// DelegateFunction HeadMountedDisplay.XRTimedInputActionDelegate__DelegateSignature
// Size: 0x10(Inherited: 0x0) 
struct FXRTimedInputActionDelegate__DelegateSignature
{
	float Value;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct FTimespan Time;  // 0x8(0x8)

}; 
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayConnected
// Size: 0x1(Inherited: 0x0) 
struct FIsHeadMountedDisplayConnected
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function HeadMountedDisplay.MotionControllerComponent.SetTrackingSource
// Size: 0x1(Inherited: 0x0) 
struct FSetTrackingSource
{
	uint8_t  NewSource;  // 0x0(0x1)

}; 
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenMode
// Size: 0x1(Inherited: 0x0) 
struct FSetSpectatorScreenMode
{
	uint8_t  mode;  // 0x0(0x1)

}; 
// DelegateFunction HeadMountedDisplay.DeviceModelLoadedDelegate__DelegateSignature
// Size: 0x8(Inherited: 0x0) 
struct FDeviceModelLoadedDelegate__DelegateSignature
{
	struct UPrimitiveComponent* LoadedComponent;  // 0x0(0x8)

}; 
// ScriptStruct HeadMountedDisplay.XRMotionControllerData
// Size: 0xA0(Inherited: 0x0) 
struct FXRMotionControllerData
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bValid : 1;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	struct FName DeviceName;  // 0x4(0x8)
	struct FGuid ApplicationInstanceID;  // 0xC(0x10)
	uint8_t  DeviceVisualType;  // 0x1C(0x1)
	uint8_t  HandIndex;  // 0x1D(0x1)
	uint8_t  TrackingStatus;  // 0x1E(0x1)
	char pad_31[1];  // 0x1F(0x1)
	struct FVector GripPosition;  // 0x20(0xC)
	char pad_44[4];  // 0x2C(0x4)
	struct FQuat GripRotation;  // 0x30(0x10)
	struct FVector AimPosition;  // 0x40(0xC)
	char pad_76[4];  // 0x4C(0x4)
	struct FQuat AimRotation;  // 0x50(0x10)
	struct TArray<struct FVector> HandKeyPositions;  // 0x60(0x10)
	struct TArray<struct FQuat> HandKeyRotations;  // 0x70(0x10)
	struct TArray<float> HandKeyRadii;  // 0x80(0x10)
	char pad_144_1 : 7;  // 0x90(0x1)
	bool bIsGrasped : 1;  // 0x90(0x1)
	char pad_145[15];  // 0x91(0xF)

}; 
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetNumOfTrackingSensors
// Size: 0x4(Inherited: 0x0) 
struct FGetNumOfTrackingSensors
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ClearXRTimedInputActionDelegate
// Size: 0x8(Inherited: 0x0) 
struct FClearXRTimedInputActionDelegate
{
	struct FName ActionPath;  // 0x0(0x8)

}; 
// ScriptStruct HeadMountedDisplay.XRHMDData
// Size: 0x40(Inherited: 0x0) 
struct FXRHMDData
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bValid : 1;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	struct FName DeviceName;  // 0x4(0x8)
	struct FGuid ApplicationInstanceID;  // 0xC(0x10)
	uint8_t  TrackingStatus;  // 0x1C(0x1)
	char pad_29[3];  // 0x1D(0x3)
	struct FVector position;  // 0x20(0xC)
	char pad_44[4];  // 0x2C(0x4)
	struct FQuat Rotation;  // 0x30(0x10)

}; 
// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingForComponent
// Size: 0x10(Inherited: 0x0) 
struct FEnableMotionTrackingForComponent
{
	struct UMotionControllerComponent* MotionControllerComponent;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.BreakKey
// Size: 0x58(Inherited: 0x0) 
struct FBreakKey
{
	struct FKey InKey;  // 0x0(0x18)
	struct FString InteractionProfile;  // 0x18(0x10)
	uint8_t  Hand;  // 0x28(0x1)
	char pad_41[3];  // 0x29(0x3)
	struct FName MotionSource;  // 0x2C(0x8)
	char pad_52[4];  // 0x34(0x4)
	struct FString Indentifier;  // 0x38(0x10)
	struct FString Component;  // 0x48(0x10)

}; 
// Function HeadMountedDisplay.MotionControllerComponent.SetCustomDisplayMesh
// Size: 0x8(Inherited: 0x0) 
struct FSetCustomDisplayMesh
{
	struct UStaticMesh* NewDisplayMesh;  // 0x0(0x8)

}; 
// Function HeadMountedDisplay.MotionControllerComponent.GetParameterValue
// Size: 0x10(Inherited: 0x0) 
struct FGetParameterValue
{
	struct FName InName;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool bValueFound : 1;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)
	float ReturnValue;  // 0xC(0x4)

}; 
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.CalibrateExternalTrackingToHMD
// Size: 0x30(Inherited: 0x0) 
struct FCalibrateExternalTrackingToHMD
{
	struct FTransform ExternalTrackingTransform;  // 0x0(0x30)

}; 
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ConfigureGestures
// Size: 0x7(Inherited: 0x0) 
struct FConfigureGestures
{
	struct FXRGestureConfig GestureConfig;  // 0x0(0x6)
	char pad_6_1 : 7;  // 0x6(0x1)
	bool ReturnValue : 1;  // 0x6(0x1)

}; 
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetScreenPercentage
// Size: 0x4(Inherited: 0x0) 
struct FGetScreenPercentage
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ConnectRemoteXRDevice
// Size: 0x18(Inherited: 0x0) 
struct FConnectRemoteXRDevice
{
	struct FString IpAddress;  // 0x0(0x10)
	int32_t BitRate;  // 0x10(0x4)
	char EXRDeviceConnectionResult ReturnValue;  // 0x14(0x1)
	char pad_21[3];  // 0x15(0x3)

}; 
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableHMD
// Size: 0x2(Inherited: 0x0) 
struct FEnableHMD
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bEnable : 1;  // 0x0(0x1)
	char pad_1_1 : 7;  // 0x1(0x1)
	bool ReturnValue : 1;  // 0x1(0x1)

}; 
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingToWorldTransform
// Size: 0x40(Inherited: 0x0) 
struct FGetTrackingToWorldTransform
{
	struct UObject* WorldContext;  // 0x0(0x8)
	char pad_8[8];  // 0x8(0x8)
	struct FTransform ReturnValue;  // 0x10(0x30)

}; 
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableLowPersistenceMode
// Size: 0x1(Inherited: 0x0) 
struct FEnableLowPersistenceMode
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bEnable : 1;  // 0x0(0x1)

}; 
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingSensorParameters
// Size: 0x3C(Inherited: 0x0) 
struct FGetTrackingSensorParameters
{
	struct FVector Origin;  // 0x0(0xC)
	struct FRotator Rotation;  // 0xC(0xC)
	float LeftFOV;  // 0x18(0x4)
	float RightFOV;  // 0x1C(0x4)
	float TopFOV;  // 0x20(0x4)
	float BottomFOV;  // 0x24(0x4)
	float Distance;  // 0x28(0x4)
	float NearPlane;  // 0x2C(0x4)
	float FarPlane;  // 0x30(0x4)
	char pad_52_1 : 7;  // 0x34(0x1)
	bool IsActive : 1;  // 0x34(0x1)
	char pad_53[3];  // 0x35(0x3)
	int32_t Index;  // 0x38(0x4)

}; 
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnumerateTrackedDevices
// Size: 0x20(Inherited: 0x0) 
struct FEnumerateTrackedDevices
{
	struct FName SystemId;  // 0x0(0x8)
	uint8_t  DeviceType;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)
	struct TArray<struct FXRDeviceId> ReturnValue;  // 0x10(0x10)

}; 
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetControllerTransformForTime
// Size: 0x60(Inherited: 0x0) 
struct FGetControllerTransformForTime
{
	struct UObject* WorldContext;  // 0x0(0x8)
	int32_t ControllerIndex;  // 0x8(0x4)
	struct FName MotionSource;  // 0xC(0x8)
	char pad_20[4];  // 0x14(0x4)
	struct FTimespan Time;  // 0x18(0x8)
	char pad_32_1 : 7;  // 0x20(0x1)
	bool bTimeWasUsed : 1;  // 0x20(0x1)
	char pad_33[3];  // 0x21(0x3)
	struct FRotator Orientation;  // 0x24(0xC)
	struct FVector position;  // 0x30(0xC)
	char pad_60_1 : 7;  // 0x3C(0x1)
	bool bProvidedLinearVelocity : 1;  // 0x3C(0x1)
	char pad_61[3];  // 0x3D(0x3)
	struct FVector LinearVelocity;  // 0x40(0xC)
	char pad_76_1 : 7;  // 0x4C(0x1)
	bool bProvidedAngularVelocity : 1;  // 0x4C(0x1)
	char pad_77[3];  // 0x4D(0x3)
	struct FVector AngularVelocityRadPerSec;  // 0x50(0xC)
	char pad_92_1 : 7;  // 0x5C(0x1)
	bool ReturnValue : 1;  // 0x5C(0x1)
	char pad_93[3];  // 0x5D(0x3)

}; 
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDData
// Size: 0x50(Inherited: 0x0) 
struct FGetHMDData
{
	struct UObject* WorldContext;  // 0x0(0x8)
	char pad_8[8];  // 0x8(0x8)
	struct FXRHMDData HMDData;  // 0x10(0x40)

}; 
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDevicePose
// Size: 0x2C(Inherited: 0x0) 
struct FGetDevicePose
{
	struct FXRDeviceId XRDeviceId;  // 0x0(0xC)
	char pad_12_1 : 7;  // 0xC(0x1)
	bool bIsTracked : 1;  // 0xC(0x1)
	char pad_13[3];  // 0xD(0x3)
	struct FRotator Orientation;  // 0x10(0xC)
	char pad_28_1 : 7;  // 0x1C(0x1)
	bool bHasPositionalTracking : 1;  // 0x1C(0x1)
	char pad_29[3];  // 0x1D(0x3)
	struct FVector position;  // 0x20(0xC)

}; 
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDeviceWorldPose
// Size: 0x38(Inherited: 0x0) 
struct FGetDeviceWorldPose
{
	struct UObject* WorldContext;  // 0x0(0x8)
	struct FXRDeviceId XRDeviceId;  // 0x8(0xC)
	char pad_20_1 : 7;  // 0x14(0x1)
	bool bIsTracked : 1;  // 0x14(0x1)
	char pad_21[3];  // 0x15(0x3)
	struct FRotator Orientation;  // 0x18(0xC)
	char pad_36_1 : 7;  // 0x24(0x1)
	bool bHasPositionalTracking : 1;  // 0x24(0x1)
	char pad_37[3];  // 0x25(0x3)
	struct FVector position;  // 0x28(0xC)
	char pad_52[4];  // 0x34(0x4)

}; 
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenModeTexturePlusEyeLayout
// Size: 0x24(Inherited: 0x0) 
struct FSetSpectatorScreenModeTexturePlusEyeLayout
{
	struct FVector2D EyeRectMin;  // 0x0(0x8)
	struct FVector2D EyeRectMax;  // 0x8(0x8)
	struct FVector2D TextureRectMin;  // 0x10(0x8)
	struct FVector2D TextureRectMax;  // 0x18(0x8)
	char pad_32_1 : 7;  // 0x20(0x1)
	bool bDrawEyeFirst : 1;  // 0x20(0x1)
	char pad_33_1 : 7;  // 0x21(0x1)
	bool bClearBlack : 1;  // 0x21(0x1)
	char pad_34_1 : 7;  // 0x22(0x1)
	bool bUseAlpha : 1;  // 0x22(0x1)
	char pad_35[1];  // 0x23(0x1)

}; 
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDDeviceName
// Size: 0x8(Inherited: 0x0) 
struct FGetHMDDeviceName
{
	struct FName ReturnValue;  // 0x0(0x8)

}; 
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetOrientationAndPosition
// Size: 0x18(Inherited: 0x0) 
struct FGetOrientationAndPosition
{
	struct FRotator DeviceRotation;  // 0x0(0xC)
	struct FVector DevicePosition;  // 0xC(0xC)

}; 
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDWornState
// Size: 0x1(Inherited: 0x0) 
struct FGetHMDWornState
{
	char EHMDWornState ReturnValue;  // 0x0(0x1)

}; 
// Function HeadMountedDisplay.MotionControllerComponent.SetTrackingMotionSource
// Size: 0x8(Inherited: 0x0) 
struct FSetTrackingMotionSource
{
	struct FName NewSource;  // 0x0(0x8)

}; 
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetMotionControllerData
// Size: 0xB0(Inherited: 0x0) 
struct FGetMotionControllerData
{
	struct UObject* WorldContext;  // 0x0(0x8)
	uint8_t  Hand;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)
	struct FXRMotionControllerData MotionControllerData;  // 0x10(0xA0)

}; 
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPixelDensity
// Size: 0x4(Inherited: 0x0) 
struct FGetPixelDensity
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPlayAreaBounds
// Size: 0xC(Inherited: 0x0) 
struct FGetPlayAreaBounds
{
	char EHMDTrackingOrigin Origin;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	struct FVector2D ReturnValue;  // 0x4(0x8)

}; 
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPositionalTrackingCameraParameters
// Size: 0x2C(Inherited: 0x0) 
struct FGetPositionalTrackingCameraParameters
{
	struct FVector CameraOrigin;  // 0x0(0xC)
	struct FRotator CameraRotation;  // 0xC(0xC)
	float HFOV;  // 0x18(0x4)
	float VFOV;  // 0x1C(0x4)
	float CameraDistance;  // 0x20(0x4)
	float NearPlane;  // 0x24(0x4)
	float FarPlane;  // 0x28(0x4)

}; 
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingOrigin
// Size: 0x1(Inherited: 0x0) 
struct FGetTrackingOrigin
{
	char EHMDTrackingOrigin ReturnValue;  // 0x0(0x1)

}; 
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetVersionString
// Size: 0x10(Inherited: 0x0) 
struct FGetVersionString
{
	struct FString ReturnValue;  // 0x0(0x10)

}; 
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetVRFocusState
// Size: 0x2(Inherited: 0x0) 
struct FGetVRFocusState
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bUseFocus : 1;  // 0x0(0x1)
	char pad_1_1 : 7;  // 0x1(0x1)
	bool bHasFocus : 1;  // 0x1(0x1)

}; 
// Function HeadMountedDisplay.MotionControllerComponent.SetAssociatedPlayerIndex
// Size: 0x4(Inherited: 0x0) 
struct FSetAssociatedPlayerIndex
{
	int32_t NewPlayer;  // 0x0(0x4)

}; 
// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMaximumMotionTrackedControllerCount
// Size: 0x4(Inherited: 0x0) 
struct FGetMaximumMotionTrackedControllerCount
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.UpdateExternalTrackingHMDPosition
// Size: 0x30(Inherited: 0x0) 
struct FUpdateExternalTrackingHMDPosition
{
	struct FTransform ExternalTrackingTransform;  // 0x0(0x30)

}; 
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetWorldToMetersScale
// Size: 0x10(Inherited: 0x0) 
struct FGetWorldToMetersScale
{
	struct UObject* WorldContext;  // 0x0(0x8)
	float ReturnValue;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ResetOrientationAndPosition
// Size: 0x8(Inherited: 0x0) 
struct FResetOrientationAndPosition
{
	float Yaw;  // 0x0(0x4)
	char EOrientPositionSelector Options;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)

}; 
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetXRSystemFlags
// Size: 0x4(Inherited: 0x0) 
struct FGetXRSystemFlags
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function HeadMountedDisplay.MotionControllerComponent.SetDisplayModelSource
// Size: 0x8(Inherited: 0x0) 
struct FSetDisplayModelSource
{
	struct FName NewDisplayModelSource;  // 0x0(0x8)

}; 
// Function HeadMountedDisplay.MotionControllerComponent.IsTracked
// Size: 0x1(Inherited: 0x0) 
struct FIsTracked
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.HasValidTrackingPosition
// Size: 0x1(Inherited: 0x0) 
struct FHasValidTrackingPosition
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayEnabled
// Size: 0x1(Inherited: 0x0) 
struct FIsHeadMountedDisplayEnabled
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetWorldToMetersScale
// Size: 0x10(Inherited: 0x0) 
struct FSetWorldToMetersScale
{
	struct UObject* WorldContext;  // 0x0(0x8)
	float NewScale;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfControllersForPlayer
// Size: 0x4(Inherited: 0x0) 
struct FDisableMotionTrackingOfControllersForPlayer
{
	int32_t PlayerIndex;  // 0x0(0x4)

}; 
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsInLowPersistenceMode
// Size: 0x1(Inherited: 0x0) 
struct FIsInLowPersistenceMode
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsSpectatorScreenModeControllable
// Size: 0x1(Inherited: 0x0) 
struct FIsSpectatorScreenModeControllable
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingForComponent
// Size: 0x8(Inherited: 0x0) 
struct FDisableMotionTrackingForComponent
{
	struct UMotionControllerComponent* MotionControllerComponent;  // 0x0(0x8)

}; 
// Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.AddLoadingScreenSplash
// Size: 0x38(Inherited: 0x0) 
struct FAddLoadingScreenSplash
{
	struct UTexture* Texture;  // 0x0(0x8)
	struct FVector Translation;  // 0x8(0xC)
	struct FRotator Rotation;  // 0x14(0xC)
	struct FVector2D Size;  // 0x20(0x8)
	struct FRotator DeltaRotation;  // 0x28(0xC)
	char pad_52_1 : 7;  // 0x34(0x1)
	bool bClearBeforeAdd : 1;  // 0x34(0x1)
	char pad_53[3];  // 0x35(0x3)

}; 
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenTexture
// Size: 0x8(Inherited: 0x0) 
struct FSetSpectatorScreenTexture
{
	struct UTexture* InTexture;  // 0x0(0x8)

}; 
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetXRDisconnectDelegate
// Size: 0x10(Inherited: 0x0) 
struct FSetXRDisconnectDelegate
{
	struct FDelegate InDisconnectedDelegate;  // 0x0(0x10)

}; 
// Function HeadMountedDisplay.MotionControllerComponent.SetShowDeviceModel
// Size: 0x1(Inherited: 0x0) 
struct FSetShowDeviceModel
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bShowControllerModel : 1;  // 0x0(0x1)

}; 
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetXRTimedInputActionDelegate
// Size: 0x18(Inherited: 0x0) 
struct FSetXRTimedInputActionDelegate
{
	struct FName ActionName;  // 0x0(0x8)
	struct FDelegate InDelegate;  // 0x8(0x10)

}; 
// Function HeadMountedDisplay.HandKeypointConversion.Conv_HandKeypointToInt32
// Size: 0x8(Inherited: 0x0) 
struct FConv_HandKeypointToInt32
{
	uint8_t  Input;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	int32_t ReturnValue;  // 0x4(0x4)

}; 
// Function HeadMountedDisplay.MotionControllerComponent.GetHandJointPosition
// Size: 0x14(Inherited: 0x0) 
struct FGetHandJointPosition
{
	int32_t jointIndex;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool bValueFound : 1;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)
	struct FVector ReturnValue;  // 0x8(0xC)

}; 
// Function HeadMountedDisplay.MotionControllerComponent.GetTrackingSource
// Size: 0x1(Inherited: 0x0) 
struct FGetTrackingSource
{
	uint8_t  ReturnValue;  // 0x0(0x1)

}; 
// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfDevice
// Size: 0x8(Inherited: 0x0) 
struct FDisableMotionTrackingOfDevice
{
	int32_t PlayerIndex;  // 0x0(0x4)
	uint8_t  Hand;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)

}; 
// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfSource
// Size: 0xC(Inherited: 0x0) 
struct FDisableMotionTrackingOfSource
{
	int32_t PlayerIndex;  // 0x0(0x4)
	struct FName SourceName;  // 0x4(0x8)

}; 
// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfDevice
// Size: 0x8(Inherited: 0x0) 
struct FEnableMotionTrackingOfDevice
{
	int32_t PlayerIndex;  // 0x0(0x4)
	uint8_t  Hand;  // 0x4(0x1)
	char pad_5_1 : 7;  // 0x5(0x1)
	bool ReturnValue : 1;  // 0x5(0x1)
	char pad_6[2];  // 0x6(0x2)

}; 
// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfSource
// Size: 0x10(Inherited: 0x0) 
struct FEnableMotionTrackingOfSource
{
	int32_t PlayerIndex;  // 0x0(0x4)
	struct FName SourceName;  // 0x4(0x8)
	char pad_12_1 : 7;  // 0xC(0x1)
	bool ReturnValue : 1;  // 0xC(0x1)
	char pad_13[3];  // 0xD(0x3)

}; 
// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnumerateMotionSources
// Size: 0x10(Inherited: 0x0) 
struct FEnumerateMotionSources
{
	struct TArray<struct FName> ReturnValue;  // 0x0(0x10)

}; 
// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetActiveTrackingSystemName
// Size: 0x8(Inherited: 0x0) 
struct FGetActiveTrackingSystemName
{
	struct FName ReturnValue;  // 0x0(0x8)

}; 
// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMotionTrackingEnabledControllerCount
// Size: 0x4(Inherited: 0x0) 
struct FGetMotionTrackingEnabledControllerCount
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionSourceTracking
// Size: 0x10(Inherited: 0x0) 
struct FIsMotionSourceTracking
{
	int32_t PlayerIndex;  // 0x0(0x4)
	struct FName SourceName;  // 0x4(0x8)
	char pad_12_1 : 7;  // 0xC(0x1)
	bool ReturnValue : 1;  // 0xC(0x1)
	char pad_13[3];  // 0xD(0x3)

}; 
// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackedDeviceCountManagementNecessary
// Size: 0x1(Inherited: 0x0) 
struct FIsMotionTrackedDeviceCountManagementNecessary
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForComponent
// Size: 0x10(Inherited: 0x0) 
struct FIsMotionTrackingEnabledForComponent
{
	struct UMotionControllerComponent* MotionControllerComponent;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForDevice
// Size: 0x8(Inherited: 0x0) 
struct FIsMotionTrackingEnabledForDevice
{
	int32_t PlayerIndex;  // 0x0(0x4)
	uint8_t  Hand;  // 0x4(0x1)
	char pad_5_1 : 7;  // 0x5(0x1)
	bool ReturnValue : 1;  // 0x5(0x1)
	char pad_6[2];  // 0x6(0x2)

}; 
// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForSource
// Size: 0x10(Inherited: 0x0) 
struct FIsMotionTrackingEnabledForSource
{
	int32_t PlayerIndex;  // 0x0(0x4)
	struct FName SourceName;  // 0x4(0x8)
	char pad_12_1 : 7;  // 0xC(0x1)
	bool ReturnValue : 1;  // 0xC(0x1)
	char pad_13[3];  // 0xD(0x3)

}; 
// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.SetIsControllerMotionTrackingEnabledByDefault
// Size: 0x1(Inherited: 0x0) 
struct FSetIsControllerMotionTrackingEnabledByDefault
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool Enable : 1;  // 0x0(0x1)

}; 
// Function HeadMountedDisplay.XRAssetFunctionLibrary.AddDeviceVisualizationComponentBlocking
// Size: 0x60(Inherited: 0x0) 
struct FAddDeviceVisualizationComponentBlocking
{
	struct AActor* Target;  // 0x0(0x8)
	struct FXRDeviceId XRDeviceId;  // 0x8(0xC)
	char pad_20_1 : 7;  // 0x14(0x1)
	bool bManualAttachment : 1;  // 0x14(0x1)
	char pad_21[11];  // 0x15(0xB)
	struct FTransform RelativeTransform;  // 0x20(0x30)
	struct UPrimitiveComponent* ReturnValue;  // 0x50(0x8)
	char pad_88[8];  // 0x58(0x8)

}; 
// Function HeadMountedDisplay.XRAssetFunctionLibrary.AddNamedDeviceVisualizationComponentBlocking
// Size: 0x70(Inherited: 0x0) 
struct FAddNamedDeviceVisualizationComponentBlocking
{
	struct AActor* Target;  // 0x0(0x8)
	struct FName SystemName;  // 0x8(0x8)
	struct FName DeviceName;  // 0x10(0x8)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool bManualAttachment : 1;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)
	struct FTransform RelativeTransform;  // 0x20(0x30)
	struct FXRDeviceId XRDeviceId;  // 0x50(0xC)
	char pad_92[4];  // 0x5C(0x4)
	struct UPrimitiveComponent* ReturnValue;  // 0x60(0x8)
	char pad_104[8];  // 0x68(0x8)

}; 
// Function HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddDeviceVisualizationComponentAsync
// Size: 0x60(Inherited: 0x0) 
struct FAddDeviceVisualizationComponentAsync
{
	struct AActor* Target;  // 0x0(0x8)
	struct FXRDeviceId XRDeviceId;  // 0x8(0xC)
	char pad_20_1 : 7;  // 0x14(0x1)
	bool bManualAttachment : 1;  // 0x14(0x1)
	char pad_21[11];  // 0x15(0xB)
	struct FTransform RelativeTransform;  // 0x20(0x30)
	struct UPrimitiveComponent* NewComponent;  // 0x50(0x8)
	struct UAsyncTask_LoadXRDeviceVisComponent* ReturnValue;  // 0x58(0x8)

}; 
// Function HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddNamedDeviceVisualizationComponentAsync
// Size: 0x70(Inherited: 0x0) 
struct FAddNamedDeviceVisualizationComponentAsync
{
	struct AActor* Target;  // 0x0(0x8)
	struct FName SystemName;  // 0x8(0x8)
	struct FName DeviceName;  // 0x10(0x8)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool bManualAttachment : 1;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)
	struct FTransform RelativeTransform;  // 0x20(0x30)
	struct FXRDeviceId XRDeviceId;  // 0x50(0xC)
	char pad_92[4];  // 0x5C(0x4)
	struct UPrimitiveComponent* NewComponent;  // 0x60(0x8)
	struct UAsyncTask_LoadXRDeviceVisComponent* ReturnValue;  // 0x68(0x8)

}; 
// Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.SetLoadingScreen
// Size: 0x20(Inherited: 0x0) 
struct FSetLoadingScreen
{
	struct UTexture* Texture;  // 0x0(0x8)
	struct FVector2D Scale;  // 0x8(0x8)
	struct FVector Offset;  // 0x10(0xC)
	char pad_28_1 : 7;  // 0x1C(0x1)
	bool bShowLoadingMovie : 1;  // 0x1C(0x1)
	char pad_29_1 : 7;  // 0x1D(0x1)
	bool bShowOnSet : 1;  // 0x1D(0x1)
	char pad_30[2];  // 0x1E(0x2)

}; 
