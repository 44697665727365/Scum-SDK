#pragma once 
#include <UI_MissionItemContainer_Structs.h>
 
 
 
class UUI_MissionItemContainer_C
{
public:
	UUI_MissionItemContainer_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UImage Get_completedVerticalLine() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 808);
		return struct UImage(ptr_addr);
	}
	struct UImage Get_dividerBottom() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 816);
		return struct UImage(ptr_addr);
	}
	struct UImage Get_verticalLine() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 824);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 832);
		return struct UImage(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


