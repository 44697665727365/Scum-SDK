#pragma once 
#include <UI_PD_MainWidget_Structs.h>
 
 
 
class UUI_PD_MainWidget_C
{
public:
	UUI_PD_MainWidget_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UImage GetImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 752);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_73() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 760);
		return struct UImage(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


