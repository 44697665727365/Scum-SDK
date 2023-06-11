#pragma once 
#include <UI_Metabolism_Digestion_Structs.h>
 
 
 
class UUI_Metabolism_Digestion_C
{
public:
	UUI_Metabolism_Digestion_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


