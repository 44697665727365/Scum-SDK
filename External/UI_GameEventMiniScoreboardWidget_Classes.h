#pragma once 
#include <UI_GameEventMiniScoreboardWidget_Structs.h>
 
 
 
class UUI_GameEventMiniScoreboardWidget_C
{
public:
	UUI_GameEventMiniScoreboardWidget_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 664);
	}
	struct UTextBlock GetEmptyMsg() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 672);
		return struct UTextBlock(ptr_addr);
	}
	struct UBorder GetHeader() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 680);
		return struct UBorder(ptr_addr);
	}
	struct UUniformGridPanel GetInfo() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 688);
		return struct UUniformGridPanel(ptr_addr);
	}
	struct UScrollBox GetRows() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 696);
		return struct UScrollBox(ptr_addr);
	}
	struct TArray<struct UWidget> GetList() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 704);
		return struct TArray<struct UWidget>(ptr_addr);
	}
	struct TArray<struct FText> GetTeamNames() {
		return memory.read<struct TArray<struct FText>>(m_addr + 720);
	}
	struct TArray<struct FGameEventTeamColours> GetTeamColors() {
		return memory.read<struct TArray<struct FGameEventTeamColours>>(m_addr + 736);
	}

private:
	std::uint64_t m_addr = 0;
};


