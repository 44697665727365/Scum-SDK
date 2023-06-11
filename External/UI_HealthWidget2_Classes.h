#pragma once 
#include <UI_HealthWidget2_Structs.h>
 
 
 
class UUI_HealthWidget2_C
{
public:
	UUI_HealthWidget2_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 760);
	}
	struct UImage GetBackground() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 768);
		return struct UImage(ptr_addr);
	}
	struct UImage GetDisabledBar() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 776);
		return struct UImage(ptr_addr);
	}
	struct UImage GetHealthBar() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 784);
		return struct UImage(ptr_addr);
	}
	struct FLinearColor GetColorMaxHP() {
		return memory.read<struct FLinearColor>(m_addr + 792);
	}
	struct FLinearColor GetColorMinHP() {
		return memory.read<struct FLinearColor>(m_addr + 808);
	}
	struct UCurveFloat GetColorCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 824);
		return struct UCurveFloat(ptr_addr);
	}
	struct UMaterialInstanceDynamic Get_healthBarMat() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 832);
		return struct UMaterialInstanceDynamic(ptr_addr);
	}
	struct UMaterialInstanceDynamic Get_disabledBarMat() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 840);
		return struct UMaterialInstanceDynamic(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


