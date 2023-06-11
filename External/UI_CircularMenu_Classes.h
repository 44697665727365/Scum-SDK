#pragma once 
#include <UI_CircularMenu_Structs.h>
 
 
 
class UUI_CircularMenu_C
{
public:
	UUI_CircularMenu_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 680);
	}
	struct UImage GetCenterImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 688);
		return struct UImage(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


