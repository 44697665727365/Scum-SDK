#pragma once 
#include <UI_ItemStatusWidget_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass UI_ItemStatusWidget.UI_ItemStatusWidget_C
// Size: 0x320(Inherited: 0x2F8) 
struct UUI_ItemStatusWidget_C : public UItemStatusWidget
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x2F8(0x8)
	struct UEditableTextBox* _titleText;  // 0x300(0x8)
	struct UImage* baseImage;  // 0x308(0x8)
	struct UImage* outlineImage;  // 0x310(0x8)
	struct UOverlay* TitleOverlay;  // 0x318(0x8)

	void UpdateVisibility(); // Function UI_ItemStatusWidget.UI_ItemStatusWidget_C.UpdateVisibility
	void Construct(); // Function UI_ItemStatusWidget.UI_ItemStatusWidget_C.Construct
	void SetNameText(struct FString Text); // Function UI_ItemStatusWidget.UI_ItemStatusWidget_C.SetNameText
	void ExecuteUbergraph_UI_ItemStatusWidget(int32_t EntryPoint); // Function UI_ItemStatusWidget.UI_ItemStatusWidget_C.ExecuteUbergraph_UI_ItemStatusWidget
}; 



