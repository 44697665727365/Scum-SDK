#pragma once 
#include <UI_MetabolismReworkDemo_Structs.h>
 
 
 
class UUI_MetabolismReworkDemo_C
{
public:
	UUI_MetabolismReworkDemo_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UUI_Metabolism_LeftPanel_C GetUI_Metabolism_LeftPanel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 608);
		return struct UUI_Metabolism_LeftPanel_C(ptr_addr);
	}
	struct UUI_Metabolism_RightPanel_C GetUI_Metabolism_RightPanel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UUI_Metabolism_RightPanel_C(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


