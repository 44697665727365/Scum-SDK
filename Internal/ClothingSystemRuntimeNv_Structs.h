#pragma once 
#include "SDK.h" 
 
 
// ScriptStruct ClothingSystemRuntimeNv.ClothConstraintSetupNv
// Size: 0x10(Inherited: 0x0) 
struct FClothConstraintSetupNv
{
	float Stiffness;  // 0x0(0x4)
	float StiffnessMultiplier;  // 0x4(0x4)
	float StretchLimit;  // 0x8(0x4)
	float CompressionLimit;  // 0xC(0x4)

}; 
// Function ClothingSystemRuntimeNv.ClothingSimulationInteractorNv.SetAnimDriveDamperStiffness
// Size: 0x4(Inherited: 0x0) 
struct FSetAnimDriveDamperStiffness
{
	float InStiffness;  // 0x0(0x4)

}; 
