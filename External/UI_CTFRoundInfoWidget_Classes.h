#pragma once 
#include <UI_CTFRoundInfoWidget_Structs.h>
 
 
 
class UUI_CTFRoundInfoWidget_C
{
public:
	UUI_CTFRoundInfoWidget_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 608);
	}
	struct UTextBlock GetRoundStatus() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GetTimeLeft() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UTextBlock(ptr_addr);
	}
	struct UHorizontalBox GetTimeLeftBox() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UHorizontalBox(ptr_addr);
	}
	struct UTextBlock GetTimeLeftLabel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UTextBlock(ptr_addr);
	}
	struct ABP_CTFGameEvent_C GetgameEvent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct ABP_CTFGameEvent_C(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


