#pragma once 
#include <UI_SpawnSectorSelector_Structs.h>
 
 
 
class UUI_SpawnSectorSelector_C
{
public:
	UUI_SpawnSectorSelector_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 624);
	}
	struct UButton GetButton() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UButton(ptr_addr);
	}
	struct UButton GetButton_1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UButton(ptr_addr);
	}
	struct UButton GetButton_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct UButton(ptr_addr);
	}
	struct UButton GetButton_3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 656);
		return struct UButton(ptr_addr);
	}
	struct UButton GetButton_4() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 664);
		return struct UButton(ptr_addr);
	}
	struct UButton GetButton_5() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 672);
		return struct UButton(ptr_addr);
	}
	struct UButton GetButton_6() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 680);
		return struct UButton(ptr_addr);
	}
	struct UButton GetButton_7() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 688);
		return struct UButton(ptr_addr);
	}
	struct UButton GetButton_8() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 696);
		return struct UButton(ptr_addr);
	}
	struct UButton GetButton_9() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 704);
		return struct UButton(ptr_addr);
	}
	struct UButton GetButton_10() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 712);
		return struct UButton(ptr_addr);
	}
	struct UButton GetButton_11() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 720);
		return struct UButton(ptr_addr);
	}
	struct UButton GetButton_12() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 728);
		return struct UButton(ptr_addr);
	}
	struct UButton GetButton_13() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 736);
		return struct UButton(ptr_addr);
	}
	struct UButton GetButton_14() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 744);
		return struct UButton(ptr_addr);
	}
	struct UButton GetButton_15() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 752);
		return struct UButton(ptr_addr);
	}
	struct UButton GetButton_16() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 760);
		return struct UButton(ptr_addr);
	}
	struct UButton GetButton_17() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 768);
		return struct UButton(ptr_addr);
	}
	struct UButton GetButton_18() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 776);
		return struct UButton(ptr_addr);
	}
	struct UButton GetButton_19() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 784);
		return struct UButton(ptr_addr);
	}
	struct UButton GetButton_20() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 792);
		return struct UButton(ptr_addr);
	}
	struct UButton GetButton_21() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 800);
		return struct UButton(ptr_addr);
	}
	struct UButton GetButton_22() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 808);
		return struct UButton(ptr_addr);
	}
	struct UButton GetButton_23() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 816);
		return struct UButton(ptr_addr);
	}
	struct UButton GetButton_24() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 824);
		return struct UButton(ptr_addr);
	}
	struct UImage GetMapImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 832);
		return struct UImage(ptr_addr);
	}
	struct UUniformGridPanel GetUniformGridPanel_1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 840);
		return struct UUniformGridPanel(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


