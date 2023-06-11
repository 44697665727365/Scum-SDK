#pragma once 
#include <Lock_Security_Lvl2_Structs.h>
 
 
 
class ALock_Security_Lvl2_C
{
public:
	ALock_Security_Lvl2_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


