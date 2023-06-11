#pragma once 
#include <UI_TooltipOverviewTextParameterElement_Structs.h>
 
 
 
class UUI_TooltipOverviewTextParameterElement_C
{
public:
	UUI_TooltipOverviewTextParameterElement_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 616);
	}
	struct UImage GetImage_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UImage(ptr_addr);
	}
	struct UTextBlock GetTextBlock_1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GetTextBlock_47() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UTextBlock(ptr_addr);
	}
	struct FSlateFontInfo GetFont() {
		return memory.read<struct FSlateFontInfo>(m_addr + 648);
	}
	struct FText GetTextFormat() {
		return memory.read<struct FText>(m_addr + 736);
	}
	struct FText GetParameterText() {
		return memory.read<struct FText>(m_addr + 760);
	}
	int32_t GetMinimumIntegralDigits() {
		return memory.read<int32_t>(m_addr + 784);
	}
	int32_t GetMaximumIntegralDigits() {
		return memory.read<int32_t>(m_addr + 788);
	}
	int32_t GetMinimumFractionalDigits() {
		return memory.read<int32_t>(m_addr + 792);
	}
	int32_t GetMaximumFractionalDigits() {
		return memory.read<int32_t>(m_addr + 796);
	}

private:
	std::uint64_t m_addr = 0;
};


