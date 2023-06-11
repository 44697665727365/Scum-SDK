#pragma once 
#include "SDK.h" 
 
 
// Function UI_ActionProgress.UI_ActionProgress_C.ExecuteUbergraph_UI_ActionProgress
// Size: 0x128(Inherited: 0x0) 
struct FExecuteUbergraph_UI_ActionProgress
{
	int32_t EntryPoint;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue;  // 0x8(0x8)
	struct FGeometry K2Node_Event_MyGeometry;  // 0x10(0x38)
	struct FPointerEvent K2Node_Event_MouseEvent_2;  // 0x48(0x70)
	struct FPointerEvent K2Node_Event_MouseEvent;  // 0xB8(0x70)

}; 
// Function UI_ActionProgress.UI_ActionProgress_C.OnMouseLeave
// Size: 0x70(Inherited: 0x70) 
struct FOnMouseLeave : public FOnMouseLeave
{
	struct FPointerEvent MouseEvent;  // 0x0(0x70)

}; 
// Function UI_ActionProgress.UI_ActionProgress_C.OnMouseEnter
// Size: 0xA8(Inherited: 0xA8) 
struct FOnMouseEnter : public FOnMouseEnter
{
	struct FGeometry MyGeometry;  // 0x0(0x38)
	struct FPointerEvent MouseEvent;  // 0x38(0x70)

}; 
// Function UI_ActionProgress.UI_ActionProgress_C.Get_PercentageText_Text_1
// Size: 0x38(Inherited: 0x0) 
struct FGet_PercentageText_Text_1
{
	struct FText ReturnValue;  // 0x0(0x18)
	float CallFunc_Divide_FloatFloat_ReturnValue;  // 0x18(0x4)
	float CallFunc_Multiply_FloatFloat_ReturnValue;  // 0x1C(0x4)
	struct FText CallFunc_Conv_FloatToText_ReturnValue;  // 0x20(0x18)

}; 
// Function UI_ActionProgress.UI_ActionProgress_C.OnMouseButtonDown
// Size: 0x2D8(Inherited: 0x160) 
struct FOnMouseButtonDown : public FOnMouseButtonDown
{
	struct FGeometry MyGeometry;  // 0x0(0x38)
	struct FPointerEvent MouseEvent;  // 0x38(0x70)
	struct FEventReply ReturnValue;  // 0xA8(0xB8)
	char pad_704_1 : 7;  // 0x2C0(0x1)
	bool CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue : 1;  // 0x160(0x1)
	struct FEventReply CallFunc_Unhandled_ReturnValue;  // 0x168(0xB8)
	struct FEventReply CallFunc_Handled_ReturnValue;  // 0x220(0xB8)

}; 
