#pragma once 
#include <UI_CookingCategoryDropdown_Content_Structs.h>
 
 
 
class UUI_CookingCategoryDropdown_Content_C
{
public:
	UUI_CookingCategoryDropdown_Content_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UUI_SimpleTextDropdownEntry_C GetUI_SimpleTextDropdownEntry() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UUI_SimpleTextDropdownEntry_C(ptr_addr);
	}
	struct UUI_SimpleTextDropdownEntry_C GetUI_SimpleTextDropdownEntry_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UUI_SimpleTextDropdownEntry_C(ptr_addr);
	}
	struct UUI_SimpleTextDropdownEntry_C GetUI_SimpleTextDropdownEntry_3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UUI_SimpleTextDropdownEntry_C(ptr_addr);
	}
	struct UUI_SimpleTextDropdownEntry_C GetUI_SimpleTextDropdownEntry_4() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UUI_SimpleTextDropdownEntry_C(ptr_addr);
	}
	struct UUI_SimpleTextDropdownEntry_C GetUI_SimpleTextDropdownEntry_5() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct UUI_SimpleTextDropdownEntry_C(ptr_addr);
	}
	struct UUI_SimpleTextDropdownEntry_C GetUI_SimpleTextDropdownEntry_6() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 656);
		return struct UUI_SimpleTextDropdownEntry_C(ptr_addr);
	}
	struct UUI_SimpleTextDropdownEntry_C GetUI_SimpleTextDropdownEntry_7() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 664);
		return struct UUI_SimpleTextDropdownEntry_C(ptr_addr);
	}
	struct UUI_SimpleTextDropdownEntry_C GetUI_SimpleTextDropdownEntry_8() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 672);
		return struct UUI_SimpleTextDropdownEntry_C(ptr_addr);
	}
	struct UUI_SimpleTextDropdownEntry_C GetUI_SimpleTextDropdownEntry_9() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 680);
		return struct UUI_SimpleTextDropdownEntry_C(ptr_addr);
	}
	struct UUI_SimpleTextDropdownEntry_C GetUI_SimpleTextDropdownEntry_10() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 688);
		return struct UUI_SimpleTextDropdownEntry_C(ptr_addr);
	}
	struct UUI_SimpleTextDropdownEntry_C GetUI_SimpleTextDropdownEntry_11() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 696);
		return struct UUI_SimpleTextDropdownEntry_C(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


