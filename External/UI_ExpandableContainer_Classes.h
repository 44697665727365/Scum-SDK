#pragma once 
#include <UI_ExpandableContainer_Structs.h>
 
 
 
class UUI_ExpandableContainer_C
{
public:
	UUI_ExpandableContainer_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 640);
	}
	struct UImage GetContentBackgroundImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct UImage(ptr_addr);
	}
	struct UHorizontalBox GetContentHorizontalBox() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 656);
		return struct UHorizontalBox(ptr_addr);
	}
	struct UOverlay GetContentOverlay() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 664);
		return struct UOverlay(ptr_addr);
	}
	struct UButton GetExpandButton() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 672);
		return struct UButton(ptr_addr);
	}
	struct UImage GetExpandedSpacingLine() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 680);
		return struct UImage(ptr_addr);
	}
	struct UImage GetTitleBackgroundImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 688);
		return struct UImage(ptr_addr);
	}
	int32_t GetFontSize() {
		return memory.read<int32_t>(m_addr + 696);
	}
	bool GetEnableExpandedSpacingLine() {
		return memory.read<bool>(m_addr + 700);
	}
	struct FMargin GetTitlePadding() {
		return memory.read<struct FMargin>(m_addr + 704);
	}
	bool Get_isMinimized() {
		return memory.read<bool>(m_addr + 720);
	}
	struct FText GetTitle() {
		return memory.read<struct FText>(m_addr + 728);
	}
	struct FMargin GetContentPadding() {
		return memory.read<struct FMargin>(m_addr + 752);
	}
	bool GetIsContentBackgroundImageVisible() {
		return memory.read<bool>(m_addr + 768);
	}
	int32_t Get_alarmsCount() {
		return memory.read<int32_t>(m_addr + 772);
	}
	bool Get_isUnderAlarm() {
		return memory.read<bool>(m_addr + 776);
	}
	struct UUI_ExpandableContainer_C GetParentContainer() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 784);
		return struct UUI_ExpandableContainer_C(ptr_addr);
	}
	struct FMulticastInlineDelegate GetOnExpandChanged() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 792);
	}
	struct FMargin GetContentMargins() {
		return memory.read<struct FMargin>(m_addr + 808);
	}
	bool GetOnlySettableByChildren() {
		return memory.read<bool>(m_addr + 824);
	}

private:
	std::uint64_t m_addr = 0;
};


