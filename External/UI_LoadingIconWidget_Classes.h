#pragma once 
#include <UI_LoadingIconWidget_Structs.h>
 
 
 
class UUI_LoadingIconWidget_C
{
public:
	UUI_LoadingIconWidget_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UCircularThrobber GetCircularThrobber_53() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 608);
		return struct UCircularThrobber(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


