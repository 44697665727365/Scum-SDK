#pragma once 
#include <UI_StandardMenuButton_Deprecated_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass UI_StandardMenuButton_Deprecated.UI_StandardMenuButton_Deprecated_C
// Size: 0x319(Inherited: 0x2C8) 
struct UUI_StandardMenuButton_Deprecated_C : public UConZStandardButton
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x2C8(0x8)
	struct UImage* Image_1;  // 0x2D0(0x8)
	struct USizeBox* MainSizeBox;  // 0x2D8(0x8)
	struct FMulticastInlineDelegate OnClicked;  // 0x2E0(0x10)
	struct FText Text;  // 0x2F0(0x18)
	char pad_776_1 : 7;  // 0x308(0x1)
	bool SizeToContent : 1;  // 0x308(0x1)
	char pad_777[3];  // 0x309(0x3)
	float WidthOverride;  // 0x30C(0x4)
	int32_t FontSize;  // 0x310(0x4)
	int32_t HoveredFontSize;  // 0x314(0x4)
	char pad_792_1 : 7;  // 0x318(0x1)
	bool OverridesHighlight_1 : 1;  // 0x318(0x1)

	void SetText(struct FText Text); // Function UI_StandardMenuButton_Deprecated.UI_StandardMenuButton_Deprecated_C.SetText
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UI_StandardMenuButton_Deprecated.UI_StandardMenuButton_Deprecated_C.OnMouseEnter
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function UI_StandardMenuButton_Deprecated.UI_StandardMenuButton_Deprecated_C.OnMouseLeave
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature(); // Function UI_StandardMenuButton_Deprecated.UI_StandardMenuButton_Deprecated_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature
	void Construct(); // Function UI_StandardMenuButton_Deprecated.UI_StandardMenuButton_Deprecated_C.Construct
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function UI_StandardMenuButton_Deprecated.UI_StandardMenuButton_Deprecated_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	void SetTextInternal(struct FText& Text); // Function UI_StandardMenuButton_Deprecated.UI_StandardMenuButton_Deprecated_C.SetTextInternal
	void SynchronizePropertiesInBlueprint(); // Function UI_StandardMenuButton_Deprecated.UI_StandardMenuButton_Deprecated_C.SynchronizePropertiesInBlueprint
	void ExecuteUbergraph_UI_StandardMenuButton_Deprecated(int32_t EntryPoint); // Function UI_StandardMenuButton_Deprecated.UI_StandardMenuButton_Deprecated_C.ExecuteUbergraph_UI_StandardMenuButton_Deprecated
	void OnClicked__DelegateSignature(); // Function UI_StandardMenuButton_Deprecated.UI_StandardMenuButton_Deprecated_C.OnClicked__DelegateSignature
}; 



