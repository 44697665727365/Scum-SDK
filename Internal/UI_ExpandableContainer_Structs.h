#pragma once 
#include "SDK.h" 
 
 
// Function UI_ExpandableContainer.UI_ExpandableContainer_C.OnExpandChanged__DelegateSignature
// Size: 0x9(Inherited: 0x0) 
struct FOnExpandChanged__DelegateSignature
{
	struct UUI_ExpandableContainer_C* container;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool isMinimized : 1;  // 0x8(0x1)

}; 
// Function UI_ExpandableContainer.UI_ExpandableContainer_C.EnableAlarm
// Size: 0x1(Inherited: 0x0) 
struct FEnableAlarm
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x0(0x1)

}; 
// Function UI_ExpandableContainer.UI_ExpandableContainer_C.DecrementAlarmsCount
// Size: 0x8(Inherited: 0x0) 
struct FDecrementAlarmsCount
{
	int32_t Temp_int_Variable;  // 0x0(0x4)
	int32_t CallFunc_Subtract_IntInt_ReturnValue;  // 0x4(0x4)

}; 
// Function UI_ExpandableContainer.UI_ExpandableContainer_C.ExecuteUbergraph_UI_ExpandableContainer
// Size: 0x78(Inherited: 0x0) 
struct FExecuteUbergraph_UI_ExpandableContainer
{
	int32_t EntryPoint;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue;  // 0x8(0x8)
	struct FSlateFontInfo K2Node_MakeStruct_SlateFontInfo;  // 0x10(0x58)
	struct UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;  // 0x68(0x8)
	struct UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue;  // 0x70(0x8)

}; 
// Function UI_ExpandableContainer.UI_ExpandableContainer_C.IncrementAlarmsCount
// Size: 0x8(Inherited: 0x0) 
struct FIncrementAlarmsCount
{
	int32_t Temp_int_Variable;  // 0x0(0x4)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x4(0x4)

}; 
// Function UI_ExpandableContainer.UI_ExpandableContainer_C.CheckAlarm
// Size: 0x1(Inherited: 0x0) 
struct FCheckAlarm
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool CallFunc_Greater_IntInt_ReturnValue : 1;  // 0x0(0x1)

}; 
// Function UI_ExpandableContainer.UI_ExpandableContainer_C.DisableAlarm
// Size: 0x1(Inherited: 0x0) 
struct FDisableAlarm
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x0(0x1)

}; 
// Function UI_ExpandableContainer.UI_ExpandableContainer_C.SetParentContainer
// Size: 0x8(Inherited: 0x0) 
struct FSetParentContainer
{
	struct UUI_ExpandableContainer_C* container;  // 0x0(0x8)

}; 
