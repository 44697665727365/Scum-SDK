#pragma once 
#include <UI_CTFMiniStatsWidget_Structs.h>
 
 
 
class UUI_CTFMiniStatsWidget_C
{
public:
	UUI_CTFMiniStatsWidget_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 768);
	}
	struct UBorder GetBorder_87() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 776);
		return struct UBorder(ptr_addr);
	}
	struct UTextBlock GetCaptures() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 784);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GetDeaths() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 792);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GetKills() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 800);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GetNumber() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 808);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GetPlayerName() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 816);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GetScore() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 824);
		return struct UTextBlock(ptr_addr);
	}
	struct UHorizontalBox GetStatRow() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 832);
		return struct UHorizontalBox(ptr_addr);
	}
	struct FLinearColor GetTeamColor() {
		return memory.read<struct FLinearColor>(m_addr + 840);
	}

private:
	std::uint64_t m_addr = 0;
};


