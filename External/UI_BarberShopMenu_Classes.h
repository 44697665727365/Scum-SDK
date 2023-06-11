#pragma once 
#include <UI_BarberShopMenu_Structs.h>
 
 
 
class UUI_BarberShopMenu_C
{
public:
	UUI_BarberShopMenu_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidgetSwitcher Get_pageSwitcher() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1088);
		return struct UWidgetSwitcher(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


