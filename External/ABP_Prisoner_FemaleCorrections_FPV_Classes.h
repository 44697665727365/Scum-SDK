#pragma once 
#include <ABP_Prisoner_FemaleCorrections_FPV_Structs.h>
 
 
 
class UABP_Prisoner_FemaleCorrections_FPV_C
{
public:
	UABP_Prisoner_FemaleCorrections_FPV_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 720);
	}
	struct FAnimNode_Root GetAnimGraphNode_Root() {
		return memory.read<struct FAnimNode_Root>(m_addr + 728);
	}
	struct FAnimNode_LinkedInputPose GetAnimGraphNode_LinkedInputPose() {
		return memory.read<struct FAnimNode_LinkedInputPose>(m_addr + 776);
	}
	struct FAnimNode_ConvertComponentToLocalSpace GetAnimGraphNode_ComponentToLocalSpace() {
		return memory.read<struct FAnimNode_ConvertComponentToLocalSpace>(m_addr + 1056);
	}
	struct FAnimNode_ConvertLocalToComponentSpace GetAnimGraphNode_LocalToComponentSpace() {
		return memory.read<struct FAnimNode_ConvertLocalToComponentSpace>(m_addr + 1088);
	}
	struct FAnimNode_ModifyBone GetAnimGraphNode_ModifyBone_2() {
		return memory.read<struct FAnimNode_ModifyBone>(m_addr + 1120);
	}
	struct FAnimNode_ModifyBone GetAnimGraphNode_ModifyBone() {
		return memory.read<struct FAnimNode_ModifyBone>(m_addr + 1384);
	}

private:
	std::uint64_t m_addr = 0;
};


