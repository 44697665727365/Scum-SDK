#pragma once 
#include <AudioSynesthesia_Structs.h>
 
 
 
// Class AudioSynesthesia.AudioSynesthesiaNRTSettings
// Size: 0x28(Inherited: 0x28) 
struct UAudioSynesthesiaNRTSettings : public UAudioAnalyzerNRTSettings
{

}; 



// Class AudioSynesthesia.AudioSynesthesiaNRT
// Size: 0x78(Inherited: 0x78) 
struct UAudioSynesthesiaNRT : public UAudioAnalyzerNRT
{

}; 



// Class AudioSynesthesia.OnsetNRTSettings
// Size: 0x40(Inherited: 0x28) 
struct UOnsetNRTSettings : public UAudioSynesthesiaNRTSettings
{
	char pad_40_1 : 7;  // 0x28(0x1)
	bool bDownmixToMono : 1;  // 0x28(0x1)
	char pad_41[3];  // 0x29(0x3)
	float GranularityInSeconds;  // 0x2C(0x4)
	float Sensitivity;  // 0x30(0x4)
	float MinimumFrequency;  // 0x34(0x4)
	float MaximumFrequency;  // 0x38(0x4)
	char pad_60[4];  // 0x3C(0x4)

}; 



// Class AudioSynesthesia.LoudnessNRT
// Size: 0x80(Inherited: 0x78) 
struct ULoudnessNRT : public UAudioSynesthesiaNRT
{
	struct ULoudnessNRTSettings* Settings;  // 0x78(0x8)

	void GetNormalizedLoudnessAtTime(float InSeconds, float& OutLoudness); // Function AudioSynesthesia.LoudnessNRT.GetNormalizedLoudnessAtTime
	void GetNormalizedChannelLoudnessAtTime(float InSeconds, int32_t InChannel, float& OutLoudness); // Function AudioSynesthesia.LoudnessNRT.GetNormalizedChannelLoudnessAtTime
	void GetLoudnessAtTime(float InSeconds, float& OutLoudness); // Function AudioSynesthesia.LoudnessNRT.GetLoudnessAtTime
	void GetChannelLoudnessAtTime(float InSeconds, int32_t InChannel, float& OutLoudness); // Function AudioSynesthesia.LoudnessNRT.GetChannelLoudnessAtTime
}; 



// Class AudioSynesthesia.ConstantQNRTSettings
// Size: 0x48(Inherited: 0x28) 
struct UConstantQNRTSettings : public UAudioSynesthesiaNRTSettings
{
	float StartingFrequency;  // 0x28(0x4)
	int32_t NumBands;  // 0x2C(0x4)
	float NumBandsPerOctave;  // 0x30(0x4)
	float AnalysisPeriod;  // 0x34(0x4)
	char pad_56_1 : 7;  // 0x38(0x1)
	bool bDownmixToMono : 1;  // 0x38(0x1)
	uint8_t  FFTSize;  // 0x39(0x1)
	uint8_t  WindowType;  // 0x3A(0x1)
	uint8_t  SpectrumType;  // 0x3B(0x1)
	float BandWidthStretch;  // 0x3C(0x4)
	uint8_t  CQTNormalization;  // 0x40(0x1)
	char pad_65[3];  // 0x41(0x3)
	float NoiseFloorDb;  // 0x44(0x4)

}; 



// Class AudioSynesthesia.OnsetNRT
// Size: 0x80(Inherited: 0x78) 
struct UOnsetNRT : public UAudioSynesthesiaNRT
{
	struct UOnsetNRTSettings* Settings;  // 0x78(0x8)

	void GetNormalizedChannelOnsetsBetweenTimes(float InStartSeconds, float InEndSeconds, int32_t InChannel, struct TArray<float>& OutOnsetTimestamps, struct TArray<float>& OutOnsetStrengths); // Function AudioSynesthesia.OnsetNRT.GetNormalizedChannelOnsetsBetweenTimes
	void GetChannelOnsetsBetweenTimes(float InStartSeconds, float InEndSeconds, int32_t InChannel, struct TArray<float>& OutOnsetTimestamps, struct TArray<float>& OutOnsetStrengths); // Function AudioSynesthesia.OnsetNRT.GetChannelOnsetsBetweenTimes
}; 



// Class AudioSynesthesia.LoudnessNRTSettings
// Size: 0x40(Inherited: 0x28) 
struct ULoudnessNRTSettings : public UAudioSynesthesiaNRTSettings
{
	float AnalysisPeriod;  // 0x28(0x4)
	float MinimumFrequency;  // 0x2C(0x4)
	float MaximumFrequency;  // 0x30(0x4)
	uint8_t  curveType;  // 0x34(0x1)
	char pad_53[3];  // 0x35(0x3)
	float NoiseFloorDb;  // 0x38(0x4)
	char pad_60[4];  // 0x3C(0x4)

}; 



// Class AudioSynesthesia.ConstantQNRT
// Size: 0x80(Inherited: 0x78) 
struct UConstantQNRT : public UAudioSynesthesiaNRT
{
	struct UConstantQNRTSettings* Settings;  // 0x78(0x8)

	void GetNormalizedChannelConstantQAtTime(float InSeconds, int32_t InChannel, struct TArray<float>& OutConstantQ); // Function AudioSynesthesia.ConstantQNRT.GetNormalizedChannelConstantQAtTime
	void GetChannelConstantQAtTime(float InSeconds, int32_t InChannel, struct TArray<float>& OutConstantQ); // Function AudioSynesthesia.ConstantQNRT.GetChannelConstantQAtTime
}; 



