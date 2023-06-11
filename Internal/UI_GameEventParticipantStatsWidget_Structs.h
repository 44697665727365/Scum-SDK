#pragma once 
#include "SDK.h" 
 
 
// Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.GetInactiveOverlayVisibility
// Size: 0x21(Inherited: 0x0) 
struct FGetInactiveOverlayVisibility
{
	uint8_t  ReturnValue;  // 0x0(0x1)
	char pad_1_1 : 7;  // 0x1(0x1)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x1(0x1)
	char pad_2[2];  // 0x2(0x2)
	int32_t CallFunc_GetIndex_ReturnValue;  // 0x4(0x4)
	struct AGameEventBase* CallFunc_GetGameEvent_ReturnValue;  // 0x8(0x8)
	struct TArray<struct FGameEventParticipantInfo> CallFunc_GetParticipantInfo_ReturnValue;  // 0x10(0x10)
	char pad_32_1 : 7;  // 0x20(0x1)
	bool CallFunc_NotEqual_ByteByte_ReturnValue : 1;  // 0x20(0x1)

}; 
// Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.OnMouseEnter
// Size: 0xA8(Inherited: 0xA8) 
struct FOnMouseEnter : public FOnMouseEnter
{
	struct FGeometry MyGeometry;  // 0x0(0x38)
	struct FPointerEvent MouseEvent;  // 0x38(0x70)

}; 
// Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.ExecuteUbergraph_UI_GameEventParticipantStatsWidget
// Size: 0x21A(Inherited: 0x0) 
struct FExecuteUbergraph_UI_GameEventParticipantStatsWidget
{
	int32_t EntryPoint;  // 0x0(0x4)
	struct FGeometry K2Node_Event_MyGeometry;  // 0x4(0x38)
	char pad_60[4];  // 0x3C(0x4)
	struct FPointerEvent K2Node_Event_MouseEvent_2;  // 0x40(0x70)
	char pad_176_1 : 7;  // 0xB0(0x1)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0xB0(0x1)
	char pad_177[7];  // 0xB1(0x7)
	struct FPointerEvent K2Node_Event_MouseEvent;  // 0xB8(0x70)
	char pad_296_1 : 7;  // 0x128(0x1)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x128(0x1)
	char pad_297[7];  // 0x129(0x7)
	struct UGameEventScoreboardWidget* CallFunc_GetScoreboard_ReturnValue;  // 0x130(0x8)
	int32_t CallFunc_GetIndex_ReturnValue;  // 0x138(0x4)
	char pad_316[4];  // 0x13C(0x4)
	struct UGameEventScoreboardWidget* CallFunc_GetScoreboard_ReturnValue_2;  // 0x140(0x8)
	struct FGameEventTeamColours K2Node_Event_colours;  // 0x148(0x60)
	char pad_424_1 : 7;  // 0x1A8(0x1)
	bool CallFunc_IsValid_ReturnValue_3 : 1;  // 0x1A8(0x1)
	char pad_425[7];  // 0x1A9(0x7)
	struct UGameEventScoreboardWidget* CallFunc_GetScoreboard_ReturnValue_3;  // 0x1B0(0x8)
	struct AGameEventBase* CallFunc_GetGameEvent_ReturnValue;  // 0x1B8(0x8)
	char pad_448_1 : 7;  // 0x1C0(0x1)
	bool CallFunc_IsValid_ReturnValue_4 : 1;  // 0x1C0(0x1)
	char pad_449[3];  // 0x1C1(0x3)
	int32_t CallFunc_GetNumberOfTeams_ReturnValue;  // 0x1C4(0x4)
	char pad_456_1 : 7;  // 0x1C8(0x1)
	bool CallFunc_BooleanAND_ReturnValue : 1;  // 0x1C8(0x1)
	char pad_457_1 : 7;  // 0x1C9(0x1)
	bool CallFunc_Greater_IntInt_ReturnValue : 1;  // 0x1C9(0x1)
	char pad_458[6];  // 0x1CA(0x6)
	struct TArray<struct FGameEventParticipantInfo> CallFunc_GetParticipantInfo_ReturnValue;  // 0x1D0(0x10)
	int32_t CallFunc_GetIndex_ReturnValue_2;  // 0x1E0(0x4)
	char pad_484_1 : 7;  // 0x1E4(0x1)
	bool CallFunc_Array_IsValidIndex_ReturnValue : 1;  // 0x1E4(0x1)
	char pad_485_1 : 7;  // 0x1E5(0x1)
	bool CallFunc_BooleanAND_ReturnValue_2 : 1;  // 0x1E5(0x1)
	char pad_486[2];  // 0x1E6(0x2)
	int32_t CallFunc_Max_ReturnValue;  // 0x1E8(0x4)
	char pad_492_1 : 7;  // 0x1EC(0x1)
	bool CallFunc_NotEqual_IntInt_ReturnValue : 1;  // 0x1EC(0x1)
	char pad_493[3];  // 0x1ED(0x3)
	struct AGameEventBase* CallFunc_GetGameEvent_ReturnValue_2;  // 0x1F0(0x8)
	struct TArray<struct FGameEventParticipantInfo> CallFunc_GetParticipantInfo_ReturnValue_2;  // 0x1F8(0x10)
	int32_t CallFunc_GetIndex_ReturnValue_3;  // 0x208(0x4)
	char pad_524[4];  // 0x20C(0x4)
	struct AGameEventBase* CallFunc_GetGameEvent_ReturnValue_3;  // 0x210(0x8)
	char pad_536_1 : 7;  // 0x218(0x1)
	bool CallFunc_Array_IsValidIndex_ReturnValue_2 : 1;  // 0x218(0x1)
	char pad_537_1 : 7;  // 0x219(0x1)
	bool CallFunc_IsValid_ReturnValue_5 : 1;  // 0x219(0x1)

}; 
// Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.SetColours
// Size: 0x60(Inherited: 0x60) 
struct FSetColours : public FSetColours
{
	struct FGameEventTeamColours colours;  // 0x0(0x60)

}; 
// Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.OnMouseLeave
// Size: 0x70(Inherited: 0x70) 
struct FOnMouseLeave : public FOnMouseLeave
{
	struct FPointerEvent MouseEvent;  // 0x0(0x70)

}; 
// Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.GetSelectedOverlayVisiblity
// Size: 0x3(Inherited: 0x0) 
struct FGetSelectedOverlayVisiblity
{
	uint8_t  ReturnValue;  // 0x0(0x1)
	char pad_1_1 : 7;  // 0x1(0x1)
	bool CallFunc_IsOwning_ReturnValue : 1;  // 0x1(0x1)
	char pad_2_1 : 7;  // 0x2(0x1)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x2(0x1)

}; 
// Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.IsOwning
// Size: 0x29(Inherited: 0x0) 
struct FIsOwning
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)
	char pad_1_1 : 7;  // 0x1(0x1)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x1(0x1)
	char pad_2[2];  // 0x2(0x2)
	int32_t CallFunc_GetIndex_ReturnValue;  // 0x4(0x4)
	struct ACharacter* CallFunc_GetPlayerCharacter_ReturnValue;  // 0x8(0x8)
	struct AGameEventBase* CallFunc_GetGameEvent_ReturnValue;  // 0x10(0x8)
	struct TArray<struct FGameEventParticipantInfo> CallFunc_GetParticipantInfo_ReturnValue;  // 0x18(0x10)
	char pad_40_1 : 7;  // 0x28(0x1)
	bool CallFunc_EqualEqual_ObjectObject_ReturnValue : 1;  // 0x28(0x1)

}; 
// Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.UpdateNumber
// Size: 0x4D(Inherited: 0x0) 
struct FUpdateNumber
{
	struct FText ReturnValue;  // 0x0(0x18)
	struct UPanelWidget* CallFunc_GetParent_ReturnValue;  // 0x18(0x8)
	char pad_32_1 : 7;  // 0x20(0x1)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x20(0x1)
	char pad_33_1 : 7;  // 0x21(0x1)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x21(0x1)
	char pad_34[2];  // 0x22(0x2)
	int32_t CallFunc_GetChildIndex_ReturnValue;  // 0x24(0x4)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x28(0x4)
	char pad_44[4];  // 0x2C(0x4)
	struct FText CallFunc_Conv_IntToText_ReturnValue;  // 0x30(0x18)
	int32_t CallFunc_Percent_IntInt_ReturnValue;  // 0x48(0x4)
	char pad_76_1 : 7;  // 0x4C(0x1)
	bool CallFunc_NotEqual_IntInt_ReturnValue : 1;  // 0x4C(0x1)

}; 
// Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.UpdateTeamColor
// Size: 0x33(Inherited: 0x0) 
struct FUpdateTeamColor
{
	int32_t TeamIndex;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct UGameEventScoreboardWidget* CallFunc_GetScoreboard_ReturnValue;  // 0x8(0x8)
	struct UGameEventScoreboardWidget* CallFunc_GetScoreboard_ReturnValue_2;  // 0x10(0x8)
	struct UUI_GameEventMiniScoreboardWidget_C* K2Node_DynamicCast_AsUI_Game_Event_Mini_Scoreboard_Widget;  // 0x18(0x8)
	char pad_32_1 : 7;  // 0x20(0x1)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x20(0x1)
	char pad_33[7];  // 0x21(0x7)
	struct UUI_GameEventScoreboardWidget_C* K2Node_DynamicCast_AsUI_Game_Event_Scoreboard_Widget;  // 0x28(0x8)
	char pad_48_1 : 7;  // 0x30(0x1)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x30(0x1)
	char pad_49_1 : 7;  // 0x31(0x1)
	bool CallFunc_Array_IsValidIndex_ReturnValue : 1;  // 0x31(0x1)
	char pad_50_1 : 7;  // 0x32(0x1)
	bool CallFunc_Array_IsValidIndex_ReturnValue_2 : 1;  // 0x32(0x1)

}; 
