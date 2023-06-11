#pragma once 
#include <LightPropagationVolumeRuntime_Structs.h>
 
 
 
// Class LightPropagationVolumeRuntime.LightPropagationVolumeBlendable
// Size: 0x78(Inherited: 0x28) 
struct ULightPropagationVolumeBlendable : public UObject
{
	char pad_40[8];  // 0x28(0x8)
	struct FLightPropagationVolumeSettings Settings;  // 0x30(0x40)
	float BlendWeight;  // 0x70(0x4)
	char pad_116[4];  // 0x74(0x4)

}; 



