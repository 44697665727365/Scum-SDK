#pragma once 
#include <AudioAnalyzer_Structs.h>
 
 
 
// Class AudioAnalyzer.AudioAnalyzerAsset
// Size: 0x28(Inherited: 0x28) 
struct UAudioAnalyzerAsset : public UObject
{

}; 



// Class AudioAnalyzer.AudioAnalyzerNRTSettings
// Size: 0x28(Inherited: 0x28) 
struct UAudioAnalyzerNRTSettings : public UAudioAnalyzerAsset
{

}; 



// Class AudioAnalyzer.AudioAnalyzerNRT
// Size: 0x78(Inherited: 0x28) 
struct UAudioAnalyzerNRT : public UAudioAnalyzerAsset
{
	struct USoundWave* Sound;  // 0x28(0x8)
	float DurationInSeconds;  // 0x30(0x4)
	char pad_52[68];  // 0x34(0x44)

}; 



