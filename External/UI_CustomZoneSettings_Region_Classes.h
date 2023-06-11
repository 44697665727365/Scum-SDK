#pragma once 
#include <UI_CustomZoneSettings_Region_Structs.h>
 
 
 
class UUI_CustomZoneSettings_Region_C
{
public:
	UUI_CustomZoneSettings_Region_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UHorizontalBox GetHorizontalBox_99() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 944);
		return struct UHorizontalBox(ptr_addr);
	}
	struct FText GetUnmodifiedToolTipText() {
		return memory.read<struct FText>(m_addr + 952);
	}
	struct FText GetModifiedToolTipText() {
		return memory.read<struct FText>(m_addr + 976);
	}
	struct FText GetDeletedToolTipText() {
		return memory.read<struct FText>(m_addr + 1000);
	}

private:
	std::uint64_t m_addr = 0;
};


