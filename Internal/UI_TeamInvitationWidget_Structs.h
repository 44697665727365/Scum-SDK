#pragma once 
#include "SDK.h" 
 
 
// Function UI_TeamInvitationWidget.UI_TeamInvitationWidget_C.ExecuteUbergraph_UI_TeamInvitationWidget
// Size: 0xA9(Inherited: 0x0) 
struct FExecuteUbergraph_UI_TeamInvitationWidget
{
	int32_t EntryPoint;  // 0x0(0x4)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x4(0x10)
	char pad_20[4];  // 0x14(0x4)
	struct AConZSquad* CallFunc_GetSquad_ReturnValue;  // 0x18(0x8)
	struct AConZSquad* CallFunc_GetSquad_ReturnValue_2;  // 0x20(0x8)
	float K2Node_Event_timeout;  // 0x28(0x4)
	struct FGeometry K2Node_Event_MyGeometry;  // 0x2C(0x38)
	float K2Node_Event_InDeltaTime;  // 0x64(0x4)
	struct FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue;  // 0x68(0x8)
	float CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue;  // 0x70(0x4)
	int32_t CallFunc_FTrunc_ReturnValue;  // 0x74(0x4)
	struct FString CallFunc_BuildString_Int_ReturnValue;  // 0x78(0x10)
	char pad_136_1 : 7;  // 0x88(0x1)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x88(0x1)
	char pad_137[7];  // 0x89(0x7)
	struct FText CallFunc_Conv_StringToText_ReturnValue;  // 0x90(0x18)
	char pad_168_1 : 7;  // 0xA8(0x1)
	bool CallFunc_IsSquadInvitationReceived_ReturnValue : 1;  // 0xA8(0x1)

}; 
// Function UI_TeamInvitationWidget.UI_TeamInvitationWidget_C.StartTimer
// Size: 0x4(Inherited: 0x4) 
struct FStartTimer : public FStartTimer
{
	float Timeout;  // 0x0(0x4)

}; 
// Function UI_TeamInvitationWidget.UI_TeamInvitationWidget_C.Tick
// Size: 0x3C(Inherited: 0x3C) 
struct FTick : public FTick
{
	struct FGeometry MyGeometry;  // 0x0(0x38)
	float InDeltaTime;  // 0x38(0x4)

}; 
