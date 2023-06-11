#pragma once 
#include <UI_TooltipOverviewTextElement_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass UI_TooltipOverviewTextElement.UI_TooltipOverviewTextElement_C
// Size: 0x538(Inherited: 0x268) 
struct UUI_TooltipOverviewTextElement_C : public UItemTooltipPanelElement
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x268(0x8)
	struct UExtendedRichTextBlock* ExtendedRichTextBlock_1;  // 0x270(0x8)
	struct FText TextFormat;  // 0x278(0x18)
	struct FTextBlockStyle TextStyle;  // 0x290(0x270)
	struct FSlateColor Color;  // 0x500(0x28)
	int32_t MinimumIntegralDigits;  // 0x528(0x4)
	int32_t MaximumIntegralDigits;  // 0x52C(0x4)
	int32_t MinimumFractionalDigits;  // 0x530(0x4)
	int32_t MaximumFractionalDigits;  // 0x534(0x4)

	void OnTextDataChanged(struct FText& Value); // Function UI_TooltipOverviewTextElement.UI_TooltipOverviewTextElement_C.OnTextDataChanged
	void PreConstruct(bool IsDesignTime); // Function UI_TooltipOverviewTextElement.UI_TooltipOverviewTextElement_C.PreConstruct
	void OnNumberDataChanged(float Value); // Function UI_TooltipOverviewTextElement.UI_TooltipOverviewTextElement_C.OnNumberDataChanged
	void ExecuteUbergraph_UI_TooltipOverviewTextElement(int32_t EntryPoint); // Function UI_TooltipOverviewTextElement.UI_TooltipOverviewTextElement_C.ExecuteUbergraph_UI_TooltipOverviewTextElement
}; 



