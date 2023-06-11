#pragma once 
#include <UI_JournalObjectiveContainer_Structs.h>
 
 
 
class UUI_JournalObjectiveContainer_C
{
public:
	UUI_JournalObjectiveContainer_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UImage Get_activateButtonBackground() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 832);
		return struct UImage(ptr_addr);
	}
	struct UImage Get_background() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 840);
		return struct UImage(ptr_addr);
	}
	struct UImage Get_descriptionBackground() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 848);
		return struct UImage(ptr_addr);
	}
	struct UImage Get_dividerBottom() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 856);
		return struct UImage(ptr_addr);
	}
	struct UImage Get_headerBackground() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 864);
		return struct UImage(ptr_addr);
	}
	struct UImage Get_objectivesBg() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 872);
		return struct UImage(ptr_addr);
	}
	struct UImage Get_resetButtonBackground() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 880);
		return struct UImage(ptr_addr);
	}
	struct UImage Get_restartMissionButtonBackground() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 888);
		return struct UImage(ptr_addr);
	}
	struct UImage Get_rewardsBackground() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 896);
		return struct UImage(ptr_addr);
	}
	struct UImage Get_sectionBackground() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 904);
		return struct UImage(ptr_addr);
	}
	struct UImage Get_untrackButtonBackground() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 912);
		return struct UImage(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


