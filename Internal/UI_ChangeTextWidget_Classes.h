#pragma once 
#include <UI_ChangeTextWidget_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass UI_ChangeTextWidget.UI_ChangeTextWidget_C
// Size: 0x368(Inherited: 0x320) 
struct UUI_ChangeTextWidget_C : public UChangeTextWidget
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x320(0x8)
	struct UButton* AcceptButton;  // 0x328(0x8)
	struct UImage* Image_1;  // 0x330(0x8)
	struct UImage* Image_2;  // 0x338(0x8)
	struct UEditableText* InputText;  // 0x340(0x8)
	int32_t MaxInputCharacters;  // 0x348(0x4)
	char pad_844_1 : 7;  // 0x34C(0x1)
	bool _isEnabled : 1;  // 0x34C(0x1)
	char pad_845[3];  // 0x34D(0x3)
	struct FText _currentText;  // 0x350(0x18)

	struct FEventReply OnPreviewKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UI_ChangeTextWidget.UI_ChangeTextWidget_C.OnPreviewKeyDown
	void Construct(); // Function UI_ChangeTextWidget.UI_ChangeTextWidget_C.Construct
	void BndEvt__InputText_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature(struct FText& Text, char ETextCommit CommitMethod); // Function UI_ChangeTextWidget.UI_ChangeTextWidget_C.BndEvt__InputText_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature
	void BndEvt__AcceptButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function UI_ChangeTextWidget.UI_ChangeTextWidget_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	void SetCurrentInputText_BP(struct FText& Text); // Function UI_ChangeTextWidget.UI_ChangeTextWidget_C.SetCurrentInputText_BP
	void BndEvt__InputText_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature(struct FText& Text); // Function UI_ChangeTextWidget.UI_ChangeTextWidget_C.BndEvt__InputText_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature
	void SetMaxNumberOfCharacters(int32_t Value); // Function UI_ChangeTextWidget.UI_ChangeTextWidget_C.SetMaxNumberOfCharacters
	void ExecuteUbergraph_UI_ChangeTextWidget(int32_t EntryPoint); // Function UI_ChangeTextWidget.UI_ChangeTextWidget_C.ExecuteUbergraph_UI_ChangeTextWidget
}; 



