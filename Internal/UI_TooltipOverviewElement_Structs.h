#pragma once 
#include "SDK.h" 
 
 
// Function UI_TooltipOverviewElement.UI_TooltipOverviewElement_C.OnNumberDataChanged
// Size: 0x4(Inherited: 0x4) 
struct FOnNumberDataChanged : public FOnNumberDataChanged
{
	float Value;  // 0x0(0x4)

}; 
// Function UI_TooltipOverviewElement.UI_TooltipOverviewElement_C.OnTextDataChanged
// Size: 0x18(Inherited: 0x18) 
struct FOnTextDataChanged : public FOnTextDataChanged
{
	struct FText Value;  // 0x0(0x18)

}; 
// Function UI_TooltipOverviewElement.UI_TooltipOverviewElement_C.ExecuteUbergraph_UI_TooltipOverviewElement
// Size: 0x130(Inherited: 0x0) 
struct FExecuteUbergraph_UI_TooltipOverviewElement
{
	int32_t EntryPoint;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct FText CallFunc_ColorToHex_text;  // 0x8(0x18)
	char pad_32_1 : 7;  // 0x20(0x1)
	bool K2Node_Event_IsDesignTime : 1;  // 0x20(0x1)
	char pad_33[7];  // 0x21(0x7)
	struct FFormatArgumentData K2Node_MakeStruct_FormatArgumentData;  // 0x28(0x40)
	struct TArray<struct FFormatArgumentData> K2Node_MakeArray_Array;  // 0x68(0x10)
	float K2Node_Event_value_2;  // 0x78(0x4)
	char pad_124[4];  // 0x7C(0x4)
	struct FText CallFunc_Conv_FloatToText_ReturnValue;  // 0x80(0x18)
	struct FText K2Node_Event_value;  // 0x98(0x18)
	struct FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_2;  // 0xB0(0x40)
	struct FText CallFunc_Format_ReturnValue;  // 0xF0(0x18)
	struct TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_2;  // 0x108(0x10)
	struct FText CallFunc_Format_ReturnValue_2;  // 0x118(0x18)

}; 
// Function UI_TooltipOverviewElement.UI_TooltipOverviewElement_C.PreConstruct
// Size: 0x1(Inherited: 0x1) 
struct FPreConstruct : public FPreConstruct
{
	char pad_1_1 : 7;  // 0x1(0x1)
	bool IsDesignTime : 1;  // 0x0(0x1)

}; 
