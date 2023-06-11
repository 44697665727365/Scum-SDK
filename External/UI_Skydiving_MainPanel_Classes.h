#pragma once 
#include <UI_Skydiving_MainPanel_Structs.h>
 
 
 
class UUI_Skydiving_MainPanel_C
{
public:
	UUI_Skydiving_MainPanel_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UIcon_MMB_C GetIcon_MMB() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 608);
		return struct UIcon_MMB_C(ptr_addr);
	}
	struct UImage GetImage_1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UImage(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


