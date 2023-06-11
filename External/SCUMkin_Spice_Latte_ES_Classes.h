#pragma once 
#include <SCUMkin_Spice_Latte_ES_Structs.h>
 
 
 
class USCUMkin_Spice_Latte_ES_C
{
public:
	USCUMkin_Spice_Latte_ES_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


