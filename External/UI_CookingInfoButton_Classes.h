#pragma once 
#include <UI_CookingInfoButton_Structs.h>
 
 
 
class UUI_CookingInfoButton_C
{
public:
	UUI_CookingInfoButton_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UImage Get_buttonImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 696);
		return struct UImage(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


