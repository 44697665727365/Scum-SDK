#pragma once 
#include <Dirtbike_Item_Container_ES_Structs.h>
 
 
 
class UDirtbike_Item_Container_ES_C
{
public:
	UDirtbike_Item_Container_ES_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


