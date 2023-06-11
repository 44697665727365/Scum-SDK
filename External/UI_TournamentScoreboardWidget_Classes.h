#pragma once 
#include <UI_TournamentScoreboardWidget_Structs.h>
 
 
 
class UUI_TournamentScoreboardWidget_C
{
public:
	UUI_TournamentScoreboardWidget_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UUI_TournamentScoreboardRow_C GetUI_TournamentScoreboardRow() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UUI_TournamentScoreboardRow_C(ptr_addr);
	}
	struct UUI_TournamentScoreboardRow_C GetUI_TournamentScoreboardRow_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UUI_TournamentScoreboardRow_C(ptr_addr);
	}
	struct UUI_TournamentScoreboardRow_C GetUI_TournamentScoreboardRow_3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct UUI_TournamentScoreboardRow_C(ptr_addr);
	}
	struct UUI_TournamentScoreboardRow_C GetUI_TournamentScoreboardRow_4() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 656);
		return struct UUI_TournamentScoreboardRow_C(ptr_addr);
	}
	struct UUI_TournamentScoreboardRow_C GetUI_TournamentScoreboardRow_5() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 664);
		return struct UUI_TournamentScoreboardRow_C(ptr_addr);
	}
	struct UUI_TournamentScoreboardRow_C GetUI_TournamentScoreboardRow_6() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 672);
		return struct UUI_TournamentScoreboardRow_C(ptr_addr);
	}
	struct UUI_TournamentScoreboardRow_C GetUI_TournamentScoreboardRow_7() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 680);
		return struct UUI_TournamentScoreboardRow_C(ptr_addr);
	}
	struct UUI_TournamentScoreboardRow_C GetUI_TournamentScoreboardRow_8() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 688);
		return struct UUI_TournamentScoreboardRow_C(ptr_addr);
	}
	struct UUI_TournamentScoreboardRow_C GetUI_TournamentScoreboardRow_9() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 696);
		return struct UUI_TournamentScoreboardRow_C(ptr_addr);
	}
	struct UUI_TournamentScoreboardRow_C GetUI_TournamentScoreboardRow_10() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 704);
		return struct UUI_TournamentScoreboardRow_C(ptr_addr);
	}
	struct UUI_TournamentScoreboardRow_C GetUI_TournamentScoreboardRow_11() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 712);
		return struct UUI_TournamentScoreboardRow_C(ptr_addr);
	}
	struct UUI_TournamentScoreboardRow_C GetUI_TournamentScoreboardRow_12() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 720);
		return struct UUI_TournamentScoreboardRow_C(ptr_addr);
	}
	struct UUI_TournamentScoreboardRow_C GetUI_TournamentScoreboardRow_13() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 728);
		return struct UUI_TournamentScoreboardRow_C(ptr_addr);
	}
	struct UUI_TournamentScoreboardRow_C GetUI_TournamentScoreboardRow_14() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 736);
		return struct UUI_TournamentScoreboardRow_C(ptr_addr);
	}
	struct UUI_TournamentScoreboardRow_C GetUI_TournamentScoreboardRow_15() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 744);
		return struct UUI_TournamentScoreboardRow_C(ptr_addr);
	}
	struct UUI_TournamentScoreboardRow_C GetUI_TournamentScoreboardRow_16() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 752);
		return struct UUI_TournamentScoreboardRow_C(ptr_addr);
	}
	struct UUI_TournamentScoreboardRow_C GetUI_TournamentScoreboardRow_17() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 760);
		return struct UUI_TournamentScoreboardRow_C(ptr_addr);
	}
	struct UUI_TournamentScoreboardRow_C GetUI_TournamentScoreboardRow_18() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 768);
		return struct UUI_TournamentScoreboardRow_C(ptr_addr);
	}
	struct UUI_TournamentScoreboardRow_C GetUI_TournamentScoreboardRow_19() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 776);
		return struct UUI_TournamentScoreboardRow_C(ptr_addr);
	}
	struct UUI_TournamentScoreboardRow_C GetUI_TournamentScoreboardRow_20() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 784);
		return struct UUI_TournamentScoreboardRow_C(ptr_addr);
	}
	struct UUI_TournamentScoreboardRow_C GetUI_TournamentScoreboardRow_21() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 792);
		return struct UUI_TournamentScoreboardRow_C(ptr_addr);
	}
	struct UUI_TournamentScoreboardRow_C GetUI_TournamentScoreboardRow_22() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 800);
		return struct UUI_TournamentScoreboardRow_C(ptr_addr);
	}
	struct UUI_TournamentScoreboardRow_C GetUI_TournamentScoreboardRow_23() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 808);
		return struct UUI_TournamentScoreboardRow_C(ptr_addr);
	}
	struct UUI_TournamentScoreboardRow_C GetUI_TournamentScoreboardRow_24() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 816);
		return struct UUI_TournamentScoreboardRow_C(ptr_addr);
	}
	struct UUI_TournamentScoreboardRow_C GetUI_TournamentScoreboardRow_25() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 824);
		return struct UUI_TournamentScoreboardRow_C(ptr_addr);
	}
	struct UUI_TournamentScoreboardRow_C GetUI_TournamentScoreboardRow_26() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 832);
		return struct UUI_TournamentScoreboardRow_C(ptr_addr);
	}
	struct UUI_TournamentScoreboardRow_C GetUI_TournamentScoreboardRow_40() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 840);
		return struct UUI_TournamentScoreboardRow_C(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


