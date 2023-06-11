#pragma once 
#include <UI_GameEventLeaderboardRow_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass UI_GameEventLeaderboardRow.UI_GameEventLeaderboardRow_C
// Size: 0x2BC(Inherited: 0x260) 
struct UUI_GameEventLeaderboardRow_C : public UUserWidget
{
	struct UTextBlock* Assists;  // 0x260(0x8)
	struct UBorder* Background;  // 0x268(0x8)
	struct UTextBlock* Deaths;  // 0x270(0x8)
	struct UTextBlock* Fame;  // 0x278(0x8)
	struct UTextBlock* KD;  // 0x280(0x8)
	struct UTextBlock* Kills;  // 0x288(0x8)
	struct UTextBlock* Player;  // 0x290(0x8)
	struct UTextBlock* RankText;  // 0x298(0x8)
	struct UTextBlock* Score;  // 0x2A0(0x8)
	struct FLinearColor BackgroundColor;  // 0x2A8(0x10)
	int32_t Rank;  // 0x2B8(0x4)

	struct FLinearColor Get_Background_BrushColor(); // Function UI_GameEventLeaderboardRow.UI_GameEventLeaderboardRow_C.Get_Background_BrushColor
	void SetRank(int32_t Rank); // Function UI_GameEventLeaderboardRow.UI_GameEventLeaderboardRow_C.SetRank
	void SetStats(struct FString characterName, struct FEventsRankingStats CharacterStats); // Function UI_GameEventLeaderboardRow.UI_GameEventLeaderboardRow_C.SetStats
}; 



