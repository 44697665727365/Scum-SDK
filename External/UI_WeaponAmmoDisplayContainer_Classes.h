#pragma once 
#include <UI_WeaponAmmoDisplayContainer_Structs.h>
 
 
 
class UUI_WeaponAmmoDisplayContainer_C
{
public:
	UUI_WeaponAmmoDisplayContainer_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 648);
	}
	struct UWidgetAnimation GetFadeOut() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 656);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UWidgetAnimation GetFadeIn() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 664);
		return struct UWidgetAnimation(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


