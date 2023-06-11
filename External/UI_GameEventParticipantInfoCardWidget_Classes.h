#pragma once 
#include <UI_GameEventParticipantInfoCardWidget_Structs.h>
 
 
 
class UUI_GameEventParticipantInfoCardWidget_C
{
public:
	UUI_GameEventParticipantInfoCardWidget_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 608);
	}
	struct UTextBlock GetAssists() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UTextBlock(ptr_addr);
	}
	struct UImage GetAvatar() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UImage(ptr_addr);
	}
	struct UTextBlock GetDeaths() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GetFameLevel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GetHeadshots() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GetKills() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 656);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GetName() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 664);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock Getping() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 672);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GetRevenges() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 680);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GetSteamID() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 688);
		return struct UTextBlock(ptr_addr);
	}
	struct ABP_Prisoner_C GetPrisoner() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 696);
		return struct ABP_Prisoner_C(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


