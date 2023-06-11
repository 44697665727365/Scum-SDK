#pragma once 
#include "SDK.h" 
 
 
// Function ABP_Prisoner_FirstPersonAimRotation.ABP_Prisoner_FirstPersonAimRotation_C.ExecuteUbergraph_ABP_Prisoner_FirstPersonAimRotation
// Size: 0x88(Inherited: 0x0) 
struct FExecuteUbergraph_ABP_Prisoner_FirstPersonAimRotation
{
	int32_t EntryPoint;  // 0x0(0x4)
	float CallFunc_Divide_FloatFloat_ReturnValue;  // 0x4(0x4)
	float CallFunc_Divide_FloatFloat_ReturnValue_2;  // 0x8(0x4)
	struct FRotator CallFunc_MakeRotator_ReturnValue;  // 0xC(0xC)
	struct FRotator CallFunc_MakeRotator_ReturnValue_2;  // 0x18(0xC)
	struct FRotator CallFunc_MakeRotator_ReturnValue_3;  // 0x24(0xC)
	float CallFunc_Divide_FloatFloat_ReturnValue_3;  // 0x30(0x4)
	char pad_52_1 : 7;  // 0x34(0x1)
	bool CallFunc_EqualEqual_ByteByte_ReturnValue : 1;  // 0x34(0x1)
	char pad_53[3];  // 0x35(0x3)
	float CallFunc_FClamp_ReturnValue;  // 0x38(0x4)
	float CallFunc_Multiply_FloatFloat_ReturnValue;  // 0x3C(0x4)
	float CallFunc_Multiply_FloatFloat_ReturnValue_2;  // 0x40(0x4)
	struct FVector CallFunc_MakeVector_ReturnValue;  // 0x44(0xC)
	struct FVector CallFunc_MakeVector_ReturnValue_2;  // 0x50(0xC)
	float CallFunc_Multiply_FloatFloat_ReturnValue_3;  // 0x5C(0x4)
	struct FVector CallFunc_SelectVector_ReturnValue;  // 0x60(0xC)
	struct FVector CallFunc_MakeVector_ReturnValue_3;  // 0x6C(0xC)
	char pad_120_1 : 7;  // 0x78(0x1)
	bool CallFunc_EqualEqual_ByteByte_ReturnValue_2 : 1;  // 0x78(0x1)
	char pad_121[3];  // 0x79(0x3)
	struct FVector CallFunc_SelectVector_ReturnValue_2;  // 0x7C(0xC)

}; 
// Function ABP_Prisoner_FirstPersonAimRotation.ABP_Prisoner_FirstPersonAimRotation_C.AnimGraph
// Size: 0x20(Inherited: 0x0) 
struct FAnimGraph
{
	struct FPoseLink InPose;  // 0x0(0x10)
	struct FPoseLink AnimGraph;  // 0x10(0x10)

}; 
