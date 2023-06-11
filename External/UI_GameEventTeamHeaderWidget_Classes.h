#pragma once 
#include <UI_GameEventTeamHeaderWidget_Structs.h>
 
 
 
class UUI_GameEventTeamHeaderWidget_C
{
public:
	UUI_GameEventTeamHeaderWidget_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetTeamIndex() {
		return memory.read<int32_t>(m_addr + 608);
	}

private:
	std::uint64_t m_addr = 0;
};


