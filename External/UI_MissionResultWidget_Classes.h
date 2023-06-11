#pragma once 
#include <UI_MissionResultWidget_Structs.h>
 
 
 
class UUI_MissionResultWidget_C
{
public:
	UUI_MissionResultWidget_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 640);
	}
	struct UWidgetAnimation GetMissionResultAnimation() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UImage Get_resultTitleBackground() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 656);
		return struct UImage(ptr_addr);
	}
	struct UImage Get_spaceFillerImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 664);
		return struct UImage(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


