#pragma once 
#include <MotoSynth_Structs.h>
 
 
 
// Class MotoSynth.MotoSynthPreset
// Size: 0x90(Inherited: 0x28) 
struct UMotoSynthPreset : public UObject
{
	struct FMotoSynthRuntimeSettings Settings;  // 0x28(0x68)

}; 



// Class MotoSynth.MotoSynthSource
// Size: 0xF8(Inherited: 0x28) 
struct UMotoSynthSource : public UObject
{
	char pad_40_1 : 7;  // 0x28(0x1)
	bool bConvertTo8Bit : 1;  // 0x28(0x1)
	char pad_41[3];  // 0x29(0x3)
	float DownSampleFactor;  // 0x2C(0x4)
	struct FRuntimeFloatCurve RPMCurve;  // 0x30(0x88)
	struct TArray<float> SourceData;  // 0xB8(0x10)
	struct TArray<int16_t> SourceDataPCM;  // 0xC8(0x10)
	int32_t SourceSampleRate;  // 0xD8(0x4)
	char pad_220[4];  // 0xDC(0x4)
	struct TArray<struct FGrainTableEntry> GrainTable;  // 0xE0(0x10)
	char pad_240[8];  // 0xF0(0x8)

}; 



// Class MotoSynth.SynthComponentMoto
// Size: 0x780(Inherited: 0x6C0) 
struct USynthComponentMoto : public USynthComponent
{
	struct UMotoSynthPreset* MotoSynthPreset;  // 0x6C0(0x8)
	float RPM;  // 0x6C8(0x4)
	char pad_1740[180];  // 0x6CC(0xB4)

	void SetSettings(struct FMotoSynthRuntimeSettings& InSettings); // Function MotoSynth.SynthComponentMoto.SetSettings
	void SetRPM(float InRPM, float InTimeSec); // Function MotoSynth.SynthComponentMoto.SetRPM
	bool IsEnabled(); // Function MotoSynth.SynthComponentMoto.IsEnabled
	void GetRPMRange(float& OutMinRPM, float& OutMaxRPM); // Function MotoSynth.SynthComponentMoto.GetRPMRange
}; 



