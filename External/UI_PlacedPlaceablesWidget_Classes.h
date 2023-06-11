#pragma once 
#include <UI_PlacedPlaceablesWidget_Structs.h>
 
 
 
class UUI_PlacedPlaceablesWidget_C
{
public:
	UUI_PlacedPlaceablesWidget_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UUI_PlacedPlaceableIcon_C> Get_icons() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 696);
		return struct TArray<struct UUI_PlacedPlaceableIcon_C>(ptr_addr);
	}
	int32_t Get_placeableIndex() {
		return memory.read<int32_t>(m_addr + 712);
	}

private:
	std::uint64_t m_addr = 0;
};


