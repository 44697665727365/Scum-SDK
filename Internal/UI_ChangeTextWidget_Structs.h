#pragma once 
#include "SDK.h" 
 
 
// Function UI_ChangeTextWidget.UI_ChangeTextWidget_C.ExecuteUbergraph_UI_ChangeTextWidget
// Size: 0x90(Inherited: 0x0) 
struct FExecuteUbergraph_UI_ChangeTextWidget
{
	int32_t EntryPoint;  // 0x0(0x4)
	int32_t K2Node_Event_value;  // 0x4(0x4)
	struct FText K2Node_ComponentBoundEvent_Text_2;  // 0x8(0x18)
	char ETextCommit K2Node_ComponentBoundEvent_CommitMethod;  // 0x20(0x1)
	char pad_33_1 : 7;  // 0x21(0x1)
	bool K2Node_SwitchEnum_CmpSuccess : 1;  // 0x21(0x1)
	char pad_34[6];  // 0x22(0x6)
	struct FText K2Node_Event_text;  // 0x28(0x18)
	struct FText K2Node_ComponentBoundEvent_Text;  // 0x40(0x18)
	struct FString CallFunc_Conv_TextToString_ReturnValue;  // 0x58(0x10)
	struct FString CallFunc_Left_ReturnValue;  // 0x68(0x10)
	struct FText CallFunc_Conv_StringToText_ReturnValue;  // 0x78(0x18)

}; 
// Function UI_ChangeTextWidget.UI_ChangeTextWidget_C.OnPreviewKeyDown
// Size: 0x2B8(Inherited: 0x128) 
struct FOnPreviewKeyDown : public FOnPreviewKeyDown
{
	struct FGeometry MyGeometry;  // 0x0(0x38)
	struct FKeyEvent InKeyEvent;  // 0x38(0x38)
	struct FEventReply ReturnValue;  // 0x70(0xB8)
	struct FEventReply CallFunc_Handled_ReturnValue;  // 0x128(0xB8)
	struct FInputEvent CallFunc_GetInputEventFromKeyEvent_ReturnValue;  // 0x1E0(0x18)
	char pad_800_1 : 7;  // 0x320(0x1)
	bool CallFunc_InputEvent_IsRepeat_ReturnValue : 1;  // 0x1F8(0x1)
	struct FEventReply CallFunc_Unhandled_ReturnValue;  // 0x200(0xB8)

}; 
// Function UI_ChangeTextWidget.UI_ChangeTextWidget_C.BndEvt__InputText_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature
// Size: 0x19(Inherited: 0x0) 
struct FBndEvt__InputText_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature
{
	struct FText Text;  // 0x0(0x18)
	char ETextCommit CommitMethod;  // 0x18(0x1)

}; 
// Function UI_ChangeTextWidget.UI_ChangeTextWidget_C.BndEvt__InputText_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature
// Size: 0x18(Inherited: 0x0) 
struct FBndEvt__InputText_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature
{
	struct FText Text;  // 0x0(0x18)

}; 
// Function UI_ChangeTextWidget.UI_ChangeTextWidget_C.SetMaxNumberOfCharacters
// Size: 0x4(Inherited: 0x4) 
struct FSetMaxNumberOfCharacters : public FSetMaxNumberOfCharacters
{
	int32_t Value;  // 0x0(0x4)

}; 
// Function UI_ChangeTextWidget.UI_ChangeTextWidget_C.SetCurrentInputText_BP
// Size: 0x18(Inherited: 0x18) 
struct FSetCurrentInputText_BP : public FSetCurrentInputText_BP
{
	struct FText Text;  // 0x0(0x18)

}; 
