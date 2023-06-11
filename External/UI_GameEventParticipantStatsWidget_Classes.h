#pragma once 
#include <UI_GameEventParticipantStatsWidget_Structs.h>
 
 
 
class UUI_GameEventParticipantStatsWidget_C
{
public:
	UUI_GameEventParticipantStatsWidget_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 640);
	}
	struct FLinearColor GetTextColor() {
		return memory.read<struct FLinearColor>(m_addr + 648);
	}
	int32_t Get_lastTeamIndex() {
		return memory.read<int32_t>(m_addr + 664);
	}
	struct FGameEventTeamColours GetTeamColours() {
		return memory.read<struct FGameEventTeamColours>(m_addr + 668);
	}

private:
	std::uint64_t m_addr = 0;
};


