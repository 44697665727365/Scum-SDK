#pragma once 
#include "SDK.h" 
 
 
// Function UI_AdjustableSeparator.UI_AdjustableSeparator_C.OnMouseMove
// Size: 0x234(Inherited: 0x160) 
struct FOnMouseMove : public FOnMouseMove
{
	struct FGeometry MyGeometry;  // 0x0(0x38)
	struct FPointerEvent MouseEvent;  // 0x38(0x70)
	struct FEventReply ReturnValue;  // 0xA8(0xB8)
	struct FVector2D CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue;  // 0x160(0x8)
	struct FVector2D CallFunc_AbsoluteToLocal_ReturnValue;  // 0x168(0x8)
	float CallFunc_BreakVector2D_X;  // 0x170(0x4)
	float CallFunc_BreakVector2D_Y;  // 0x174(0x4)
	struct FEventReply CallFunc_Handled_ReturnValue;  // 0x178(0xB8)
	float CallFunc_FMax_ReturnValue;  // 0x230(0x4)

}; 
// Function UI_AdjustableSeparator.UI_AdjustableSeparator_C.OnPreviewMouseButtonDown
// Size: 0x3ED(Inherited: 0x160) 
struct FOnPreviewMouseButtonDown : public FOnPreviewMouseButtonDown
{
	struct FGeometry MyGeometry;  // 0x0(0x38)
	struct FPointerEvent MouseEvent;  // 0x38(0x70)
	struct FEventReply ReturnValue;  // 0xA8(0xB8)
	struct FEventReply CallFunc_Unhandled_ReturnValue;  // 0x160(0xB8)
	struct FVector2D CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue;  // 0x218(0x8)
	struct FVector2D CallFunc_AbsoluteToLocal_ReturnValue;  // 0x220(0x8)
	float CallFunc_BreakVector2D_X;  // 0x228(0x4)
	float CallFunc_BreakVector2D_Y;  // 0x22C(0x4)
	struct FEventReply CallFunc_Handled_ReturnValue;  // 0x230(0xB8)
	struct FEventReply CallFunc_CaptureMouse_ReturnValue;  // 0x2E8(0xB8)
	struct FGeometry CallFunc_GetCachedGeometry_ReturnValue;  // 0x3A0(0x38)
	struct FVector2D CallFunc_GetLocalSize_ReturnValue;  // 0x3D8(0x8)
	char pad_1344_1 : 7;  // 0x540(0x1)
	bool CallFunc_NotEqual_Vector2DVector2D_ReturnValue : 1;  // 0x3E0(0x1)
	float CallFunc_BreakVector2D_X_2;  // 0x3E4(0x4)
	float CallFunc_BreakVector2D_Y_2;  // 0x3E8(0x4)
	char pad_1353_1 : 7;  // 0x549(0x1)
	bool CallFunc_NearlyEqual_FloatFloat_ReturnValue : 1;  // 0x3EC(0x1)

}; 
// Function UI_AdjustableSeparator.UI_AdjustableSeparator_C.OnMouseButtonUp
// Size: 0x390(Inherited: 0x160) 
struct FOnMouseButtonUp : public FOnMouseButtonUp
{
	struct FGeometry MyGeometry;  // 0x0(0x38)
	struct FPointerEvent MouseEvent;  // 0x38(0x70)
	struct FEventReply ReturnValue;  // 0xA8(0xB8)
	char pad_704_1 : 7;  // 0x2C0(0x1)
	bool Temp_bool_Variable : 1;  // 0x160(0x1)
	char pad_705_1 : 7;  // 0x2C1(0x1)
	bool CallFunc_HasMouseCapture_ReturnValue : 1;  // 0x161(0x1)
	struct FEventReply CallFunc_Handled_ReturnValue;  // 0x168(0xB8)
	struct FEventReply CallFunc_ReleaseMouseCapture_ReturnValue;  // 0x220(0xB8)
	struct FEventReply K2Node_Select_Default;  // 0x2D8(0xB8)

}; 
