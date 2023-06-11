#pragma once 
#include <ABP_Prisoner_PlasticSurgery_Structs.h>
 
 
 
// AnimBlueprintGeneratedClass ABP_Prisoner_PlasticSurgery.ABP_Prisoner_PlasticSurgery_C
// Size: 0x4C8(Inherited: 0x2E0) 
struct UABP_Prisoner_PlasticSurgery_C : public UPrisonerAnimInstance_PrisonerCreation
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x2E0(0x8)
	struct FAnimNode_Root AnimGraphNode_Root;  // 0x2E8(0x30)
	struct FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum;  // 0x318(0xB0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;  // 0x3C8(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x448(0x80)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_Prisoner_PlasticSurgery.ABP_Prisoner_PlasticSurgery_C.AnimGraph
	void ExecuteUbergraph_ABP_Prisoner_PlasticSurgery(int32_t EntryPoint); // Function ABP_Prisoner_PlasticSurgery.ABP_Prisoner_PlasticSurgery_C.ExecuteUbergraph_ABP_Prisoner_PlasticSurgery
}; 



