#pragma once 
#include "SDK.h" 
 
 
// Function UI_GameEventMiniScoreboardWidget.UI_GameEventMiniScoreboardWidget_C.UpdateWinCounters
// Size: 0x69(Inherited: 0x0) 
struct FUpdateWinCounters
{
	int32_t Temp_int_Loop_Counter_Variable;  // 0x0(0x4)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x4(0x4)
	int32_t Temp_int_Array_Index_Variable;  // 0x8(0x4)
	int32_t Temp_int_Variable;  // 0xC(0x4)
	int32_t CallFunc_Add_IntInt_ReturnValue_2;  // 0x10(0x4)
	int32_t CallFunc_GetChildrenCount_ReturnValue;  // 0x14(0x4)
	struct TArray<int32_t> CallFunc_GetWinningTeamsPerRound_ReturnValue;  // 0x18(0x10)
	char pad_40_1 : 7;  // 0x28(0x1)
	bool CallFunc_LessEqual_IntInt_ReturnValue : 1;  // 0x28(0x1)
	char pad_41[3];  // 0x29(0x3)
	int32_t CallFunc_Array_Get_Item;  // 0x2C(0x4)
	int32_t CallFunc_Subtract_IntInt_ReturnValue;  // 0x30(0x4)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x34(0x4)
	struct UWidget* CallFunc_GetChildAt_ReturnValue;  // 0x38(0x8)
	char pad_64_1 : 7;  // 0x40(0x1)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x40(0x1)
	char pad_65[7];  // 0x41(0x7)
	struct UUI_CTFTeamHeaderWidget_C* K2Node_DynamicCast_AsUI_CTFTeam_Header_Widget;  // 0x48(0x8)
	char pad_80_1 : 7;  // 0x50(0x1)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x50(0x1)
	char pad_81[7];  // 0x51(0x7)
	struct UWidget* CallFunc_GetChildAt_ReturnValue_2;  // 0x58(0x8)
	struct UUI_CTFTeamHeaderWidget_C* K2Node_DynamicCast_AsUI_CTFTeam_Header_Widget_2;  // 0x60(0x8)
	char pad_104_1 : 7;  // 0x68(0x1)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x68(0x1)

}; 
// Function UI_GameEventMiniScoreboardWidget.UI_GameEventMiniScoreboardWidget_C.ExecuteUbergraph_UI_GameEventMiniScoreboardWidget
// Size: 0x54(Inherited: 0x0) 
struct FExecuteUbergraph_UI_GameEventMiniScoreboardWidget
{
	int32_t EntryPoint;  // 0x0(0x4)
	int32_t Temp_int_Array_Index_Variable;  // 0x4(0x4)
	struct UGameEventParticipantStatsWidget* CallFunc_Create_ReturnValue;  // 0x8(0x8)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool CallFunc_IsValidClass_ReturnValue : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)
	struct UPanelSlot* CallFunc_AddChild_ReturnValue;  // 0x18(0x8)
	struct UGameEventParticipantStatsWidget* CallFunc_Array_Get_Item;  // 0x20(0x8)
	struct UPanelWidget* CallFunc_GetParent_ReturnValue;  // 0x28(0x8)
	struct UPanelSlot* CallFunc_AddChild_ReturnValue_2;  // 0x30(0x8)
	char pad_56_1 : 7;  // 0x38(0x1)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x38(0x1)
	char pad_57[3];  // 0x39(0x3)
	int32_t CallFunc_GetTeamIndex_ReturnValue;  // 0x3C(0x4)
	char pad_64_1 : 7;  // 0x40(0x1)
	bool CallFunc_Greater_IntInt_ReturnValue : 1;  // 0x40(0x1)
	char pad_65[3];  // 0x41(0x3)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x44(0x4)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x48(0x4)
	char pad_76_1 : 7;  // 0x4C(0x1)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x4C(0x1)
	char pad_77[3];  // 0x4D(0x3)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x50(0x4)

}; 
// Function UI_GameEventMiniScoreboardWidget.UI_GameEventMiniScoreboardWidget_C.EmptyMessage
// Size: 0x9(Inherited: 0x0) 
struct FEmptyMessage
{
	uint8_t  ReturnValue;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	int32_t CallFunc_GetChildrenCount_ReturnValue;  // 0x4(0x4)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool CallFunc_Greater_IntInt_ReturnValue : 1;  // 0x8(0x1)

}; 
// Function UI_GameEventMiniScoreboardWidget.UI_GameEventMiniScoreboardWidget_C.InitInfo
// Size: 0x4D(Inherited: 0x0) 
struct FInitInfo
{
	struct UGameEventTeamHeaderWidget* CallFunc_Create_ReturnValue;  // 0x0(0x8)
	int32_t CallFunc_GetNumberOfTeams_ReturnValue;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)
	struct UUI_GameEventTeamHeaderWidget_C* K2Node_DynamicCast_AsUI_Game_Event_Team_Header_Widget;  // 0x10(0x8)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x18(0x1)
	char pad_25[3];  // 0x19(0x3)
	int32_t CallFunc_Subtract_IntInt_ReturnValue;  // 0x1C(0x4)
	int32_t CallFunc_Max_ReturnValue;  // 0x20(0x4)
	char pad_36[4];  // 0x24(0x4)
	struct UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue;  // 0x28(0x8)
	int32_t Temp_int_Variable;  // 0x30(0x4)
	char pad_52_1 : 7;  // 0x34(0x1)
	bool K2Node_SwitchInteger_CmpSuccess : 1;  // 0x34(0x1)
	char pad_53[3];  // 0x35(0x3)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x38(0x4)
	int32_t CallFunc_Divide_IntInt_ReturnValue;  // 0x3C(0x4)
	int32_t CallFunc_Percent_IntInt_ReturnValue;  // 0x40(0x4)
	char pad_68_1 : 7;  // 0x44(0x1)
	bool CallFunc_LessEqual_IntInt_ReturnValue : 1;  // 0x44(0x1)
	char pad_69[3];  // 0x45(0x3)
	int32_t CallFunc_Add_IntInt_ReturnValue_2;  // 0x48(0x4)
	char pad_76_1 : 7;  // 0x4C(0x1)
	bool CallFunc_IsValidClass_ReturnValue : 1;  // 0x4C(0x1)

}; 
// Function UI_GameEventMiniScoreboardWidget.UI_GameEventMiniScoreboardWidget_C.UpdateTeamScores
// Size: 0x34(Inherited: 0x0) 
struct FUpdateTeamScores
{
	int32_t Temp_int_Variable;  // 0x0(0x4)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x4(0x4)
	int32_t CallFunc_GetChildrenCount_ReturnValue;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)
	struct UWidget* CallFunc_GetChildAt_ReturnValue;  // 0x10(0x8)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool CallFunc_LessEqual_IntInt_ReturnValue : 1;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)
	struct UUI_GameEventTeamHeaderWidget_C* K2Node_DynamicCast_AsUI_Game_Event_Team_Header_Widget;  // 0x20(0x8)
	char pad_40_1 : 7;  // 0x28(0x1)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x28(0x1)
	char pad_41[3];  // 0x29(0x3)
	int32_t CallFunc_Add_IntInt_ReturnValue_2;  // 0x2C(0x4)
	float CallFunc_GetTeamScore_ReturnValue;  // 0x30(0x4)

}; 
