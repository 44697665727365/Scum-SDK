#pragma once 
#include <Trucker_Jacket_04_ES_Structs.h>
 
 
 
class UTrucker_Jacket_04_ES_C
{
public:
	UTrucker_Jacket_04_ES_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


