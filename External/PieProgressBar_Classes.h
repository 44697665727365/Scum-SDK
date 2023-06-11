#pragma once 
#include <PieProgressBar_Structs.h>
 
 
 
class UPieProgressBar_C
{
public:
	UPieProgressBar_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLinearColor GetAlarmColor() {
		return memory.read<struct FLinearColor>(m_addr + 632);
	}
	struct FLinearColor GetNormalColor() {
		return memory.read<struct FLinearColor>(m_addr + 648);
	}
	struct FLinearColor GetOuterCircleColor() {
		return memory.read<struct FLinearColor>(m_addr + 664);
	}
	struct FLinearColor GetCircularBarColor() {
		return memory.read<struct FLinearColor>(m_addr + 680);
	}

private:
	std::uint64_t m_addr = 0;
};


