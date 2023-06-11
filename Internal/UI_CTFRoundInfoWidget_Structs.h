#pragma once 
#include "SDK.h" 
 
 
// Function UI_CTFRoundInfoWidget.UI_CTFRoundInfoWidget_C.ExecuteUbergraph_UI_CTFRoundInfoWidget
// Size: 0x19(Inherited: 0x0) 
struct FExecuteUbergraph_UI_CTFRoundInfoWidget
{
	int32_t EntryPoint;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct AGameEventBase* K2Node_Event_gameEvent;  // 0x8(0x8)
	struct ABP_CTFGameEvent_C* K2Node_DynamicCast_AsBP_CTFGame_Event;  // 0x10(0x8)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x18(0x1)

}; 
// Function UI_CTFRoundInfoWidget.UI_CTFRoundInfoWidget_C.SetGameEvent
// Size: 0x8(Inherited: 0x8) 
struct FSetGameEvent : public FSetGameEvent
{
	struct AGameEventBase* gameEvent;  // 0x0(0x8)

}; 
// Function UI_CTFRoundInfoWidget.UI_CTFRoundInfoWidget_C.GetTimeLeftText
// Size: 0xB8(Inherited: 0x0) 
struct FGetTimeLeftText
{
	struct FText ReturnValue;  // 0x0(0x18)
	float CallFunc_GetStatusTime_ReturnValue;  // 0x18(0x4)
	char pad_28_1 : 7;  // 0x1C(0x1)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x1C(0x1)
	char pad_29[3];  // 0x1D(0x3)
	float CallFunc_Abs_ReturnValue;  // 0x20(0x4)
	int32_t CallFunc_FCeil_ReturnValue;  // 0x24(0x4)
	int32_t CallFunc_Divide_IntInt_ReturnValue;  // 0x28(0x4)
	int32_t CallFunc_Percent_IntInt_ReturnValue;  // 0x2C(0x4)
	struct FText CallFunc_Conv_IntToText_ReturnValue;  // 0x30(0x18)
	struct FText CallFunc_Conv_IntToText_ReturnValue_2;  // 0x48(0x18)
	struct FString CallFunc_Conv_TextToString_ReturnValue;  // 0x60(0x10)
	struct FString CallFunc_Conv_TextToString_ReturnValue_2;  // 0x70(0x10)
	struct FString CallFunc_Concat_StrStr_ReturnValue;  // 0x80(0x10)
	struct FString CallFunc_Concat_StrStr_ReturnValue_2;  // 0x90(0x10)
	struct FText CallFunc_Conv_StringToText_ReturnValue;  // 0xA0(0x18)

}; 
// Function UI_CTFRoundInfoWidget.UI_CTFRoundInfoWidget_C.GetTimeLeftBoxVisibility
// Size: 0x4(Inherited: 0x0) 
struct FGetTimeLeftBoxVisibility
{
	uint8_t  ReturnValue;  // 0x0(0x1)
	char pad_1_1 : 7;  // 0x1(0x1)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x1(0x1)
	uint8_t  CallFunc_GetEventState_ReturnValue;  // 0x2(0x1)
	char pad_3_1 : 7;  // 0x3(0x1)
	bool K2Node_SwitchEnum_CmpSuccess : 1;  // 0x3(0x1)

}; 
// Function UI_CTFRoundInfoWidget.UI_CTFRoundInfoWidget_C.GetTimeLeftDescriptionText
// Size: 0x1B6(Inherited: 0x0) 
struct FGetTimeLeftDescriptionText
{
	struct FText ReturnValue;  // 0x0(0x18)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)
	struct FGameEventParameters CallFunc_GetParameters_ReturnValue;  // 0x20(0x188)
	int32_t CallFunc_GetCurrentRound_ReturnValue;  // 0x1A8(0x4)
	uint8_t  CallFunc_GetEventState_ReturnValue;  // 0x1AC(0x1)
	char pad_429[3];  // 0x1AD(0x3)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x1B0(0x4)
	char pad_436_1 : 7;  // 0x1B4(0x1)
	bool K2Node_SwitchEnum_CmpSuccess : 1;  // 0x1B4(0x1)
	char pad_437_1 : 7;  // 0x1B5(0x1)
	bool CallFunc_EqualEqual_IntInt_ReturnValue : 1;  // 0x1B5(0x1)

}; 
// Function UI_CTFRoundInfoWidget.UI_CTFRoundInfoWidget_C.GetRoundStatus
// Size: 0x250(Inherited: 0x0) 
struct FGetRoundStatus
{
	struct FText ReturnValue;  // 0x0(0x18)
	struct FText CallFunc_MakeLiteralText_ReturnValue;  // 0x18(0x18)
	char pad_48_1 : 7;  // 0x30(0x1)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x30(0x1)
	char pad_49[7];  // 0x31(0x7)
	struct FString CallFunc_Conv_TextToString_ReturnValue;  // 0x38(0x10)
	int32_t CallFunc_GetCurrentRound_ReturnValue;  // 0x48(0x4)
	char pad_76[4];  // 0x4C(0x4)
	struct FGameEventParameters CallFunc_GetParameters_ReturnValue;  // 0x50(0x188)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x1D8(0x4)
	char pad_476[4];  // 0x1DC(0x4)
	struct FString CallFunc_Conv_IntToString_ReturnValue;  // 0x1E0(0x10)
	struct FString CallFunc_Conv_IntToString_ReturnValue_2;  // 0x1F0(0x10)
	struct FString CallFunc_Concat_StrStr_ReturnValue;  // 0x200(0x10)
	char pad_528_1 : 7;  // 0x210(0x1)
	bool CallFunc_Greater_IntInt_ReturnValue : 1;  // 0x210(0x1)
	char pad_529[7];  // 0x211(0x7)
	struct FString CallFunc_Concat_StrStr_ReturnValue_2;  // 0x218(0x10)
	struct FString CallFunc_Concat_StrStr_ReturnValue_3;  // 0x228(0x10)
	struct FText CallFunc_Conv_StringToText_ReturnValue;  // 0x238(0x18)

}; 
