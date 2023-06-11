#pragma once 
#include <UI_ItemSelectionWidget_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass UI_ItemSelectionWidget.UI_ItemSelectionWidget_C
// Size: 0x300(Inherited: 0x2E8) 
struct UUI_ItemSelectionWidget_C : public UItemSelectionWidget
{
	struct UImage* Image_1;  // 0x2E8(0x8)
	struct FMulticastInlineDelegate OnClicked;  // 0x2F0(0x10)

	struct FEventReply On__selection_MouseButtonDown_1(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UI_ItemSelectionWidget.UI_ItemSelectionWidget_C.On__selection_MouseButtonDown_1
	void OnClicked__DelegateSignature(); // Function UI_ItemSelectionWidget.UI_ItemSelectionWidget_C.OnClicked__DelegateSignature
}; 



