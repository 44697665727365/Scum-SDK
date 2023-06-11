#pragma once 
#include <UI_CustomZoneSettings_ToolTip_Structs.h>
 
 
 
class UUI_CustomZoneSettings_ToolTip_C
{
public:
	UUI_CustomZoneSettings_ToolTip_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTextBlock GetToolTip() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 608);
		return struct UTextBlock(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


