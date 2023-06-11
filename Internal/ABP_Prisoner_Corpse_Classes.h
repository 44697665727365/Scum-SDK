#pragma once 
#include <ABP_Prisoner_Corpse_Structs.h>
 
 
 
// AnimBlueprintGeneratedClass ABP_Prisoner_Corpse.ABP_Prisoner_Corpse_C
// Size: 0x4D8(Inherited: 0x2C0) 
struct UABP_Prisoner_Corpse_C : public UAnimInstance
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x2C0(0x8)
	struct FAnimNode_Root AnimGraphNode_Root;  // 0x2C8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x2F8(0x80)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;  // 0x378(0xC0)
	struct FAnimNode_LinkedAnimGraph AnimGraphNode_LinkedAnimGraph;  // 0x438(0xA0)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_Prisoner_Corpse.ABP_Prisoner_Corpse_C.AnimGraph
	void ExecuteUbergraph_ABP_Prisoner_Corpse(int32_t EntryPoint); // Function ABP_Prisoner_Corpse.ABP_Prisoner_Corpse_C.ExecuteUbergraph_ABP_Prisoner_Corpse
}; 



