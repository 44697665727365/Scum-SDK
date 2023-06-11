#pragma once 
#include <UI_PlaceableElement_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass UI_PlaceableElement.UI_PlaceableElement_C
// Size: 0x298(Inherited: 0x270) 
struct UUI_PlaceableElement_C : public UPlaceableElementWidget
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x270(0x8)
	struct UButton* Button_1;  // 0x278(0x8)
	struct UImage* Image_106;  // 0x280(0x8)
	struct UImage* Image_bg_black;  // 0x288(0x8)
	struct URetainerBox* RetainerBox_1;  // 0x290(0x8)

	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UI_PlaceableElement.UI_PlaceableElement_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void ExecuteUbergraph_UI_PlaceableElement(int32_t EntryPoint); // Function UI_PlaceableElement.UI_PlaceableElement_C.ExecuteUbergraph_UI_PlaceableElement
}; 



