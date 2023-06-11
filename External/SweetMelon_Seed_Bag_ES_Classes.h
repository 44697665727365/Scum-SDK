#pragma once 
#include <SweetMelon_Seed_Bag_ES_Structs.h>
 
 
 
class USweetMelon_Seed_Bag_ES_C
{
public:
	USweetMelon_Seed_Bag_ES_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


