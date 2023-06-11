#pragma once 
#include <UI_GameEventScoreboardWidget_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C
// Size: 0x308(Inherited: 0x298) 
struct UUI_GameEventScoreboardWidget_C : public UGameEventScoreboardWidget
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x298(0x8)
	struct UBorder* RoundInfo;  // 0x2A0(0x8)
	struct UUniformGridPanel* TeamGrid;  // 0x2A8(0x8)
	struct UTextBlock* TextBlock_1;  // 0x2B0(0x8)
	struct UUI_GameEventParticipantInfoCardWidget_C* UI_GameEventParitcipantInfoCardWidget;  // 0x2B8(0x8)
	struct TArray<struct UWidget*> List;  // 0x2C0(0x10)
	struct UUI_GameEventTeamHeaderWidget_C* TeamHeaderWidgetClass_1;  // 0x2D0(0x8)
	struct TArray<struct UUI_GameEventTeamInfoWidget_C*> TeamWidgets;  // 0x2D8(0x10)
	struct TArray<struct FText> TeamNames;  // 0x2E8(0x10)
	struct TArray<struct FGameEventTeamColours> TeamColors;  // 0x2F8(0x10)

	uint8_t  GetTogglePromptVisibility(); // Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.GetTogglePromptVisibility
	void ArrangeTeams(); // Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.ArrangeTeams
	void UpdateWinCounters(struct UUI_GameEventTeamInfoWidget_C* TeamInfoWidget, int32_t TeamIndex); // Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.UpdateWinCounters
	void UpdateTeamScore(struct UUI_GameEventTeamInfoWidget_C* TeamInfoWidget, int32_t TeamIndex); // Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.UpdateTeamScore
	void InitTeamInfoWidgets(); // Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.InitTeamInfoWidgets
	void UpdateInfoCard(); // Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.UpdateInfoCard
	struct FEventReply OnMouseMove(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.OnMouseMove
	void Construct(); // Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.Construct
	void OnUpdate(); // Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.OnUpdate
	void InitializeScoreboard(); // Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.InitializeScoreboard
	void ExecuteUbergraph_UI_GameEventScoreboardWidget(int32_t EntryPoint); // Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.ExecuteUbergraph_UI_GameEventScoreboardWidget
}; 



