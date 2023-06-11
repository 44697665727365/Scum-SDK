#pragma once 
#include "SDK.h" 
 
 
// Function Menu_01.Menu_01_C.ReceiveTick
// Size: 0x4(Inherited: 0x4) 
struct FReceiveTick : public FReceiveTick
{
	float DeltaSeconds;  // 0x0(0x4)

}; 
// Function Menu_01.Menu_01_C.ExecuteUbergraph_Menu_01
// Size: 0x1B4(Inherited: 0x0) 
struct FExecuteUbergraph_Menu_01
{
	int32_t EntryPoint;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct TArray<struct FAkExternalSourceInfo> Temp_struct_Variable;  // 0x8(0x10)
	struct FDelegate Temp_delegate_Variable;  // 0x18(0x10)
	struct APlayerController* CallFunc_GetPlayerController_ReturnValue;  // 0x28(0x8)
	int32_t CallFunc_PostAssociatedAkEvent_ReturnValue;  // 0x30(0x4)
	char pad_52[4];  // 0x34(0x4)
	struct ABP_MenuPlayerController_C* K2Node_DynamicCast_AsBP_Menu_Player_Controller;  // 0x38(0x8)
	char pad_64_1 : 7;  // 0x40(0x1)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x40(0x1)
	char pad_65[3];  // 0x41(0x3)
	float K2Node_Event_DeltaSeconds;  // 0x44(0x4)
	struct APlayerController* CallFunc_GetPlayerController_ReturnValue_2;  // 0x48(0x8)
	struct FDelegate Temp_delegate_Variable_2;  // 0x50(0x10)
	struct FVector CallFunc_DeprojectMousePositionToWorld_WorldLocation;  // 0x60(0xC)
	struct FVector CallFunc_DeprojectMousePositionToWorld_WorldDirection;  // 0x6C(0xC)
	char pad_120_1 : 7;  // 0x78(0x1)
	bool CallFunc_DeprojectMousePositionToWorld_ReturnValue : 1;  // 0x78(0x1)
	char pad_121[7];  // 0x79(0x7)
	struct TArray<struct FAkExternalSourceInfo> Temp_struct_Variable_2;  // 0x80(0x10)
	struct FVector CallFunc_Multiply_VectorFloat_ReturnValue;  // 0x90(0xC)
	int32_t CallFunc_PostEvent_ReturnValue;  // 0x9C(0x4)
	struct FVector CallFunc_Add_VectorVector_ReturnValue;  // 0xA0(0xC)
	struct FVector CallFunc_Add_VectorVector_ReturnValue_2;  // 0xAC(0xC)
	struct UMenuPlayAsDroneOverlayWidget_C* CallFunc_Create_ReturnValue;  // 0xB8(0x8)
	struct FKey K2Node_InputKeyEvent_Key;  // 0xC0(0x18)
	struct UGameInstance* CallFunc_GetGameInstance_ReturnValue;  // 0xD8(0x8)
	struct UConZGameInstance* K2Node_DynamicCast_AsCon_ZGame_Instance;  // 0xE0(0x8)
	char pad_232_1 : 7;  // 0xE8(0x1)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0xE8(0x1)
	char pad_233_1 : 7;  // 0xE9(0x1)
	bool CallFunc_GetPlayAsDrone_ReturnValue : 1;  // 0xE9(0x1)
	char pad_234_1 : 7;  // 0xEA(0x1)
	bool CallFunc_Not_PreBool_ReturnValue : 1;  // 0xEA(0x1)
	char pad_235[1];  // 0xEB(0x1)
	struct FHitResult CallFunc_K2_SetActorLocation_SweepHitResult;  // 0xEC(0x88)
	char pad_372_1 : 7;  // 0x174(0x1)
	bool CallFunc_K2_SetActorLocation_ReturnValue : 1;  // 0x174(0x1)
	char pad_373[3];  // 0x175(0x3)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0x178(0xC)
	struct FRotator CallFunc_K2_GetActorRotation_ReturnValue;  // 0x184(0xC)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_2;  // 0x190(0xC)
	struct FRotator CallFunc_FindLookAtRotation_ReturnValue;  // 0x19C(0xC)
	struct FRotator CallFunc_NormalizedDeltaRotator_ReturnValue;  // 0x1A8(0xC)

}; 
// Function Menu_01.Menu_01_C.InpActEvt_Ctrl_D_K2Node_InputKeyEvent_1
// Size: 0x18(Inherited: 0x0) 
struct FInpActEvt_Ctrl_D_K2Node_InputKeyEvent_1
{
	struct FKey Key;  // 0x0(0x18)

}; 
// Function Menu_01.Menu_01_C.UpdateDroneVisual
// Size: 0x70(Inherited: 0x0) 
struct FUpdateDroneVisual
{
	float Temp_float_Variable;  // 0x0(0x4)
	float Temp_float_Variable_2;  // 0x4(0x4)
	int32_t Temp_int_Array_Index_Variable;  // 0x8(0x4)
	int32_t Temp_int_Loop_Counter_Variable;  // 0xC(0x4)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x10(0x4)
	char pad_20_1 : 7;  // 0x14(0x1)
	bool Temp_bool_Variable : 1;  // 0x14(0x1)
	char pad_21[3];  // 0x15(0x3)
	struct UGameInstance* CallFunc_GetGameInstance_ReturnValue;  // 0x18(0x8)
	struct FWeightedBlendable CallFunc_Array_Get_Item;  // 0x20(0x10)
	struct UConZGameInstance* K2Node_DynamicCast_AsCon_ZGame_Instance;  // 0x30(0x8)
	char pad_56_1 : 7;  // 0x38(0x1)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x38(0x1)
	char pad_57_1 : 7;  // 0x39(0x1)
	bool CallFunc_GetPlayAsDrone_ReturnValue : 1;  // 0x39(0x1)
	char pad_58_1 : 7;  // 0x3A(0x1)
	bool CallFunc_EqualEqual_ObjectObject_ReturnValue : 1;  // 0x3A(0x1)
	char pad_59[1];  // 0x3B(0x1)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x3C(0x4)
	char pad_64_1 : 7;  // 0x40(0x1)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x40(0x1)
	char pad_65[7];  // 0x41(0x7)
	struct UGameInstance* CallFunc_GetGameInstance_ReturnValue_2;  // 0x48(0x8)
	struct UConZGameInstance* K2Node_DynamicCast_AsCon_ZGame_Instance_2;  // 0x50(0x8)
	char pad_88_1 : 7;  // 0x58(0x1)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x58(0x1)
	char pad_89_1 : 7;  // 0x59(0x1)
	bool CallFunc_GetPlayAsDrone_ReturnValue_2 : 1;  // 0x59(0x1)
	char pad_90[2];  // 0x5A(0x2)
	float K2Node_Select_Default;  // 0x5C(0x4)
	struct FWeightedBlendable K2Node_MakeStruct_WeightedBlendable;  // 0x60(0x10)

}; 
