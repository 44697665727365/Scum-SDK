#pragma once 
#include <Christmas_Present_M16A4_02_ES_Structs.h>
 
 
 
class UChristmas_Present_M16A4_02_ES_C
{
public:
	UChristmas_Present_M16A4_02_ES_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


