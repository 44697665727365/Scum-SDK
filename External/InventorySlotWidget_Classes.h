#pragma once 
#include <InventorySlotWidget_Structs.h>
 
 
 
class UInventorySlotWidget_C
{
public:
	UInventorySlotWidget_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetWidth() {
		return memory.read<int32_t>(m_addr + 640);
	}
	int32_t GetHeight() {
		return memory.read<int32_t>(m_addr + 644);
	}

private:
	std::uint64_t m_addr = 0;
};


