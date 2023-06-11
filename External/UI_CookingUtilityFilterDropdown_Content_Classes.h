#pragma once 
#include <UI_CookingUtilityFilterDropdown_Content_Structs.h>
 
 
 
class UUI_CookingUtilityFilterDropdown_Content_C
{
public:
	UUI_CookingUtilityFilterDropdown_Content_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UUI_SimpleTextDropdownEntryWithCheckbox_C GetUI_SimpleTextDropdownEntryWithCheckbox() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UUI_SimpleTextDropdownEntryWithCheckbox_C(ptr_addr);
	}
	struct UUI_SimpleTextDropdownEntryWithCheckbox_C GetUI_SimpleTextDropdownEntryWithCheckbox_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UUI_SimpleTextDropdownEntryWithCheckbox_C(ptr_addr);
	}
	struct UUI_SimpleTextDropdownEntryWithCheckbox_C GetUI_SimpleTextDropdownEntryWithCheckbox_3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UUI_SimpleTextDropdownEntryWithCheckbox_C(ptr_addr);
	}
	struct UUI_SimpleTextDropdownEntryWithCheckbox_C GetUI_SimpleTextDropdownEntryWithCheckbox_4() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UUI_SimpleTextDropdownEntryWithCheckbox_C(ptr_addr);
	}
	struct UUI_SimpleTextDropdownEntryWithCheckbox_C GetUI_SimpleTextDropdownEntryWithCheckbox_5() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct UUI_SimpleTextDropdownEntryWithCheckbox_C(ptr_addr);
	}
	struct UUI_SimpleTextDropdownEntryWithCheckbox_C GetUI_SimpleTextDropdownEntryWithCheckbox_6() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 656);
		return struct UUI_SimpleTextDropdownEntryWithCheckbox_C(ptr_addr);
	}
	struct UUI_SimpleTextDropdownEntryWithCheckbox_C GetUI_SimpleTextDropdownEntryWithCheckbox_7() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 664);
		return struct UUI_SimpleTextDropdownEntryWithCheckbox_C(ptr_addr);
	}
	struct UUI_SimpleTextDropdownEntryWithCheckbox_C GetUI_SimpleTextDropdownEntryWithCheckbox_8() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 672);
		return struct UUI_SimpleTextDropdownEntryWithCheckbox_C(ptr_addr);
	}
	struct UUI_SimpleTextDropdownEntryWithCheckbox_C GetUI_SimpleTextDropdownEntryWithCheckbox_9() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 680);
		return struct UUI_SimpleTextDropdownEntryWithCheckbox_C(ptr_addr);
	}
	struct UUI_SimpleTextDropdownEntryWithCheckbox_C GetUI_SimpleTextDropdownEntryWithCheckbox_10() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 688);
		return struct UUI_SimpleTextDropdownEntryWithCheckbox_C(ptr_addr);
	}
	struct UUI_SimpleTextDropdownEntryWithCheckbox_C GetUI_SimpleTextDropdownEntryWithCheckbox_11() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 696);
		return struct UUI_SimpleTextDropdownEntryWithCheckbox_C(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


