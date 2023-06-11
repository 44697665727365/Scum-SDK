#pragma once 
#include <UI_AdjustableHorizontalSeparator_Structs.h>
 
 
 
class UUI_AdjustableHorizontalSeparator_C
{
public:
	UUI_AdjustableHorizontalSeparator_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNamedSlot GetContent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UNamedSlot(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


