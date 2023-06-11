#pragma once 
#include <UI_GameEventLeaderboardRow_Structs.h>
 
 
 
class UUI_GameEventLeaderboardRow_C
{
public:
	UUI_GameEventLeaderboardRow_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTextBlock GetAssists() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 608);
		return struct UTextBlock(ptr_addr);
	}
	struct UBorder GetBackground() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UBorder(ptr_addr);
	}
	struct UTextBlock GetDeaths() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GetFame() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GetKD() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GetKills() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GetPlayer() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 656);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GetRankText() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 664);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GetScore() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 672);
		return struct UTextBlock(ptr_addr);
	}
	struct FLinearColor GetBackgroundColor() {
		return memory.read<struct FLinearColor>(m_addr + 680);
	}
	int32_t GetRank() {
		return memory.read<int32_t>(m_addr + 696);
	}

private:
	std::uint64_t m_addr = 0;
};


