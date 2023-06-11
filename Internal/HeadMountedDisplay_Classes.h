#pragma once 
#include <HeadMountedDisplay_Structs.h>
 
 
 
// Class HeadMountedDisplay.HeadMountedDisplayFunctionLibrary
// Size: 0x28(Inherited: 0x28) 
struct UHeadMountedDisplayFunctionLibrary : public UBlueprintFunctionLibrary
{

	void UpdateExternalTrackingHMDPosition(struct FTransform& ExternalTrackingTransform); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.UpdateExternalTrackingHMDPosition
	void SetXRTimedInputActionDelegate(struct FName& ActionName, struct FDelegate& InDelegate); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetXRTimedInputActionDelegate
	void SetXRDisconnectDelegate(struct FDelegate& InDisconnectedDelegate); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetXRDisconnectDelegate
	void SetWorldToMetersScale(struct UObject* WorldContext, float NewScale); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetWorldToMetersScale
	void SetTrackingOrigin(char EHMDTrackingOrigin Origin); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetTrackingOrigin
	void SetSpectatorScreenTexture(struct UTexture* InTexture); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenTexture
	void SetSpectatorScreenModeTexturePlusEyeLayout(struct FVector2D EyeRectMin, struct FVector2D EyeRectMax, struct FVector2D TextureRectMin, struct FVector2D TextureRectMax, bool bDrawEyeFirst, bool bClearBlack, bool bUseAlpha); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenModeTexturePlusEyeLayout
	void SetSpectatorScreenMode(uint8_t  mode); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenMode
	void SetClippingPlanes(float Near, float Far); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetClippingPlanes
	void ResetOrientationAndPosition(float Yaw, char EOrientPositionSelector Options); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ResetOrientationAndPosition
	bool IsSpectatorScreenModeControllable(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsSpectatorScreenModeControllable
	bool IsInLowPersistenceMode(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsInLowPersistenceMode
	bool IsHeadMountedDisplayEnabled(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayEnabled
	bool IsHeadMountedDisplayConnected(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayConnected
	bool IsDeviceTracking(struct FXRDeviceId& XRDeviceId); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsDeviceTracking
	bool HasValidTrackingPosition(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.HasValidTrackingPosition
	int32_t GetXRSystemFlags(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetXRSystemFlags
	float GetWorldToMetersScale(struct UObject* WorldContext); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetWorldToMetersScale
	void GetVRFocusState(bool& bUseFocus, bool& bHasFocus); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetVRFocusState
	struct FString GetVersionString(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetVersionString
	struct FTransform GetTrackingToWorldTransform(struct UObject* WorldContext); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingToWorldTransform
	void GetTrackingSensorParameters(struct FVector& Origin, struct FRotator& Rotation, float& LeftFOV, float& RightFOV, float& TopFOV, float& BottomFOV, float& Distance, float& NearPlane, float& FarPlane, bool& IsActive, int32_t Index); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingSensorParameters
	char EHMDTrackingOrigin GetTrackingOrigin(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingOrigin
	float GetScreenPercentage(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetScreenPercentage
	void GetPositionalTrackingCameraParameters(struct FVector& CameraOrigin, struct FRotator& CameraRotation, float& HFOV, float& VFOV, float& CameraDistance, float& NearPlane, float& FarPlane); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPositionalTrackingCameraParameters
	struct FVector2D GetPlayAreaBounds(char EHMDTrackingOrigin Origin); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPlayAreaBounds
	float GetPixelDensity(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPixelDensity
	void GetOrientationAndPosition(struct FRotator& DeviceRotation, struct FVector& DevicePosition); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetOrientationAndPosition
	int32_t GetNumOfTrackingSensors(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetNumOfTrackingSensors
	void GetMotionControllerData(struct UObject* WorldContext, uint8_t  Hand, struct FXRMotionControllerData& MotionControllerData); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetMotionControllerData
	char EHMDWornState GetHMDWornState(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDWornState
	struct FName GetHMDDeviceName(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDDeviceName
	void GetHMDData(struct UObject* WorldContext, struct FXRHMDData& HMDData); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDData
	void GetDeviceWorldPose(struct UObject* WorldContext, struct FXRDeviceId& XRDeviceId, bool& bIsTracked, struct FRotator& Orientation, bool& bHasPositionalTracking, struct FVector& position); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDeviceWorldPose
	void GetDevicePose(struct FXRDeviceId& XRDeviceId, bool& bIsTracked, struct FRotator& Orientation, bool& bHasPositionalTracking, struct FVector& position); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDevicePose
	bool GetControllerTransformForTime(struct UObject* WorldContext, int32_t ControllerIndex, struct FName MotionSource, struct FTimespan Time, bool& bTimeWasUsed, struct FRotator& Orientation, struct FVector& position, bool& bProvidedLinearVelocity, struct FVector& LinearVelocity, bool& bProvidedAngularVelocity, struct FVector& AngularVelocityRadPerSec); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetControllerTransformForTime
	struct TArray<struct FXRDeviceId> EnumerateTrackedDevices(struct FName SystemId, uint8_t  DeviceType); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnumerateTrackedDevices
	void EnableLowPersistenceMode(bool bEnable); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableLowPersistenceMode
	bool EnableHMD(bool bEnable); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableHMD
	void DisconnectRemoteXRDevice(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.DisconnectRemoteXRDevice
	char EXRDeviceConnectionResult ConnectRemoteXRDevice(struct FString IpAddress, int32_t BitRate); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ConnectRemoteXRDevice
	bool ConfigureGestures(struct FXRGestureConfig& GestureConfig); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ConfigureGestures
	void ClearXRTimedInputActionDelegate(struct FName& ActionPath); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ClearXRTimedInputActionDelegate
	void CalibrateExternalTrackingToHMD(struct FTransform& ExternalTrackingTransform); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.CalibrateExternalTrackingToHMD
	void BreakKey(struct FKey InKey, struct FString& InteractionProfile, uint8_t & Hand, struct FName& MotionSource, struct FString& Indentifier, struct FString& Component); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.BreakKey
}; 



// Class HeadMountedDisplay.HandKeypointConversion
// Size: 0x28(Inherited: 0x28) 
struct UHandKeypointConversion : public UBlueprintFunctionLibrary
{

	int32_t Conv_HandKeypointToInt32(uint8_t  Input); // Function HeadMountedDisplay.HandKeypointConversion.Conv_HandKeypointToInt32
}; 



// Class HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent
// Size: 0x60(Inherited: 0x30) 
struct UAsyncTask_LoadXRDeviceVisComponent : public UBlueprintAsyncActionBase
{
	struct FMulticastInlineDelegate OnModelLoaded;  // 0x30(0x10)
	struct FMulticastInlineDelegate OnLoadFailure;  // 0x40(0x10)
	char pad_80[8];  // 0x50(0x8)
	struct UPrimitiveComponent* SpawnedComponent;  // 0x58(0x8)

	struct UAsyncTask_LoadXRDeviceVisComponent* AddNamedDeviceVisualizationComponentAsync(struct AActor* Target, struct FName SystemName, struct FName DeviceName, bool bManualAttachment, struct FTransform& RelativeTransform, struct FXRDeviceId& XRDeviceId, struct UPrimitiveComponent*& NewComponent); // Function HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddNamedDeviceVisualizationComponentAsync
	struct UAsyncTask_LoadXRDeviceVisComponent* AddDeviceVisualizationComponentAsync(struct AActor* Target, struct FXRDeviceId& XRDeviceId, bool bManualAttachment, struct FTransform& RelativeTransform, struct UPrimitiveComponent*& NewComponent); // Function HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddDeviceVisualizationComponentAsync
}; 



// Class HeadMountedDisplay.MotionControllerComponent
// Size: 0x510(Inherited: 0x450) 
struct UMotionControllerComponent : public UPrimitiveComponent
{
	int32_t PlayerIndex;  // 0x450(0x4)
	uint8_t  Hand;  // 0x454(0x1)
	char pad_1109[3];  // 0x455(0x3)
	struct FName MotionSource;  // 0x458(0x8)
	char bDisableLowLatencyUpdate : 1;  // 0x460(0x1)
	char pad_1120_1 : 7;  // 0x460(0x1)
	char pad_1121[4];  // 0x461(0x4)
	uint8_t  CurrentTrackingStatus;  // 0x464(0x1)
	char pad_1125_1 : 7;  // 0x465(0x1)
	bool bDisplayDeviceModel : 1;  // 0x465(0x1)
	char pad_1126[2];  // 0x466(0x2)
	struct FName DisplayModelSource;  // 0x468(0x8)
	struct UStaticMesh* CustomDisplayMesh;  // 0x470(0x8)
	struct TArray<struct UMaterialInterface*> DisplayMeshMaterialOverrides;  // 0x478(0x10)
	char pad_1160[104];  // 0x488(0x68)
	struct UPrimitiveComponent* DisplayComponent;  // 0x4F0(0x8)
	char pad_1272[24];  // 0x4F8(0x18)

	void SetTrackingSource(uint8_t  NewSource); // Function HeadMountedDisplay.MotionControllerComponent.SetTrackingSource
	void SetTrackingMotionSource(struct FName NewSource); // Function HeadMountedDisplay.MotionControllerComponent.SetTrackingMotionSource
	void SetShowDeviceModel(bool bShowControllerModel); // Function HeadMountedDisplay.MotionControllerComponent.SetShowDeviceModel
	void SetDisplayModelSource(struct FName NewDisplayModelSource); // Function HeadMountedDisplay.MotionControllerComponent.SetDisplayModelSource
	void SetCustomDisplayMesh(struct UStaticMesh* NewDisplayMesh); // Function HeadMountedDisplay.MotionControllerComponent.SetCustomDisplayMesh
	void SetAssociatedPlayerIndex(int32_t NewPlayer); // Function HeadMountedDisplay.MotionControllerComponent.SetAssociatedPlayerIndex
	void OnMotionControllerUpdated(); // Function HeadMountedDisplay.MotionControllerComponent.OnMotionControllerUpdated
	bool IsTracked(); // Function HeadMountedDisplay.MotionControllerComponent.IsTracked
	uint8_t  GetTrackingSource(); // Function HeadMountedDisplay.MotionControllerComponent.GetTrackingSource
	float GetParameterValue(struct FName InName, bool& bValueFound); // Function HeadMountedDisplay.MotionControllerComponent.GetParameterValue
	struct FVector GetHandJointPosition(int32_t jointIndex, bool& bValueFound); // Function HeadMountedDisplay.MotionControllerComponent.GetHandJointPosition
}; 



// Class HeadMountedDisplay.XRAssetFunctionLibrary
// Size: 0x28(Inherited: 0x28) 
struct UXRAssetFunctionLibrary : public UBlueprintFunctionLibrary
{

	struct UPrimitiveComponent* AddNamedDeviceVisualizationComponentBlocking(struct AActor* Target, struct FName SystemName, struct FName DeviceName, bool bManualAttachment, struct FTransform& RelativeTransform, struct FXRDeviceId& XRDeviceId); // Function HeadMountedDisplay.XRAssetFunctionLibrary.AddNamedDeviceVisualizationComponentBlocking
	struct UPrimitiveComponent* AddDeviceVisualizationComponentBlocking(struct AActor* Target, struct FXRDeviceId& XRDeviceId, bool bManualAttachment, struct FTransform& RelativeTransform); // Function HeadMountedDisplay.XRAssetFunctionLibrary.AddDeviceVisualizationComponentBlocking
}; 



// Class HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary
// Size: 0x28(Inherited: 0x28) 
struct UMotionTrackedDeviceFunctionLibrary : public UBlueprintFunctionLibrary
{

	void SetIsControllerMotionTrackingEnabledByDefault(bool Enable); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.SetIsControllerMotionTrackingEnabledByDefault
	bool IsMotionTrackingEnabledForSource(int32_t PlayerIndex, struct FName SourceName); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForSource
	bool IsMotionTrackingEnabledForDevice(int32_t PlayerIndex, uint8_t  Hand); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForDevice
	bool IsMotionTrackingEnabledForComponent(struct UMotionControllerComponent* MotionControllerComponent); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForComponent
	bool IsMotionTrackedDeviceCountManagementNecessary(); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackedDeviceCountManagementNecessary
	bool IsMotionSourceTracking(int32_t PlayerIndex, struct FName SourceName); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionSourceTracking
	int32_t GetMotionTrackingEnabledControllerCount(); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMotionTrackingEnabledControllerCount
	int32_t GetMaximumMotionTrackedControllerCount(); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMaximumMotionTrackedControllerCount
	struct FName GetActiveTrackingSystemName(); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetActiveTrackingSystemName
	struct TArray<struct FName> EnumerateMotionSources(); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnumerateMotionSources
	bool EnableMotionTrackingOfSource(int32_t PlayerIndex, struct FName SourceName); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfSource
	bool EnableMotionTrackingOfDevice(int32_t PlayerIndex, uint8_t  Hand); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfDevice
	bool EnableMotionTrackingForComponent(struct UMotionControllerComponent* MotionControllerComponent); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingForComponent
	void DisableMotionTrackingOfSource(int32_t PlayerIndex, struct FName SourceName); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfSource
	void DisableMotionTrackingOfDevice(int32_t PlayerIndex, uint8_t  Hand); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfDevice
	void DisableMotionTrackingOfControllersForPlayer(int32_t PlayerIndex); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfControllersForPlayer
	void DisableMotionTrackingOfAllControllers(); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfAllControllers
	void DisableMotionTrackingForComponent(struct UMotionControllerComponent* MotionControllerComponent); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingForComponent
}; 



// Class HeadMountedDisplay.XRLoadingScreenFunctionLibrary
// Size: 0x28(Inherited: 0x28) 
struct UXRLoadingScreenFunctionLibrary : public UBlueprintFunctionLibrary
{

	void ShowLoadingScreen(); // Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.ShowLoadingScreen
	void SetLoadingScreen(struct UTexture* Texture, struct FVector2D Scale, struct FVector Offset, bool bShowLoadingMovie, bool bShowOnSet); // Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.SetLoadingScreen
	void HideLoadingScreen(); // Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.HideLoadingScreen
	void ClearLoadingScreenSplashes(); // Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.ClearLoadingScreenSplashes
	void AddLoadingScreenSplash(struct UTexture* Texture, struct FVector Translation, struct FRotator Rotation, struct FVector2D Size, struct FRotator DeltaRotation, bool bClearBeforeAdd); // Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.AddLoadingScreenSplash
}; 



// Class HeadMountedDisplay.VRNotificationsComponent
// Size: 0x140(Inherited: 0xB0) 
struct UVRNotificationsComponent : public UActorComponent
{
	struct FMulticastInlineDelegate HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate;  // 0xB0(0x10)
	struct FMulticastInlineDelegate HMDTrackingInitializedDelegate;  // 0xC0(0x10)
	struct FMulticastInlineDelegate HMDRecenteredDelegate;  // 0xD0(0x10)
	struct FMulticastInlineDelegate HMDLostDelegate;  // 0xE0(0x10)
	struct FMulticastInlineDelegate HMDReconnectedDelegate;  // 0xF0(0x10)
	struct FMulticastInlineDelegate HMDConnectCanceledDelegate;  // 0x100(0x10)
	struct FMulticastInlineDelegate HMDPutOnHeadDelegate;  // 0x110(0x10)
	struct FMulticastInlineDelegate HMDRemovedFromHeadDelegate;  // 0x120(0x10)
	struct FMulticastInlineDelegate VRControllerRecenteredDelegate;  // 0x130(0x10)

}; 



