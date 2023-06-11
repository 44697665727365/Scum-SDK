#pragma once 
#include "SDK.h" 
 
 
// ScriptStruct GameplayCameras.FOscillator
// Size: 0xC(Inherited: 0x0) 
struct FFOscillator
{
	float Amplitude;  // 0x0(0x4)
	float Frequency;  // 0x4(0x4)
	char EInitialOscillatorOffset InitialOffset;  // 0x8(0x1)
	uint8_t  Waveform;  // 0x9(0x1)
	char pad_10[2];  // 0xA(0x2)

}; 
// ScriptStruct GameplayCameras.VOscillator
// Size: 0x24(Inherited: 0x0) 
struct FVOscillator
{
	struct FFOscillator X;  // 0x0(0xC)
	struct FFOscillator Y;  // 0xC(0xC)
	struct FFOscillator Z;  // 0x18(0xC)

}; 
// ScriptStruct GameplayCameras.PerlinNoiseShaker
// Size: 0x8(Inherited: 0x0) 
struct FPerlinNoiseShaker
{
	float Amplitude;  // 0x0(0x4)
	float Frequency;  // 0x4(0x4)

}; 
// ScriptStruct GameplayCameras.ROscillator
// Size: 0x24(Inherited: 0x0) 
struct FROscillator
{
	struct FFOscillator Pitch;  // 0x0(0xC)
	struct FFOscillator Yaw;  // 0xC(0xC)
	struct FFOscillator Roll;  // 0x18(0xC)

}; 
// Function GameplayCameras.MatineeCameraShakeFunctionLibrary.Conv_MatineeCameraShake
// Size: 0x10(Inherited: 0x0) 
struct FConv_MatineeCameraShake
{
	struct UCameraShakeBase* CameraShake;  // 0x0(0x8)
	struct UMatineeCameraShake* ReturnValue;  // 0x8(0x8)

}; 
// ScriptStruct GameplayCameras.WaveOscillator
// Size: 0xC(Inherited: 0x0) 
struct FWaveOscillator
{
	float Amplitude;  // 0x0(0x4)
	float Frequency;  // 0x4(0x4)
	uint8_t  InitialOffsetType;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)

}; 
// Function GameplayCameras.MatineeCameraShake.BlueprintUpdateCameraShake
// Size: 0xBF0(Inherited: 0x0) 
struct FBlueprintUpdateCameraShake
{
	float DeltaTime;  // 0x0(0x4)
	float Alpha;  // 0x4(0x4)
	char pad_8[8];  // 0x8(0x8)
	struct FMinimalViewInfo POV;  // 0x10(0x5F0)
	struct FMinimalViewInfo ModifiedPOV;  // 0x600(0x5F0)

}; 
// Function GameplayCameras.MatineeCameraShake.ReceiveIsFinished
// Size: 0x1(Inherited: 0x0) 
struct FReceiveIsFinished
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function GameplayCameras.MatineeCameraShake.ReceivePlayShake
// Size: 0x4(Inherited: 0x0) 
struct FReceivePlayShake
{
	float Scale;  // 0x0(0x4)

}; 
// Function GameplayCameras.MatineeCameraShake.ReceiveStopShake
// Size: 0x1(Inherited: 0x0) 
struct FReceiveStopShake
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bImmediately : 1;  // 0x0(0x1)

}; 
// Function GameplayCameras.MatineeCameraShake.StartMatineeCameraShake
// Size: 0x30(Inherited: 0x0) 
struct FStartMatineeCameraShake
{
	struct APlayerCameraManager* PlayerCameraManager;  // 0x0(0x8)
	UMatineeCameraShake* ShakeClass;  // 0x8(0x8)
	float Scale;  // 0x10(0x4)
	uint8_t  PlaySpace;  // 0x14(0x1)
	char pad_21[3];  // 0x15(0x3)
	struct FRotator UserPlaySpaceRot;  // 0x18(0xC)
	char pad_36[4];  // 0x24(0x4)
	struct UMatineeCameraShake* ReturnValue;  // 0x28(0x8)

}; 
// Function GameplayCameras.MatineeCameraShake.StartMatineeCameraShakeFromSource
// Size: 0x38(Inherited: 0x0) 
struct FStartMatineeCameraShakeFromSource
{
	struct APlayerCameraManager* PlayerCameraManager;  // 0x0(0x8)
	UMatineeCameraShake* ShakeClass;  // 0x8(0x8)
	struct UCameraShakeSourceComponent* SourceComponent;  // 0x10(0x8)
	float Scale;  // 0x18(0x4)
	uint8_t  PlaySpace;  // 0x1C(0x1)
	char pad_29[3];  // 0x1D(0x3)
	struct FRotator UserPlaySpaceRot;  // 0x20(0xC)
	char pad_44[4];  // 0x2C(0x4)
	struct UMatineeCameraShake* ReturnValue;  // 0x30(0x8)

}; 
