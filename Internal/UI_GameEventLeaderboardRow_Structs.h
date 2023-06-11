#pragma once 
#include "SDK.h" 
 
 
// Function UI_GameEventLeaderboardRow.UI_GameEventLeaderboardRow_C.Get_Background_BrushColor
// Size: 0x10(Inherited: 0x0) 
struct FGet_Background_BrushColor
{
	struct FLinearColor ReturnValue;  // 0x0(0x10)

}; 
// Function UI_GameEventLeaderboardRow.UI_GameEventLeaderboardRow_C.SetStats
// Size: 0x118(Inherited: 0x0) 
struct FSetStats
{
	struct FString characterName;  // 0x0(0x10)
	struct FEventsRankingStats CharacterStats;  // 0x10(0x30)
	struct FText CallFunc_Conv_IntToText_ReturnValue;  // 0x40(0x18)
	char pad_88_1 : 7;  // 0x58(0x1)
	bool CallFunc_EqualEqual_IntInt_ReturnValue : 1;  // 0x58(0x1)
	char pad_89[3];  // 0x59(0x3)
	float CallFunc_Conv_IntToFloat_ReturnValue;  // 0x5C(0x4)
	struct FText CallFunc_Conv_IntToText_ReturnValue_2;  // 0x60(0x18)
	float CallFunc_Conv_IntToFloat_ReturnValue_2;  // 0x78(0x4)
	char pad_124[4];  // 0x7C(0x4)
	struct FText CallFunc_Conv_IntToText_ReturnValue_3;  // 0x80(0x18)
	float CallFunc_Divide_FloatFloat_ReturnValue;  // 0x98(0x4)
	char pad_156[4];  // 0x9C(0x4)
	struct FText CallFunc_Conv_FloatToText_ReturnValue;  // 0xA0(0x18)
	struct FText CallFunc_Conv_FloatToText_ReturnValue_2;  // 0xB8(0x18)
	int32_t CallFunc_FTrunc_ReturnValue;  // 0xD0(0x4)
	char pad_212[4];  // 0xD4(0x4)
	struct FString CallFunc_Left_ReturnValue;  // 0xD8(0x10)
	struct FText CallFunc_Conv_IntToText_ReturnValue_4;  // 0xE8(0x18)
	struct FText CallFunc_Conv_StringToText_ReturnValue;  // 0x100(0x18)

}; 
// Function UI_GameEventLeaderboardRow.UI_GameEventLeaderboardRow_C.SetRank
// Size: 0x20(Inherited: 0x0) 
struct FSetRank
{
	int32_t Rank;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct FText CallFunc_Conv_IntToText_ReturnValue;  // 0x8(0x18)

}; 
