#pragma once 
#include "SDK.h" 
 
 
// Function UI_StandardMenuButton_Deprecated.UI_StandardMenuButton_Deprecated_C.ExecuteUbergraph_UI_StandardMenuButton_Deprecated
// Size: 0x218(Inherited: 0x0) 
struct FExecuteUbergraph_UI_StandardMenuButton_Deprecated
{
	int32_t EntryPoint;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct TArray<struct FAkExternalSourceInfo> Temp_struct_Variable;  // 0x8(0x10)
	struct FDelegate Temp_delegate_Variable;  // 0x18(0x10)
	struct TArray<struct FAkExternalSourceInfo> Temp_struct_Variable_2;  // 0x28(0x10)
	struct FDelegate Temp_delegate_Variable_2;  // 0x38(0x10)
	struct FGeometry K2Node_Event_MyGeometry;  // 0x48(0x38)
	struct FPointerEvent K2Node_Event_MouseEvent_2;  // 0x80(0x70)
	struct FPointerEvent K2Node_Event_MouseEvent;  // 0xF0(0x70)
	struct FLinearColor K2Node_MakeStruct_LinearColor;  // 0x160(0x10)
	struct FSlateFontInfo K2Node_MakeStruct_SlateFontInfo;  // 0x170(0x58)
	struct FLinearColor K2Node_MakeStruct_LinearColor_2;  // 0x1C8(0x10)
	struct FLinearColor K2Node_MakeStruct_LinearColor_3;  // 0x1D8(0x10)
	struct APlayerController* CallFunc_GetPlayerController_ReturnValue;  // 0x1E8(0x8)
	struct APlayerController* CallFunc_GetPlayerController_ReturnValue_2;  // 0x1F0(0x8)
	int32_t CallFunc_PostEvent_ReturnValue;  // 0x1F8(0x4)
	int32_t CallFunc_PostEvent_ReturnValue_2;  // 0x1FC(0x4)
	struct FText K2Node_Event_text;  // 0x200(0x18)

}; 
// Function UI_StandardMenuButton_Deprecated.UI_StandardMenuButton_Deprecated_C.SetText
// Size: 0x18(Inherited: 0x0) 
struct FSetText
{
	struct FText Text;  // 0x0(0x18)

}; 
// Function UI_StandardMenuButton_Deprecated.UI_StandardMenuButton_Deprecated_C.OnMouseLeave
// Size: 0x70(Inherited: 0x70) 
struct FOnMouseLeave : public FOnMouseLeave
{
	struct FPointerEvent MouseEvent;  // 0x0(0x70)

}; 
// Function UI_StandardMenuButton_Deprecated.UI_StandardMenuButton_Deprecated_C.SetTextInternal
// Size: 0x18(Inherited: 0x18) 
struct FSetTextInternal : public FSetTextInternal
{
	struct FText Text;  // 0x0(0x18)

}; 
// Function UI_StandardMenuButton_Deprecated.UI_StandardMenuButton_Deprecated_C.OnMouseEnter
// Size: 0xA8(Inherited: 0xA8) 
struct FOnMouseEnter : public FOnMouseEnter
{
	struct FGeometry MyGeometry;  // 0x0(0x38)
	struct FPointerEvent MouseEvent;  // 0x38(0x70)

}; 
