#pragma once 
#include <UI_AdjustableSeparator_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass UI_AdjustableSeparator.UI_AdjustableSeparator_C
// Size: 0x2A0(Inherited: 0x270) 
struct UUI_AdjustableSeparator_C : public UBadAdjustableSeparator
{
	struct UImage* Image_1;  // 0x270(0x8)
	struct UImage* Image_2;  // 0x278(0x8)
	struct UImage* Image_3;  // 0x280(0x8)
	struct UNamedSlot* UnderSlot;  // 0x288(0x8)
	struct UNamedSlot* UpperSlot;  // 0x290(0x8)
	char pad_664_1 : 7;  // 0x298(0x1)
	bool _shouldMove : 1;  // 0x298(0x1)
	char pad_665[3];  // 0x299(0x3)
	float MinHeight;  // 0x29C(0x4)

	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UI_AdjustableSeparator.UI_AdjustableSeparator_C.OnMouseButtonUp
	struct FEventReply OnPreviewMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UI_AdjustableSeparator.UI_AdjustableSeparator_C.OnPreviewMouseButtonDown
	struct FEventReply OnMouseMove(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UI_AdjustableSeparator.UI_AdjustableSeparator_C.OnMouseMove
}; 



