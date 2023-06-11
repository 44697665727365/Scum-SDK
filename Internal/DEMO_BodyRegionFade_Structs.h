#pragma once 
#include "SDK.h" 
 
 
// Function DEMO_BodyRegionFade.DEMO_BodyRegionFade_C.ExecuteUbergraph_DEMO_BodyRegionFade
// Size: 0xEC(Inherited: 0x0) 
struct FExecuteUbergraph_DEMO_BodyRegionFade
{
	int32_t EntryPoint;  // 0x0(0x4)
	struct FGeometry K2Node_Event_MyGeometry;  // 0x4(0x38)
	float K2Node_Event_InDeltaTime;  // 0x3C(0x4)
	int32_t Temp_int_Array_Index_Variable;  // 0x40(0x4)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x44(0x4)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x48(0x4)
	char pad_76[4];  // 0x4C(0x4)
	struct TArray<struct UImage*> K2Node_MakeArray_Array;  // 0x50(0x10)
	struct UImage* CallFunc_Array_Get_Item;  // 0x60(0x8)
	struct UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue;  // 0x68(0x8)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x70(0x4)
	float CallFunc_K2_GetScalarParameterValue_ReturnValue;  // 0x74(0x4)
	char pad_120_1 : 7;  // 0x78(0x1)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x78(0x1)
	char pad_121[3];  // 0x79(0x3)
	float CallFunc_FInterpTo_Constant_ReturnValue;  // 0x7C(0x4)
	float CallFunc_K2_GetScalarParameterValue_ReturnValue_2;  // 0x80(0x4)
	float CallFunc_K2_GetScalarParameterValue_ReturnValue_3;  // 0x84(0x4)
	float CallFunc_FInterpTo_Constant_ReturnValue_2;  // 0x88(0x4)
	float CallFunc_FInterpTo_Constant_ReturnValue_3;  // 0x8C(0x4)
	float CallFunc_K2_GetScalarParameterValue_ReturnValue_4;  // 0x90(0x4)
	float CallFunc_K2_GetScalarParameterValue_ReturnValue_5;  // 0x94(0x4)
	float CallFunc_FInterpTo_Constant_ReturnValue_4;  // 0x98(0x4)
	float CallFunc_FInterpTo_Constant_ReturnValue_5;  // 0x9C(0x4)
	float CallFunc_K2_GetScalarParameterValue_ReturnValue_6;  // 0xA0(0x4)
	char pad_164[4];  // 0xA4(0x4)
	struct UCanvasPanel* CallFunc_GetCanvas_Canvas;  // 0xA8(0x8)
	float CallFunc_FInterpTo_Constant_ReturnValue_6;  // 0xB0(0x4)
	char pad_180[4];  // 0xB4(0x4)
	struct UCanvasPanel* CallFunc_GetCanvas_Canvas_2;  // 0xB8(0x8)
	struct FVector2D CallFunc_Vector2DInterpTo_Constant_ReturnValue;  // 0xC0(0x8)
	struct UCanvasPanel* CallFunc_GetCanvas_Canvas_3;  // 0xC8(0x8)
	struct UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue;  // 0xD0(0x8)
	struct FVector2D CallFunc_GetPosition_ReturnValue;  // 0xD8(0x8)
	char pad_224_1 : 7;  // 0xE0(0x1)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0xE0(0x1)
	char pad_225[3];  // 0xE1(0x3)
	struct FVector2D CallFunc_Vector2DInterpTo_Constant_ReturnValue_2;  // 0xE4(0x8)

}; 
// Function DEMO_BodyRegionFade.DEMO_BodyRegionFade_C.Tick
// Size: 0x3C(Inherited: 0x3C) 
struct FTick : public FTick
{
	struct FGeometry MyGeometry;  // 0x0(0x38)
	float InDeltaTime;  // 0x38(0x4)

}; 
// Function DEMO_BodyRegionFade.DEMO_BodyRegionFade_C.GetCanvas
// Size: 0x8(Inherited: 0x0) 
struct FGetCanvas
{
	struct UCanvasPanel* Canvas;  // 0x0(0x8)

}; 
