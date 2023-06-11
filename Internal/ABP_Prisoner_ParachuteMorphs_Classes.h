#pragma once 
#include <ABP_Prisoner_ParachuteMorphs_Structs.h>
 
 
 
// AnimBlueprintGeneratedClass ABP_Prisoner_ParachuteMorphs.ABP_Prisoner_ParachuteMorphs_C
// Size: 0x368(Inherited: 0x2E0) 
struct UABP_Prisoner_ParachuteMorphs_C : public UPrisonerAnimInstance_Parachute
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x2E0(0x8)
	struct FAnimNode_Root AnimGraphNode_Root;  // 0x2E8(0x30)
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;  // 0x318(0x50)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_Prisoner_ParachuteMorphs.ABP_Prisoner_ParachuteMorphs_C.AnimGraph
	void ExecuteUbergraph_ABP_Prisoner_ParachuteMorphs(int32_t EntryPoint); // Function ABP_Prisoner_ParachuteMorphs.ABP_Prisoner_ParachuteMorphs_C.ExecuteUbergraph_ABP_Prisoner_ParachuteMorphs
}; 



