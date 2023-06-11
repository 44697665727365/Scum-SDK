#pragma once 
#include <UI_RewardItemWidfget_Structs.h>
 
 
 
class UUI_RewardItemWidfget_C
{
public:
	UUI_RewardItemWidfget_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UImage Get_border() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UImage(ptr_addr);
	}
	struct UImage Get_bulletBackground() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UImage(ptr_addr);
	}
	struct UImage Get_textBackground() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UImage(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


