#pragma once 
#include "SDK.h" 
 
 
// Function UI_CTFTeamHeaderWidget.UI_CTFTeamHeaderWidget_C.ExecuteUbergraph_UI_CTFTeamHeaderWidget
// Size: 0x100(Inherited: 0x0) 
struct FExecuteUbergraph_UI_CTFTeamHeaderWidget
{
	int32_t EntryPoint;  // 0x0(0x4)
	struct FGameEventTeamColours K2Node_Event_colours;  // 0x4(0x60)
	char pad_100[4];  // 0x64(0x4)
	struct UUI_WinCounter_C* CallFunc_Create_ReturnValue;  // 0x68(0x8)
	struct FSlateColor K2Node_MakeStruct_SlateColor;  // 0x70(0x28)
	struct FText K2Node_Event_name;  // 0x98(0x18)
	struct AGameEventBase* K2Node_Event_gameEvent;  // 0xB0(0x8)
	struct ABP_CTFGameEvent_C* K2Node_DynamicCast_AsBP_CTFGame_Event;  // 0xB8(0x8)
	char pad_192_1 : 7;  // 0xC0(0x1)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0xC0(0x1)
	char pad_193[7];  // 0xC1(0x7)
	struct UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue;  // 0xC8(0x8)
	struct UUI_WinCounter_C* CallFunc_Create_ReturnValue_2;  // 0xD0(0x8)
	struct UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_2;  // 0xD8(0x8)
	float K2Node_Event_Score;  // 0xE0(0x4)
	char pad_228[4];  // 0xE4(0x4)
	struct FText CallFunc_Conv_FloatToText_ReturnValue;  // 0xE8(0x18)

}; 
// Function UI_CTFTeamHeaderWidget.UI_CTFTeamHeaderWidget_C.SetTeamColours
// Size: 0x60(Inherited: 0x60) 
struct FSetTeamColours : public FSetTeamColours
{
	struct FGameEventTeamColours colours;  // 0x0(0x60)

}; 
// Function UI_CTFTeamHeaderWidget.UI_CTFTeamHeaderWidget_C.SetTeamScore
// Size: 0x4(Inherited: 0x4) 
struct FSetTeamScore : public FSetTeamScore
{
	float Score;  // 0x0(0x4)

}; 
// Function UI_CTFTeamHeaderWidget.UI_CTFTeamHeaderWidget_C.SetGameEvent
// Size: 0x8(Inherited: 0x8) 
struct FSetGameEvent : public FSetGameEvent
{
	struct AGameEventBase* gameEvent;  // 0x0(0x8)

}; 
// Function UI_CTFTeamHeaderWidget.UI_CTFTeamHeaderWidget_C.SetTeamName
// Size: 0x18(Inherited: 0x18) 
struct FSetTeamName : public FSetTeamName
{
	struct FText Name;  // 0x0(0x18)

}; 
// Function UI_CTFTeamHeaderWidget.UI_CTFTeamHeaderWidget_C.GetPlayerText
// Size: 0x100(Inherited: 0x0) 
struct FGetPlayerText
{
	struct FText ReturnValue;  // 0x0(0x18)
	struct TArray<struct FFormatArgumentData> K2Node_MakeArray_Array;  // 0x18(0x10)
	struct TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_2;  // 0x28(0x10)
	struct FText CallFunc_Format_ReturnValue;  // 0x38(0x18)
	struct FText CallFunc_Format_ReturnValue_2;  // 0x50(0x18)
	int32_t Temp_int_Variable;  // 0x68(0x4)
	int32_t CallFunc_GetTeamMemberCount_ReturnValue;  // 0x6C(0x4)
	char pad_112_1 : 7;  // 0x70(0x1)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x70(0x1)
	char pad_113[7];  // 0x71(0x7)
	struct FFormatArgumentData K2Node_MakeStruct_FormatArgumentData;  // 0x78(0x40)
	struct TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_3;  // 0xB8(0x10)
	int32_t CallFunc_Min_ReturnValue;  // 0xC8(0x4)
	char pad_204[4];  // 0xCC(0x4)
	struct FText CallFunc_Format_ReturnValue_3;  // 0xD0(0x18)
	struct FText K2Node_Select_Default;  // 0xE8(0x18)

}; 
