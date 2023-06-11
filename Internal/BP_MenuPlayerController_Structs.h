#pragma once 
#include "SDK.h" 
 
 
// Function BP_MenuPlayerController.BP_MenuPlayerController_C.ExecuteUbergraph_BP_MenuPlayerController
// Size: 0xC0(Inherited: 0x0) 
struct FExecuteUbergraph_BP_MenuPlayerController
{
	int32_t EntryPoint;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct APawn* CallFunc_K2_GetPawn_ReturnValue;  // 0x8(0x8)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x10(0x1)
	char pad_17[3];  // 0x11(0x3)
	float K2Node_Event_DeltaSeconds;  // 0x14(0x4)
	float CallFunc_Multiply_FloatFloat_ReturnValue;  // 0x18(0x4)
	float CallFunc_GetInputMouseDelta_DeltaX;  // 0x1C(0x4)
	float CallFunc_GetInputMouseDelta_DeltaY;  // 0x20(0x4)
	float CallFunc_Multiply_FloatFloat_ReturnValue_2;  // 0x24(0x4)
	float CallFunc_Multiply_FloatFloat_ReturnValue_3;  // 0x28(0x4)
	struct FRotator CallFunc_MakeRotator_ReturnValue;  // 0x2C(0xC)
	struct FHitResult CallFunc_K2_AddActorWorldRotation_SweepHitResult;  // 0x38(0x88)

}; 
// Function BP_MenuPlayerController.BP_MenuPlayerController_C.ReceiveTick
// Size: 0x4(Inherited: 0x4) 
struct FReceiveTick : public FReceiveTick
{
	float DeltaSeconds;  // 0x0(0x4)

}; 
