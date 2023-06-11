#pragma once 
#include <Pajama_Pants_ES_Structs.h>
 
 
 
class UPajama_Pants_ES_C
{
public:
	UPajama_Pants_ES_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


