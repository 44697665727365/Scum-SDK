#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FGet_BigPointer_Visibility
{
public:
	FGet_BigPointer_Visibility(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint8_t  GetReturnValue() {
		return memory.read<uint8_t >(m_addr + 0);
	}
	bool GetCallFunc_IsOnScreen_ReturnValue() {
		return memory.read<bool>(m_addr + 1);
	}
	bool GetCallFunc_Less_FloatFloat_ReturnValue() {
		return memory.read<bool>(m_addr + 2);
	}
	bool GetCallFunc_BooleanOR_ReturnValue() {
		return memory.read<bool>(m_addr + 3);
	}

private:
	std::uint64_t m_addr = 0;
};class FExecuteUbergraph_UI_WorldCraftingMarker
{
public:
	FExecuteUbergraph_UI_WorldCraftingMarker(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetEntryPoint() {
		return memory.read<int32_t>(m_addr + 0);
	}
	bool GetTemp_bool_Variable() {
		return memory.read<bool>(m_addr + 4);
	}
	struct FVector2D GetTemp_struct_Variable() {
		return memory.read<struct FVector2D>(m_addr + 8);
	}
	struct FVector2D GetTemp_struct_Variable_2() {
		return memory.read<struct FVector2D>(m_addr + 16);
	}
	uint8_t  GetTemp_byte_Variable() {
		return memory.read<uint8_t >(m_addr + 24);
	}
	int32_t GetTemp_int_Variable() {
		return memory.read<int32_t>(m_addr + 28);
	}
	int32_t GetTemp_int_Variable_2() {
		return memory.read<int32_t>(m_addr + 32);
	}
	struct FGeometry GetK2Node_Event_MyGeometry() {
		return memory.read<struct FGeometry>(m_addr + 36);
	}
	float GetK2Node_Event_InDeltaTime() {
		return memory.read<float>(m_addr + 92);
	}
	float GetCallFunc_GetAngle_ReturnValue() {
		return memory.read<float>(m_addr + 96);
	}
	int32_t GetK2Node_Select_Default() {
		return memory.read<int32_t>(m_addr + 100);
	}
	bool GetCallFunc_IsValid_ReturnValue() {
		return memory.read<bool>(m_addr + 104);
	}
	bool GetCallFunc_IsValid_ReturnValue_2() {
		return memory.read<bool>(m_addr + 105);
	}
	bool GetCallFunc_BooleanOR_ReturnValue() {
		return memory.read<bool>(m_addr + 106);
	}
	uint8_t  GetK2Node_Event_mode() {
		return memory.read<uint8_t >(m_addr + 107);
	}
	struct FVector2D GetK2Node_Select_Default_2() {
		return memory.read<struct FVector2D>(m_addr + 108);
	}
	bool GetCallFunc_NotEqual_ByteByte_ReturnValue() {
		return memory.read<bool>(m_addr + 116);
	}

private:
	std::uint64_t m_addr = 0;
};class FTick
{
public:
	FTick(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGeometry GetMyGeometry() {
		return memory.read<struct FGeometry>(m_addr + 0);
	}
	float GetInDeltaTime() {
		return memory.read<float>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FChangeMode
{
public:
	FChangeMode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint8_t  Getmode() {
		return memory.read<uint8_t >(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGet_Icon_Brush
{
public:
	FGet_Icon_Brush(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSlateBrush GetReturnValue() {
		return memory.read<struct FSlateBrush>(m_addr + 0);
	}
	struct FSlateColor GetK2Node_MakeStruct_SlateColor() {
		return memory.read<struct FSlateColor>(m_addr + 136);
	}
	struct FSlateBrush GetK2Node_MakeStruct_SlateBrush() {
		return memory.read<struct FSlateBrush>(m_addr + 176);
	}
	bool GetCallFunc_IsValid_ReturnValue() {
		return memory.read<bool>(m_addr + 312);
	}
	int32_t GetCallFunc_Blueprint_GetSizeY_ReturnValue() {
		return memory.read<int32_t>(m_addr + 316);
	}
	int32_t GetCallFunc_Blueprint_GetSizeX_ReturnValue() {
		return memory.read<int32_t>(m_addr + 320);
	}
	float GetCallFunc_Conv_IntToFloat_ReturnValue() {
		return memory.read<float>(m_addr + 324);
	}
	float GetCallFunc_Conv_IntToFloat_ReturnValue_2() {
		return memory.read<float>(m_addr + 328);
	}
	struct FVector2D GetCallFunc_MakeVector2D_ReturnValue() {
		return memory.read<struct FVector2D>(m_addr + 332);
	}
	struct FSlateBrush GetK2Node_MakeStruct_SlateBrush_2() {
		return memory.read<struct FSlateBrush>(m_addr + 344);
	}

private:
	std::uint64_t m_addr = 0;
};class FGet_Accent_Brush
{
public:
	FGet_Accent_Brush(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSlateBrush GetReturnValue() {
		return memory.read<struct FSlateBrush>(m_addr + 0);
	}
	struct FSlateColor GetK2Node_MakeStruct_SlateColor() {
		return memory.read<struct FSlateColor>(m_addr + 136);
	}
	struct FSlateBrush GetK2Node_MakeStruct_SlateBrush() {
		return memory.read<struct FSlateBrush>(m_addr + 176);
	}
	bool GetCallFunc_IsValid_ReturnValue() {
		return memory.read<bool>(m_addr + 312);
	}
	int32_t GetCallFunc_Blueprint_GetSizeX_ReturnValue() {
		return memory.read<int32_t>(m_addr + 316);
	}
	int32_t GetCallFunc_Blueprint_GetSizeY_ReturnValue() {
		return memory.read<int32_t>(m_addr + 320);
	}
	float GetCallFunc_Conv_IntToFloat_ReturnValue() {
		return memory.read<float>(m_addr + 324);
	}
	float GetCallFunc_Conv_IntToFloat_ReturnValue_2() {
		return memory.read<float>(m_addr + 328);
	}
	struct FVector2D GetCallFunc_MakeVector2D_ReturnValue() {
		return memory.read<struct FVector2D>(m_addr + 332);
	}
	struct FSlateColor GetK2Node_MakeStruct_SlateColor_2() {
		return memory.read<struct FSlateColor>(m_addr + 344);
	}
	struct FSlateBrush GetK2Node_MakeStruct_SlateBrush_2() {
		return memory.read<struct FSlateBrush>(m_addr + 384);
	}

private:
	std::uint64_t m_addr = 0;
};class FGet_SmallPointer_Visibility
{
public:
	FGet_SmallPointer_Visibility(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint8_t  GetReturnValue() {
		return memory.read<uint8_t >(m_addr + 0);
	}
	bool GetCallFunc_IsOnScreen_ReturnValue() {
		return memory.read<bool>(m_addr + 1);
	}
	bool GetCallFunc_Not_PreBool_ReturnValue() {
		return memory.read<bool>(m_addr + 2);
	}
	bool GetCallFunc_Less_FloatFloat_ReturnValue() {
		return memory.read<bool>(m_addr + 3);
	}
	bool GetCallFunc_BooleanAND_ReturnValue() {
		return memory.read<bool>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FGet_Bar_Brush
{
public:
	FGet_Bar_Brush(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSlateBrush GetReturnValue() {
		return memory.read<struct FSlateBrush>(m_addr + 0);
	}
	struct UMaterialInstanceDynamic GetCallFunc_CreateDynamicMaterialInstance_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 136);
		return struct UMaterialInstanceDynamic(ptr_addr);
	}
	struct FSlateBrush GetCallFunc_MakeBrushFromMaterial_ReturnValue() {
		return memory.read<struct FSlateBrush>(m_addr + 144);
	}

private:
	std::uint64_t m_addr = 0;
};class FGet_Distance_Text
{
public:
	FGet_Distance_Text(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetReturnValue() {
		return memory.read<struct FText>(m_addr + 0);
	}
	float GetCallFunc_GetDistance_ReturnValue() {
		return memory.read<float>(m_addr + 24);
	}
	bool GetCallFunc_Greater_FloatFloat_ReturnValue() {
		return memory.read<bool>(m_addr + 28);
	}
	int32_t GetCallFunc_Round_ReturnValue() {
		return memory.read<int32_t>(m_addr + 32);
	}
	struct FString GetCallFunc_Conv_IntToString_ReturnValue() {
		return memory.read<struct FString>(m_addr + 40);
	}
	struct FString GetCallFunc_Concat_StrStr_ReturnValue() {
		return memory.read<struct FString>(m_addr + 56);
	}
	struct FString GetCallFunc_SelectString_ReturnValue() {
		return memory.read<struct FString>(m_addr + 72);
	}
	struct FText GetCallFunc_Conv_StringToText_ReturnValue() {
		return memory.read<struct FText>(m_addr + 88);
	}

private:
	std::uint64_t m_addr = 0;
};class FGet_Bar_Visibility
{
public:
	FGet_Bar_Visibility(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint8_t  GetReturnValue() {
		return memory.read<uint8_t >(m_addr + 0);
	}
	bool GetCallFunc_Less_FloatFloat_ReturnValue() {
		return memory.read<bool>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FGet_Emphasis_Visibility
{
public:
	FGet_Emphasis_Visibility(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint8_t  GetReturnValue() {
		return memory.read<uint8_t >(m_addr + 0);
	}
	bool GetTemp_bool_Variable() {
		return memory.read<bool>(m_addr + 1);
	}
	uint8_t  GetTemp_byte_Variable() {
		return memory.read<uint8_t >(m_addr + 2);
	}
	uint8_t  GetTemp_byte_Variable_2() {
		return memory.read<uint8_t >(m_addr + 3);
	}
	uint8_t  GetK2Node_Select_Default() {
		return memory.read<uint8_t >(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FGet_Emphasis_Color
{
public:
	FGet_Emphasis_Color(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLinearColor GetReturnValue() {
		return memory.read<struct FLinearColor>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGet_Label_Text
{
public:
	FGet_Label_Text(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetReturnValue() {
		return memory.read<struct FText>(m_addr + 0);
	}
	struct FText GetCallFunc_Conv_StringToText_ReturnValue() {
		return memory.read<struct FText>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};