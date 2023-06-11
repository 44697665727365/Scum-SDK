#pragma once 
#include <UI_MissionPrompt_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass UI_MissionPrompt.UI_MissionPrompt_C
// Size: 0x298(Inherited: 0x278) 
struct UUI_MissionPrompt_C : public UMissionPrompt
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x278(0x8)
	struct UImage* Image_11;  // 0x280(0x8)
	struct UUI_StandardMenuButton_Deprecated_C* NoButton;  // 0x288(0x8)
	struct UUI_StandardMenuButton_Deprecated_C* YesButton;  // 0x290(0x8)

	void BndEvt__YesButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(); // Function UI_MissionPrompt.UI_MissionPrompt_C.BndEvt__YesButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	void BndEvt__NoButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(); // Function UI_MissionPrompt.UI_MissionPrompt_C.BndEvt__NoButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	void ExecuteUbergraph_UI_MissionPrompt(int32_t EntryPoint); // Function UI_MissionPrompt.UI_MissionPrompt_C.ExecuteUbergraph_UI_MissionPrompt
}; 



