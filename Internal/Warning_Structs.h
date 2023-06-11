#pragma once 
#include "SDK.h" 
 
 
// Function Warning.Warning_C.ExecuteUbergraph_Warning
// Size: 0xB3(Inherited: 0x0) 
struct FExecuteUbergraph_Warning
{
	int32_t EntryPoint;  // 0x0(0x4)
	struct FGeometry K2Node_Event_MyGeometry;  // 0x4(0x38)
	float K2Node_Event_InDeltaTime;  // 0x3C(0x4)
	struct UMaterialInstanceDynamic* CallFunc_GetEffectMaterial_ReturnValue;  // 0x40(0x8)
	float CallFunc_Divide_FloatFloat_ReturnValue;  // 0x48(0x4)
	float CallFunc_Add_FloatFloat_ReturnValue;  // 0x4C(0x4)
	float CallFunc_Divide_FloatFloat_ReturnValue_2;  // 0x50(0x4)
	float CallFunc_Subtract_FloatFloat_ReturnValue;  // 0x54(0x4)
	struct FLinearColor K2Node_MakeStruct_LinearColor;  // 0x58(0x10)
	char pad_104_1 : 7;  // 0x68(0x1)
	bool CallFunc_Less_FloatFloat_ReturnValue : 1;  // 0x68(0x1)
	char pad_105[7];  // 0x69(0x7)
	struct FMessageStruct CallFunc_Array_Get_Item;  // 0x70(0x30)
	float CallFunc_Divide_FloatFloat_ReturnValue_3;  // 0xA0(0x4)
	float CallFunc_MultiplyByPi_ReturnValue;  // 0xA4(0x4)
	float CallFunc_Cos_ReturnValue;  // 0xA8(0x4)
	float CallFunc_Multiply_FloatFloat_ReturnValue;  // 0xAC(0x4)
	char pad_176_1 : 7;  // 0xB0(0x1)
	bool CallFunc_GreaterEqual_FloatFloat_ReturnValue : 1;  // 0xB0(0x1)
	char pad_177_1 : 7;  // 0xB1(0x1)
	bool CallFunc_Array_IsValidIndex_ReturnValue : 1;  // 0xB1(0x1)
	char pad_178_1 : 7;  // 0xB2(0x1)
	bool CallFunc_BooleanAND_ReturnValue : 1;  // 0xB2(0x1)

}; 
// Function Warning.Warning_C.Tick
// Size: 0x3C(Inherited: 0x3C) 
struct FTick : public FTick
{
	struct FGeometry MyGeometry;  // 0x0(0x38)
	float InDeltaTime;  // 0x38(0x4)

}; 
