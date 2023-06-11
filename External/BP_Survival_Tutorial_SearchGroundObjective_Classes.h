#pragma once 
#include <BP_Survival_Tutorial_SearchGroundObjective_Structs.h>
 
 
 
class ABP_Survival_Tutorial_SearchGroundObjective_C
{
public:
	ABP_Survival_Tutorial_SearchGroundObjective_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USceneComponent GetDefaultSceneRoot() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 832);
		return struct USceneComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


