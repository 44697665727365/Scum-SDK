#pragma once 
#include <ABP_Prisoner_Aerial_Structs.h>
 
 
 
class UABP_Prisoner_Aerial_C
{
public:
	UABP_Prisoner_Aerial_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 816);
	}
	struct FAnimNode_Root GetAnimGraphNode_Root() {
		return memory.read<struct FAnimNode_Root>(m_addr + 824);
	}
	struct FAnimNode_BlendListByEnum GetAnimGraphNode_BlendListByEnum_4() {
		return memory.read<struct FAnimNode_BlendListByEnum>(m_addr + 872);
	}
	struct FAnimNode_SequencePlayer GetAnimGraphNode_SequencePlayer_6() {
		return memory.read<struct FAnimNode_SequencePlayer>(m_addr + 1048);
	}
	struct FAnimNode_SequencePlayer GetAnimGraphNode_SequencePlayer_5() {
		return memory.read<struct FAnimNode_SequencePlayer>(m_addr + 1176);
	}
	struct FAnimNode_BlendListByEnum GetAnimGraphNode_BlendListByEnum_3() {
		return memory.read<struct FAnimNode_BlendListByEnum>(m_addr + 1304);
	}
	struct FAnimNode_TwoWayBlend GetAnimGraphNode_TwoWayBlend_3() {
		return memory.read<struct FAnimNode_TwoWayBlend>(m_addr + 1480);
	}
	struct FAnimNode_BlendListByEnum GetAnimGraphNode_BlendListByEnum_2() {
		return memory.read<struct FAnimNode_BlendListByEnum>(m_addr + 1680);
	}
	struct FAnimNode_SequenceEvaluator GetAnimGraphNode_SequenceEvaluator_15() {
		return memory.read<struct FAnimNode_SequenceEvaluator>(m_addr + 1856);
	}
	struct FAnimNode_SequenceEvaluator GetAnimGraphNode_SequenceEvaluator_14() {
		return memory.read<struct FAnimNode_SequenceEvaluator>(m_addr + 1936);
	}
	struct FAnimNode_BlendListByBool GetAnimGraphNode_BlendListByBool_7() {
		return memory.read<struct FAnimNode_BlendListByBool>(m_addr + 2016);
	}
	struct FAnimNode_UseCachedPose GetAnimGraphNode_UseCachedPose_22() {
		return memory.read<struct FAnimNode_UseCachedPose>(m_addr + 2176);
	}
	struct FAnimNode_SequenceEvaluator GetAnimGraphNode_SequenceEvaluator_13() {
		return memory.read<struct FAnimNode_SequenceEvaluator>(m_addr + 2216);
	}
	struct FAnimNode_UseCachedPose GetAnimGraphNode_UseCachedPose_21() {
		return memory.read<struct FAnimNode_UseCachedPose>(m_addr + 2296);
	}
	struct FAnimNode_SequenceEvaluator GetAnimGraphNode_SequenceEvaluator_12() {
		return memory.read<struct FAnimNode_SequenceEvaluator>(m_addr + 2336);
	}
	struct FAnimNode_SequenceEvaluator GetAnimGraphNode_SequenceEvaluator_11() {
		return memory.read<struct FAnimNode_SequenceEvaluator>(m_addr + 2416);
	}
	struct FAnimNode_BlendListByBool GetAnimGraphNode_BlendListByBool_6() {
		return memory.read<struct FAnimNode_BlendListByBool>(m_addr + 2496);
	}
	struct FAnimNode_SaveCachedPose GetAnimGraphNode_SaveCachedPose_9() {
		return memory.read<struct FAnimNode_SaveCachedPose>(m_addr + 2656);
	}
	struct FAnimNode_SequenceEvaluator GetAnimGraphNode_SequenceEvaluator_10() {
		return memory.read<struct FAnimNode_SequenceEvaluator>(m_addr + 3000);
	}
	struct FAnimNode_SequenceEvaluator GetAnimGraphNode_SequenceEvaluator_9() {
		return memory.read<struct FAnimNode_SequenceEvaluator>(m_addr + 3080);
	}
	struct FAnimNode_BlendListByBool GetAnimGraphNode_BlendListByBool_5() {
		return memory.read<struct FAnimNode_BlendListByBool>(m_addr + 3160);
	}
	struct FAnimNode_SequencePlayer GetAnimGraphNode_SequencePlayer_4() {
		return memory.read<struct FAnimNode_SequencePlayer>(m_addr + 3320);
	}
	struct FAnimNode_SaveCachedPose GetAnimGraphNode_SaveCachedPose_8() {
		return memory.read<struct FAnimNode_SaveCachedPose>(m_addr + 3448);
	}
	struct FAnimNode_SequenceEvaluator GetAnimGraphNode_SequenceEvaluator_8() {
		return memory.read<struct FAnimNode_SequenceEvaluator>(m_addr + 3792);
	}
	struct FAnimNode_UseCachedPose GetAnimGraphNode_UseCachedPose_20() {
		return memory.read<struct FAnimNode_UseCachedPose>(m_addr + 3872);
	}
	struct FAnimNode_SaveCachedPose GetAnimGraphNode_SaveCachedPose_7() {
		return memory.read<struct FAnimNode_SaveCachedPose>(m_addr + 3912);
	}
	struct FAnimNode_SaveCachedPose GetAnimGraphNode_SaveCachedPose_6() {
		return memory.read<struct FAnimNode_SaveCachedPose>(m_addr + 4256);
	}
	struct FAnimNode_SaveCachedPose GetAnimGraphNode_SaveCachedPose_5() {
		return memory.read<struct FAnimNode_SaveCachedPose>(m_addr + 4600);
	}
	struct FAnimNode_SaveCachedPose GetAnimGraphNode_SaveCachedPose_4() {
		return memory.read<struct FAnimNode_SaveCachedPose>(m_addr + 4944);
	}
	struct FAnimNode_SaveCachedPose GetAnimGraphNode_SaveCachedPose_3() {
		return memory.read<struct FAnimNode_SaveCachedPose>(m_addr + 5288);
	}
	struct FAnimNode_UseCachedPose GetAnimGraphNode_UseCachedPose_19() {
		return memory.read<struct FAnimNode_UseCachedPose>(m_addr + 5632);
	}
	struct FAnimNode_UseCachedPose GetAnimGraphNode_UseCachedPose_18() {
		return memory.read<struct FAnimNode_UseCachedPose>(m_addr + 5672);
	}
	struct FAnimNode_UseCachedPose GetAnimGraphNode_UseCachedPose_17() {
		return memory.read<struct FAnimNode_UseCachedPose>(m_addr + 5712);
	}
	struct FAnimNode_UseCachedPose GetAnimGraphNode_UseCachedPose_16() {
		return memory.read<struct FAnimNode_UseCachedPose>(m_addr + 5752);
	}
	struct FAnimNode_UseCachedPose GetAnimGraphNode_UseCachedPose_15() {
		return memory.read<struct FAnimNode_UseCachedPose>(m_addr + 5792);
	}
	struct FAnimNode_UseCachedPose GetAnimGraphNode_UseCachedPose_14() {
		return memory.read<struct FAnimNode_UseCachedPose>(m_addr + 5832);
	}
	struct FAnimNode_UseCachedPose GetAnimGraphNode_UseCachedPose_13() {
		return memory.read<struct FAnimNode_UseCachedPose>(m_addr + 5872);
	}
	struct FAnimNode_UseCachedPose GetAnimGraphNode_UseCachedPose_12() {
		return memory.read<struct FAnimNode_UseCachedPose>(m_addr + 5912);
	}
	struct FAnimNode_UseCachedPose GetAnimGraphNode_UseCachedPose_11() {
		return memory.read<struct FAnimNode_UseCachedPose>(m_addr + 5952);
	}
	struct FAnimNode_UseCachedPose GetAnimGraphNode_UseCachedPose_10() {
		return memory.read<struct FAnimNode_UseCachedPose>(m_addr + 5992);
	}
	struct FAnimNode_UseCachedPose GetAnimGraphNode_UseCachedPose_9() {
		return memory.read<struct FAnimNode_UseCachedPose>(m_addr + 6032);
	}
	struct FAnimNode_UseCachedPose GetAnimGraphNode_UseCachedPose_8() {
		return memory.read<struct FAnimNode_UseCachedPose>(m_addr + 6072);
	}
	struct FAnimNode_UseCachedPose GetAnimGraphNode_UseCachedPose_7() {
		return memory.read<struct FAnimNode_UseCachedPose>(m_addr + 6112);
	}
	struct FAnimNode_TwoWayBlend GetAnimGraphNode_TwoWayBlend_2() {
		return memory.read<struct FAnimNode_TwoWayBlend>(m_addr + 6152);
	}
	struct FAnimNode_SaveCachedPose GetAnimGraphNode_SaveCachedPose_2() {
		return memory.read<struct FAnimNode_SaveCachedPose>(m_addr + 6352);
	}
	struct FAnimNode_UseCachedPose GetAnimGraphNode_UseCachedPose_6() {
		return memory.read<struct FAnimNode_UseCachedPose>(m_addr + 6696);
	}
	struct FAnimNode_UseCachedPose GetAnimGraphNode_UseCachedPose_5() {
		return memory.read<struct FAnimNode_UseCachedPose>(m_addr + 6736);
	}
	struct FAnimNode_SequencePlayer GetAnimGraphNode_SequencePlayer_3() {
		return memory.read<struct FAnimNode_SequencePlayer>(m_addr + 6776);
	}
	struct FAnimNode_BlendListByEnum GetAnimGraphNode_BlendListByEnum() {
		return memory.read<struct FAnimNode_BlendListByEnum>(m_addr + 6904);
	}
	struct FAnimNode_BlendListByBool GetAnimGraphNode_BlendListByBool_4() {
		return memory.read<struct FAnimNode_BlendListByBool>(m_addr + 7080);
	}
	struct FAnimNode_BlendListByBool GetAnimGraphNode_BlendListByBool_3() {
		return memory.read<struct FAnimNode_BlendListByBool>(m_addr + 7240);
	}
	struct FAnimNode_BlendListByBool GetAnimGraphNode_BlendListByBool_2() {
		return memory.read<struct FAnimNode_BlendListByBool>(m_addr + 7400);
	}
	struct FAnimNode_BlendSpacePlayer GetAnimGraphNode_BlendSpacePlayer_2() {
		return memory.read<struct FAnimNode_BlendSpacePlayer>(m_addr + 7560);
	}
	struct FAnimNode_BlendSpacePlayer GetAnimGraphNode_BlendSpacePlayer() {
		return memory.read<struct FAnimNode_BlendSpacePlayer>(m_addr + 7792);
	}
	struct FAnimNode_SaveCachedPose GetAnimGraphNode_SaveCachedPose() {
		return memory.read<struct FAnimNode_SaveCachedPose>(m_addr + 8024);
	}
	struct FAnimNode_PoseSnapshot GetAnimGraphNode_PoseSnapshot_2() {
		return memory.read<struct FAnimNode_PoseSnapshot>(m_addr + 8368);
	}
	struct FAnimNode_UseCachedPose GetAnimGraphNode_UseCachedPose_4() {
		return memory.read<struct FAnimNode_UseCachedPose>(m_addr + 8512);
	}
	struct FAnimNode_UseCachedPose GetAnimGraphNode_UseCachedPose_3() {
		return memory.read<struct FAnimNode_UseCachedPose>(m_addr + 8552);
	}
	struct FAnimNode_UseCachedPose GetAnimGraphNode_UseCachedPose_2() {
		return memory.read<struct FAnimNode_UseCachedPose>(m_addr + 8592);
	}
	struct FAnimNode_UseCachedPose GetAnimGraphNode_UseCachedPose() {
		return memory.read<struct FAnimNode_UseCachedPose>(m_addr + 8632);
	}
	struct FAnimNode_SequenceEvaluator GetAnimGraphNode_SequenceEvaluator_7() {
		return memory.read<struct FAnimNode_SequenceEvaluator>(m_addr + 8672);
	}
	struct FAnimNode_SequencePlayer GetAnimGraphNode_SequencePlayer_2() {
		return memory.read<struct FAnimNode_SequencePlayer>(m_addr + 8752);
	}
	struct FAnimNode_BlendListByBool GetAnimGraphNode_BlendListByBool() {
		return memory.read<struct FAnimNode_BlendListByBool>(m_addr + 8880);
	}
	struct FAnimNode_SequencePlayer GetAnimGraphNode_SequencePlayer() {
		return memory.read<struct FAnimNode_SequencePlayer>(m_addr + 9040);
	}
	struct FAnimNode_LayeredBoneBlend GetAnimGraphNode_LayeredBoneBlend() {
		return memory.read<struct FAnimNode_LayeredBoneBlend>(m_addr + 9168);
	}
	struct FAnimNode_SequenceEvaluator GetAnimGraphNode_SequenceEvaluator_6() {
		return memory.read<struct FAnimNode_SequenceEvaluator>(m_addr + 9360);
	}
	struct FAnimNode_TwoWayBlend GetAnimGraphNode_TwoWayBlend() {
		return memory.read<struct FAnimNode_TwoWayBlend>(m_addr + 9440);
	}
	struct FAnimNode_PoseSnapshot GetAnimGraphNode_PoseSnapshot() {
		return memory.read<struct FAnimNode_PoseSnapshot>(m_addr + 9640);
	}
	struct FAnimNode_SequenceEvaluator GetAnimGraphNode_SequenceEvaluator_5() {
		return memory.read<struct FAnimNode_SequenceEvaluator>(m_addr + 9784);
	}
	struct FAnimNode_SequenceEvaluator GetAnimGraphNode_SequenceEvaluator_4() {
		return memory.read<struct FAnimNode_SequenceEvaluator>(m_addr + 9864);
	}
	struct FAnimNode_SequenceEvaluator GetAnimGraphNode_SequenceEvaluator_3() {
		return memory.read<struct FAnimNode_SequenceEvaluator>(m_addr + 9944);
	}
	struct FAnimNode_SequenceEvaluator GetAnimGraphNode_SequenceEvaluator_2() {
		return memory.read<struct FAnimNode_SequenceEvaluator>(m_addr + 10024);
	}
	struct FAnimNode_SequenceEvaluator GetAnimGraphNode_SequenceEvaluator() {
		return memory.read<struct FAnimNode_SequenceEvaluator>(m_addr + 10104);
	}

private:
	std::uint64_t m_addr = 0;
};


