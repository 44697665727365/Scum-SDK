#pragma once 
#include <Party_Glasses_02_ES_Structs.h>
 
 
 
class UParty_Glasses_02_ES_C
{
public:
	UParty_Glasses_02_ES_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


