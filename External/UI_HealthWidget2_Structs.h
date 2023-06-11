#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FExecuteUbergraph_UI_HealthWidget2
{
public:
	FExecuteUbergraph_UI_HealthWidget2(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetEntryPoint() {
		return memory.read<int32_t>(m_addr + 0);
	}
	float GetK2Node_Event_value_2() {
		return memory.read<float>(m_addr + 4);
	}
	float GetK2Node_Event_value() {
		return memory.read<float>(m_addr + 8);
	}
	float GetCallFunc_FClamp_ReturnValue() {
		return memory.read<float>(m_addr + 12);
	}
	float GetCallFunc_FClamp_ReturnValue_2() {
		return memory.read<float>(m_addr + 16);
	}
	struct UMaterialInstanceDynamic GetCallFunc_CreateDynamicMaterialInstance_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct UMaterialInstanceDynamic(ptr_addr);
	}
	float GetCallFunc_GetFloatValue_ReturnValue() {
		return memory.read<float>(m_addr + 32);
	}
	struct FLinearColor GetCallFunc_LinearColorLerp_ReturnValue() {
		return memory.read<struct FLinearColor>(m_addr + 36);
	}
	struct UMaterialInstanceDynamic GetCallFunc_CreateDynamicMaterialInstance_ReturnValue_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct UMaterialInstanceDynamic(ptr_addr);
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
};class FSetHealthPercentage
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
};