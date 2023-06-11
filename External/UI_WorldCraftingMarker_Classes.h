#pragma once 
#include <UI_WorldCraftingMarker_Structs.h>
 
 
 
class UUI_WorldCraftingMarker_C
{
public:
	UUI_WorldCraftingMarker_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 768);
	}
	struct UImage GetBackground() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 776);
		return struct UImage(ptr_addr);
	}
	struct UTextBlock GetDistance() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 784);
		return struct UTextBlock(ptr_addr);
	}
	struct UImage GetEmphasis() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 792);
		return struct UImage(ptr_addr);
	}
	struct UImage GetIcon() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 800);
		return struct UImage(ptr_addr);
	}
	struct UTextBlock GetLabel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 808);
		return struct UTextBlock(ptr_addr);
	}
	struct UImage GetSmallPointer() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 816);
		return struct UImage(ptr_addr);
	}
	struct UWidgetSwitcher GetSwitcher() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 824);
		return struct UWidgetSwitcher(ptr_addr);
	}
	uint8_t  Get_mode() {
		return memory.read<uint8_t >(m_addr + 832);
	}

private:
	std::uint64_t m_addr = 0;
};


