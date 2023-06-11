#pragma once 
#include <UI_DialLockWidget_Structs.h>
 
 
 
class UUI_DialLockWidget_C
{
public:
	UUI_DialLockWidget_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UImage GetImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 672);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_62() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 680);
		return struct UImage(ptr_addr);
	}
	struct UCanvasPanel GetInfoPanelSecondary() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 688);
		return struct UCanvasPanel(ptr_addr);
	}
	struct URetainerBox GetMaskRetainerBox() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 696);
		return struct URetainerBox(ptr_addr);
	}
	struct UImage GetRenderedMinigame() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 704);
		return struct UImage(ptr_addr);
	}
	struct UImage GetTextBackground() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 712);
		return struct UImage(ptr_addr);
	}
	struct UCircularThrobber GetThrobber() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 720);
		return struct UCircularThrobber(ptr_addr);
	}
	struct UImage GetThrobberBackground() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 728);
		return struct UImage(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


