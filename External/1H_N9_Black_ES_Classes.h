#pragma once 
#include <1H_N9_Black_ES_Structs.h>
 
 
 
class U1H_N9_Black_ES_C
{
public:
	U1H_N9_Black_ES_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


