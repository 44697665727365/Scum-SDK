#pragma once 
#include <6_pieces_Ear_Necklace_ES_Structs.h>
 
 
 
class U6_pieces_Ear_Necklace_ES_C
{
public:
	U6_pieces_Ear_Necklace_ES_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


