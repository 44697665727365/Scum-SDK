#pragma once 
#include <ABP_Prisoner_FirstPersonAimRotation_Structs.h>
 
 
 
class UABP_Prisoner_FirstPersonAimRotation_C
{
public:
	UABP_Prisoner_FirstPersonAimRotation_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

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
	struct FAnimNode_ConvertLocalToComponentSpace GetAnimGraphNode_LocalToComponentSpace_2() {
		return memory.read<struct FAnimNode_ConvertLocalToComponentSpace>(m_addr + 1040);
	}
	struct FAnimNode_ModifyBone GetAnimGraphNode_ModifyBone_9() {
		return memory.read<struct FAnimNode_ModifyBone>(m_addr + 1072);
	}
	struct FAnimNode_ConvertComponentToLocalSpace GetAnimGraphNode_ComponentToLocalSpace_2() {
		return memory.read<struct FAnimNode_ConvertComponentToLocalSpace>(m_addr + 1336);
	}
	struct FAnimNode_ModifyBone GetAnimGraphNode_ModifyBone_8() {
		return memory.read<struct FAnimNode_ModifyBone>(m_addr + 1368);
	}
	struct FAnimNode_BlendListByBool GetAnimGraphNode_BlendListByBool() {
		return memory.read<struct FAnimNode_BlendListByBool>(m_addr + 1632);
	}
	struct FAnimNode_ModifyBone GetAnimGraphNode_ModifyBone_7() {
		return memory.read<struct FAnimNode_ModifyBone>(m_addr + 1792);
	}
	struct FAnimNode_ModifyBone GetAnimGraphNode_ModifyBone_6() {
		return memory.read<struct FAnimNode_ModifyBone>(m_addr + 2056);
	}
	struct FAnimNode_ConvertLocalToComponentSpace GetAnimGraphNode_LocalToComponentSpace() {
		return memory.read<struct FAnimNode_ConvertLocalToComponentSpace>(m_addr + 2320);
	}
	struct FAnimNode_ConvertComponentToLocalSpace GetAnimGraphNode_ComponentToLocalSpace() {
		return memory.read<struct FAnimNode_ConvertComponentToLocalSpace>(m_addr + 2352);
	}
	struct FAnimNode_SaveCachedPose GetAnimGraphNode_SaveCachedPose() {
		return memory.read<struct FAnimNode_SaveCachedPose>(m_addr + 2384);
	}
	struct FAnimNode_UseCachedPose GetAnimGraphNode_UseCachedPose_2() {
		return memory.read<struct FAnimNode_UseCachedPose>(m_addr + 2728);
	}
	struct FAnimNode_UseCachedPose GetAnimGraphNode_UseCachedPose() {
		return memory.read<struct FAnimNode_UseCachedPose>(m_addr + 2768);
	}
	struct FAnimNode_ModifyBone GetAnimGraphNode_ModifyBone_5() {
		return memory.read<struct FAnimNode_ModifyBone>(m_addr + 2808);
	}
	struct FAnimNode_ModifyBone GetAnimGraphNode_ModifyBone_4() {
		return memory.read<struct FAnimNode_ModifyBone>(m_addr + 3072);
	}
	struct FAnimNode_ModifyBone GetAnimGraphNode_ModifyBone_3() {
		return memory.read<struct FAnimNode_ModifyBone>(m_addr + 3336);
	}
	struct FAnimNode_ModifyBone GetAnimGraphNode_ModifyBone_2() {
		return memory.read<struct FAnimNode_ModifyBone>(m_addr + 3600);
	}
	struct FAnimNode_ModifyBone GetAnimGraphNode_ModifyBone() {
		return memory.read<struct FAnimNode_ModifyBone>(m_addr + 3864);
	}
	float GetFirstPersonAimPitch() {
		return memory.read<float>(m_addr + 4128);
	}
	float GetFirstPersonAimYawDelta() {
		return memory.read<float>(m_addr + 4132);
	}
	bool GetShouldApplyArmsPitchCorrection() {
		return memory.read<bool>(m_addr + 4136);
	}
	uint8_t  Getstance() {
		return memory.read<uint8_t >(m_addr + 4137);
	}

private:
	std::uint64_t m_addr = 0;
};


