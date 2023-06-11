#pragma once 
#include <UI_CookingUtilitySlotsPanel_Structs.h>
 
 
 
class UUI_CookingUtilitySlotsPanel_C
{
public:
	UUI_CookingUtilitySlotsPanel_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UUI_CookingUtilityOverview_C GetUI_CookingUtilityOverview() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 656);
		return struct UUI_CookingUtilityOverview_C(ptr_addr);
	}
	struct UUI_CookingUtilityOverview_C GetUI_CookingUtilityOverview_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 664);
		return struct UUI_CookingUtilityOverview_C(ptr_addr);
	}
	struct UUI_CookingUtilityOverview_C GetUI_CookingUtilityOverview_3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 672);
		return struct UUI_CookingUtilityOverview_C(ptr_addr);
	}
	struct UUI_CookingUtilityOverview_C GetUI_CookingUtilityOverview_4() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 680);
		return struct UUI_CookingUtilityOverview_C(ptr_addr);
	}
	struct UUI_CookingUtilityOverview_C GetUI_CookingUtilityOverview_5() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 688);
		return struct UUI_CookingUtilityOverview_C(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


