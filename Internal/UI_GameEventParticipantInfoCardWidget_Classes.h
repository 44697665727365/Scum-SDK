#pragma once 
#include <UI_GameEventParticipantInfoCardWidget_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass UI_GameEventParticipantInfoCardWidget.UI_GameEventParticipantInfoCardWidget_C
// Size: 0x2C0(Inherited: 0x260) 
struct UUI_GameEventParticipantInfoCardWidget_C : public UGameEventParticipantInfoCardWidget
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x260(0x8)
	struct UTextBlock* Assists;  // 0x268(0x8)
	struct UImage* Avatar;  // 0x270(0x8)
	struct UTextBlock* Deaths;  // 0x278(0x8)
	struct UTextBlock* FameLevel;  // 0x280(0x8)
	struct UTextBlock* Headshots;  // 0x288(0x8)
	struct UTextBlock* Kills;  // 0x290(0x8)
	struct UTextBlock* Name;  // 0x298(0x8)
	struct UTextBlock* ping;  // 0x2A0(0x8)
	struct UTextBlock* Revenges;  // 0x2A8(0x8)
	struct UTextBlock* SteamID;  // 0x2B0(0x8)
	struct ABP_Prisoner_C* Prisoner;  // 0x2B8(0x8)

	void UpdateStats(struct APrisoner* Prisoner); // Function UI_GameEventParticipantInfoCardWidget.UI_GameEventParticipantInfoCardWidget_C.UpdateStats
	void ExecuteUbergraph_UI_GameEventParticipantInfoCardWidget(int32_t EntryPoint); // Function UI_GameEventParticipantInfoCardWidget.UI_GameEventParticipantInfoCardWidget_C.ExecuteUbergraph_UI_GameEventParticipantInfoCardWidget
}; 



