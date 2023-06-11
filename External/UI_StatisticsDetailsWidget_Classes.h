#pragma once 
#include <UI_StatisticsDetailsWidget_Structs.h>
 
 
 
class UUI_StatisticsDetailsWidget_C
{
public:
	UUI_StatisticsDetailsWidget_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UImage Get_verticalLine() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 912);
		return struct UImage(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


