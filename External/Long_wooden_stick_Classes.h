#pragma once 
#include <Long_wooden_stick_Structs.h>
 
 
 
class ALong_wooden_stick_C
{
public:
	ALong_wooden_stick_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMeleeAttackCollisionCapsule GetMeleeAttackCollisionCapsule() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2352);
		return struct UMeleeAttackCollisionCapsule(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


