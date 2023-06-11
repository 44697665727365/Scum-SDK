#pragma once 
#include "SDK.h" 
 
 
// Function UI_CircularMenu.UI_CircularMenu_C.CenterMouseToWidget
// Size: 0x80(Inherited: 0x0) 
struct FCenterMouseToWidget
{
	struct FVector2D AbsoluteCenterPos;  // 0x0(0x8)
	struct FVector2D LocalCenterPos;  // 0x8(0x8)
	struct APlayerController* CallFunc_GetPlayerController_ReturnValue;  // 0x10(0x8)
	struct FGeometry CallFunc_GetCachedGeometry_ReturnValue;  // 0x18(0x38)
	struct FVector2D CallFunc_GetLocalSize_ReturnValue;  // 0x50(0x8)
	struct FVector2D CallFunc_Multiply_Vector2DFloat_ReturnValue;  // 0x58(0x8)
	struct FVector2D CallFunc_LocalToViewport_PixelPosition;  // 0x60(0x8)
	struct FVector2D CallFunc_LocalToViewport_ViewportPosition;  // 0x68(0x8)
	float CallFunc_BreakVector2D_X;  // 0x70(0x4)
	float CallFunc_BreakVector2D_Y;  // 0x74(0x4)
	int32_t CallFunc_FTrunc_ReturnValue;  // 0x78(0x4)
	int32_t CallFunc_FTrunc_ReturnValue_2;  // 0x7C(0x4)

}; 
// Function UI_CircularMenu.UI_CircularMenu_C.ExecuteUbergraph_UI_CircularMenu
// Size: 0x16(Inherited: 0x0) 
struct FExecuteUbergraph_UI_CircularMenu
{
	int32_t EntryPoint;  // 0x0(0x4)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x4(0x10)
	uint8_t  K2Node_CustomEvent_InVisibility;  // 0x14(0x1)
	char pad_21_1 : 7;  // 0x15(0x1)
	bool K2Node_SwitchEnum_CmpSuccess : 1;  // 0x15(0x1)

}; 
// Function UI_CircularMenu.UI_CircularMenu_C.OnWidgetVisibilityChanged
// Size: 0x1(Inherited: 0x0) 
struct FOnWidgetVisibilityChanged
{
	uint8_t  InVisibility;  // 0x0(0x1)

}; 
