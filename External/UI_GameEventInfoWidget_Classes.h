#pragma once 
#include <UI_GameEventInfoWidget_Structs.h>
 
 
 
class UUI_GameEventInfoWidget_C
{
public:
	UUI_GameEventInfoWidget_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 608);
	}
	struct UTextBlock GetDescriptionText() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GetMinPlayersText() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GetNumTeamsText() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GetPrerequisitesText() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GetRespawnText() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GetRewardsText() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 656);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GetWeaponsText() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 664);
		return struct UTextBlock(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


