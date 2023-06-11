#pragma once 
#include <UI_InspectedItem_Structs.h>
 
 
 
class UUI_InspectedItem_C
{
public:
	UUI_InspectedItem_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 632);
	}
	struct UImage GetBackgroundImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UImage(ptr_addr);
	}
	struct UImage GetComponentOrToolImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct UImage(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


