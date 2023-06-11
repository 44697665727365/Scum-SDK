#pragma once 
#include <UI_CTFRoundInfoWidget_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass UI_CTFRoundInfoWidget.UI_CTFRoundInfoWidget_C
// Size: 0x290(Inherited: 0x260) 
struct UUI_CTFRoundInfoWidget_C : public UGameEventRoundInfoWidget
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x260(0x8)
	struct UTextBlock* RoundStatus;  // 0x268(0x8)
	struct UTextBlock* TimeLeft;  // 0x270(0x8)
	struct UHorizontalBox* TimeLeftBox;  // 0x278(0x8)
	struct UTextBlock* TimeLeftLabel;  // 0x280(0x8)
	struct ABP_CTFGameEvent_C* gameEvent;  // 0x288(0x8)

	struct FText GetRoundStatus(); // Function UI_CTFRoundInfoWidget.UI_CTFRoundInfoWidget_C.GetRoundStatus
	uint8_t  GetTimeLeftBoxVisibility(); // Function UI_CTFRoundInfoWidget.UI_CTFRoundInfoWidget_C.GetTimeLeftBoxVisibility
	struct FText GetTimeLeftDescriptionText(); // Function UI_CTFRoundInfoWidget.UI_CTFRoundInfoWidget_C.GetTimeLeftDescriptionText
	struct FText GetTimeLeftText(); // Function UI_CTFRoundInfoWidget.UI_CTFRoundInfoWidget_C.GetTimeLeftText
	void SetGameEvent(struct AGameEventBase* gameEvent); // Function UI_CTFRoundInfoWidget.UI_CTFRoundInfoWidget_C.SetGameEvent
	void ExecuteUbergraph_UI_CTFRoundInfoWidget(int32_t EntryPoint); // Function UI_CTFRoundInfoWidget.UI_CTFRoundInfoWidget_C.ExecuteUbergraph_UI_CTFRoundInfoWidget
}; 



