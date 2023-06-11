#pragma once 
#include <UI_Mission_Structs.h>
 
 
 
class UUI_Mission_C
{
public:
	UUI_Mission_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidgetAnimation GetCompleteObjectiveAnim() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UWidgetAnimation GetStartObjectiveAnim() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 656);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UImage Get_background() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 664);
		return struct UImage(ptr_addr);
	}
	struct UUI_Objective_C GetUI_Objective() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 672);
		return struct UUI_Objective_C(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


