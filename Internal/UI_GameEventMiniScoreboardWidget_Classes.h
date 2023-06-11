#pragma once 
#include <UI_GameEventMiniScoreboardWidget_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass UI_GameEventMiniScoreboardWidget.UI_GameEventMiniScoreboardWidget_C
// Size: 0x2F0(Inherited: 0x298) 
struct UUI_GameEventMiniScoreboardWidget_C : public UGameEventScoreboardWidget
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x298(0x8)
	struct UTextBlock* EmptyMsg;  // 0x2A0(0x8)
	struct UBorder* Header;  // 0x2A8(0x8)
	struct UUniformGridPanel* Info;  // 0x2B0(0x8)
	struct UScrollBox* Rows;  // 0x2B8(0x8)
	struct TArray<struct UWidget*> List;  // 0x2C0(0x10)
	struct TArray<struct FText> TeamNames;  // 0x2D0(0x10)
	struct TArray<struct FGameEventTeamColours> TeamColors;  // 0x2E0(0x10)

	void UpdateWinCounters(); // Function UI_GameEventMiniScoreboardWidget.UI_GameEventMiniScoreboardWidget_C.UpdateWinCounters
	void UpdateTeamScores(); // Function UI_GameEventMiniScoreboardWidget.UI_GameEventMiniScoreboardWidget_C.UpdateTeamScores
	void InitInfo(); // Function UI_GameEventMiniScoreboardWidget.UI_GameEventMiniScoreboardWidget_C.InitInfo
	uint8_t  EmptyMessage(); // Function UI_GameEventMiniScoreboardWidget.UI_GameEventMiniScoreboardWidget_C.EmptyMessage
	void OnUpdate(); // Function UI_GameEventMiniScoreboardWidget.UI_GameEventMiniScoreboardWidget_C.OnUpdate
	void InitializeScoreboard(); // Function UI_GameEventMiniScoreboardWidget.UI_GameEventMiniScoreboardWidget_C.InitializeScoreboard
	void ExecuteUbergraph_UI_GameEventMiniScoreboardWidget(int32_t EntryPoint); // Function UI_GameEventMiniScoreboardWidget.UI_GameEventMiniScoreboardWidget_C.ExecuteUbergraph_UI_GameEventMiniScoreboardWidget
}; 



