#pragma once 
#include <BP_SphereMotionTriggerComponent_Structs.h>
 
 
 
class UBP_SphereMotionTriggerComponent_C
{
public:
	UBP_SphereMotionTriggerComponent_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 1344);
	}

private:
	std::uint64_t m_addr = 0;
};


