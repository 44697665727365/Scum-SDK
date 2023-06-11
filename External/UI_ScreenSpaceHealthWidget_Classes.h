#pragma once 
#include <UI_ScreenSpaceHealthWidget_Structs.h>
 
 
 
class UUI_ScreenSpaceHealthWidget_C
{
public:
	UUI_ScreenSpaceHealthWidget_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 608);
	}
	struct UImage GetBackground() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UImage(ptr_addr);
	}
	struct UImage GetDisabledBar() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UImage(ptr_addr);
	}
	struct UImage GetHealthBar() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UImage(ptr_addr);
	}
	struct UMaterialInstanceDynamic Get_healthBarMat() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UMaterialInstanceDynamic(ptr_addr);
	}
	struct UMaterialInstanceDynamic Get_disabledBarMat() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct UMaterialInstanceDynamic(ptr_addr);
	}
	struct UCurveFloat GetColorCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 656);
		return struct UCurveFloat(ptr_addr);
	}
	struct FLinearColor GetColorMaxHP() {
		return memory.read<struct FLinearColor>(m_addr + 664);
	}
	struct FLinearColor GetColorMinHP() {
		return memory.read<struct FLinearColor>(m_addr + 680);
	}

private:
	std::uint64_t m_addr = 0;
};


