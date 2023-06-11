#pragma once 
#include "SDK.h" 
 
 
// Function UI_GameEventParticipantInfoCardWidget.UI_GameEventParticipantInfoCardWidget_C.ExecuteUbergraph_UI_GameEventParticipantInfoCardWidget
// Size: 0xD8(Inherited: 0x0) 
struct FExecuteUbergraph_UI_GameEventParticipantInfoCardWidget
{
	int32_t EntryPoint;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct FText CallFunc_Conv_IntToText_ReturnValue;  // 0x8(0x18)
	struct FString CallFunc_GetUserActiveName_ReturnValue;  // 0x20(0x10)
	struct FText CallFunc_Conv_StringToText_ReturnValue;  // 0x30(0x18)
	struct FText CallFunc_Conv_IntToText_ReturnValue_2;  // 0x48(0x18)
	struct FText CallFunc_Conv_IntToText_ReturnValue_3;  // 0x60(0x18)
	struct FText CallFunc_Conv_IntToText_ReturnValue_4;  // 0x78(0x18)
	struct FText CallFunc_Conv_IntToText_ReturnValue_5;  // 0x90(0x18)
	struct APrisoner* K2Node_Event_prisoner;  // 0xA8(0x8)
	struct ABP_Prisoner_C* K2Node_DynamicCast_AsBP_Prisoner;  // 0xB0(0x8)
	char pad_184_1 : 7;  // 0xB8(0x1)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0xB8(0x1)
	char pad_185[7];  // 0xB9(0x7)
	struct FText CallFunc_Conv_ByteToText_ReturnValue;  // 0xC0(0x18)

}; 
// Function UI_GameEventParticipantInfoCardWidget.UI_GameEventParticipantInfoCardWidget_C.UpdateStats
// Size: 0x8(Inherited: 0x8) 
struct FUpdateStats : public FUpdateStats
{
	struct APrisoner* Prisoner;  // 0x0(0x8)

}; 
