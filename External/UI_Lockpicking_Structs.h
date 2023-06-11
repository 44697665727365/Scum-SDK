#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FExecuteUbergraph_UI_Lockpicking
{
public:
	FExecuteUbergraph_UI_Lockpicking(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetEntryPoint() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetCallFunc_GetTensionToolCount_ReturnValue() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetCallFunc_Subtract_IntInt_ReturnValue() {
		return memory.read<int32_t>(m_addr + 8);
	}
	struct FGeometry GetK2Node_Event_MyGeometry() {
		return memory.read<struct FGeometry>(m_addr + 12);
	}
	float GetK2Node_Event_InDeltaTime() {
		return memory.read<float>(m_addr + 68);
	}
	struct FText GetCallFunc_Conv_IntToText_ReturnValue() {
		return memory.read<struct FText>(m_addr + 72);
	}
	float GetCallFunc_GetRemainingTime_ReturnValue() {
		return memory.read<float>(m_addr + 96);
	}
	float GetCallFunc_GetDuration_ReturnValue() {
		return memory.read<float>(m_addr + 100);
	}
	int32_t GetCallFunc_Round_ReturnValue() {
		return memory.read<int32_t>(m_addr + 104);
	}
	float GetCallFunc_Divide_FloatFloat_ReturnValue() {
		return memory.read<float>(m_addr + 108);
	}
	struct FText GetCallFunc_Conv_IntToText_ReturnValue_2() {
		return memory.read<struct FText>(m_addr + 112);
	}
	struct UMaterialInstanceDynamic GetCallFunc_GetDynamicMaterial_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 136);
		return struct UMaterialInstanceDynamic(ptr_addr);
	}
	int32_t GetCallFunc_GetLockpicksCount_ReturnValue() {
		return memory.read<int32_t>(m_addr + 144);
	}
	int32_t GetCallFunc_Subtract_IntInt_ReturnValue_2() {
		return memory.read<int32_t>(m_addr + 148);
	}
	struct FText GetCallFunc_Conv_IntToText_ReturnValue_3() {
		return memory.read<struct FText>(m_addr + 152);
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