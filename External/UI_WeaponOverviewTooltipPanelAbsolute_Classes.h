#pragma once 
#include <UI_WeaponOverviewTooltipPanelAbsolute_Structs.h>
 
 
 
class UUI_WeaponOverviewTooltipPanelAbsolute_C
{
public:
	UUI_WeaponOverviewTooltipPanelAbsolute_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UImage GetImage_9() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 688);
		return struct UImage(ptr_addr);
	}
	struct UUI_TooltipOverviewElement_C GetUI_TooltipOverviewElement_C_1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 696);
		return struct UUI_TooltipOverviewElement_C(ptr_addr);
	}
	struct UUI_TooltipOverviewElement_C GetUI_TooltipOverviewElement_C_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 704);
		return struct UUI_TooltipOverviewElement_C(ptr_addr);
	}
	struct UUI_TooltipOverviewElement_C GetUI_TooltipOverviewElement_C_3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 712);
		return struct UUI_TooltipOverviewElement_C(ptr_addr);
	}
	struct UUI_TooltipOverviewElement_C GetUI_TooltipOverviewElement_C_4() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 720);
		return struct UUI_TooltipOverviewElement_C(ptr_addr);
	}
	struct UUI_TooltipOverviewElement_C GetUI_TooltipOverviewElement_C_5() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 728);
		return struct UUI_TooltipOverviewElement_C(ptr_addr);
	}
	struct UUI_TooltipOverviewElement_C GetUI_TooltipOverviewElement_C_6() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 736);
		return struct UUI_TooltipOverviewElement_C(ptr_addr);
	}
	struct UUI_TooltipOverviewElement_C GetUI_TooltipOverviewElement_C_7() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 744);
		return struct UUI_TooltipOverviewElement_C(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


