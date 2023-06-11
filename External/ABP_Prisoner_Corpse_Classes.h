#pragma once 
#include <ABP_Prisoner_Corpse_Structs.h>
 
 
 
class UABP_Prisoner_Corpse_C
{
public:
	UABP_Prisoner_Corpse_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 704);
	}
	struct FAnimNode_Root GetAnimGraphNode_Root() {
		return memory.read<struct FAnimNode_Root>(m_addr + 712);
	}
	struct FAnimNode_SequencePlayer GetAnimGraphNode_SequencePlayer() {
		return memory.read<struct FAnimNode_SequencePlayer>(m_addr + 760);
	}
	struct FAnimNode_LayeredBoneBlend GetAnimGraphNode_LayeredBoneBlend() {
		return memory.read<struct FAnimNode_LayeredBoneBlend>(m_addr + 888);
	}
	struct FAnimNode_LinkedAnimGraph GetAnimGraphNode_LinkedAnimGraph() {
		return memory.read<struct FAnimNode_LinkedAnimGraph>(m_addr + 1080);
	}

private:
	std::uint64_t m_addr = 0;
};


