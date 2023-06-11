#pragma once 
#include "SDK.h" 
 
 
// Function UI_ItemStatusWidget.UI_ItemStatusWidget_C.ExecuteUbergraph_UI_ItemStatusWidget
// Size: 0x30(Inherited: 0x0) 
struct FExecuteUbergraph_UI_ItemStatusWidget
{
	int32_t EntryPoint;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct FString K2Node_Event_text;  // 0x8(0x10)
	struct FText CallFunc_Conv_StringToText_ReturnValue;  // 0x18(0x18)

}; 
// Function UI_ItemStatusWidget.UI_ItemStatusWidget_C.SetNameText
// Size: 0x10(Inherited: 0x10) 
struct FSetNameText : public FSetNameText
{
	struct FString Text;  // 0x0(0x10)

}; 
// Function UI_ItemStatusWidget.UI_ItemStatusWidget_C.UpdateVisibility
// Size: 0x19(Inherited: 0x0) 
struct FUpdateVisibility
{
	struct FText CallFunc_GetText_ReturnValue;  // 0x0(0x18)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool CallFunc_TextIsEmpty_ReturnValue : 1;  // 0x18(0x1)

}; 
