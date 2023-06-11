#pragma once 
#include <ABP_Prisoner_Fishing_Structs.h>
 
 
 
class UABP_Prisoner_Fishing_C
{
public:
	UABP_Prisoner_Fishing_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 736);
	}
	struct FAnimNode_Root GetAnimGraphNode_Root() {
		return memory.read<struct FAnimNode_Root>(m_addr + 744);
	}
	struct FAnimNode_RotationOffsetBlendSpace GetAnimGraphNode_RotationOffsetBlendSpace_4() {
		return memory.read<struct FAnimNode_RotationOffsetBlendSpace>(m_addr + 792);
	}
	struct FAnimNode_LinkedInputPose GetAnimGraphNode_LinkedInputPose() {
		return memory.read<struct FAnimNode_LinkedInputPose>(m_addr + 1192);
	}
	struct FAnimNode_BlendListByBool GetAnimGraphNode_BlendListByBool_3() {
		return memory.read<struct FAnimNode_BlendListByBool>(m_addr + 1472);
	}
	struct FAnimNode_SequencePlayer GetAnimGraphNode_SequencePlayer_4() {
		return memory.read<struct FAnimNode_SequencePlayer>(m_addr + 1632);
	}
	struct FAnimNode_BlendListByBool GetAnimGraphNode_BlendListByBool_2() {
		return memory.read<struct FAnimNode_BlendListByBool>(m_addr + 1760);
	}
	struct FAnimNode_SequencePlayer GetAnimGraphNode_SequencePlayer_3() {
		return memory.read<struct FAnimNode_SequencePlayer>(m_addr + 1920);
	}
	struct FAnimNode_SequencePlayer GetAnimGraphNode_SequencePlayer_2() {
		return memory.read<struct FAnimNode_SequencePlayer>(m_addr + 2048);
	}
	struct FAnimNode_BlendListByBool GetAnimGraphNode_BlendListByBool() {
		return memory.read<struct FAnimNode_BlendListByBool>(m_addr + 2176);
	}
	struct FAnimNode_RotationOffsetBlendSpace GetAnimGraphNode_RotationOffsetBlendSpace_3() {
		return memory.read<struct FAnimNode_RotationOffsetBlendSpace>(m_addr + 2336);
	}
	struct FAnimNode_RotationOffsetBlendSpace GetAnimGraphNode_RotationOffsetBlendSpace_2() {
		return memory.read<struct FAnimNode_RotationOffsetBlendSpace>(m_addr + 2736);
	}
	struct FAnimNode_RotationOffsetBlendSpace GetAnimGraphNode_RotationOffsetBlendSpace() {
		return memory.read<struct FAnimNode_RotationOffsetBlendSpace>(m_addr + 3136);
	}
	struct FAnimNode_SequencePlayer GetAnimGraphNode_SequencePlayer() {
		return memory.read<struct FAnimNode_SequencePlayer>(m_addr + 3536);
	}

private:
	std::uint64_t m_addr = 0;
};


