#pragma once 
#include <MilitaryBoots_Peace_ES_Structs.h>
 
 
 
class UMilitaryBoots_Peace_ES_C
{
public:
	UMilitaryBoots_Peace_ES_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


