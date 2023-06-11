#pragma once 
#include <UI_ItemStatusWidget_Structs.h>
 
 
 
class UUI_ItemStatusWidget_C
{
public:
	UUI_ItemStatusWidget_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 760);
	}
	struct UEditableTextBox Get_titleText() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 768);
		return struct UEditableTextBox(ptr_addr);
	}
	struct UImage GetbaseImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 776);
		return struct UImage(ptr_addr);
	}
	struct UImage GetoutlineImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 784);
		return struct UImage(ptr_addr);
	}
	struct UOverlay GetTitleOverlay() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 792);
		return struct UOverlay(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


