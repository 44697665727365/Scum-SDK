#pragma once 
#include <ABP_Prisoner_SpineLeaning_Structs.h>
 
 
 
class UABP_Prisoner_SpineLeaning_C
{
public:
	UABP_Prisoner_SpineLeaning_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 704);
	}
	struct FAnimNode_Root GetAnimGraphNode_Root() {
		return memory.read<struct FAnimNode_Root>(m_addr + 712);
	}
	struct FAnimNode_LinkedInputPose GetAnimGraphNode_LinkedInputPose() {
		return memory.read<struct FAnimNode_LinkedInputPose>(m_addr + 760);
	}
	struct FAnimNode_ModifyBone GetAnimGraphNode_ModifyBone_5() {
		return memory.read<struct FAnimNode_ModifyBone>(m_addr + 1040);
	}
	struct FAnimNode_ModifyBone GetAnimGraphNode_ModifyBone_4() {
		return memory.read<struct FAnimNode_ModifyBone>(m_addr + 1304);
	}
	struct FAnimNode_ModifyBone GetAnimGraphNode_ModifyBone_3() {
		return memory.read<struct FAnimNode_ModifyBone>(m_addr + 1568);
	}
	struct FAnimNode_ModifyBone GetAnimGraphNode_ModifyBone_2() {
		return memory.read<struct FAnimNode_ModifyBone>(m_addr + 1832);
	}
	struct FAnimNode_ModifyBone GetAnimGraphNode_ModifyBone() {
		return memory.read<struct FAnimNode_ModifyBone>(m_addr + 2096);
	}
	struct FAnimNode_ConvertComponentToLocalSpace GetAnimGraphNode_ComponentToLocalSpace() {
		return memory.read<struct FAnimNode_ConvertComponentToLocalSpace>(m_addr + 2360);
	}
	struct FAnimNode_ConvertLocalToComponentSpace GetAnimGraphNode_LocalToComponentSpace() {
		return memory.read<struct FAnimNode_ConvertLocalToComponentSpace>(m_addr + 2392);
	}
	float GetLeanAmount() {
		return memory.read<float>(m_addr + 2424);
	}
	float GetSpine1LeanAngle() {
		return memory.read<float>(m_addr + 2428);
	}
	float GetSpine2LeanAngle() {
		return memory.read<float>(m_addr + 2432);
	}
	float GetSpine3LeanAngle() {
		return memory.read<float>(m_addr + 2436);
	}
	float GetRibcageLeanAngle() {
		return memory.read<float>(m_addr + 2440);
	}

private:
	std::uint64_t m_addr = 0;
};


