#pragma once 
#include <UI_StandardMenuButton_Deprecated_Structs.h>
 
 
 
class UUI_StandardMenuButton_Deprecated_C
{
public:
	UUI_StandardMenuButton_Deprecated_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 712);
	}
	struct UImage GetImage_1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 720);
		return struct UImage(ptr_addr);
	}
	struct USizeBox GetMainSizeBox() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 728);
		return struct USizeBox(ptr_addr);
	}
	struct FMulticastInlineDelegate GetOnClicked() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 736);
	}
	struct FText GetText() {
		return memory.read<struct FText>(m_addr + 752);
	}
	bool GetSizeToContent() {
		return memory.read<bool>(m_addr + 776);
	}
	float GetWidthOverride() {
		return memory.read<float>(m_addr + 780);
	}
	int32_t GetFontSize() {
		return memory.read<int32_t>(m_addr + 784);
	}
	int32_t GetHoveredFontSize() {
		return memory.read<int32_t>(m_addr + 788);
	}
	bool GetOverridesHighlight_1() {
		return memory.read<bool>(m_addr + 792);
	}

private:
	std::uint64_t m_addr = 0;
};


