#pragma once 
#include <UI_GameEventLeaderboardWidget_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C
// Size: 0x2C4(Inherited: 0x290) 
struct UUI_GameEventLeaderboardWidget_C : public UGameEventLeaderboardWidget
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x290(0x8)
	struct UCircularThrobber* CircularThrobber_Ranking;  // 0x298(0x8)
	struct UCircularThrobber* CircularThrobber_TopPlayers;  // 0x2A0(0x8)
	struct UVerticalBox* PlayerRanking;  // 0x2A8(0x8)
	struct UVerticalBox* TopPlayers;  // 0x2B0(0x8)
	struct UUI_GameEventLeaderboardRow_C* UI_GameEventLeaderboardRow_C_1;  // 0x2B8(0x8)
	int32_t MaxStats;  // 0x2C0(0x4)

	void SetTopShownCount(int32_t Count); // Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.SetTopShownCount
	void AssignRowColor(struct UUI_GameEventLeaderboardRow_C* row, int32_t Rank); // Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.AssignRowColor
	void UpdateTopList(); // Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.UpdateTopList
	void RefreshData(uint8_t  orderByField, uint8_t  sortOrder); // Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.RefreshData
	void UpdateRankingList(int32_t Rank); // Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.UpdateRankingList
	void UpdateList(struct TArray<struct FEventsRankingStatsItem>& EventsRankingStatsItems, struct UVerticalBox* TargetWidget); // Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.UpdateList
	void Construct(); // Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.Construct
	void Destruct(); // Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.Destruct
	void UpdateTopPlayers(); // Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.UpdateTopPlayers
	void UpdatePlayerRanking(); // Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.UpdatePlayerRanking
	void ExecuteUbergraph_UI_GameEventLeaderboardWidget(int32_t EntryPoint); // Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.ExecuteUbergraph_UI_GameEventLeaderboardWidget
}; 



