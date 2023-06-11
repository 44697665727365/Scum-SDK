#pragma once 
#include <1H_ImprovisedKnife_Structs.h>
 
 
 
class A1H_ImprovisedKnife_C
{
public:
	A1H_ImprovisedKnife_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMeleeAttackCollisionCapsule GetMeleeAttackCollisionCapsule() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2336);
		return struct UMeleeAttackCollisionCapsule(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


