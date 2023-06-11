#pragma once 
#include <UI_PlaceableElement_Structs.h>
 
 
 
class UUI_PlaceableElement_C
{
public:
	UUI_PlaceableElement_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 624);
	}
	struct UButton GetButton_1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UButton(ptr_addr);
	}
	struct UImage GetImage_106() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_bg_black() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct UImage(ptr_addr);
	}
	struct URetainerBox GetRetainerBox_1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 656);
		return struct URetainerBox(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


