#pragma once 
#include "SDK.h" 
 
 
// ScriptStruct MotoSynth.MotoSynthRuntimeSettings
// Size: 0x68(Inherited: 0x0) 
struct FMotoSynthRuntimeSettings
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bSynthToneEnabled : 1;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	float SynthToneVolume;  // 0x4(0x4)
	float SynthToneFilterFrequency;  // 0x8(0x4)
	int32_t SynthOctaveShift;  // 0xC(0x4)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool bGranularEngineEnabled : 1;  // 0x10(0x1)
	char pad_17[3];  // 0x11(0x3)
	float GranularEngineVolume;  // 0x14(0x4)
	float GranularEnginePitchScale;  // 0x18(0x4)
	int32_t NumSamplesToCrossfadeBetweenGrains;  // 0x1C(0x4)
	int32_t NumGrainTableEntriesPerGrain;  // 0x20(0x4)
	int32_t GrainTableRandomOffsetForConstantRPMs;  // 0x24(0x4)
	int32_t GrainCrossfadeSamplesForConstantRPMs;  // 0x28(0x4)
	char pad_44[4];  // 0x2C(0x4)
	struct UMotoSynthSource* AccelerationSource;  // 0x30(0x8)
	struct UMotoSynthSource* DecelerationSource;  // 0x38(0x8)
	char pad_64_1 : 7;  // 0x40(0x1)
	bool bStereoWidenerEnabled : 1;  // 0x40(0x1)
	char pad_65[3];  // 0x41(0x3)
	float StereoDelayMsec;  // 0x44(0x4)
	float StereoFeedback;  // 0x48(0x4)
	float StereoWidenerWetlevel;  // 0x4C(0x4)
	float StereoWidenerDryLevel;  // 0x50(0x4)
	float StereoWidenerDelayRatio;  // 0x54(0x4)
	char pad_88_1 : 7;  // 0x58(0x1)
	bool bStereoWidenerFilterEnabled : 1;  // 0x58(0x1)
	char pad_89[3];  // 0x59(0x3)
	float StereoWidenerFilterFrequency;  // 0x5C(0x4)
	float StereoWidenerFilterQ;  // 0x60(0x4)
	char pad_100[4];  // 0x64(0x4)

}; 
// Function MotoSynth.SynthComponentMoto.SetRPM
// Size: 0x8(Inherited: 0x0) 
struct FSetRPM
{
	float InRPM;  // 0x0(0x4)
	float InTimeSec;  // 0x4(0x4)

}; 
// ScriptStruct MotoSynth.GrainTableEntry
// Size: 0x8(Inherited: 0x0) 
struct FGrainTableEntry
{
	int32_t SampleIndex;  // 0x0(0x4)
	float RPM;  // 0x4(0x4)

}; 
// Function MotoSynth.SynthComponentMoto.GetRPMRange
// Size: 0x8(Inherited: 0x0) 
struct FGetRPMRange
{
	float OutMinRPM;  // 0x0(0x4)
	float OutMaxRPM;  // 0x4(0x4)

}; 
// Function MotoSynth.SynthComponentMoto.SetSettings
// Size: 0x68(Inherited: 0x0) 
struct FSetSettings
{
	struct FMotoSynthRuntimeSettings InSettings;  // 0x0(0x68)

}; 
// Function MotoSynth.SynthComponentMoto.IsEnabled
// Size: 0x1(Inherited: 0x0) 
struct FIsEnabled
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
