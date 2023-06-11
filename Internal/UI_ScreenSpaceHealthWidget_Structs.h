#pragma once 
#include "SDK.h" 
 
 
// Function UI_ScreenSpaceHealthWidget.UI_ScreenSpaceHealthWidget_C.SetHealthPercentage
// Size: 0x4(Inherited: 0x4) 
struct FSetHealthPercentage : public FSetHealthPercentage
{
	float Value;  // 0x0(0x4)

}; 
// Function UI_ScreenSpaceHealthWidget.UI_ScreenSpaceHealthWidget_C.ExecuteUbergraph_UI_ScreenSpaceHealthWidget
// Size: 0x3C(Inherited: 0x0) 
struct FExecuteUbergraph_UI_ScreenSpaceHealthWidget
{
	int32_t EntryPoint;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue;  // 0x8(0x8)
	struct UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2;  // 0x10(0x8)
	float K2Node_Event_value_2;  // 0x18(0x4)
	float CallFunc_FClamp_ReturnValue;  // 0x1C(0x4)
	float K2Node_Event_value;  // 0x20(0x4)
	float CallFunc_FClamp_ReturnValue_2;  // 0x24(0x4)
	float CallFunc_GetFloatValue_ReturnValue;  // 0x28(0x4)
	struct FLinearColor CallFunc_LinearColorLerp_ReturnValue;  // 0x2C(0x10)

}; 
// Function UI_ScreenSpaceHealthWidget.UI_ScreenSpaceHealthWidget_C.SetMaxHealthPercentage
// Size: 0x4(Inherited: 0x4) 
struct FSetMaxHealthPercentage : public FSetMaxHealthPercentage
{
	float Value;  // 0x0(0x4)

}; 
