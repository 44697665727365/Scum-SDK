#pragma once 
#include <UI_SpawnScreenWidget_Structs.h>
 
 
 
class UUI_SpawnScreenWidget_C
{
public:
	UUI_SpawnScreenWidget_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBorder GetPenaltyCountdown() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 712);
		return struct UBorder(ptr_addr);
	}
	struct UScaleBox GetSpawnInterface() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 720);
		return struct UScaleBox(ptr_addr);
	}
	struct UTextBlock GetWaitTimeText() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 728);
		return struct UTextBlock(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


