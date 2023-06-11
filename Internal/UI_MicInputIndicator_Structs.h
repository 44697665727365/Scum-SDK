#pragma once 
#include "SDK.h" 
 
 
// Function UI_MicInputIndicator.UI_MicInputIndicator_C.ExecuteUbergraph_UI_MicInputIndicator
// Size: 0xDB(Inherited: 0x0) 
struct FExecuteUbergraph_UI_MicInputIndicator
{
	int32_t EntryPoint;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool CallFunc_IsPushToTalkEnabled_ReturnValue : 1;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)
	int32_t Temp_int_Array_Index_Variable;  // 0x8(0x4)
	int32_t Temp_int_Loop_Counter_Variable;  // 0xC(0x4)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x10(0x4)
	struct FGeometry K2Node_Event_MyGeometry;  // 0x14(0x38)
	float K2Node_Event_InDeltaTime;  // 0x4C(0x4)
	float CallFunc_Multiply_FloatFloat_ReturnValue;  // 0x50(0x4)
	int32_t CallFunc_GetChildrenCount_ReturnValue;  // 0x54(0x4)
	float CallFunc_Conv_IntToFloat_ReturnValue;  // 0x58(0x4)
	int32_t CallFunc_Subtract_IntInt_ReturnValue;  // 0x5C(0x4)
	struct UWidget* CallFunc_Array_Get_Item;  // 0x60(0x8)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x68(0x4)
	char pad_108_1 : 7;  // 0x6C(0x1)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x6C(0x1)
	char pad_109[3];  // 0x6D(0x3)
	float CallFunc_Array_Get_Item_2;  // 0x70(0x4)
	struct FVector2D CallFunc_MakeVector2D_ReturnValue;  // 0x74(0x8)
	float CallFunc_Add_FloatFloat_ReturnValue;  // 0x7C(0x4)
	char pad_128_1 : 7;  // 0x80(0x1)
	bool CallFunc_GreaterEqual_FloatFloat_ReturnValue : 1;  // 0x80(0x1)
	char pad_129_1 : 7;  // 0x81(0x1)
	bool Temp_bool_Variable : 1;  // 0x81(0x1)
	char pad_130[2];  // 0x82(0x2)
	float Temp_float_Variable;  // 0x84(0x4)
	int32_t Temp_int_Variable;  // 0x88(0x4)
	char pad_140_1 : 7;  // 0x8C(0x1)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x8C(0x1)
	char pad_141[3];  // 0x8D(0x3)
	float CallFunc_Conv_IntToFloat_ReturnValue_2;  // 0x90(0x4)
	float CallFunc_Divide_FloatFloat_ReturnValue;  // 0x94(0x4)
	struct UWidget* CallFunc_GetChildAt_ReturnValue;  // 0x98(0x8)
	int32_t CallFunc_Array_Add_ReturnValue;  // 0xA0(0x4)
	int32_t CallFunc_Array_Add_ReturnValue_2;  // 0xA4(0x4)
	char pad_168_1 : 7;  // 0xA8(0x1)
	bool CallFunc_LessEqual_IntInt_ReturnValue : 1;  // 0xA8(0x1)
	char pad_169[3];  // 0xA9(0x3)
	int32_t CallFunc_Add_IntInt_ReturnValue_2;  // 0xAC(0x4)
	char pad_176_1 : 7;  // 0xB0(0x1)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0xB0(0x1)
	char pad_177_1 : 7;  // 0xB1(0x1)
	bool CallFunc_GetIsActiveTalker_ReturnValue : 1;  // 0xB1(0x1)
	char pad_178[6];  // 0xB2(0x6)
	struct AController* CallFunc_GetController_ReturnValue;  // 0xB8(0x8)
	char pad_192_1 : 7;  // 0xC0(0x1)
	bool Temp_bool_Variable_2 : 1;  // 0xC0(0x1)
	char pad_193[7];  // 0xC1(0x7)
	struct AConZPlayerController* K2Node_DynamicCast_AsCon_ZPlayer_Controller;  // 0xC8(0x8)
	char pad_208_1 : 7;  // 0xD0(0x1)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0xD0(0x1)
	char pad_209_1 : 7;  // 0xD1(0x1)
	bool CallFunc_IsPushToTalkPressed_ReturnValue : 1;  // 0xD1(0x1)
	char pad_210[2];  // 0xD2(0x2)
	float K2Node_Select_Default;  // 0xD4(0x4)
	char pad_216_1 : 7;  // 0xD8(0x1)
	bool CallFunc_BooleanAND_ReturnValue : 1;  // 0xD8(0x1)
	char pad_217_1 : 7;  // 0xD9(0x1)
	bool CallFunc_BooleanAND_ReturnValue_2 : 1;  // 0xD9(0x1)
	char pad_218_1 : 7;  // 0xDA(0x1)
	bool K2Node_Select_Default_2 : 1;  // 0xDA(0x1)

}; 
// Function UI_MicInputIndicator.UI_MicInputIndicator_C.UpdateVoiceChat
// Size: 0x19(Inherited: 0x0) 
struct FUpdateVoiceChat
{
	struct APawn* CallFunc_GetOwningPlayerPawn_ReturnValue;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)
	struct UVoiceChatComponent* CallFunc_GetComponentByClass_ReturnValue;  // 0x10(0x8)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool CallFunc_NotEqual_ObjectObject_ReturnValue : 1;  // 0x18(0x1)

}; 
// Function UI_MicInputIndicator.UI_MicInputIndicator_C.Tick
// Size: 0x3C(Inherited: 0x3C) 
struct FTick : public FTick
{
	struct FGeometry MyGeometry;  // 0x0(0x38)
	float InDeltaTime;  // 0x38(0x4)

}; 
// Function UI_MicInputIndicator.UI_MicInputIndicator_C.GetMicVisibility
// Size: 0x11(Inherited: 0x0) 
struct FGetMicVisibility
{
	uint8_t  ReturnValue;  // 0x0(0x1)
	char pad_1[7];  // 0x1(0x7)
	struct ABP_Prisoner_C* K2Node_DynamicCast_AsBP_Prisoner;  // 0x8(0x8)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x10(0x1)

}; 
