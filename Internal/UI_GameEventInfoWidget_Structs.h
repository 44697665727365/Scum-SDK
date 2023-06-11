#pragma once 
#include "SDK.h" 
 
 
// Function UI_GameEventInfoWidget.UI_GameEventInfoWidget_C.ExecuteUbergraph_UI_GameEventInfoWidget
// Size: 0x258(Inherited: 0x0) 
struct FExecuteUbergraph_UI_GameEventInfoWidget
{
	int32_t EntryPoint;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct FText CallFunc_MakeLiteralText_ReturnValue;  // 0x8(0x18)
	struct FString CallFunc_Conv_TextToString_ReturnValue;  // 0x20(0x10)
	struct AGameEventBase* K2Node_Event__gameEvent;  // 0x30(0x8)
	int32_t CallFunc_GetNumberOfTeams_ReturnValue;  // 0x38(0x4)
	char pad_60[4];  // 0x3C(0x4)
	struct FGameEventParameters CallFunc_GetParameters_ReturnValue;  // 0x40(0x188)
	struct FText CallFunc_Conv_IntToText_ReturnValue;  // 0x1C8(0x18)
	struct FText CallFunc_Conv_IntToText_ReturnValue_2;  // 0x1E0(0x18)
	struct FText CallFunc_Conv_FloatToText_ReturnValue;  // 0x1F8(0x18)
	struct FString CallFunc_Conv_TextToString_ReturnValue_2;  // 0x210(0x10)
	struct FString CallFunc_Concat_StrStr_ReturnValue;  // 0x220(0x10)
	struct FString CallFunc_Concat_StrStr_ReturnValue_2;  // 0x230(0x10)
	struct FText CallFunc_Conv_StringToText_ReturnValue;  // 0x240(0x18)

}; 
// Function UI_GameEventInfoWidget.UI_GameEventInfoWidget_C.UpdateStats
// Size: 0x8(Inherited: 0x8) 
struct FUpdateStats : public FUpdateStats
{
	struct AGameEventBase* _gameEvent;  // 0x0(0x8)

}; 
