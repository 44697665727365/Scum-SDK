#pragma once 
#include <UI_CollapsableContainer_Structs.h>
 
 
 
class UUI_CollapsableContainer_C
{
public:
	UUI_CollapsableContainer_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNamedSlot Get_contentSlot() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1968);
		return struct UNamedSlot(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


