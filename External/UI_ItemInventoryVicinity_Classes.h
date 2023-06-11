#pragma once 
#include <UI_ItemInventoryVicinity_Structs.h>
 
 
 
class UUI_ItemInventoryVicinity_C
{
public:
	UUI_ItemInventoryVicinity_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UHorizontalBox Get_weightHorizontalBox() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 760);
		return struct UHorizontalBox(ptr_addr);
	}
	struct UImage GetDeadCellsImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 768);
		return struct UImage(ptr_addr);
	}
	struct UImage GetExtraSlotBackground() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 776);
		return struct UImage(ptr_addr);
	}
	struct UOverlay GetExtraSlotsOverlay() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 784);
		return struct UOverlay(ptr_addr);
	}
	struct UTextBlock GetGreenText() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 792);
		return struct UTextBlock(ptr_addr);
	}
	struct UImage GetImage_1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 800);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 808);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 816);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_4() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 824);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_5() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 832);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_7() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 840);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_84() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 848);
		return struct UImage(ptr_addr);
	}
	struct UImage GetLoadingBackground() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 856);
		return struct UImage(ptr_addr);
	}
	struct UImage GetMainExtraSlotImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 864);
		return struct UImage(ptr_addr);
	}
	struct UProgressBar GetProgressBar_1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 872);
		return struct UProgressBar(ptr_addr);
	}
	struct UTextBlock GetRedText() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 880);
		return struct UTextBlock(ptr_addr);
	}
	struct UOverlay GetSeparatorOverlay() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 888);
		return struct UOverlay(ptr_addr);
	}
	struct UTextBlock GetSlotsText() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 896);
		return struct UTextBlock(ptr_addr);
	}
	struct USizeBox GetWeightAndExpandSizeBox() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 904);
		return struct USizeBox(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


