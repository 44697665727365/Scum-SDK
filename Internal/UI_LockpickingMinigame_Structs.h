#pragma once 
#include "SDK.h" 
 
 
// Function UI_LockpickingMinigame.UI_LockpickingMinigame_C.SetDifficultyVisuals
// Size: 0x2(Inherited: 0x0) 
struct FSetDifficultyVisuals
{
	uint8_t  Difficulty;  // 0x0(0x1)
	char pad_1_1 : 7;  // 0x1(0x1)
	bool K2Node_SwitchEnum_CmpSuccess : 1;  // 0x1(0x1)

}; 
// Function UI_LockpickingMinigame.UI_LockpickingMinigame_C.ExecuteUbergraph_UI_LockpickingMinigame
// Size: 0x108(Inherited: 0x0) 
struct FExecuteUbergraph_UI_LockpickingMinigame
{
	int32_t EntryPoint;  // 0x0(0x4)
	uint8_t  K2Node_Event_value;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)
	struct FGeometry K2Node_Event_MyGeometry;  // 0x8(0x38)
	float K2Node_Event_InDeltaTime;  // 0x40(0x4)
	float CallFunc_GetRemainingTime_ReturnValue;  // 0x44(0x4)
	float CallFunc_GetDuration_ReturnValue;  // 0x48(0x4)
	int32_t CallFunc_Round_ReturnValue;  // 0x4C(0x4)
	float CallFunc_Divide_FloatFloat_ReturnValue;  // 0x50(0x4)
	char pad_84[4];  // 0x54(0x4)
	struct FText CallFunc_Conv_IntToText_ReturnValue;  // 0x58(0x18)
	struct UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue;  // 0x70(0x8)
	int32_t CallFunc_GetLockpicksCount_ReturnValue;  // 0x78(0x4)
	char pad_124_1 : 7;  // 0x7C(0x1)
	bool CallFunc_EqualEqual_IntInt_ReturnValue : 1;  // 0x7C(0x1)
	char pad_125[3];  // 0x7D(0x3)
	struct FText CallFunc_Conv_IntToText_ReturnValue_2;  // 0x80(0x18)
	int32_t CallFunc_GetTensionToolCount_ReturnValue;  // 0x98(0x4)
	char pad_156_1 : 7;  // 0x9C(0x1)
	bool CallFunc_EqualEqual_IntInt_ReturnValue_2 : 1;  // 0x9C(0x1)
	char pad_157[3];  // 0x9D(0x3)
	struct FText CallFunc_Conv_IntToText_ReturnValue_3;  // 0xA0(0x18)
	struct UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue;  // 0xB8(0x8)
	struct UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2;  // 0xC0(0x8)
	struct UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3;  // 0xC8(0x8)
	struct UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_4;  // 0xD0(0x8)
	int32_t CallFunc_GetFamePoints_ReturnValue;  // 0xD8(0x4)
	char pad_220[4];  // 0xDC(0x4)
	struct FText CallFunc_Conv_IntToText_ReturnValue_4;  // 0xE0(0x18)
	struct UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_5;  // 0xF8(0x8)
	struct UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_6;  // 0x100(0x8)

}; 
// Function UI_LockpickingMinigame.UI_LockpickingMinigame_C.SetLockPickingDifficulty
// Size: 0x1(Inherited: 0x1) 
struct FSetLockPickingDifficulty : public FSetLockPickingDifficulty
{
	uint8_t  Value;  // 0x0(0x1)

}; 
// Function UI_LockpickingMinigame.UI_LockpickingMinigame_C.Tick
// Size: 0x3C(Inherited: 0x3C) 
struct FTick : public FTick
{
	struct FGeometry MyGeometry;  // 0x0(0x38)
	float InDeltaTime;  // 0x38(0x4)

}; 
