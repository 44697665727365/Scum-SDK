#pragma once 
#include <UI_CTFParticipantStatsWidget_Structs.h>
 
 
 
class UUI_CTFParticipantStatsWidget_C
{
public:
	UUI_CTFParticipantStatsWidget_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 768);
	}
	struct UTextBlock GetAssists() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 776);
		return struct UTextBlock(ptr_addr);
	}
	struct UHorizontalBox GetBgRow() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 784);
		return struct UHorizontalBox(ptr_addr);
	}
	struct UBorder GetBorder_1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 792);
		return struct UBorder(ptr_addr);
	}
	struct UBorder GetBorder_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 800);
		return struct UBorder(ptr_addr);
	}
	struct UBorder GetBorder_384() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 808);
		return struct UBorder(ptr_addr);
	}
	struct UBorder GetBorder_386() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 816);
		return struct UBorder(ptr_addr);
	}
	struct UBorder GetBorder_387() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 824);
		return struct UBorder(ptr_addr);
	}
	struct UBorder GetBorder_388() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 832);
		return struct UBorder(ptr_addr);
	}
	struct UBorder GetBorder_389() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 840);
		return struct UBorder(ptr_addr);
	}
	struct UTextBlock GetCaptures() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 848);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GetDeaths() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 856);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GetHeadshots() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 864);
		return struct UTextBlock(ptr_addr);
	}
	struct UBorder GetInactiveOverlay() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 872);
		return struct UBorder(ptr_addr);
	}
	struct UTextBlock GetKills() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 880);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GetNumber() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 888);
		return struct UTextBlock(ptr_addr);
	}
	struct UBorder GetNumberBorder() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 896);
		return struct UBorder(ptr_addr);
	}
	struct UTextBlock GetPlayerName() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 904);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GetScore() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 912);
		return struct UTextBlock(ptr_addr);
	}
	struct UBorder GetSelectedOverlay() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 920);
		return struct UBorder(ptr_addr);
	}
	struct UHorizontalBox GetStatRow() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 928);
		return struct UHorizontalBox(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


