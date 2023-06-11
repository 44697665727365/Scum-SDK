#pragma once 
#include "SDK.h" 
 
 
// Function UI_CTFParticipantStatsWidget.UI_CTFParticipantStatsWidget_C.ExecuteUbergraph_UI_CTFParticipantStatsWidget
// Size: 0x128(Inherited: 0x0) 
struct FExecuteUbergraph_UI_CTFParticipantStatsWidget
{
	int32_t EntryPoint;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool Temp_bool_Variable : 1;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)
	struct UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;  // 0x8(0x8)
	struct AGameEventBase* CallFunc_GetGameEvent_ReturnValue;  // 0x10(0x8)
	int32_t CallFunc_GetIndex_ReturnValue;  // 0x18(0x4)
	char pad_28[4];  // 0x1C(0x4)
	struct TArray<struct FGameEventParticipantInfo> CallFunc_GetParticipantInfo_ReturnValue;  // 0x20(0x10)
	int32_t CallFunc_GetCurrentRound_ReturnValue;  // 0x30(0x4)
	char pad_52_1 : 7;  // 0x34(0x1)
	bool CallFunc_GreaterEqual_IntInt_ReturnValue : 1;  // 0x34(0x1)
	char pad_53[3];  // 0x35(0x3)
	struct UGameEventParticipantStats* CallFunc_Array_Get_Item;  // 0x38(0x8)
	char pad_64_1 : 7;  // 0x40(0x1)
	bool CallFunc_Array_IsValidIndex_ReturnValue : 1;  // 0x40(0x1)
	char pad_65[7];  // 0x41(0x7)
	struct FText CallFunc_Conv_StringToText_ReturnValue;  // 0x48(0x18)
	struct UGameEventParticipantStats* K2Node_Select_Default;  // 0x60(0x8)
	char pad_104_1 : 7;  // 0x68(0x1)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x68(0x1)
	char pad_105[7];  // 0x69(0x7)
	struct UCTFParticipantStats* K2Node_DynamicCast_AsCTFParticipant_Stats;  // 0x70(0x8)
	char pad_120_1 : 7;  // 0x78(0x1)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x78(0x1)
	char pad_121[3];  // 0x79(0x3)
	int32_t CallFunc_GetDeaths_ReturnValue;  // 0x7C(0x4)
	int32_t CallFunc_GetAssists_ReturnValue;  // 0x80(0x4)
	char pad_132[4];  // 0x84(0x4)
	struct FText CallFunc_Conv_IntToText_ReturnValue;  // 0x88(0x18)
	struct FText CallFunc_Conv_IntToText_ReturnValue_2;  // 0xA0(0x18)
	int32_t CallFunc_GetHeadshots_ReturnValue;  // 0xB8(0x4)
	int32_t CallFunc_GetEnemyKills_ReturnValue;  // 0xBC(0x4)
	struct FText CallFunc_Conv_IntToText_ReturnValue_3;  // 0xC0(0x18)
	struct FText CallFunc_Conv_IntToText_ReturnValue_4;  // 0xD8(0x18)
	float CallFunc_GetScore_ReturnValue;  // 0xF0(0x4)
	char pad_244[4];  // 0xF4(0x4)
	struct FText CallFunc_Conv_FloatToText_ReturnValue;  // 0xF8(0x18)
	struct FText CallFunc_Conv_IntToText_ReturnValue_5;  // 0x110(0x18)

}; 
