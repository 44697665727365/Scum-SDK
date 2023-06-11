#pragma once 
#include <WmfMediaFactory_Structs.h>
 
 
 
// Class WmfMediaFactory.WmfMediaSettings
// Size: 0x30(Inherited: 0x28) 
struct UWmfMediaSettings : public UObject
{
	char pad_40_1 : 7;  // 0x28(0x1)
	bool AllowNonStandardCodecs : 1;  // 0x28(0x1)
	char pad_41_1 : 7;  // 0x29(0x1)
	bool LowLatency : 1;  // 0x29(0x1)
	char pad_42_1 : 7;  // 0x2A(0x1)
	bool NativeAudioOut : 1;  // 0x2A(0x1)
	char pad_43_1 : 7;  // 0x2B(0x1)
	bool HardwareAcceleratedVideoDecoding : 1;  // 0x2B(0x1)
	char pad_44[4];  // 0x2C(0x4)

}; 



