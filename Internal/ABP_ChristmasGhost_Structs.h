#pragma once 
#include "SDK.h" 
 
 
// Function ABP_ChristmasGhost.ABP_ChristmasGhost_C.ExecuteUbergraph_ABP_ChristmasGhost
// Size: 0xA0(Inherited: 0x0) 
struct FExecuteUbergraph_ABP_ChristmasGhost
{
	int32_t EntryPoint;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct AActor* CallFunc_GetOwningActor_ReturnValue;  // 0x8(0x8)
	struct ABP_ChristmasGhost_C* K2Node_DynamicCast_AsBP_Christmas_Ghost;  // 0x10(0x8)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x18(0x1)
	char pad_25[3];  // 0x19(0x3)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0x1C(0xC)
	struct FVector CallFunc_GetActorForwardVector_ReturnValue;  // 0x28(0xC)
	struct FVector CallFunc_GetActorUpVector_ReturnValue;  // 0x34(0xC)
	struct FVector CallFunc_Multiply_VectorFloat_ReturnValue;  // 0x40(0xC)
	struct FVector CallFunc_Multiply_VectorFloat_ReturnValue_2;  // 0x4C(0xC)
	struct FVector CallFunc_Add_VectorVector_ReturnValue;  // 0x58(0xC)
	struct FVector CallFunc_Add_VectorVector_ReturnValue_2;  // 0x64(0xC)
	struct FTransform CallFunc_MakeTransform_ReturnValue;  // 0x70(0x30)

}; 
// Function ABP_ChristmasGhost.ABP_ChristmasGhost_C.AnimGraph
// Size: 0x10(Inherited: 0x0) 
struct FAnimGraph
{
	struct FPoseLink AnimGraph;  // 0x0(0x10)

}; 
