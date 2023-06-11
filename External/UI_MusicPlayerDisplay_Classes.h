#pragma once 
#include <UI_MusicPlayerDisplay_Structs.h>
 
 
 
class UUI_MusicPlayerDisplay_C
{
public:
	UUI_MusicPlayerDisplay_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct URetainerBox GetTitleRetainer() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 776);
		return struct URetainerBox(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


