#pragma once 
#include <UI_ItemMainTooltipPanel_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass UI_ItemMainTooltipPanel.UI_ItemMainTooltipPanel_C
// Size: 0x2E8(Inherited: 0x2B0) 
struct UUI_ItemMainTooltipPanel_C : public UItemTooltipPanel
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x2B0(0x8)
	struct UUI_TooltipOverviewTextElement_C* Caption;  // 0x2B8(0x8)
	struct UOverlay* DebugOverlay;  // 0x2C0(0x8)
	struct UUI_TooltipOverviewTextElement_C* DebugText;  // 0x2C8(0x8)
	struct UUI_TooltipOverviewTextElement_C* Description;  // 0x2D0(0x8)
	struct UImage* Image;  // 0x2D8(0x8)
	struct UImage* Image_2;  // 0x2E0(0x8)

	void Construct(); // Function UI_ItemMainTooltipPanel.UI_ItemMainTooltipPanel_C.Construct
	void ExecuteUbergraph_UI_ItemMainTooltipPanel(int32_t EntryPoint); // Function UI_ItemMainTooltipPanel.UI_ItemMainTooltipPanel_C.ExecuteUbergraph_UI_ItemMainTooltipPanel
}; 



