#pragma once 
#include <UI_TooltipOverviewTextParameterElement_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass UI_TooltipOverviewTextParameterElement.UI_TooltipOverviewTextParameterElement_C
// Size: 0x320(Inherited: 0x268) 
struct UUI_TooltipOverviewTextParameterElement_C : public UItemTooltipPanelElement
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x268(0x8)
	struct UImage* Image_2;  // 0x270(0x8)
	struct UTextBlock* TextBlock_1;  // 0x278(0x8)
	struct UTextBlock* TextBlock_47;  // 0x280(0x8)
	struct FSlateFontInfo Font;  // 0x288(0x58)
	struct FText TextFormat;  // 0x2E0(0x18)
	struct FText ParameterText;  // 0x2F8(0x18)
	int32_t MinimumIntegralDigits;  // 0x310(0x4)
	int32_t MaximumIntegralDigits;  // 0x314(0x4)
	int32_t MinimumFractionalDigits;  // 0x318(0x4)
	int32_t MaximumFractionalDigits;  // 0x31C(0x4)

	void OnTextDataChanged(struct FText& Value); // Function UI_TooltipOverviewTextParameterElement.UI_TooltipOverviewTextParameterElement_C.OnTextDataChanged
	void PreConstruct(bool IsDesignTime); // Function UI_TooltipOverviewTextParameterElement.UI_TooltipOverviewTextParameterElement_C.PreConstruct
	void OnNumberDataChanged(float Value); // Function UI_TooltipOverviewTextParameterElement.UI_TooltipOverviewTextParameterElement_C.OnNumberDataChanged
	void ExecuteUbergraph_UI_TooltipOverviewTextParameterElement(int32_t EntryPoint); // Function UI_TooltipOverviewTextParameterElement.UI_TooltipOverviewTextParameterElement_C.ExecuteUbergraph_UI_TooltipOverviewTextParameterElement
}; 



