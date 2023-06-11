#pragma once 
#include "SDK.h" 
 
 
// Function UI_ScrollBar.UI_ScrollBar_C.ExecuteUbergraph_UI_ScrollBar
// Size: 0x60(Inherited: 0x0) 
struct FExecuteUbergraph_UI_ScrollBar
{
	int32_t EntryPoint;  // 0x0(0x4)
	float K2Node_Event_value;  // 0x4(0x4)
	float K2Node_Event_MaxCountOnScreen;  // 0x8(0x4)
	float K2Node_Event_MaxValue;  // 0xC(0x4)
	struct FGeometry K2Node_Event_MyGeometry;  // 0x10(0x38)
	float K2Node_Event_InDeltaTime;  // 0x48(0x4)
	struct FVector2D CallFunc_GetLocalSize_ReturnValue;  // 0x4C(0x8)
	float K2Node_Event_value_2;  // 0x54(0x4)
	float K2Node_Event_MaxCountOnScreen_2;  // 0x58(0x4)
	float K2Node_Event_MaxValue_2;  // 0x5C(0x4)

}; 
// Function UI_ScrollBar.UI_ScrollBar_C.UpdateFromValueInternal2
// Size: 0xC(Inherited: 0xC) 
struct FUpdateFromValueInternal2 : public FUpdateFromValueInternal2
{
	float Value;  // 0x0(0x4)
	float MaxCountOnScreen;  // 0x4(0x4)
	float MaxValue;  // 0x8(0x4)

}; 
// Function UI_ScrollBar.UI_ScrollBar_C.OnMouseButtonDown
// Size: 0x2D0(Inherited: 0x160) 
struct FOnMouseButtonDown : public FOnMouseButtonDown
{
	struct FGeometry MyGeometry;  // 0x0(0x38)
	struct FPointerEvent MouseEvent;  // 0x38(0x70)
	struct FEventReply ReturnValue;  // 0xA8(0xB8)
	struct FEventReply CallFunc_Handled_ReturnValue;  // 0x160(0xB8)
	struct FEventReply CallFunc_CaptureMouse_ReturnValue;  // 0x218(0xB8)

}; 
// Function UI_ScrollBar.UI_ScrollBar_C.SetToUpdateFromValue
// Size: 0xC(Inherited: 0x0) 
struct FSetToUpdateFromValue
{
	float Value;  // 0x0(0x4)
	float MaxCountOnScreen;  // 0x4(0x4)
	float MaxValue;  // 0x8(0x4)

}; 
// Function UI_ScrollBar.UI_ScrollBar_C.Tick
// Size: 0x3C(Inherited: 0x3C) 
struct FTick : public FTick
{
	struct FGeometry MyGeometry;  // 0x0(0x38)
	float InDeltaTime;  // 0x38(0x4)

}; 
// Function UI_ScrollBar.UI_ScrollBar_C.UpdateFromValueInternal
// Size: 0xF8(Inherited: 0x0) 
struct FUpdateFromValueInternal
{
	float Value;  // 0x0(0x4)
	float MaxCountOnScreen;  // 0x4(0x4)
	float MaxValue;  // 0x8(0x4)
	float ScrollBarValue;  // 0xC(0x4)
	float scrollBarStep;  // 0x10(0x4)
	float ViewportHeight;  // 0x14(0x4)
	float ContentHeight;  // 0x18(0x4)
	char pad_28_1 : 7;  // 0x1C(0x1)
	bool CallFunc_GreaterEqual_FloatFloat_ReturnValue : 1;  // 0x1C(0x1)
	char pad_29[3];  // 0x1D(0x3)
	float CallFunc_Divide_FloatFloat_ReturnValue;  // 0x20(0x4)
	float CallFunc_Subtract_FloatFloat_ReturnValue;  // 0x24(0x4)
	struct UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue;  // 0x28(0x8)
	float CallFunc_BreakVector2D_X;  // 0x30(0x4)
	float CallFunc_BreakVector2D_Y;  // 0x34(0x4)
	float CallFunc_Multiply_FloatFloat_ReturnValue;  // 0x38(0x4)
	float CallFunc_Divide_FloatFloat_ReturnValue_2;  // 0x3C(0x4)
	float CallFunc_Divide_FloatFloat_ReturnValue_3;  // 0x40(0x4)
	float CallFunc_Multiply_FloatFloat_ReturnValue_2;  // 0x44(0x4)
	float CallFunc_Multiply_FloatFloat_ReturnValue_3;  // 0x48(0x4)
	struct FMargin K2Node_MakeStruct_Margin;  // 0x4C(0x10)
	float CallFunc_BreakVector2D_X_2;  // 0x5C(0x4)
	float CallFunc_BreakVector2D_Y_2;  // 0x60(0x4)
	struct FVector2D CallFunc_MakeVector2D_ReturnValue;  // 0x64(0x8)
	char pad_108[4];  // 0x6C(0x4)
	struct FSlateBrush K2Node_MakeStruct_SlateBrush;  // 0x70(0x88)

}; 
// Function UI_ScrollBar.UI_ScrollBar_C.CallSetToUpdateFromValue
// Size: 0xC(Inherited: 0xC) 
struct FCallSetToUpdateFromValue : public FCallSetToUpdateFromValue
{
	float Value;  // 0x0(0x4)
	float MaxCountOnScreen;  // 0x4(0x4)
	float MaxValue;  // 0x8(0x4)

}; 
// Function UI_ScrollBar.UI_ScrollBar_C.OnMouseMove
// Size: 0x254(Inherited: 0x160) 
struct FOnMouseMove : public FOnMouseMove
{
	struct FGeometry MyGeometry;  // 0x0(0x38)
	struct FPointerEvent MouseEvent;  // 0x38(0x70)
	struct FEventReply ReturnValue;  // 0xA8(0xB8)
	struct FVector2D CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue;  // 0x160(0x8)
	struct FVector2D CallFunc_GetLocalSize_ReturnValue;  // 0x168(0x8)
	struct FVector2D CallFunc_AbsoluteToLocal_ReturnValue;  // 0x170(0x8)
	float CallFunc_BreakVector2D_X;  // 0x178(0x4)
	float CallFunc_BreakVector2D_Y;  // 0x17C(0x4)
	float CallFunc_BreakVector2D_X_2;  // 0x180(0x4)
	float CallFunc_BreakVector2D_Y_2;  // 0x184(0x4)
	char pad_744_1 : 7;  // 0x2E8(0x1)
	bool CallFunc_HasMouseCapture_ReturnValue : 1;  // 0x188(0x1)
	float CallFunc_Divide_FloatFloat_ReturnValue;  // 0x18C(0x4)
	float CallFunc_FClamp_ReturnValue;  // 0x190(0x4)
	struct FEventReply CallFunc_Handled_ReturnValue;  // 0x198(0xB8)
	float CallFunc_Multiply_FloatFloat_ReturnValue;  // 0x250(0x4)

}; 
// Function UI_ScrollBar.UI_ScrollBar_C.OnMouseButtonUp
// Size: 0x2D0(Inherited: 0x160) 
struct FOnMouseButtonUp : public FOnMouseButtonUp
{
	struct FGeometry MyGeometry;  // 0x0(0x38)
	struct FPointerEvent MouseEvent;  // 0x38(0x70)
	struct FEventReply ReturnValue;  // 0xA8(0xB8)
	struct FEventReply CallFunc_Handled_ReturnValue;  // 0x160(0xB8)
	struct FEventReply CallFunc_ReleaseMouseCapture_ReturnValue;  // 0x218(0xB8)

}; 
