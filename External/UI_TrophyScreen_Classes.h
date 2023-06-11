#pragma once 
#include <UI_TrophyScreen_Structs.h>
 
 
 
class UUI_TrophyScreen_C
{
public:
	UUI_TrophyScreen_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UImage GetFishSizeIcon() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 712);
		return struct UImage(ptr_addr);
	}
	struct UImage GetFishWeightIcon() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 720);
		return struct UImage(ptr_addr);
	}
	struct UImage GetKeepButtonBorder() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 728);
		return struct UImage(ptr_addr);
	}
	struct UImage GetReleaseButtonBorder() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 736);
		return struct UImage(ptr_addr);
	}
	struct UImage GetTopBackgroundImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 744);
		return struct UImage(ptr_addr);
	}
	struct UImage GetTopBackgroundImageBorder() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 752);
		return struct UImage(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


