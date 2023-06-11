#pragma once 
#include <UI_ItemMainTooltipPanel_Structs.h>
 
 
 
class UUI_ItemMainTooltipPanel_C
{
public:
	UUI_ItemMainTooltipPanel_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 688);
	}
	struct UUI_TooltipOverviewTextElement_C GetCaption() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 696);
		return struct UUI_TooltipOverviewTextElement_C(ptr_addr);
	}
	struct UOverlay GetDebugOverlay() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 704);
		return struct UOverlay(ptr_addr);
	}
	struct UUI_TooltipOverviewTextElement_C GetDebugText() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 712);
		return struct UUI_TooltipOverviewTextElement_C(ptr_addr);
	}
	struct UUI_TooltipOverviewTextElement_C GetDescription() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 720);
		return struct UUI_TooltipOverviewTextElement_C(ptr_addr);
	}
	struct UImage GetImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 728);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 736);
		return struct UImage(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


