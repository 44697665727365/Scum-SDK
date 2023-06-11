#pragma once 
#include <UI_Trader_MainPanel_Structs.h>
 
 
 
class UUI_Trader_MainPanel_C
{
public:
	UUI_Trader_MainPanel_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};

