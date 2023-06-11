#pragma once 
#include <Face_PostProcess_AnimBP_Structs.h>
 
 
 
class UFace_PostProcess_AnimBP_C
{
public:
	UFace_PostProcess_AnimBP_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 704);
	}
	struct FAnimNode_Root GetAnimGraphNode_Root() {
		return memory.read<struct FAnimNode_Root>(m_addr + 712);
	}
	struct FAnimNode_ControlRig GetAnimGraphNode_ControlRig() {
		return memory.read<struct FAnimNode_ControlRig>(m_addr + 760);
	}
	struct FAnimNode_LinkedInputPose GetAnimGraphNode_LinkedInputPose() {
		return memory.read<struct FAnimNode_LinkedInputPose>(m_addr + 1632);
	}
	float Get__CustomProperty_neckCorrMultD_6FBAF1324FF64F750C4E209554793C48() {
		return memory.read<float>(m_addr + 1912);
	}
	float Get__CustomProperty_neckCorrMultM_6FBAF1324FF64F750C4E209554793C48() {
		return memory.read<float>(m_addr + 1916);
	}
	float Get__CustomProperty_neckCorrMultU_6FBAF1324FF64F750C4E209554793C48() {
		return memory.read<float>(m_addr + 1920);
	}

private:
	std::uint64_t m_addr = 0;
};


