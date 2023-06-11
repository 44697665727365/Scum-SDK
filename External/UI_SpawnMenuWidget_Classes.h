#pragma once 
#include <UI_SpawnMenuWidget_Structs.h>
 
 
 
class UUI_SpawnMenuWidget_C
{
public:
	UUI_SpawnMenuWidget_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBorder GetBorder_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 832);
		return struct UBorder(ptr_addr);
	}
	struct UTextBlock GetCurrentCurrencyText() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 840);
		return struct UTextBlock(ptr_addr);
	}
	struct UImage GetImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 848);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 856);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 864);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_4() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 872);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_5() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 880);
		return struct UImage(ptr_addr);
	}
	struct UTextBlock GetMainStateLabel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 888);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GetRemainingCurrencyText() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 896);
		return struct UTextBlock(ptr_addr);
	}
	struct UHorizontalBox GetSpawnInterface() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 904);
		return struct UHorizontalBox(ptr_addr);
	}
	struct UTextBlock GetTotalPricetext() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 912);
		return struct UTextBlock(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


