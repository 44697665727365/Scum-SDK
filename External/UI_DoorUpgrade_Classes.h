#pragma once 
#include <UI_DoorUpgrade_Structs.h>
 
 
 
class UUI_DoorUpgrade_C
{
public:
	UUI_DoorUpgrade_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UImage GetCraftingTitle() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 864);
		return struct UImage(ptr_addr);
	}
	struct UImage GetCraftingTitle_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 872);
		return struct UImage(ptr_addr);
	}
	struct UImage GetCraftingTitle_3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 880);
		return struct UImage(ptr_addr);
	}
	struct UImage GetCraftingTitle_4() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 888);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 896);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 904);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 912);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 920);
		return struct UImage(ptr_addr);
	}
	struct UTextBlock GetTitleText() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 928);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GetTitleText_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 936);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GetTitleText_5() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 944);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GetTitleText_9() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 952);
		return struct UTextBlock(ptr_addr);
	}
	struct UUI_DoorBCULockUpgradeSlot_C GetUI_DoorBCULockUpgradeSlot2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 960);
		return struct UUI_DoorBCULockUpgradeSlot_C(ptr_addr);
	}
	struct UUI_DoorRemoteSensorUpgradeSlot_C GetUI_DoorRemoteSensorUpgradeSlot_3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 968);
		return struct UUI_DoorRemoteSensorUpgradeSlot_C(ptr_addr);
	}
	struct UUI_DoorSecurityUpgradeSlot_C GetUI_DoorSecurityUpgradeSlot_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 976);
		return struct UUI_DoorSecurityUpgradeSlot_C(ptr_addr);
	}
	struct UUI_DoorSecurityUpgradeSlot_C GetUI_DoorSecurityUpgradeSlot_3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 984);
		return struct UUI_DoorSecurityUpgradeSlot_C(ptr_addr);
	}
	struct UUI_DoorUpgradeSlot_C GetUI_DoorUpgradeSlot() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 992);
		return struct UUI_DoorUpgradeSlot_C(ptr_addr);
	}
	struct UUI_DoorUpgradeSlot_C GetUI_DoorUpgradeSlot_1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1000);
		return struct UUI_DoorUpgradeSlot_C(ptr_addr);
	}
	struct UUI_DoorUpgradeSlot_C GetUI_DoorUpgradeSlot_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1008);
		return struct UUI_DoorUpgradeSlot_C(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


