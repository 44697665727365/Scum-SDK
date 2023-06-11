#pragma once 
#include "SDK.h" 
 
 
// Function UI_WarningSign.UI_WarningSign_C.ExecuteUbergraph_UI_WarningSign
// Size: 0x60(Inherited: 0x0) 
struct FExecuteUbergraph_UI_WarningSign
{
	int32_t EntryPoint;  // 0x0(0x4)
	uint8_t  K2Node_Event_warningType;  // 0x4(0x1)
	char pad_5_1 : 7;  // 0x5(0x1)
	bool CallFunc_LessEqual_FloatFloat_ReturnValue : 1;  // 0x5(0x1)
	char pad_6_1 : 7;  // 0x6(0x1)
	bool K2Node_SwitchEnum_CmpSuccess : 1;  // 0x6(0x1)
	char pad_7[1];  // 0x7(0x1)
	struct UMaterialInstanceDynamic* CallFunc_GetEffectMaterial_ReturnValue;  // 0x8(0x8)
	struct FGeometry K2Node_Event_MyGeometry;  // 0x10(0x38)
	float K2Node_Event_InDeltaTime;  // 0x48(0x4)
	char pad_76[4];  // 0x4C(0x4)
	struct UMaterialInstanceDynamic* CallFunc_GetEffectMaterial_ReturnValue_2;  // 0x50(0x8)
	float CallFunc_Multiply_FloatFloat_ReturnValue;  // 0x58(0x4)
	float CallFunc_Subtract_FloatFloat_ReturnValue;  // 0x5C(0x4)

}; 
// Function UI_WarningSign.UI_WarningSign_C.Tick
// Size: 0x3C(Inherited: 0x3C) 
struct FTick : public FTick
{
	struct FGeometry MyGeometry;  // 0x0(0x38)
	float InDeltaTime;  // 0x38(0x4)

}; 
// Function UI_WarningSign.UI_WarningSign_C.InitFromWarningType
// Size: 0x1(Inherited: 0x1) 
struct FInitFromWarningType : public FInitFromWarningType
{
	uint8_t  warningType;  // 0x0(0x1)

}; 
