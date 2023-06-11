#pragma once 
#include <UI_TooltipOverviewElement_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass UI_TooltipOverviewElement.UI_TooltipOverviewElement_C
// Size: 0x558(Inherited: 0x268) 
struct UUI_TooltipOverviewElement_C : public UItemTooltipPanelElement
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x268(0x8)
	struct UExtendedRichTextBlock* ExtendedRichTextBlock_1;  // 0x270(0x8)
	struct UImage* IconImage;  // 0x278(0x8)
	struct USizeBox* IconSizeBox;  // 0x280(0x8)
	struct UImage* Image_2;  // 0x288(0x8)
	struct UTexture2D* Icon;  // 0x290(0x8)
	int32_t MinimumIntegralDigits;  // 0x298(0x4)
	int32_t MaximumIntegralDigits;  // 0x29C(0x4)
	int32_t MinimumFractionalDigits;  // 0x2A0(0x4)
	int32_t MaximumFractionalDigits;  // 0x2A4(0x4)
	struct FText Text Format;  // 0x2A8(0x18)
	struct FTextBlockStyle TextStyle;  // 0x2C0(0x270)
	struct FSlateColor Color;  // 0x530(0x28)

	void PreConstruct(bool IsDesignTime); // Function UI_TooltipOverviewElement.UI_TooltipOverviewElement_C.PreConstruct
	void OnNumberDataChanged(float Value); // Function UI_TooltipOverviewElement.UI_TooltipOverviewElement_C.OnNumberDataChanged
	void OnTextDataChanged(struct FText& Value); // Function UI_TooltipOverviewElement.UI_TooltipOverviewElement_C.OnTextDataChanged
	void ExecuteUbergraph_UI_TooltipOverviewElement(int32_t EntryPoint); // Function UI_TooltipOverviewElement.UI_TooltipOverviewElement_C.ExecuteUbergraph_UI_TooltipOverviewElement
}; 



