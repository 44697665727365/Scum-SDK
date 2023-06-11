#pragma once 
#include <Shimoro_Vest_ES_Structs.h>
 
 
 
class UShimoro_Vest_ES_C
{
public:
	UShimoro_Vest_ES_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


