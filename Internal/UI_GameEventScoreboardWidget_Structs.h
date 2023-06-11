#pragma once 
#include "SDK.h" 
 
 
// Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.OnMouseMove
// Size: 0x218(Inherited: 0x160) 
struct FOnMouseMove : public FOnMouseMove
{
	struct FGeometry MyGeometry;  // 0x0(0x38)
	struct FPointerEvent MouseEvent;  // 0x38(0x70)
	struct FEventReply ReturnValue;  // 0xA8(0xB8)
	struct FEventReply K2Node_MakeStruct_EventReply;  // 0x160(0xB8)

}; 
// Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.ExecuteUbergraph_UI_GameEventScoreboardWidget
// Size: 0x3D(Inherited: 0x0) 
struct FExecuteUbergraph_UI_GameEventScoreboardWidget
{
	int32_t EntryPoint;  // 0x0(0x4)
	int32_t Temp_int_Array_Index_Variable;  // 0x4(0x4)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x8(0x4)
	int32_t Temp_int_Loop_Counter_Variable;  // 0xC(0x4)
	int32_t CallFunc_Add_IntInt_ReturnValue_2;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)
	struct UGameEventRoundInfoWidget* CallFunc_Create_ReturnValue;  // 0x18(0x8)
	char pad_32_1 : 7;  // 0x20(0x1)
	bool CallFunc_IsValidClass_ReturnValue : 1;  // 0x20(0x1)
	char pad_33[7];  // 0x21(0x7)
	struct UPanelSlot* CallFunc_AddChild_ReturnValue;  // 0x28(0x8)
	struct UUI_GameEventTeamInfoWidget_C* CallFunc_Array_Get_Item;  // 0x30(0x8)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x38(0x4)
	char pad_60_1 : 7;  // 0x3C(0x1)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x3C(0x1)

}; 
// Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.UpdateInfoCard
// Size: 0x31(Inherited: 0x0) 
struct FUpdateInfoCard
{
	int32_t CallFunc_GetSelectedIndex_ReturnValue;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct ACharacter* CallFunc_GetPlayerCharacter_ReturnValue;  // 0x8(0x8)
	struct ABP_Prisoner_C* K2Node_DynamicCast_AsBP_Prisoner;  // 0x10(0x8)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)
	struct TArray<struct FGameEventParticipantInfo> CallFunc_GetParticipantInfo_ReturnValue;  // 0x20(0x10)
	char pad_48_1 : 7;  // 0x30(0x1)
	bool CallFunc_Array_IsValidIndex_ReturnValue : 1;  // 0x30(0x1)

}; 
// Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.ArrangeTeams
// Size: 0x41(Inherited: 0x0) 
struct FArrangeTeams
{
	int32_t Temp_int_Array_Index_Variable;  // 0x0(0x4)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x4(0x4)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x8(0x4)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0xC(0x4)
	struct UGameEventParticipantStatsWidget* CallFunc_Array_Get_Item;  // 0x10(0x8)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)
	struct UPanelWidget* CallFunc_GetParent_ReturnValue;  // 0x20(0x8)
	int32_t CallFunc_GetTeamIndex_ReturnValue;  // 0x28(0x4)
	int32_t CallFunc_Subtract_IntInt_ReturnValue;  // 0x2C(0x4)
	int32_t CallFunc_Max_ReturnValue;  // 0x30(0x4)
	char pad_52_1 : 7;  // 0x34(0x1)
	bool CallFunc_Array_IsValidIndex_ReturnValue : 1;  // 0x34(0x1)
	char pad_53[3];  // 0x35(0x3)
	struct UUI_GameEventTeamInfoWidget_C* CallFunc_Array_Get_Item_2;  // 0x38(0x8)
	char pad_64_1 : 7;  // 0x40(0x1)
	bool CallFunc_NotEqual_ObjectObject_ReturnValue : 1;  // 0x40(0x1)

}; 
// Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.InitTeamInfoWidgets
// Size: 0xF1(Inherited: 0x0) 
struct FInitTeamInfoWidgets
{
	int32_t Temp_int_Variable;  // 0x0(0x4)
	int32_t CallFunc_Percent_IntInt_ReturnValue;  // 0x4(0x4)
	int32_t CallFunc_Divide_IntInt_ReturnValue;  // 0x8(0x4)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0xC(0x4)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool K2Node_SwitchInteger_CmpSuccess : 1;  // 0x10(0x1)
	char pad_17[3];  // 0x11(0x3)
	int32_t CallFunc_Add_IntInt_ReturnValue_2;  // 0x14(0x4)
	struct FMargin K2Node_MakeStruct_Margin;  // 0x18(0x10)
	struct FMargin K2Node_MakeStruct_Margin_2;  // 0x28(0x10)
	struct UUI_GameEventTeamInfoWidget_C* CallFunc_Create_ReturnValue;  // 0x38(0x8)
	int32_t Temp_int_Variable_2;  // 0x40(0x4)
	struct FMargin K2Node_Select_Default;  // 0x44(0x10)
	int32_t CallFunc_Array_Add_ReturnValue;  // 0x54(0x4)
	struct UGameEventTeamHeaderWidget* CallFunc_Create_ReturnValue_2;  // 0x58(0x8)
	char pad_96_1 : 7;  // 0x60(0x1)
	bool CallFunc_IsValidClass_ReturnValue : 1;  // 0x60(0x1)
	char pad_97[7];  // 0x61(0x7)
	struct UUI_GameEventTeamHeaderWidget_C* K2Node_DynamicCast_AsUI_Game_Event_Team_Header_Widget;  // 0x68(0x8)
	char pad_112_1 : 7;  // 0x70(0x1)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x70(0x1)
	char pad_113_1 : 7;  // 0x71(0x1)
	bool Temp_bool_Variable : 1;  // 0x71(0x1)
	char pad_114[6];  // 0x72(0x6)
	struct UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue;  // 0x78(0x8)
	int32_t CallFunc_GetNumberOfTeams_ReturnValue;  // 0x80(0x4)
	char pad_132_1 : 7;  // 0x84(0x1)
	bool CallFunc_Greater_IntInt_ReturnValue : 1;  // 0x84(0x1)
	char pad_133[3];  // 0x85(0x3)
	int32_t CallFunc_Subtract_IntInt_ReturnValue;  // 0x88(0x4)
	int32_t CallFunc_Max_ReturnValue;  // 0x8C(0x4)
	struct FGameEventTeamColours K2Node_Select_Default_2;  // 0x90(0x60)
	char pad_240_1 : 7;  // 0xF0(0x1)
	bool CallFunc_LessEqual_IntInt_ReturnValue : 1;  // 0xF0(0x1)

}; 
// Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.UpdateTeamScore
// Size: 0x10(Inherited: 0x0) 
struct FUpdateTeamScore
{
	struct UUI_GameEventTeamInfoWidget_C* TeamInfoWidget;  // 0x0(0x8)
	int32_t TeamIndex;  // 0x8(0x4)
	float CallFunc_GetTeamScore_ReturnValue;  // 0xC(0x4)

}; 
// Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.UpdateWinCounters
// Size: 0x32(Inherited: 0x0) 
struct FUpdateWinCounters
{
	struct UUI_GameEventTeamInfoWidget_C* TeamInfoWidget;  // 0x0(0x8)
	int32_t TeamIndex;  // 0x8(0x4)
	int32_t Temp_int_Array_Index_Variable;  // 0xC(0x4)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x10(0x4)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x14(0x4)
	struct TArray<int32_t> CallFunc_GetWinningTeamsPerRound_ReturnValue;  // 0x18(0x10)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x28(0x4)
	int32_t CallFunc_Array_Get_Item;  // 0x2C(0x4)
	char pad_48_1 : 7;  // 0x30(0x1)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x30(0x1)
	char pad_49_1 : 7;  // 0x31(0x1)
	bool CallFunc_EqualEqual_IntInt_ReturnValue : 1;  // 0x31(0x1)

}; 
// Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.GetTogglePromptVisibility
// Size: 0x8(Inherited: 0x0) 
struct FGetTogglePromptVisibility
{
	uint8_t  ReturnValue;  // 0x0(0x1)
	char pad_1_1 : 7;  // 0x1(0x1)
	bool Temp_bool_Variable : 1;  // 0x1(0x1)
	uint8_t  Temp_byte_Variable;  // 0x2(0x1)
	uint8_t  Temp_byte_Variable_2;  // 0x3(0x1)
	uint8_t  CallFunc_GetEventState_ReturnValue;  // 0x4(0x1)
	char pad_5_1 : 7;  // 0x5(0x1)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x5(0x1)
	char pad_6_1 : 7;  // 0x6(0x1)
	bool CallFunc_EqualEqual_ByteByte_ReturnValue : 1;  // 0x6(0x1)
	uint8_t  K2Node_Select_Default;  // 0x7(0x1)

}; 
