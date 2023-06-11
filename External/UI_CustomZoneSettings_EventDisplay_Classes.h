#pragma once 
#include <UI_CustomZoneSettings_EventDisplay_Structs.h>
 
 
 
class UUI_CustomZoneSettings_EventDisplay_C
{
public:
	UUI_CustomZoneSettings_EventDisplay_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UImage GetImage_60() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UImage(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


