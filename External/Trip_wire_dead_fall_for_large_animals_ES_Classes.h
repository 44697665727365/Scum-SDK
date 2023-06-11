#pragma once 
#include <Trip_wire_dead_fall_for_large_animals_ES_Structs.h>
 
 
 
class UTrip_wire_dead_fall_for_large_animals_ES_C
{
public:
	UTrip_wire_dead_fall_for_large_animals_ES_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


