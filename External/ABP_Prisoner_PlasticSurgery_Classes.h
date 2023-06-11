#pragma once 
#include <ABP_Prisoner_PlasticSurgery_Structs.h>
 
 
 
class UABP_Prisoner_PlasticSurgery_C
{
public:
	UABP_Prisoner_PlasticSurgery_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 736);
	}
	struct FAnimNode_Root GetAnimGraphNode_Root() {
		return memory.read<struct FAnimNode_Root>(m_addr + 744);
	}
	struct FAnimNode_BlendListByEnum GetAnimGraphNode_BlendListByEnum() {
		return memory.read<struct FAnimNode_BlendListByEnum>(m_addr + 792);
	}
	struct FAnimNode_SequencePlayer GetAnimGraphNode_SequencePlayer_2() {
		return memory.read<struct FAnimNode_SequencePlayer>(m_addr + 968);
	}
	struct FAnimNode_SequencePlayer GetAnimGraphNode_SequencePlayer() {
		return memory.read<struct FAnimNode_SequencePlayer>(m_addr + 1096);
	}

private:
	std::uint64_t m_addr = 0;
};


