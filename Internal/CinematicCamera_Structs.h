#pragma once 
#include "SDK.h" 
 
 
// ScriptStruct CinematicCamera.NamedFilmbackPreset
// Size: 0x20(Inherited: 0x0) 
struct FNamedFilmbackPreset
{
	struct FString Name;  // 0x0(0x10)
	struct FCameraFilmbackSettings FilmbackSettings;  // 0x10(0xC)
	char pad_28[4];  // 0x1C(0x4)

}; 
// ScriptStruct CinematicCamera.CameraLookatTrackingSettings
// Size: 0x50(Inherited: 0x0) 
struct FCameraLookatTrackingSettings
{
	char bEnableLookAtTracking : 1;  // 0x0(0x1)
	char bDrawDebugLookAtTrackingPosition : 1;  // 0x0(0x1)
	char pad_0_1 : 6;  // 0x0(0x1)
	char pad_1[4];  // 0x1(0x4)
	float LookAtTrackingInterpSpeed;  // 0x4(0x4)
	char pad_8[16];  // 0x8(0x10)
	struct TSoftObjectPtr<AActor> ActorToTrack;  // 0x18(0x28)
	struct FVector RelativeOffset;  // 0x40(0xC)
	char bAllowRoll : 1;  // 0x4C(0x1)
	char pad_76_1 : 7;  // 0x4C(0x1)
	char pad_77[4];  // 0x4D(0x4)

}; 
// ScriptStruct CinematicCamera.CameraLensSettings
// Size: 0x18(Inherited: 0x0) 
struct FCameraLensSettings
{
	float MinFocalLength;  // 0x0(0x4)
	float MaxFocalLength;  // 0x4(0x4)
	float MinFStop;  // 0x8(0x4)
	float MaxFStop;  // 0xC(0x4)
	float MinimumFocusDistance;  // 0x10(0x4)
	int32_t DiaphragmBladeCount;  // 0x14(0x4)

}; 
// ScriptStruct CinematicCamera.CameraFocusSettings
// Size: 0x58(Inherited: 0x0) 
struct FCameraFocusSettings
{
	uint8_t  FocusMethod;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	float ManualFocusDistance;  // 0x4(0x4)
	struct FCameraTrackingFocusSettings TrackingFocusSettings;  // 0x8(0x38)
	char bDrawDebugFocusPlane : 1;  // 0x40(0x1)
	char pad_64_1 : 7;  // 0x40(0x1)
	char pad_65[4];  // 0x41(0x4)
	struct FColor DebugFocusPlaneColor;  // 0x44(0x4)
	char bSmoothFocusChanges : 1;  // 0x48(0x1)
	char pad_72_1 : 7;  // 0x48(0x1)
	char pad_73[4];  // 0x49(0x4)
	float FocusSmoothingInterpSpeed;  // 0x4C(0x4)
	float FocusOffset;  // 0x50(0x4)
	char pad_84[4];  // 0x54(0x4)

}; 
// ScriptStruct CinematicCamera.CameraTrackingFocusSettings
// Size: 0x38(Inherited: 0x0) 
struct FCameraTrackingFocusSettings
{
	struct TSoftObjectPtr<AActor> ActorToTrack;  // 0x0(0x28)
	struct FVector RelativeOffset;  // 0x28(0xC)
	char bDrawDebugTrackingFocusPoint : 1;  // 0x34(0x1)
	char pad_52_1 : 7;  // 0x34(0x1)
	char pad_53[4];  // 0x35(0x4)

}; 
// ScriptStruct CinematicCamera.NamedLensPreset
// Size: 0x28(Inherited: 0x0) 
struct FNamedLensPreset
{
	struct FString Name;  // 0x0(0x10)
	struct FCameraLensSettings LensSettings;  // 0x10(0x18)

}; 
// Function CinematicCamera.CineCameraComponent.GetFilmbackPresetName
// Size: 0x10(Inherited: 0x0) 
struct FGetFilmbackPresetName
{
	struct FString ReturnValue;  // 0x0(0x10)

}; 
// ScriptStruct CinematicCamera.CameraFilmbackSettings
// Size: 0xC(Inherited: 0x0) 
struct FCameraFilmbackSettings
{
	float SensorWidth;  // 0x0(0x4)
	float SensorHeight;  // 0x4(0x4)
	float SensorAspectRatio;  // 0x8(0x4)

}; 
// Function CinematicCamera.CameraRig_Rail.GetRailSplineComponent
// Size: 0x8(Inherited: 0x0) 
struct FGetRailSplineComponent
{
	struct USplineComponent* ReturnValue;  // 0x0(0x8)

}; 
// Function CinematicCamera.CineCameraActor.GetCineCameraComponent
// Size: 0x8(Inherited: 0x0) 
struct FGetCineCameraComponent
{
	struct UCineCameraComponent* ReturnValue;  // 0x0(0x8)

}; 
// Function CinematicCamera.CineCameraComponent.GetDefaultFilmbackPresetName
// Size: 0x10(Inherited: 0x0) 
struct FGetDefaultFilmbackPresetName
{
	struct FString ReturnValue;  // 0x0(0x10)

}; 
// Function CinematicCamera.CineCameraComponent.GetFilmbackPresetsCopy
// Size: 0x10(Inherited: 0x0) 
struct FGetFilmbackPresetsCopy
{
	struct TArray<struct FNamedFilmbackPreset> ReturnValue;  // 0x0(0x10)

}; 
// Function CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView
// Size: 0x4(Inherited: 0x0) 
struct FGetHorizontalFieldOfView
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function CinematicCamera.CineCameraComponent.GetLensPresetName
// Size: 0x10(Inherited: 0x0) 
struct FGetLensPresetName
{
	struct FString ReturnValue;  // 0x0(0x10)

}; 
// Function CinematicCamera.CineCameraComponent.GetLensPresetsCopy
// Size: 0x10(Inherited: 0x0) 
struct FGetLensPresetsCopy
{
	struct TArray<struct FNamedLensPreset> ReturnValue;  // 0x0(0x10)

}; 
// Function CinematicCamera.CineCameraComponent.GetVerticalFieldOfView
// Size: 0x4(Inherited: 0x0) 
struct FGetVerticalFieldOfView
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function CinematicCamera.CineCameraComponent.SetCurrentFocalLength
// Size: 0x4(Inherited: 0x0) 
struct FSetCurrentFocalLength
{
	float InFocalLength;  // 0x0(0x4)

}; 
// Function CinematicCamera.CineCameraComponent.SetFilmbackPresetByName
// Size: 0x10(Inherited: 0x0) 
struct FSetFilmbackPresetByName
{
	struct FString InPresetName;  // 0x0(0x10)

}; 
// Function CinematicCamera.CineCameraComponent.SetLensPresetByName
// Size: 0x10(Inherited: 0x0) 
struct FSetLensPresetByName
{
	struct FString InPresetName;  // 0x0(0x10)

}; 
