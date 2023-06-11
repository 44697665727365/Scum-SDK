#pragma once 
#include <Weapon_Parts_VSS_VZ_ES_Structs.h>
 
 
 
class UWeapon_Parts_VSS_VZ_ES_C
{
public:
	UWeapon_Parts_VSS_VZ_ES_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


