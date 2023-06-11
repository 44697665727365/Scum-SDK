#pragma once 
#include <UI_GameEventInfoWidget_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass UI_GameEventInfoWidget.UI_GameEventInfoWidget_C
// Size: 0x2A0(Inherited: 0x260) 
struct UUI_GameEventInfoWidget_C : public UGameEventInfoWidget
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x260(0x8)
	struct UTextBlock* DescriptionText;  // 0x268(0x8)
	struct UTextBlock* MinPlayersText;  // 0x270(0x8)
	struct UTextBlock* NumTeamsText;  // 0x278(0x8)
	struct UTextBlock* PrerequisitesText;  // 0x280(0x8)
	struct UTextBlock* RespawnText;  // 0x288(0x8)
	struct UTextBlock* RewardsText;  // 0x290(0x8)
	struct UTextBlock* WeaponsText;  // 0x298(0x8)

	void UpdateStats(struct AGameEventBase* _gameEvent); // Function UI_GameEventInfoWidget.UI_GameEventInfoWidget_C.UpdateStats
	void ExecuteUbergraph_UI_GameEventInfoWidget(int32_t EntryPoint); // Function UI_GameEventInfoWidget.UI_GameEventInfoWidget_C.ExecuteUbergraph_UI_GameEventInfoWidget
}; 



