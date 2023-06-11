#pragma once 
#include <InteractionGroupWidget_Structs.h>
 
 
 
class UInteractionGroupWidget_C
{
public:
	UInteractionGroupWidget_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UUI_Border_C GetUI_Border() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UUI_Border_C(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


