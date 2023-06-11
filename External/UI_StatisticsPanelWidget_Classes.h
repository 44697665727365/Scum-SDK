#pragma once 
#include <UI_StatisticsPanelWidget_Structs.h>
 
 
 
class UUI_StatisticsPanelWidget_C
{
public:
	UUI_StatisticsPanelWidget_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidgetSwitcher Get_categorySwitcher() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UWidgetSwitcher(ptr_addr);
	}
	struct UImage GetImage_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UImage(ptr_addr);
	}
	struct UCanvasPanel GetMainCanvas() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UCanvasPanel(ptr_addr);
	}
	struct UUserWidget GetLastMenuWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct UUserWidget(ptr_addr);
	}
	struct UWidget Get_lastWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 656);
		return struct UWidget(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


