#pragma once 
#include <GameplayCameras_Structs.h>
 
 
 
// Class GameplayCameras.WaveOscillatorCameraShakePattern
// Size: 0xD8(Inherited: 0x38) 
struct UWaveOscillatorCameraShakePattern : public USimpleCameraShakePattern
{
	float LocationAmplitudeMultiplier;  // 0x38(0x4)
	float LocationFrequencyMultiplier;  // 0x3C(0x4)
	struct FWaveOscillator X;  // 0x40(0xC)
	struct FWaveOscillator Y;  // 0x4C(0xC)
	struct FWaveOscillator Z;  // 0x58(0xC)
	float RotationAmplitudeMultiplier;  // 0x64(0x4)
	float RotationFrequencyMultiplier;  // 0x68(0x4)
	struct FWaveOscillator Pitch;  // 0x6C(0xC)
	struct FWaveOscillator Yaw;  // 0x78(0xC)
	struct FWaveOscillator Roll;  // 0x84(0xC)
	struct FWaveOscillator FOV;  // 0x90(0xC)
	char pad_156[60];  // 0x9C(0x3C)

}; 



// Class GameplayCameras.TestCameraShake
// Size: 0xB0(Inherited: 0xB0) 
struct UTestCameraShake : public UCameraShakeBase
{

}; 



// Class GameplayCameras.MovieSceneMatineeCameraShakeEvaluator
// Size: 0x28(Inherited: 0x28) 
struct UMovieSceneMatineeCameraShakeEvaluator : public UMovieSceneCameraShakeEvaluator
{

}; 



// Class GameplayCameras.SimpleCameraShakePattern
// Size: 0x38(Inherited: 0x28) 
struct USimpleCameraShakePattern : public UCameraShakePattern
{
	float Duration;  // 0x28(0x4)
	float BlendInTime;  // 0x2C(0x4)
	float BlendOutTime;  // 0x30(0x4)
	char pad_52[4];  // 0x34(0x4)

}; 



// Class GameplayCameras.MatineeCameraShake
// Size: 0x1B0(Inherited: 0xB0) 
struct UMatineeCameraShake : public UCameraShakeBase
{
	float OscillationDuration;  // 0xA8(0x4)
	float OscillationBlendInTime;  // 0xAC(0x4)
	float OscillationBlendOutTime;  // 0xB0(0x4)
	struct FROscillator RotOscillation;  // 0xB4(0x24)
	struct FVOscillator LocOscillation;  // 0xD8(0x24)
	struct FFOscillator FOVOscillation;  // 0xFC(0xC)
	float AnimPlayRate;  // 0x108(0x4)
	float AnimScale;  // 0x10C(0x4)
	float AnimBlendInTime;  // 0x110(0x4)
	float AnimBlendOutTime;  // 0x114(0x4)
	float RandomAnimSegmentDuration;  // 0x118(0x4)
	struct UCameraAnim* Anim;  // 0x120(0x8)
	struct UCameraAnimationSequence* AnimSequence;  // 0x128(0x8)
	char bRandomAnimSegment : 1;  // 0x130(0x1)
	float OscillatorTimeRemaining;  // 0x134(0x4)
	struct UCameraAnimInst* AnimInst;  // 0x138(0x8)
	char pad_320_1 : 7;  // 0x140(0x1)
	char pad_321[64];  // 0x141(0x40)
	struct USequenceCameraShakePattern* SequenceShakePattern;  // 0x180(0x8)
	char pad_392[40];  // 0x188(0x28)

	struct UMatineeCameraShake* StartMatineeCameraShakeFromSource(struct APlayerCameraManager* PlayerCameraManager, UMatineeCameraShake* ShakeClass, struct UCameraShakeSourceComponent* SourceComponent, float Scale, uint8_t  PlaySpace, struct FRotator UserPlaySpaceRot); // Function GameplayCameras.MatineeCameraShake.StartMatineeCameraShakeFromSource
	struct UMatineeCameraShake* StartMatineeCameraShake(struct APlayerCameraManager* PlayerCameraManager, UMatineeCameraShake* ShakeClass, float Scale, uint8_t  PlaySpace, struct FRotator UserPlaySpaceRot); // Function GameplayCameras.MatineeCameraShake.StartMatineeCameraShake
	void ReceiveStopShake(bool bImmediately); // Function GameplayCameras.MatineeCameraShake.ReceiveStopShake
	void ReceivePlayShake(float Scale); // Function GameplayCameras.MatineeCameraShake.ReceivePlayShake
	bool ReceiveIsFinished(); // Function GameplayCameras.MatineeCameraShake.ReceiveIsFinished
	void BlueprintUpdateCameraShake(float DeltaTime, float Alpha, struct FMinimalViewInfo& POV, struct FMinimalViewInfo& ModifiedPOV); // Function GameplayCameras.MatineeCameraShake.BlueprintUpdateCameraShake
}; 



// Class GameplayCameras.ConstantCameraShakePattern
// Size: 0x50(Inherited: 0x38) 
struct UConstantCameraShakePattern : public USimpleCameraShakePattern
{
	struct FVector LocationOffset;  // 0x38(0xC)
	struct FRotator RotationOffset;  // 0x44(0xC)

}; 



// Class GameplayCameras.CompositeCameraShakePattern
// Size: 0x48(Inherited: 0x28) 
struct UCompositeCameraShakePattern : public UCameraShakePattern
{
	struct TArray<struct UCameraShakePattern*> ChildPatterns;  // 0x28(0x10)
	char pad_56[16];  // 0x38(0x10)

}; 



// Class GameplayCameras.MatineeCameraShakePattern
// Size: 0x28(Inherited: 0x28) 
struct UMatineeCameraShakePattern : public UCameraShakePattern
{

}; 



// Class GameplayCameras.DefaultCameraShakeBase
// Size: 0xB0(Inherited: 0xB0) 
struct UDefaultCameraShakeBase : public UCameraShakeBase
{

}; 



// Class GameplayCameras.MatineeCameraShakeFunctionLibrary
// Size: 0x28(Inherited: 0x28) 
struct UMatineeCameraShakeFunctionLibrary : public UBlueprintFunctionLibrary
{

	struct UMatineeCameraShake* Conv_MatineeCameraShake(struct UCameraShakeBase* CameraShake); // Function GameplayCameras.MatineeCameraShakeFunctionLibrary.Conv_MatineeCameraShake
}; 



// Class GameplayCameras.PerlinNoiseCameraShakePattern
// Size: 0xB8(Inherited: 0x38) 
struct UPerlinNoiseCameraShakePattern : public USimpleCameraShakePattern
{
	float LocationAmplitudeMultiplier;  // 0x38(0x4)
	float LocationFrequencyMultiplier;  // 0x3C(0x4)
	struct FPerlinNoiseShaker X;  // 0x40(0x8)
	struct FPerlinNoiseShaker Y;  // 0x48(0x8)
	struct FPerlinNoiseShaker Z;  // 0x50(0x8)
	float RotationAmplitudeMultiplier;  // 0x58(0x4)
	float RotationFrequencyMultiplier;  // 0x5C(0x4)
	struct FPerlinNoiseShaker Pitch;  // 0x60(0x8)
	struct FPerlinNoiseShaker Yaw;  // 0x68(0x8)
	struct FPerlinNoiseShaker Roll;  // 0x70(0x8)
	struct FPerlinNoiseShaker FOV;  // 0x78(0x8)
	char pad_128[56];  // 0x80(0x38)

}; 



