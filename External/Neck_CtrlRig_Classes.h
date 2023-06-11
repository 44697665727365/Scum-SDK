#pragma once 
#include <Neck_CtrlRig_Structs.h>
 
 
 
class UNeck_CtrlRig_C
{
public:
	UNeck_CtrlRig_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetneckCorrMultU() {
		return memory.read<float>(m_addr + 1616);
	}
	float GetneckCorrMultM() {
		return memory.read<float>(m_addr + 1620);
	}
	float GetneckCorrMultD() {
		return memory.read<float>(m_addr + 1624);
	}

private:
	std::uint64_t m_addr = 0;
};


