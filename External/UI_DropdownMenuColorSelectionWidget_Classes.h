#pragma once 
#include <UI_DropdownMenuColorSelectionWidget_Structs.h>
 
 
 
class UUI_DropdownMenuColorSelectionWidget_C
{
public:
	UUI_DropdownMenuColorSelectionWidget_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


