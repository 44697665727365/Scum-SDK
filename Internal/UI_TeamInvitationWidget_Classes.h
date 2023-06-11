#pragma once 
#include <UI_TeamInvitationWidget_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass UI_TeamInvitationWidget.UI_TeamInvitationWidget_C
// Size: 0x2C8(Inherited: 0x290) 
struct UUI_TeamInvitationWidget_C : public UTeamInvitationWidget
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x290(0x8)
	struct UTextBlock* _flagWarningMessage;  // 0x298(0x8)
	struct UButton* Accept;  // 0x2A0(0x8)
	struct UButton* Decline;  // 0x2A8(0x8)
	struct UTextBlock* InvitationMessage;  // 0x2B0(0x8)
	struct UTextBlock* TimerText;  // 0x2B8(0x8)
	struct FTimerHandle TimeoutTimer;  // 0x2C0(0x8)

	void Construct(); // Function UI_TeamInvitationWidget.UI_TeamInvitationWidget_C.Construct
	void BndEvt__Decline_K2Node_ComponentBoundEvent_44_OnButtonClickedEvent__DelegateSignature(); // Function UI_TeamInvitationWidget.UI_TeamInvitationWidget_C.BndEvt__Decline_K2Node_ComponentBoundEvent_44_OnButtonClickedEvent__DelegateSignature
	void BndEvt__Accept_K2Node_ComponentBoundEvent_67_OnButtonClickedEvent__DelegateSignature(); // Function UI_TeamInvitationWidget.UI_TeamInvitationWidget_C.BndEvt__Accept_K2Node_ComponentBoundEvent_67_OnButtonClickedEvent__DelegateSignature
	void StartTimer(float Timeout); // Function UI_TeamInvitationWidget.UI_TeamInvitationWidget_C.StartTimer
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UI_TeamInvitationWidget.UI_TeamInvitationWidget_C.Tick
	void Timeout(); // Function UI_TeamInvitationWidget.UI_TeamInvitationWidget_C.Timeout
	void ExecuteUbergraph_UI_TeamInvitationWidget(int32_t EntryPoint); // Function UI_TeamInvitationWidget.UI_TeamInvitationWidget_C.ExecuteUbergraph_UI_TeamInvitationWidget
}; 



