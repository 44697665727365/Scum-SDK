#pragma once 
#include <UI_MissionItem_Structs.h>
 
 
 
class UUI_MissionItem_C
{
public:
	UUI_MissionItem_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UImage Get_background() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1104);
		return struct UImage(ptr_addr);
	}
	struct UImage Get_selectionBackground() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1112);
		return struct UImage(ptr_addr);
	}
	struct UImage Get_selectionIcon() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1120);
		return struct UImage(ptr_addr);
	}
	struct UImage Get_verticalImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1128);
		return struct UImage(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


