#pragma once 
#include <ServerInfoWidget_Structs.h>
 
 
 
class UServerInfoWidget_C
{
public:
	UServerInfoWidget_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


