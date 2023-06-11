#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FExecuteUbergraph_DEMO_BodyRegionFade
{
public:
	FExecuteUbergraph_DEMO_BodyRegionFade(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetEntryPoint() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FGeometry GetK2Node_Event_MyGeometry() {
		return memory.read<struct FGeometry>(m_addr + 4);
	}
	float GetK2Node_Event_InDeltaTime() {
		return memory.read<float>(m_addr + 60);
	}
	int32_t GetTemp_int_Array_Index_Variable() {
		return memory.read<int32_t>(m_addr + 64);
	}
	int32_t GetTemp_int_Loop_Counter_Variable() {
		return memory.read<int32_t>(m_addr + 68);
	}
	int32_t GetCallFunc_Add_IntInt_ReturnValue() {
		return memory.read<int32_t>(m_addr + 72);
	}
	struct TArray<struct UImage> GetK2Node_MakeArray_Array() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 80);
		return struct TArray<struct UImage>(ptr_addr);
	}
	struct UImage GetCallFunc_Array_Get_Item() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 96);
		return struct UImage(ptr_addr);
	}
	struct UMaterialInstanceDynamic GetCallFunc_GetDynamicMaterial_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 104);
		return struct UMaterialInstanceDynamic(ptr_addr);
	}
	int32_t GetCallFunc_Array_Length_ReturnValue() {
		return memory.read<int32_t>(m_addr + 112);
	}
	float GetCallFunc_K2_GetScalarParameterValue_ReturnValue() {
		return memory.read<float>(m_addr + 116);
	}
	bool GetCallFunc_Less_IntInt_ReturnValue() {
		return memory.read<bool>(m_addr + 120);
	}
	float GetCallFunc_FInterpTo_Constant_ReturnValue() {
		return memory.read<float>(m_addr + 124);
	}
	float GetCallFunc_K2_GetScalarParameterValue_ReturnValue_2() {
		return memory.read<float>(m_addr + 128);
	}
	float GetCallFunc_K2_GetScalarParameterValue_ReturnValue_3() {
		return memory.read<float>(m_addr + 132);
	}
	float GetCallFunc_FInterpTo_Constant_ReturnValue_2() {
		return memory.read<float>(m_addr + 136);
	}
	float GetCallFunc_FInterpTo_Constant_ReturnValue_3() {
		return memory.read<float>(m_addr + 140);
	}
	float GetCallFunc_K2_GetScalarParameterValue_ReturnValue_4() {
		return memory.read<float>(m_addr + 144);
	}
	float GetCallFunc_K2_GetScalarParameterValue_ReturnValue_5() {
		return memory.read<float>(m_addr + 148);
	}
	float GetCallFunc_FInterpTo_Constant_ReturnValue_4() {
		return memory.read<float>(m_addr + 152);
	}
	float GetCallFunc_FInterpTo_Constant_ReturnValue_5() {
		return memory.read<float>(m_addr + 156);
	}
	float GetCallFunc_K2_GetScalarParameterValue_ReturnValue_6() {
		return memory.read<float>(m_addr + 160);
	}
	struct UCanvasPanel GetCallFunc_GetCanvas_Canvas() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 168);
		return struct UCanvasPanel(ptr_addr);
	}
	float GetCallFunc_FInterpTo_Constant_ReturnValue_6() {
		return memory.read<float>(m_addr + 176);
	}
	struct UCanvasPanel GetCallFunc_GetCanvas_Canvas_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 184);
		return struct UCanvasPanel(ptr_addr);
	}
	struct FVector2D GetCallFunc_Vector2DInterpTo_Constant_ReturnValue() {
		return memory.read<struct FVector2D>(m_addr + 192);
	}
	struct UCanvasPanel GetCallFunc_GetCanvas_Canvas_3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 200);
		return struct UCanvasPanel(ptr_addr);
	}
	struct UCanvasPanelSlot GetCallFunc_SlotAsCanvasSlot_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 208);
		return struct UCanvasPanelSlot(ptr_addr);
	}
	struct FVector2D GetCallFunc_GetPosition_ReturnValue() {
		return memory.read<struct FVector2D>(m_addr + 216);
	}
	bool GetCallFunc_IsValid_ReturnValue() {
		return memory.read<bool>(m_addr + 224);
	}
	struct FVector2D GetCallFunc_Vector2DInterpTo_Constant_ReturnValue_2() {
		return memory.read<struct FVector2D>(m_addr + 228);
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
};class FGetCanvas
{
public:
	FGetCanvas(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UCanvasPanel GetCanvas() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UCanvasPanel(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};