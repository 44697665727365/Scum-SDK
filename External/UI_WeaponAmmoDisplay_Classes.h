#pragma once 
#include <UI_WeaponAmmoDisplay_Structs.h>
 
 
 
class UUI_WeaponAmmoDisplay_C
{
public:
	UUI_WeaponAmmoDisplay_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UImage GetImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_641() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UImage(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


