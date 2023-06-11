#pragma once 
#include <UI_TooltipOverviewElement_Structs.h>
 
 
 
class UUI_TooltipOverviewElement_C
{
public:
	UUI_TooltipOverviewElement_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 616);
	}
	struct UExtendedRichTextBlock GetExtendedRichTextBlock_1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UExtendedRichTextBlock(ptr_addr);
	}
	struct UImage GetIconImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UImage(ptr_addr);
	}
	struct USizeBox GetIconSizeBox() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct USizeBox(ptr_addr);
	}
	struct UImage GetImage_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct UImage(ptr_addr);
	}
	struct UTexture2D GetIcon() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 656);
		return struct UTexture2D(ptr_addr);
	}
	int32_t GetMinimumIntegralDigits() {
		return memory.read<int32_t>(m_addr + 664);
	}
	int32_t GetMaximumIntegralDigits() {
		return memory.read<int32_t>(m_addr + 668);
	}
	int32_t GetMinimumFractionalDigits() {
		return memory.read<int32_t>(m_addr + 672);
	}
	int32_t GetMaximumFractionalDigits() {
		return memory.read<int32_t>(m_addr + 676);
	}
	struct FText GetText() {
		return memory.read<struct FText>(m_addr + 680);
	}
	struct FTextBlockStyle GetTextStyle() {
		return memory.read<struct FTextBlockStyle>(m_addr + 704);
	}
	struct FSlateColor GetColor() {
		return memory.read<struct FSlateColor>(m_addr + 1328);
	}

private:
	std::uint64_t m_addr = 0;
};


