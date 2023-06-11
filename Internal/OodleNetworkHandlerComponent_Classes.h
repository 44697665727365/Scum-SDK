#pragma once 
#include <OodleNetworkHandlerComponent_Structs.h>
 
 
 
// Class OodleNetworkHandlerComponent.OodleNetworkTrainerCommandlet
// Size: 0xA0(Inherited: 0x80) 
struct UOodleNetworkTrainerCommandlet : public UCommandlet
{
	char pad_128_1 : 7;  // 0x80(0x1)
	bool bCompressionTest : 1;  // 0x80(0x1)
	char pad_129[3];  // 0x81(0x3)
	int32_t HashTableSize;  // 0x84(0x4)
	int32_t DictionarySize;  // 0x88(0x4)
	int32_t DictionaryTrials;  // 0x8C(0x4)
	int32_t TrialRandomness;  // 0x90(0x4)
	int32_t TrialGenerations;  // 0x94(0x4)
	char pad_152_1 : 7;  // 0x98(0x1)
	bool bNoTrials : 1;  // 0x98(0x1)
	char pad_153[7];  // 0x99(0x7)

}; 



