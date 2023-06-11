#pragma once 
#include <UI_TooltipOverviewTextElement_Structs.h>
 
 
 
class UUI_TooltipOverviewTextElement_C
{
public:
	UUI_TooltipOverviewTextElement_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 616);
	}
	struct UExtendedRichTextBlock GetExtendedRichTextBlock_1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UExtendedRichTextBlock(ptr_addr);
	}
	struct FText GetTextFormat() {
		return memory.read<struct FText>(m_addr + 632);
	}
	struct FTextBlockStyle GetTextStyle() {
		return memory.read<struct FTextBlockStyle>(m_addr + 656);
	}
	struct FSlateColor GetColor() {
		return memory.read<struct FSlateColor>(m_addr + 1280);
	}
	int32_t GetMinimumIntegralDigits() {
		return memory.read<int32_t>(m_addr + 1320);
	}
	int32_t GetMaximumIntegralDigits() {
		return memory.read<int32_t>(m_addr + 1324);
	}
	int32_t GetMinimumFractionalDigits() {
		return memory.read<int32_t>(m_addr + 1328);
	}
	int32_t GetMaximumFractionalDigits() {
		return memory.read<int32_t>(m_addr + 1332);
	}

private:
	std::uint64_t m_addr = 0;
};


