#pragma once 
#include <UI_CTFTeamHeaderWidget_Structs.h>
 
 
 
class UUI_CTFTeamHeaderWidget_C
{
public:
	UUI_CTFTeamHeaderWidget_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 616);
	}
	struct UImage GetBackgroundImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UImage(ptr_addr);
	}
	struct UHorizontalBox GetLeftSideLayoutBox() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UHorizontalBox(ptr_addr);
	}
	struct UHorizontalBox GetLeftStarBox() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UHorizontalBox(ptr_addr);
	}
	struct UTextBlock GetLeftTeamScore() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GetPlayerTextLeft() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 656);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GetPlayerTextRight() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 664);
		return struct UTextBlock(ptr_addr);
	}
	struct UHorizontalBox GetRightSideLayoutBox() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 672);
		return struct UHorizontalBox(ptr_addr);
	}
	struct UHorizontalBox GetRightStarBox() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 680);
		return struct UHorizontalBox(ptr_addr);
	}
	struct UTextBlock GetRightTeamScore() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 688);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GetTeamNameLeft() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 696);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GetTeamNameRight() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 704);
		return struct UTextBlock(ptr_addr);
	}
	struct ABP_CTFGameEvent_C GetgameEvent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 712);
		return struct ABP_CTFGameEvent_C(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


