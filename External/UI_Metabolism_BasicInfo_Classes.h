#pragma once 
#include <UI_Metabolism_BasicInfo_Structs.h>
 
 
 
class UUI_Metabolism_BasicInfo_C
{
public:
	UUI_Metabolism_BasicInfo_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UUI_CollapsableContainer_C GetUI_CollapsableContainer() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 680);
		return struct UUI_CollapsableContainer_C(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


