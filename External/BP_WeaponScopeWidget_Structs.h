#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FExecuteUbergraph_BP_WeaponScopeWidget
{
public:
	FExecuteUbergraph_BP_WeaponScopeWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

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
	struct FVector2D GetCallFunc_GetLocalSize_ReturnValue() {
		return memory.read<struct FVector2D>(m_addr + 64);
	}
	struct FLinearColor GetK2Node_MakeStruct_LinearColor() {
		return memory.read<struct FLinearColor>(m_addr + 72);
	}
	float GetCallFunc_BreakVector2D_X() {
		return memory.read<float>(m_addr + 88);
	}
	float GetCallFunc_BreakVector2D_Y() {
		return memory.read<float>(m_addr + 92);
	}
	float GetCallFunc_BreakVector2D_X_2() {
		return memory.read<float>(m_addr + 96);
	}
	float GetCallFunc_BreakVector2D_Y_2() {
		return memory.read<float>(m_addr + 100);
	}
	float GetCallFunc_Divide_FloatFloat_ReturnValue() {
		return memory.read<float>(m_addr + 104);
	}
	float GetCallFunc_Divide_FloatFloat_ReturnValue_2() {
		return memory.read<float>(m_addr + 108);
	}
	struct FVector2D GetCallFunc_MakeVector2D_ReturnValue() {
		return memory.read<struct FVector2D>(m_addr + 112);
	}
	struct UMaterialInstanceDynamic GetCallFunc_GetDynamicMaterial_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 120);
		return struct UMaterialInstanceDynamic(ptr_addr);
	}
	bool GetCallFunc_IsValid_ReturnValue() {
		return memory.read<bool>(m_addr + 128);
	}
	bool GetCallFunc_IsValid_ReturnValue_2() {
		return memory.read<bool>(m_addr + 129);
	}
	int32_t GetCallFunc_Blueprint_GetSizeY_ReturnValue() {
		return memory.read<int32_t>(m_addr + 132);
	}
	int32_t GetCallFunc_Blueprint_GetSizeX_ReturnValue() {
		return memory.read<int32_t>(m_addr + 136);
	}
	float GetCallFunc_Conv_IntToFloat_ReturnValue() {
		return memory.read<float>(m_addr + 140);
	}
	float GetCallFunc_Conv_IntToFloat_ReturnValue_2() {
		return memory.read<float>(m_addr + 144);
	}
	float GetCallFunc_Divide_FloatFloat_ReturnValue_3() {
		return memory.read<float>(m_addr + 148);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue() {
		return memory.read<float>(m_addr + 152);
	}
	struct UUMGSequencePlayer GetCallFunc_PlayAnimation_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 160);
		return struct UUMGSequencePlayer(ptr_addr);
	}
	float GetCallFunc_Subtract_FloatFloat_ReturnValue() {
		return memory.read<float>(m_addr + 168);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_2() {
		return memory.read<float>(m_addr + 172);
	}
	struct FVector2D GetCallFunc_MakeVector2D_ReturnValue_2() {
		return memory.read<struct FVector2D>(m_addr + 176);
	}
	struct UUMGSequencePlayer GetCallFunc_PlayAnimation_ReturnValue_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 184);
		return struct UUMGSequencePlayer(ptr_addr);
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
};