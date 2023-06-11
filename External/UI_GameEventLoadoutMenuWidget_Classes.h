#pragma once 
#include <UI_GameEventLoadoutMenuWidget_Structs.h>
 
 
 
class UUI_GameEventLoadoutMenuWidget_C
{
public:
	UUI_GameEventLoadoutMenuWidget_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UImage GetImage_1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 664);
		return struct UImage(ptr_addr);
	}
	struct UUI_ItemSelectionSlotWidget_C GetSupportSelection() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 672);
		return struct UUI_ItemSelectionSlotWidget_C(ptr_addr);
	}
	struct TArray<struct UItemSelection> GetMandatoryGear() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 680);
		return struct TArray<struct UItemSelection>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


