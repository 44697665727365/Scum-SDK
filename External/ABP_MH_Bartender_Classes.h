#pragma once 
#include <ABP_MH_Bartender_Structs.h>
 
 
 
class UABP_MH_Bartender_C
{
public:
	UABP_MH_Bartender_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 704);
	}
	struct FAnimNode_ModifyBone GetAnimGraphNode_ModifyBone_6() {
		return memory.read<struct FAnimNode_ModifyBone>(m_addr + 712);
	}
	struct FAnimNode_ModifyBone GetAnimGraphNode_ModifyBone_5() {
		return memory.read<struct FAnimNode_ModifyBone>(m_addr + 976);
	}
	struct FAnimNode_ModifyBone GetAnimGraphNode_ModifyBone_4() {
		return memory.read<struct FAnimNode_ModifyBone>(m_addr + 1240);
	}
	struct FAnimNode_Slot GetAnimGraphNode_Slot() {
		return memory.read<struct FAnimNode_Slot>(m_addr + 1504);
	}
	struct FAnimNode_RefPose GetAnimGraphNode_LocalRefPose_2() {
		return memory.read<struct FAnimNode_RefPose>(m_addr + 1576);
	}
	struct FAnimNode_ConvertLocalToComponentSpace GetAnimGraphNode_LocalToComponentSpace() {
		return memory.read<struct FAnimNode_ConvertLocalToComponentSpace>(m_addr + 1600);
	}
	struct FAnimNode_ModifyBone GetAnimGraphNode_ModifyBone_3() {
		return memory.read<struct FAnimNode_ModifyBone>(m_addr + 1632);
	}
	struct FAnimNode_ModifyCurve GetAnimGraphNode_ModifyCurve() {
		return memory.read<struct FAnimNode_ModifyCurve>(m_addr + 1896);
	}
	struct FAnimNode_ModifyBone GetAnimGraphNode_ModifyBone_2() {
		return memory.read<struct FAnimNode_ModifyBone>(m_addr + 1984);
	}
	struct FAnimNode_BlendListByBool GetAnimGraphNode_BlendListByBool() {
		return memory.read<struct FAnimNode_BlendListByBool>(m_addr + 2248);
	}
	struct FAnimNode_RefPose GetAnimGraphNode_LocalRefPose() {
		return memory.read<struct FAnimNode_RefPose>(m_addr + 2408);
	}
	struct FAnimNode_ModifyBone GetAnimGraphNode_ModifyBone() {
		return memory.read<struct FAnimNode_ModifyBone>(m_addr + 2432);
	}
	struct FAnimNode_ConvertComponentToLocalSpace GetAnimGraphNode_ComponentToLocalSpace() {
		return memory.read<struct FAnimNode_ConvertComponentToLocalSpace>(m_addr + 2696);
	}
	struct FAnimNode_Root GetAnimGraphNode_Root() {
		return memory.read<struct FAnimNode_Root>(m_addr + 2728);
	}
	struct FTransform GetNeckTransform() {
		return memory.read<struct FTransform>(m_addr + 2784);
	}
	struct FTransform GetHeadTransform() {
		return memory.read<struct FTransform>(m_addr + 2832);
	}
	struct FTransform GetRibcageTransform() {
		return memory.read<struct FTransform>(m_addr + 2880);
	}
	struct FTransform GetClavicleLTransform() {
		return memory.read<struct FTransform>(m_addr + 2928);
	}
	struct FTransform GetClavicleRTransform() {
		return memory.read<struct FTransform>(m_addr + 2976);
	}
	struct FRotator GetRotation() {
		return memory.read<struct FRotator>(m_addr + 3024);
	}
	struct FVector GetHeadScale() {
		return memory.read<struct FVector>(m_addr + 3036);
	}
	float GetTime() {
		return memory.read<float>(m_addr + 3048);
	}
	bool GetShouldApplyTransforms() {
		return memory.read<bool>(m_addr + 3052);
	}

private:
	std::uint64_t m_addr = 0;
};


