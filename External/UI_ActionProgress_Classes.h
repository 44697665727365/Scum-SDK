#pragma once 
#include <UI_ActionProgress_Structs.h>
 
 
 
class UUI_ActionProgress_C
{
public:
	UUI_ActionProgress_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 688);
	}
	struct UImage GetBackground() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 696);
		return struct UImage(ptr_addr);
	}
	struct UImage GetCancel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 704);
		return struct UImage(ptr_addr);
	}
	struct UTextBlock Getpercent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 712);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GetPercentageText() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 720);
		return struct UTextBlock(ptr_addr);
	}
	struct UImage Getprogress() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 728);
		return struct UImage(ptr_addr);
	}
	struct UMaterialInstanceDynamic Get_progressMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 736);
		return struct UMaterialInstanceDynamic(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


