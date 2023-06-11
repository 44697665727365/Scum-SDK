#pragma once 
#include <UI_GameEventScoreboardWidget_Structs.h>
 
 
 
class UUI_GameEventScoreboardWidget_C
{
public:
	UUI_GameEventScoreboardWidget_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 664);
	}
	struct UBorder GetRoundInfo() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 672);
		return struct UBorder(ptr_addr);
	}
	struct UUniformGridPanel GetTeamGrid() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 680);
		return struct UUniformGridPanel(ptr_addr);
	}
	struct UTextBlock GetTextBlock_1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 688);
		return struct UTextBlock(ptr_addr);
	}
	struct UUI_GameEventParticipantInfoCardWidget_C GetUI_GameEventParitcipantInfoCardWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 696);
		return struct UUI_GameEventParticipantInfoCardWidget_C(ptr_addr);
	}
	struct TArray<struct UWidget> GetList() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 704);
		return struct TArray<struct UWidget>(ptr_addr);
	}
	struct UUI_GameEventTeamHeaderWidget_C GetTeamHeaderWidgetClass_1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 720);
		return struct UUI_GameEventTeamHeaderWidget_C(ptr_addr);
	}
	struct TArray<struct UUI_GameEventTeamInfoWidget_C> GetTeamWidgets() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 728);
		return struct TArray<struct UUI_GameEventTeamInfoWidget_C>(ptr_addr);
	}
	struct TArray<struct FText> GetTeamNames() {
		return memory.read<struct TArray<struct FText>>(m_addr + 744);
	}
	struct TArray<struct FGameEventTeamColours> GetTeamColors() {
		return memory.read<struct TArray<struct FGameEventTeamColours>>(m_addr + 760);
	}

private:
	std::uint64_t m_addr = 0;
};


