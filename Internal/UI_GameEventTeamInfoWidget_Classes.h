#pragma once 
#include <UI_GameEventTeamInfoWidget_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C
// Size: 0x2F0(Inherited: 0x260) 
struct UUI_GameEventTeamInfoWidget_C : public UUserWidget
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x260(0x8)
	struct UBorder* StatTextContainer;  // 0x268(0x8)
	struct UBorder* TeamHeader;  // 0x270(0x8)
	struct UScrollBox* TeamRows;  // 0x278(0x8)
	struct UUI_GameEventTeamHeaderWidget_C* HeaderWidget;  // 0x280(0x8)
	UGameEventParticipantStatsWidget* ParticipantStatClass;  // 0x288(0x8)
	struct FGameEventTeamColours TeamColours;  // 0x290(0x60)

	void GetStatWidgetCount(int32_t& Count); // Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.GetStatWidgetCount
	void GetStatWidget(int32_t Index, struct UGameEventParticipantStatsWidget*& Widget); // Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.GetStatWidget
	void SetTeamScore(float Score); // Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.SetTeamScore
	void ClearWinCounters(); // Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.ClearWinCounters
	void AddWinCounter(); // Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.AddWinCounter
	void RemoveStatWidget(struct UGameEventParticipantStatsWidget* Widget); // Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.RemoveStatWidget
	void AddStatWidget(struct UGameEventParticipantStatsWidget* Widget); // Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.AddStatWidget
	void AddHeader(struct UUI_GameEventTeamHeaderWidget_C* Header); // Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.AddHeader
	void Construct(); // Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.Construct
	void ExecuteUbergraph_UI_GameEventTeamInfoWidget(int32_t EntryPoint); // Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.ExecuteUbergraph_UI_GameEventTeamInfoWidget
}; 



