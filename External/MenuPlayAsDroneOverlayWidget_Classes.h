#pragma once 
#include <MenuPlayAsDroneOverlayWidget_Structs.h>
 
 
 
class UMenuPlayAsDroneOverlayWidget_C
{
public:
	UMenuPlayAsDroneOverlayWidget_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 608);
	}
	struct UImage GetDroneIcon() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UImage(ptr_addr);
	}
	bool Get_isVisible() {
		return memory.read<bool>(m_addr + 624);
	}
	float GetBlinkPeriod() {
		return memory.read<float>(m_addr + 628);
	}

private:
	std::uint64_t m_addr = 0;
};


