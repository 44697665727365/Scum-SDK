#pragma once 
#include "SDK.h" 
 
 
// Function UI_CTFMiniStatsWidget.UI_CTFMiniStatsWidget_C.ExecuteUbergraph_UI_CTFMiniStatsWidget
// Size: 0xE8(Inherited: 0x0) 
struct FExecuteUbergraph_UI_CTFMiniStatsWidget
{
	int32_t EntryPoint;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool Temp_bool_Variable : 1;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)
	struct AGameEventBase* CallFunc_GetGameEvent_ReturnValue;  // 0x8(0x8)
	int32_t CallFunc_GetCurrentRound_ReturnValue;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)
	struct TArray<struct FGameEventParticipantInfo> CallFunc_GetParticipantInfo_ReturnValue;  // 0x18(0x10)
	char pad_40_1 : 7;  // 0x28(0x1)
	bool CallFunc_GreaterEqual_IntInt_ReturnValue : 1;  // 0x28(0x1)
	char pad_41[3];  // 0x29(0x3)
	int32_t CallFunc_GetIndex_ReturnValue;  // 0x2C(0x4)
	char pad_48_1 : 7;  // 0x30(0x1)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x30(0x1)
	char pad_49[7];  // 0x31(0x7)
	struct UGameEventParticipantStats* CallFunc_Array_Get_Item;  // 0x38(0x8)
	char pad_64_1 : 7;  // 0x40(0x1)
	bool CallFunc_Array_IsValidIndex_ReturnValue : 1;  // 0x40(0x1)
	char pad_65[7];  // 0x41(0x7)
	struct FText CallFunc_Conv_StringToText_ReturnValue;  // 0x48(0x18)
	struct UGameEventParticipantStats* K2Node_Select_Default;  // 0x60(0x8)
	struct UCTFParticipantStats* K2Node_DynamicCast_AsCTFParticipant_Stats;  // 0x68(0x8)
	char pad_112_1 : 7;  // 0x70(0x1)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x70(0x1)
	char pad_113[3];  // 0x71(0x3)
	float CallFunc_GetScore_ReturnValue;  // 0x74(0x4)
	int32_t CallFunc_GetEnemyKills_ReturnValue;  // 0x78(0x4)
	char pad_124[4];  // 0x7C(0x4)
	struct FText CallFunc_Conv_FloatToText_ReturnValue;  // 0x80(0x18)
	struct FText CallFunc_Conv_IntToText_ReturnValue;  // 0x98(0x18)
	int32_t CallFunc_GetDeaths_ReturnValue;  // 0xB0(0x4)
	char pad_180[4];  // 0xB4(0x4)
	struct FText CallFunc_Conv_IntToText_ReturnValue_2;  // 0xB8(0x18)
	struct FText CallFunc_Conv_IntToText_ReturnValue_3;  // 0xD0(0x18)

}; 
// Function UI_CTFMiniStatsWidget.UI_CTFMiniStatsWidget_C.GetColor
// Size: 0x20(Inherited: 0x0) 
struct FGetColor
{
	struct FLinearColor ReturnValue;  // 0x0(0x10)
	struct FLinearColor K2Node_MakeStruct_LinearColor;  // 0x10(0x10)

}; 
