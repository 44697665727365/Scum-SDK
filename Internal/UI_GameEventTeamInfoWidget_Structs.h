#pragma once 
#include "SDK.h" 
 
 
// Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.RemoveStatWidget
// Size: 0x9(Inherited: 0x0) 
struct FRemoveStatWidget
{
	struct UGameEventParticipantStatsWidget* Widget;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool CallFunc_HasChild_ReturnValue : 1;  // 0x8(0x1)

}; 
// Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.ExecuteUbergraph_UI_GameEventTeamInfoWidget
// Size: 0x20(Inherited: 0x0) 
struct FExecuteUbergraph_UI_GameEventTeamInfoWidget
{
	int32_t EntryPoint;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct UGameEventParticipantStatsWidget* CallFunc_Create_ReturnValue;  // 0x8(0x8)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool CallFunc_IsValidClass_ReturnValue : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)
	struct UPanelSlot* CallFunc_AddChild_ReturnValue;  // 0x18(0x8)

}; 
// Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.ClearWinCounters
// Size: 0x1(Inherited: 0x0) 
struct FClearWinCounters
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x0(0x1)

}; 
// Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.AddHeader
// Size: 0x10(Inherited: 0x0) 
struct FAddHeader
{
	struct UUI_GameEventTeamHeaderWidget_C* Header;  // 0x0(0x8)
	struct UPanelSlot* CallFunc_AddChild_ReturnValue;  // 0x8(0x8)

}; 
// Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.AddWinCounter
// Size: 0x1(Inherited: 0x0) 
struct FAddWinCounter
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x0(0x1)

}; 
// Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.AddStatWidget
// Size: 0x10(Inherited: 0x0) 
struct FAddStatWidget
{
	struct UGameEventParticipantStatsWidget* Widget;  // 0x0(0x8)
	struct UPanelSlot* CallFunc_AddChild_ReturnValue;  // 0x8(0x8)

}; 
// Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.SetTeamScore
// Size: 0x5(Inherited: 0x0) 
struct FSetTeamScore
{
	float Score;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x4(0x1)

}; 
// Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.GetStatWidget
// Size: 0x21(Inherited: 0x0) 
struct FGetStatWidget
{
	int32_t Index;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct UGameEventParticipantStatsWidget* Widget;  // 0x8(0x8)
	struct UWidget* CallFunc_GetChildAt_ReturnValue;  // 0x10(0x8)
	struct UGameEventParticipantStatsWidget* K2Node_DynamicCast_AsGame_Event_Participant_Stats_Widget;  // 0x18(0x8)
	char pad_32_1 : 7;  // 0x20(0x1)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x20(0x1)

}; 
// Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.GetStatWidgetCount
// Size: 0x8(Inherited: 0x0) 
struct FGetStatWidgetCount
{
	int32_t Count;  // 0x0(0x4)
	int32_t CallFunc_GetChildrenCount_ReturnValue;  // 0x4(0x4)

}; 
