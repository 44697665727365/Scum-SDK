#pragma once 
#include <ResetEconomy_Structs.h>
 
 
 
class UResetEconomy_C
{
public:
	UResetEconomy_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


