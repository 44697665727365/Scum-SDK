#pragma once 
#include <ABP_Prisoner_Grappled_Structs.h>
 
 
 
// AnimBlueprintGeneratedClass ABP_Prisoner_Grappled.ABP_Prisoner_Grappled_C
// Size: 0x378(Inherited: 0x2C0) 
struct UABP_Prisoner_Grappled_C : public UPrisonerAnimInstance_Grappled
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x2C0(0x8)
	struct FAnimNode_Root AnimGraphNode_Root;  // 0x2C8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x2F8(0x80)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_Prisoner_Grappled.ABP_Prisoner_Grappled_C.AnimGraph
	void ExecuteUbergraph_ABP_Prisoner_Grappled(int32_t EntryPoint); // Function ABP_Prisoner_Grappled.ABP_Prisoner_Grappled_C.ExecuteUbergraph_ABP_Prisoner_Grappled
}; 



