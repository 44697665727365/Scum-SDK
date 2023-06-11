#pragma once 
#include <ABP_ChristmasGhost_Structs.h>
 
 
 
class UABP_ChristmasGhost_C
{
public:
	UABP_ChristmasGhost_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 704);
	}
	struct FAnimNode_Root GetAnimGraphNode_Root() {
		return memory.read<struct FAnimNode_Root>(m_addr + 712);
	}
	struct FAnimNode_RefPose GetAnimGraphNode_LocalRefPose() {
		return memory.read<struct FAnimNode_RefPose>(m_addr + 760);
	}
	struct FAnimNode_Slot GetAnimGraphNode_Slot() {
		return memory.read<struct FAnimNode_Slot>(m_addr + 784);
	}

private:
	std::uint64_t m_addr = 0;
};


