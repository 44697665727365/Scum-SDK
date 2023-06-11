#pragma once 
#include <UI_GameEventLeaderboardWidget_Structs.h>
 
 
 
class UUI_GameEventLeaderboardWidget_C
{
public:
	UUI_GameEventLeaderboardWidget_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 656);
	}
	struct UCircularThrobber GetCircularThrobber_Ranking() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 664);
		return struct UCircularThrobber(ptr_addr);
	}
	struct UCircularThrobber GetCircularThrobber_TopPlayers() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 672);
		return struct UCircularThrobber(ptr_addr);
	}
	struct UVerticalBox GetPlayerRanking() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 680);
		return struct UVerticalBox(ptr_addr);
	}
	struct UVerticalBox GetTopPlayers() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 688);
		return struct UVerticalBox(ptr_addr);
	}
	struct UUI_GameEventLeaderboardRow_C GetUI_GameEventLeaderboardRow_C_1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 696);
		return struct UUI_GameEventLeaderboardRow_C(ptr_addr);
	}
	int32_t GetMaxStats() {
		return memory.read<int32_t>(m_addr + 704);
	}

private:
	std::uint64_t m_addr = 0;
};


