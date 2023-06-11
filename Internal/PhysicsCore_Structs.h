#pragma once 
#include "SDK.h" 
 
 
// ScriptStruct PhysicsCore.BodyInstanceCore
// Size: 0x18(Inherited: 0x0) 
struct FBodyInstanceCore
{
	char pad_0[16];  // 0x0(0x10)
	char bSimulatePhysics : 1;  // 0x10(0x1)
	char bOverrideMass : 1;  // 0x10(0x1)
	char bEnableGravity : 1;  // 0x10(0x1)
	char bAutoWeld : 1;  // 0x10(0x1)
	char bStartAwake : 1;  // 0x10(0x1)
	char bGenerateWakeEvents : 1;  // 0x10(0x1)
	char bUpdateMassWhenScaleChanges : 1;  // 0x10(0x1)
	char pad_16_1 : 1;  // 0x10(0x1)
	char pad_17[8];  // 0x11(0x8)

}; 
