#pragma once 
#include <UI_WorldCraftingMarker_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass UI_WorldCraftingMarker.UI_WorldCraftingMarker_C
// Size: 0x341(Inherited: 0x300) 
struct UUI_WorldCraftingMarker_C : public UWorldCraftingMarkerWidget
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x300(0x8)
	struct UImage* Background;  // 0x308(0x8)
	struct UTextBlock* Distance;  // 0x310(0x8)
	struct UImage* Emphasis;  // 0x318(0x8)
	struct UImage* Icon;  // 0x320(0x8)
	struct UTextBlock* Label;  // 0x328(0x8)
	struct UImage* SmallPointer;  // 0x330(0x8)
	struct UWidgetSwitcher* Switcher;  // 0x338(0x8)
	uint8_t  _mode;  // 0x340(0x1)

	struct FText Get_Label_Text(); // Function UI_WorldCraftingMarker.UI_WorldCraftingMarker_C.Get_Label_Text
	struct FSlateBrush Get_Accent_Brush(); // Function UI_WorldCraftingMarker.UI_WorldCraftingMarker_C.Get_Accent_Brush
	struct FLinearColor Get_Emphasis_Color(); // Function UI_WorldCraftingMarker.UI_WorldCraftingMarker_C.Get_Emphasis_Color
	uint8_t  Get_Emphasis_Visibility(); // Function UI_WorldCraftingMarker.UI_WorldCraftingMarker_C.Get_Emphasis_Visibility
	uint8_t  Get_Bar_Visibility(); // Function UI_WorldCraftingMarker.UI_WorldCraftingMarker_C.Get_Bar_Visibility
	struct FText Get_Distance_Text(); // Function UI_WorldCraftingMarker.UI_WorldCraftingMarker_C.Get_Distance_Text
	struct FSlateBrush Get_Bar_Brush(); // Function UI_WorldCraftingMarker.UI_WorldCraftingMarker_C.Get_Bar_Brush
	uint8_t  Get_BigPointer_Visibility(); // Function UI_WorldCraftingMarker.UI_WorldCraftingMarker_C.Get_BigPointer_Visibility
	uint8_t  Get_SmallPointer_Visibility(); // Function UI_WorldCraftingMarker.UI_WorldCraftingMarker_C.Get_SmallPointer_Visibility
	struct FSlateBrush Get_Icon_Brush(); // Function UI_WorldCraftingMarker.UI_WorldCraftingMarker_C.Get_Icon_Brush
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UI_WorldCraftingMarker.UI_WorldCraftingMarker_C.Tick
	void ChangeMode(uint8_t  mode); // Function UI_WorldCraftingMarker.UI_WorldCraftingMarker_C.ChangeMode
	void ExecuteUbergraph_UI_WorldCraftingMarker(int32_t EntryPoint); // Function UI_WorldCraftingMarker.UI_WorldCraftingMarker_C.ExecuteUbergraph_UI_WorldCraftingMarker
}; 



