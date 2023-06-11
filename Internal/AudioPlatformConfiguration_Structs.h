#pragma once 
#include "SDK.h" 
 
 
// ScriptStruct AudioPlatformConfiguration.PlatformRuntimeAudioCompressionOverrides
// Size: 0x10(Inherited: 0x0) 
struct FPlatformRuntimeAudioCompressionOverrides
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bOverrideCompressionTimes : 1;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	float DurationThreshold;  // 0x4(0x4)
	int32_t MaxNumRandomBranches;  // 0x8(0x4)
	int32_t SoundCueQualityIndex;  // 0xC(0x4)

}; 
