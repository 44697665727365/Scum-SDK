#pragma once 
#include "SDK.h" 
 
 
// Function UI_TooltipOverviewTextElement.UI_TooltipOverviewTextElement_C.ExecuteUbergraph_UI_TooltipOverviewTextElement
// Size: 0x1C8(Inherited: 0x0) 
struct FExecuteUbergraph_UI_TooltipOverviewTextElement
{
	int32_t EntryPoint;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct FText K2Node_Event_value_2;  // 0x8(0x18)
	char pad_32_1 : 7;  // 0x20(0x1)
	bool K2Node_Event_IsDesignTime : 1;  // 0x20(0x1)
	char pad_33[3];  // 0x21(0x3)
	float K2Node_Event_value;  // 0x24(0x4)
	float CallFunc_Abs_ReturnValue;  // 0x28(0x4)
	char pad_44[4];  // 0x2C(0x4)
	struct FFormatArgumentData K2Node_MakeStruct_FormatArgumentData;  // 0x30(0x40)
	struct FText CallFunc_ColorToHex_text;  // 0x70(0x18)
	struct FText CallFunc_ColorToHex_text_2;  // 0x88(0x18)
	struct FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_2;  // 0xA0(0x40)
	struct FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_3;  // 0xE0(0x40)
	struct TArray<struct FFormatArgumentData> K2Node_MakeArray_Array;  // 0x120(0x10)
	struct FText CallFunc_Format_ReturnValue;  // 0x130(0x18)
	struct FText CallFunc_Conv_FloatToText_ReturnValue;  // 0x148(0x18)
	struct FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_4;  // 0x160(0x40)
	struct TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_2;  // 0x1A0(0x10)
	struct FText CallFunc_Format_ReturnValue_2;  // 0x1B0(0x18)

}; 
// Function UI_TooltipOverviewTextElement.UI_TooltipOverviewTextElement_C.OnTextDataChanged
// Size: 0x18(Inherited: 0x18) 
struct FOnTextDataChanged : public FOnTextDataChanged
{
	struct FText Value;  // 0x0(0x18)

}; 
// Function UI_TooltipOverviewTextElement.UI_TooltipOverviewTextElement_C.OnNumberDataChanged
// Size: 0x4(Inherited: 0x4) 
struct FOnNumberDataChanged : public FOnNumberDataChanged
{
	float Value;  // 0x0(0x4)

}; 
// Function UI_TooltipOverviewTextElement.UI_TooltipOverviewTextElement_C.PreConstruct
// Size: 0x1(Inherited: 0x1) 
struct FPreConstruct : public FPreConstruct
{
	char pad_1_1 : 7;  // 0x1(0x1)
	bool IsDesignTime : 1;  // 0x0(0x1)

}; 
