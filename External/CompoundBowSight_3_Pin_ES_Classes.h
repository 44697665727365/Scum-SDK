#pragma once 
#include <CompoundBowSight_3_Pin_ES_Structs.h>
 
 
 
class UCompoundBowSight_3_Pin_ES_C
{
public:
	UCompoundBowSight_3_Pin_ES_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


