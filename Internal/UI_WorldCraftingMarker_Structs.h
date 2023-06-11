#pragma once 
#include "SDK.h" 
 
 
// Function UI_WorldCraftingMarker.UI_WorldCraftingMarker_C.Get_BigPointer_Visibility
// Size: 0x4(Inherited: 0x0) 
struct FGet_BigPointer_Visibility
{
	uint8_t  ReturnValue;  // 0x0(0x1)
	char pad_1_1 : 7;  // 0x1(0x1)
	bool CallFunc_IsOnScreen_ReturnValue : 1;  // 0x1(0x1)
	char pad_2_1 : 7;  // 0x2(0x1)
	bool CallFunc_Less_FloatFloat_ReturnValue : 1;  // 0x2(0x1)
	char pad_3_1 : 7;  // 0x3(0x1)
	bool CallFunc_BooleanOR_ReturnValue : 1;  // 0x3(0x1)

}; 
// Function UI_WorldCraftingMarker.UI_WorldCraftingMarker_C.ExecuteUbergraph_UI_WorldCraftingMarker
// Size: 0x75(Inherited: 0x0) 
struct FExecuteUbergraph_UI_WorldCraftingMarker
{
	int32_t EntryPoint;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool Temp_bool_Variable : 1;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)
	struct FVector2D Temp_struct_Variable;  // 0x8(0x8)
	struct FVector2D Temp_struct_Variable_2;  // 0x10(0x8)
	uint8_t  Temp_byte_Variable;  // 0x18(0x1)
	char pad_25[3];  // 0x19(0x3)
	int32_t Temp_int_Variable;  // 0x1C(0x4)
	int32_t Temp_int_Variable_2;  // 0x20(0x4)
	struct FGeometry K2Node_Event_MyGeometry;  // 0x24(0x38)
	float K2Node_Event_InDeltaTime;  // 0x5C(0x4)
	float CallFunc_GetAngle_ReturnValue;  // 0x60(0x4)
	int32_t K2Node_Select_Default;  // 0x64(0x4)
	char pad_104_1 : 7;  // 0x68(0x1)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x68(0x1)
	char pad_105_1 : 7;  // 0x69(0x1)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x69(0x1)
	char pad_106_1 : 7;  // 0x6A(0x1)
	bool CallFunc_BooleanOR_ReturnValue : 1;  // 0x6A(0x1)
	uint8_t  K2Node_Event_mode;  // 0x6B(0x1)
	struct FVector2D K2Node_Select_Default_2;  // 0x6C(0x8)
	char pad_116_1 : 7;  // 0x74(0x1)
	bool CallFunc_NotEqual_ByteByte_ReturnValue : 1;  // 0x74(0x1)

}; 
// Function UI_WorldCraftingMarker.UI_WorldCraftingMarker_C.Tick
// Size: 0x3C(Inherited: 0x3C) 
struct FTick : public FTick
{
	struct FGeometry MyGeometry;  // 0x0(0x38)
	float InDeltaTime;  // 0x38(0x4)

}; 
// Function UI_WorldCraftingMarker.UI_WorldCraftingMarker_C.ChangeMode
// Size: 0x1(Inherited: 0x1) 
struct FChangeMode : public FChangeMode
{
	uint8_t  mode;  // 0x0(0x1)

}; 
// Function UI_WorldCraftingMarker.UI_WorldCraftingMarker_C.Get_Icon_Brush
// Size: 0x1E0(Inherited: 0x0) 
struct FGet_Icon_Brush
{
	struct FSlateBrush ReturnValue;  // 0x0(0x88)
	struct FSlateColor K2Node_MakeStruct_SlateColor;  // 0x88(0x28)
	struct FSlateBrush K2Node_MakeStruct_SlateBrush;  // 0xB0(0x88)
	char pad_312_1 : 7;  // 0x138(0x1)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x138(0x1)
	char pad_313[3];  // 0x139(0x3)
	int32_t CallFunc_Blueprint_GetSizeY_ReturnValue;  // 0x13C(0x4)
	int32_t CallFunc_Blueprint_GetSizeX_ReturnValue;  // 0x140(0x4)
	float CallFunc_Conv_IntToFloat_ReturnValue;  // 0x144(0x4)
	float CallFunc_Conv_IntToFloat_ReturnValue_2;  // 0x148(0x4)
	struct FVector2D CallFunc_MakeVector2D_ReturnValue;  // 0x14C(0x8)
	char pad_340[4];  // 0x154(0x4)
	struct FSlateBrush K2Node_MakeStruct_SlateBrush_2;  // 0x158(0x88)

}; 
// Function UI_WorldCraftingMarker.UI_WorldCraftingMarker_C.Get_Accent_Brush
// Size: 0x208(Inherited: 0x0) 
struct FGet_Accent_Brush
{
	struct FSlateBrush ReturnValue;  // 0x0(0x88)
	struct FSlateColor K2Node_MakeStruct_SlateColor;  // 0x88(0x28)
	struct FSlateBrush K2Node_MakeStruct_SlateBrush;  // 0xB0(0x88)
	char pad_312_1 : 7;  // 0x138(0x1)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x138(0x1)
	char pad_313[3];  // 0x139(0x3)
	int32_t CallFunc_Blueprint_GetSizeX_ReturnValue;  // 0x13C(0x4)
	int32_t CallFunc_Blueprint_GetSizeY_ReturnValue;  // 0x140(0x4)
	float CallFunc_Conv_IntToFloat_ReturnValue;  // 0x144(0x4)
	float CallFunc_Conv_IntToFloat_ReturnValue_2;  // 0x148(0x4)
	struct FVector2D CallFunc_MakeVector2D_ReturnValue;  // 0x14C(0x8)
	char pad_340[4];  // 0x154(0x4)
	struct FSlateColor K2Node_MakeStruct_SlateColor_2;  // 0x158(0x28)
	struct FSlateBrush K2Node_MakeStruct_SlateBrush_2;  // 0x180(0x88)

}; 
// Function UI_WorldCraftingMarker.UI_WorldCraftingMarker_C.Get_SmallPointer_Visibility
// Size: 0x5(Inherited: 0x0) 
struct FGet_SmallPointer_Visibility
{
	uint8_t  ReturnValue;  // 0x0(0x1)
	char pad_1_1 : 7;  // 0x1(0x1)
	bool CallFunc_IsOnScreen_ReturnValue : 1;  // 0x1(0x1)
	char pad_2_1 : 7;  // 0x2(0x1)
	bool CallFunc_Not_PreBool_ReturnValue : 1;  // 0x2(0x1)
	char pad_3_1 : 7;  // 0x3(0x1)
	bool CallFunc_Less_FloatFloat_ReturnValue : 1;  // 0x3(0x1)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool CallFunc_BooleanAND_ReturnValue : 1;  // 0x4(0x1)

}; 
// Function UI_WorldCraftingMarker.UI_WorldCraftingMarker_C.Get_Bar_Brush
// Size: 0x118(Inherited: 0x0) 
struct FGet_Bar_Brush
{
	struct FSlateBrush ReturnValue;  // 0x0(0x88)
	struct UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue;  // 0x88(0x8)
	struct FSlateBrush CallFunc_MakeBrushFromMaterial_ReturnValue;  // 0x90(0x88)

}; 
// Function UI_WorldCraftingMarker.UI_WorldCraftingMarker_C.Get_Distance_Text
// Size: 0x70(Inherited: 0x0) 
struct FGet_Distance_Text
{
	struct FText ReturnValue;  // 0x0(0x18)
	float CallFunc_GetDistance_ReturnValue;  // 0x18(0x4)
	char pad_28_1 : 7;  // 0x1C(0x1)
	bool CallFunc_Greater_FloatFloat_ReturnValue : 1;  // 0x1C(0x1)
	char pad_29[3];  // 0x1D(0x3)
	int32_t CallFunc_Round_ReturnValue;  // 0x20(0x4)
	char pad_36[4];  // 0x24(0x4)
	struct FString CallFunc_Conv_IntToString_ReturnValue;  // 0x28(0x10)
	struct FString CallFunc_Concat_StrStr_ReturnValue;  // 0x38(0x10)
	struct FString CallFunc_SelectString_ReturnValue;  // 0x48(0x10)
	struct FText CallFunc_Conv_StringToText_ReturnValue;  // 0x58(0x18)

}; 
// Function UI_WorldCraftingMarker.UI_WorldCraftingMarker_C.Get_Bar_Visibility
// Size: 0x2(Inherited: 0x0) 
struct FGet_Bar_Visibility
{
	uint8_t  ReturnValue;  // 0x0(0x1)
	char pad_1_1 : 7;  // 0x1(0x1)
	bool CallFunc_Less_FloatFloat_ReturnValue : 1;  // 0x1(0x1)

}; 
// Function UI_WorldCraftingMarker.UI_WorldCraftingMarker_C.Get_Emphasis_Visibility
// Size: 0x5(Inherited: 0x0) 
struct FGet_Emphasis_Visibility
{
	uint8_t  ReturnValue;  // 0x0(0x1)
	char pad_1_1 : 7;  // 0x1(0x1)
	bool Temp_bool_Variable : 1;  // 0x1(0x1)
	uint8_t  Temp_byte_Variable;  // 0x2(0x1)
	uint8_t  Temp_byte_Variable_2;  // 0x3(0x1)
	uint8_t  K2Node_Select_Default;  // 0x4(0x1)

}; 
// Function UI_WorldCraftingMarker.UI_WorldCraftingMarker_C.Get_Emphasis_Color
// Size: 0x10(Inherited: 0x0) 
struct FGet_Emphasis_Color
{
	struct FLinearColor ReturnValue;  // 0x0(0x10)

}; 
// Function UI_WorldCraftingMarker.UI_WorldCraftingMarker_C.Get_Label_Text
// Size: 0x30(Inherited: 0x0) 
struct FGet_Label_Text
{
	struct FText ReturnValue;  // 0x0(0x18)
	struct FText CallFunc_Conv_StringToText_ReturnValue;  // 0x18(0x18)

}; 
