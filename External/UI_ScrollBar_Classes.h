#pragma once 
#include <UI_ScrollBar_Structs.h>
 
 
 
class UUI_ScrollBar_C
{
public:
	UUI_ScrollBar_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 648);
	}
	struct UImage GetSliderImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 656);
		return struct UImage(ptr_addr);
	}
	struct FVector2D GetSize() {
		return memory.read<struct FVector2D>(m_addr + 664);
	}
	float Get_currentValue() {
		return memory.read<float>(m_addr + 672);
	}
	float Get_currentMaxCountOnScreen() {
		return memory.read<float>(m_addr + 676);
	}
	float Get_currentMaxValue() {
		return memory.read<float>(m_addr + 680);
	}
	bool Get_shouldUpdate() {
		return memory.read<bool>(m_addr + 684);
	}
	float Get_scrollBarHeight() {
		return memory.read<float>(m_addr + 688);
	}

private:
	std::uint64_t m_addr = 0;
};


