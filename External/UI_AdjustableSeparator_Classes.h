#pragma once 
#include <UI_AdjustableSeparator_Structs.h>
 
 
 
class UUI_AdjustableSeparator_C
{
public:
	UUI_AdjustableSeparator_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UImage GetImage_1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UImage(ptr_addr);
	}
	struct UNamedSlot GetUnderSlot() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct UNamedSlot(ptr_addr);
	}
	struct UNamedSlot GetUpperSlot() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 656);
		return struct UNamedSlot(ptr_addr);
	}
	bool Get_shouldMove() {
		return memory.read<bool>(m_addr + 664);
	}
	float GetMinHeight() {
		return memory.read<float>(m_addr + 668);
	}

private:
	std::uint64_t m_addr = 0;
};


