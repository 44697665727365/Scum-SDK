#pragma once 
#include <BP_ConZAssetManager_Structs.h>
 
 
 
class UBP_ConZAssetManager_C
{
public:
	UBP_ConZAssetManager_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


