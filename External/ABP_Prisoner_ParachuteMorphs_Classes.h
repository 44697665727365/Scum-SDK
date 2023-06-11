#pragma once 
#include <ABP_Prisoner_ParachuteMorphs_Structs.h>
 
 
 
class UABP_Prisoner_ParachuteMorphs_C
{
public:
	UABP_Prisoner_ParachuteMorphs_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 736);
	}
	struct FAnimNode_Root GetAnimGraphNode_Root() {
		return memory.read<struct FAnimNode_Root>(m_addr + 744);
	}
	struct FAnimNode_SequenceEvaluator GetAnimGraphNode_SequenceEvaluator() {
		return memory.read<struct FAnimNode_SequenceEvaluator>(m_addr + 792);
	}

private:
	std::uint64_t m_addr = 0;
};


