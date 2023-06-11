#pragma once 
#include <UI_GameEventTeamInfoWidget_Structs.h>
 
 
 
class UUI_GameEventTeamInfoWidget_C
{
public:
	UUI_GameEventTeamInfoWidget_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 608);
	}
	struct UBorder GetStatTextContainer() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UBorder(ptr_addr);
	}
	struct UBorder GetTeamHeader() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UBorder(ptr_addr);
	}
	struct UScrollBox GetTeamRows() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UScrollBox(ptr_addr);
	}
	struct UUI_GameEventTeamHeaderWidget_C GetHeaderWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UUI_GameEventTeamHeaderWidget_C(ptr_addr);
	}
	UGameEventParticipantStatsWidget GetParticipantStatClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return UGameEventParticipantStatsWidget(ptr_addr);
	}
	struct FGameEventTeamColours GetTeamColours() {
		return memory.read<struct FGameEventTeamColours>(m_addr + 656);
	}

private:
	std::uint64_t m_addr = 0;
};


