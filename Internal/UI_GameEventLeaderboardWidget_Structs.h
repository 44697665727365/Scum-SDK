#pragma once 
#include "SDK.h" 
 
 
// Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.ExecuteUbergraph_UI_GameEventLeaderboardWidget
// Size: 0x29(Inherited: 0x0) 
struct FExecuteUbergraph_UI_GameEventLeaderboardWidget
{
	int32_t EntryPoint;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct UUI_GameEventLeaderboardRow_C* CallFunc_Create_ReturnValue;  // 0x8(0x8)
	struct UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue;  // 0x10(0x8)
	int32_t Temp_int_Variable;  // 0x18(0x4)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x1C(0x4)
	char pad_32_1 : 7;  // 0x20(0x1)
	bool CallFunc_GreaterEqual_IntInt_ReturnValue : 1;  // 0x20(0x1)
	char pad_33[3];  // 0x21(0x3)
	int32_t CallFunc_Subtract_IntInt_ReturnValue;  // 0x24(0x4)
	char pad_40_1 : 7;  // 0x28(0x1)
	bool CallFunc_LessEqual_IntInt_ReturnValue : 1;  // 0x28(0x1)

}; 
// Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.RefreshData
// Size: 0x3(Inherited: 0x0) 
struct FRefreshData
{
	uint8_t  orderByField;  // 0x0(0x1)
	uint8_t  sortOrder;  // 0x1(0x1)
	char pad_2_1 : 7;  // 0x2(0x1)
	bool CallFunc_IsStandalone_ReturnValue : 1;  // 0x2(0x1)

}; 
// Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.UpdateList
// Size: 0x4C(Inherited: 0x0) 
struct FUpdateList
{
	struct TArray<struct FEventsRankingStatsItem> EventsRankingStatsItems;  // 0x0(0x10)
	struct UVerticalBox* TargetWidget;  // 0x10(0x8)
	int32_t Count;  // 0x18(0x4)
	int32_t Temp_int_Variable;  // 0x1C(0x4)
	int32_t CallFunc_GetChildrenCount_ReturnValue;  // 0x20(0x4)
	char pad_36_1 : 7;  // 0x24(0x1)
	bool CallFunc_Array_IsValidIndex_ReturnValue : 1;  // 0x24(0x1)
	char pad_37[3];  // 0x25(0x3)
	int32_t CallFunc_Subtract_IntInt_ReturnValue;  // 0x28(0x4)
	char pad_44_1 : 7;  // 0x2C(0x1)
	bool CallFunc_LessEqual_IntInt_ReturnValue : 1;  // 0x2C(0x1)
	char pad_45[3];  // 0x2D(0x3)
	struct UWidget* CallFunc_GetChildAt_ReturnValue;  // 0x30(0x8)
	struct UUI_GameEventLeaderboardRow_C* K2Node_DynamicCast_AsUI_Game_Event_Leaderboard_Row;  // 0x38(0x8)
	char pad_64_1 : 7;  // 0x40(0x1)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x40(0x1)
	char pad_65[3];  // 0x41(0x3)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x44(0x4)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x48(0x4)

}; 
// Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.SetTopShownCount
// Size: 0x41(Inherited: 0x0) 
struct FSetTopShownCount
{
	int32_t Count;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool Temp_bool_Variable : 1;  // 0x4(0x1)
	uint8_t  Temp_byte_Variable;  // 0x5(0x1)
	uint8_t  Temp_byte_Variable_2;  // 0x6(0x1)
	char pad_7[1];  // 0x7(0x1)
	int32_t Temp_int_Variable;  // 0x8(0x4)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0xC(0x4)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x10(0x1)
	char pad_17[3];  // 0x11(0x3)
	int32_t CallFunc_Add_IntInt_ReturnValue_2;  // 0x14(0x4)
	uint8_t  K2Node_Select_Default;  // 0x18(0x1)
	char pad_25[3];  // 0x19(0x3)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x1C(0x4)
	struct UWidget* CallFunc_GetChildAt_ReturnValue;  // 0x20(0x8)
	struct UUI_GameEventLeaderboardRow_C* K2Node_DynamicCast_AsUI_Game_Event_Leaderboard_Row;  // 0x28(0x8)
	char pad_48_1 : 7;  // 0x30(0x1)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x30(0x1)
	char pad_49[3];  // 0x31(0x3)
	int32_t CallFunc_GetChildrenCount_ReturnValue;  // 0x34(0x4)
	int32_t CallFunc_Min_ReturnValue;  // 0x38(0x4)
	int32_t CallFunc_Subtract_IntInt_ReturnValue;  // 0x3C(0x4)
	char pad_64_1 : 7;  // 0x40(0x1)
	bool CallFunc_LessEqual_IntInt_ReturnValue : 1;  // 0x40(0x1)

}; 
// Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.UpdateRankingList
// Size: 0x32(Inherited: 0x0) 
struct FUpdateRankingList
{
	int32_t Rank;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool Temp_bool_Variable : 1;  // 0x4(0x1)
	uint8_t  Temp_byte_Variable;  // 0x5(0x1)
	uint8_t  Temp_byte_Variable_2;  // 0x6(0x1)
	char pad_7_1 : 7;  // 0x7(0x1)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x7(0x1)
	int32_t Temp_int_Variable;  // 0x8(0x4)
	uint8_t  K2Node_Select_Default;  // 0xC(0x1)
	char pad_13[3];  // 0xD(0x3)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x10(0x4)
	int32_t CallFunc_GetChildrenCount_ReturnValue;  // 0x14(0x4)
	struct UWidget* CallFunc_GetChildAt_ReturnValue;  // 0x18(0x8)
	int32_t CallFunc_Subtract_IntInt_ReturnValue;  // 0x20(0x4)
	char pad_36[4];  // 0x24(0x4)
	struct UUI_GameEventLeaderboardRow_C* K2Node_DynamicCast_AsUI_Game_Event_Leaderboard_Row;  // 0x28(0x8)
	char pad_48_1 : 7;  // 0x30(0x1)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x30(0x1)
	char pad_49_1 : 7;  // 0x31(0x1)
	bool CallFunc_LessEqual_IntInt_ReturnValue : 1;  // 0x31(0x1)

}; 
// Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.AssignRowColor
// Size: 0x12(Inherited: 0x0) 
struct FAssignRowColor
{
	struct UUI_GameEventLeaderboardRow_C* row;  // 0x0(0x8)
	int32_t Rank;  // 0x8(0x4)
	int32_t CallFunc_Percent_IntInt_ReturnValue;  // 0xC(0x4)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool CallFunc_EqualEqual_IntInt_ReturnValue : 1;  // 0x10(0x1)
	char pad_17_1 : 7;  // 0x11(0x1)
	bool CallFunc_EqualEqual_IntInt_ReturnValue_2 : 1;  // 0x11(0x1)

}; 
// Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.UpdateTopList
// Size: 0x30(Inherited: 0x0) 
struct FUpdateTopList
{
	int32_t Temp_int_Variable;  // 0x0(0x4)
	int32_t CallFunc_GetChildrenCount_ReturnValue;  // 0x4(0x4)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x8(0x4)
	int32_t CallFunc_Subtract_IntInt_ReturnValue;  // 0xC(0x4)
	struct UWidget* CallFunc_GetChildAt_ReturnValue;  // 0x10(0x8)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool CallFunc_LessEqual_IntInt_ReturnValue : 1;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)
	struct UUI_GameEventLeaderboardRow_C* K2Node_DynamicCast_AsUI_Game_Event_Leaderboard_Row;  // 0x20(0x8)
	char pad_40_1 : 7;  // 0x28(0x1)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x28(0x1)
	char pad_41[3];  // 0x29(0x3)
	int32_t CallFunc_Add_IntInt_ReturnValue_2;  // 0x2C(0x4)

}; 
