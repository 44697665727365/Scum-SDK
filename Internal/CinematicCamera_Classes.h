#pragma once 
#include <CinematicCamera_Structs.h>
 
 
 
// Class CinematicCamera.CameraRig_Crane
// Size: 0x250(Inherited: 0x220) 
struct ACameraRig_Crane : public AActor
{
	float CranePitch;  // 0x220(0x4)
	float CraneYaw;  // 0x224(0x4)
	float CraneArmLength;  // 0x228(0x4)
	char pad_556_1 : 7;  // 0x22C(0x1)
	bool bLockMountPitch : 1;  // 0x22C(0x1)
	char pad_557_1 : 7;  // 0x22D(0x1)
	bool bLockMountYaw : 1;  // 0x22D(0x1)
	char pad_558[2];  // 0x22E(0x2)
	struct USceneComponent* TransformComponent;  // 0x230(0x8)
	struct USceneComponent* CraneYawControl;  // 0x238(0x8)
	struct USceneComponent* CranePitchControl;  // 0x240(0x8)
	struct USceneComponent* CraneCameraMount;  // 0x248(0x8)

}; 



// Class CinematicCamera.CameraRig_Rail
// Size: 0x240(Inherited: 0x220) 
struct ACameraRig_Rail : public AActor
{
	float CurrentPositionOnRail;  // 0x220(0x4)
	char pad_548_1 : 7;  // 0x224(0x1)
	bool bLockOrientationToRail : 1;  // 0x224(0x1)
	char pad_549[3];  // 0x225(0x3)
	struct USceneComponent* TransformComponent;  // 0x228(0x8)
	struct USplineComponent* RailSplineComponent;  // 0x230(0x8)
	struct USceneComponent* RailCameraMount;  // 0x238(0x8)

	struct USplineComponent* GetRailSplineComponent(); // Function CinematicCamera.CameraRig_Rail.GetRailSplineComponent
}; 



// Class CinematicCamera.CineCameraActor
// Size: 0x810(Inherited: 0x7B0) 
struct ACineCameraActor : public ACameraActor
{
	struct FCameraLookatTrackingSettings LookatTrackingSettings;  // 0x7B0(0x50)
	char pad_2048[16];  // 0x800(0x10)

	struct UCineCameraComponent* GetCineCameraComponent(); // Function CinematicCamera.CineCameraActor.GetCineCameraComponent
}; 



// Class CinematicCamera.CineCameraComponent
// Size: 0x8D0(Inherited: 0x7D0) 
struct UCineCameraComponent : public UCameraComponent
{
	struct FCameraFilmbackSettings FilmbackSettings;  // 0x7D0(0xC)
	struct FCameraFilmbackSettings Filmback;  // 0x7DC(0xC)
	struct FCameraLensSettings LensSettings;  // 0x7E8(0x18)
	struct FCameraFocusSettings FocusSettings;  // 0x800(0x58)
	float CurrentFocalLength;  // 0x858(0x4)
	float CurrentAperture;  // 0x85C(0x4)
	float CurrentFocusDistance;  // 0x860(0x4)
	char pad_2148[12];  // 0x864(0xC)
	struct TArray<struct FNamedFilmbackPreset> FilmbackPresets;  // 0x870(0x10)
	struct TArray<struct FNamedLensPreset> LensPresets;  // 0x880(0x10)
	struct FString DefaultFilmbackPresetName;  // 0x890(0x10)
	struct FString DefaultFilmbackPreset;  // 0x8A0(0x10)
	struct FString DefaultLensPresetName;  // 0x8B0(0x10)
	float DefaultLensFocalLength;  // 0x8C0(0x4)
	float DefaultLensFStop;  // 0x8C4(0x4)
	char pad_2248[8];  // 0x8C8(0x8)

	void SetLensPresetByName(struct FString InPresetName); // Function CinematicCamera.CineCameraComponent.SetLensPresetByName
	void SetFilmbackPresetByName(struct FString InPresetName); // Function CinematicCamera.CineCameraComponent.SetFilmbackPresetByName
	void SetCurrentFocalLength(float InFocalLength); // Function CinematicCamera.CineCameraComponent.SetCurrentFocalLength
	float GetVerticalFieldOfView(); // Function CinematicCamera.CineCameraComponent.GetVerticalFieldOfView
	struct TArray<struct FNamedLensPreset> GetLensPresetsCopy(); // Function CinematicCamera.CineCameraComponent.GetLensPresetsCopy
	struct FString GetLensPresetName(); // Function CinematicCamera.CineCameraComponent.GetLensPresetName
	float GetHorizontalFieldOfView(); // Function CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView
	struct TArray<struct FNamedFilmbackPreset> GetFilmbackPresetsCopy(); // Function CinematicCamera.CineCameraComponent.GetFilmbackPresetsCopy
	struct FString GetFilmbackPresetName(); // Function CinematicCamera.CineCameraComponent.GetFilmbackPresetName
	struct FString GetDefaultFilmbackPresetName(); // Function CinematicCamera.CineCameraComponent.GetDefaultFilmbackPresetName
}; 



