#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FExecuteUbergraph_MenuPlayAsDroneOverlayWidget
{
public:
	FExecuteUbergraph_MenuPlayAsDroneOverlayWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetEntryPoint() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FTimerHandle GetCallFunc_K2_SetTimer_ReturnValue() {
		return memory.read<struct FTimerHandle>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FToggleVisibility
{
public:
	FToggleVisibility(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetCallFunc_Not_PreBool_ReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};