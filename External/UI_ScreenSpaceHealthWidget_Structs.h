#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FSetHealthPercentage
{
public:
	FSetHealthPercentage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FExecuteUbergraph_UI_ScreenSpaceHealthWidget
{
public:
	FExecuteUbergraph_UI_ScreenSpaceHealthWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetEntryPoint() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct UMaterialInstanceDynamic GetCallFunc_CreateDynamicMaterialInstance_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UMaterialInstanceDynamic(ptr_addr);
	}
	struct UMaterialInstanceDynamic GetCallFunc_CreateDynamicMaterialInstance_ReturnValue_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UMaterialInstanceDynamic(ptr_addr);
	}
	float GetK2Node_Event_value_2() {
		return memory.read<float>(m_addr + 24);
	}
	float GetCallFunc_FClamp_ReturnValue() {
		return memory.read<float>(m_addr + 28);
	}
	float GetK2Node_Event_value() {
		return memory.read<float>(m_addr + 32);
	}
	float GetCallFunc_FClamp_ReturnValue_2() {
		return memory.read<float>(m_addr + 36);
	}
	float GetCallFunc_GetFloatValue_ReturnValue() {
		return memory.read<float>(m_addr + 40);
	}
	struct FLinearColor GetCallFunc_LinearColorLerp_ReturnValue() {
		return memory.read<struct FLinearColor>(m_addr + 44);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetMaxHealthPercentage
{
public:
	FSetMaxHealthPercentage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};