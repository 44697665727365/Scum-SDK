#pragma once 
#include "SDK.h" 
 
 
// Function BP_Wristwatch.BP_Wristwatch_C.ExecuteUbergraph_BP_Wristwatch
// Size: 0x18(Inherited: 0x0) 
struct FExecuteUbergraph_BP_Wristwatch
{
	int32_t EntryPoint;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue;  // 0x8(0x8)
	float K2Node_Event_DeltaSeconds;  // 0x10(0x4)
	float K2Node_Event_value;  // 0x14(0x4)

}; 
// Function BP_Wristwatch.BP_Wristwatch_C.SetDisplayBrightness
// Size: 0x4(Inherited: 0x4) 
struct FSetDisplayBrightness : public FSetDisplayBrightness
{
	float Value;  // 0x0(0x4)

}; 
// Function BP_Wristwatch.BP_Wristwatch_C.ReceiveTick
// Size: 0x4(Inherited: 0x4) 
struct FReceiveTick : public FReceiveTick
{
	float DeltaSeconds;  // 0x0(0x4)

}; 
