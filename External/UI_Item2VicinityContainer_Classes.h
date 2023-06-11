#pragma once 
#include <UI_Item2VicinityContainer_Structs.h>
 
 
 
class UUI_Item2VicinityContainer_C
{
public:
	UUI_Item2VicinityContainer_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidgetSwitcher GetBCULockSwitcher() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1432);
		return struct UWidgetSwitcher(ptr_addr);
	}
	struct UImage GetConnectedIcon() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1440);
		return struct UImage(ptr_addr);
	}
	struct UImage GetNotSetBCULock() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1448);
		return struct UImage(ptr_addr);
	}
	struct UImage GetSetNotConnectedLock() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1456);
		return struct UImage(ptr_addr);
	}
	struct UImage GetSetNotConnectedLock_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1464);
		return struct UImage(ptr_addr);
	}
	struct UImage GetSetNotConnectedLock_3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1472);
		return struct UImage(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


