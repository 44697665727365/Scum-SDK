#pragma once 
#include <ABP_Prisoner_FemaleCorrections_TPV_Structs.h>
 
 
 
class UABP_Prisoner_FemaleCorrections_TPV_C
{
public:
	UABP_Prisoner_FemaleCorrections_TPV_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

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
	struct FAnimNode_ModifyBone GetAnimGraphNode_ModifyBone_10() {
		return memory.read<struct FAnimNode_ModifyBone>(m_addr + 1120);
	}
	struct FAnimNode_ModifyBone GetAnimGraphNode_ModifyBone_9() {
		return memory.read<struct FAnimNode_ModifyBone>(m_addr + 1384);
	}
	struct FAnimNode_ModifyBone GetAnimGraphNode_ModifyBone_8() {
		return memory.read<struct FAnimNode_ModifyBone>(m_addr + 1648);
	}
	struct FAnimNode_ModifyBone GetAnimGraphNode_ModifyBone_7() {
		return memory.read<struct FAnimNode_ModifyBone>(m_addr + 1912);
	}
	struct FAnimNode_ModifyBone GetAnimGraphNode_ModifyBone_6() {
		return memory.read<struct FAnimNode_ModifyBone>(m_addr + 2176);
	}
	struct FAnimNode_ModifyBone GetAnimGraphNode_ModifyBone_5() {
		return memory.read<struct FAnimNode_ModifyBone>(m_addr + 2440);
	}
	struct FAnimNode_ModifyBone GetAnimGraphNode_ModifyBone_4() {
		return memory.read<struct FAnimNode_ModifyBone>(m_addr + 2704);
	}
	struct FAnimNode_ModifyBone GetAnimGraphNode_ModifyBone_3() {
		return memory.read<struct FAnimNode_ModifyBone>(m_addr + 2968);
	}
	struct FAnimNode_ModifyBone GetAnimGraphNode_ModifyBone_2() {
		return memory.read<struct FAnimNode_ModifyBone>(m_addr + 3232);
	}
	struct FAnimNode_ModifyBone GetAnimGraphNode_ModifyBone() {
		return memory.read<struct FAnimNode_ModifyBone>(m_addr + 3496);
	}

private:
	std::uint64_t m_addr = 0;
};


