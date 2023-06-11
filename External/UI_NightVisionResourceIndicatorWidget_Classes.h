#pragma once 
#include <UI_NightVisionResourceIndicatorWidget_Structs.h>
 
 
 
class UUI_NightVisionResourceIndicatorWidget_C
{
public:
	UUI_NightVisionResourceIndicatorWidget_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 624);
	}
	struct UImage GetBatteryImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UImage(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


