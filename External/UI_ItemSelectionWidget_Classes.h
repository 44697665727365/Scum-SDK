#pragma once 
#include <UI_ItemSelectionWidget_Structs.h>
 
 
 
class UUI_ItemSelectionWidget_C
{
public:
	UUI_ItemSelectionWidget_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UImage GetImage_1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 744);
		return struct UImage(ptr_addr);
	}
	struct FMulticastInlineDelegate GetOnClicked() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 752);
	}

private:
	std::uint64_t m_addr = 0;
};


