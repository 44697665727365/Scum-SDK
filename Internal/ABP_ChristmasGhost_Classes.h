#pragma once 
#include <ABP_ChristmasGhost_Structs.h>
 
 
 
// AnimBlueprintGeneratedClass ABP_ChristmasGhost.ABP_ChristmasGhost_C
// Size: 0x358(Inherited: 0x2C0) 
struct UABP_ChristmasGhost_C : public UAnimInstance
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x2C0(0x8)
	struct FAnimNode_Root AnimGraphNode_Root;  // 0x2C8(0x30)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose;  // 0x2F8(0x18)
	struct FAnimNode_Slot AnimGraphNode_Slot;  // 0x310(0x48)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_ChristmasGhost.ABP_ChristmasGhost_C.AnimGraph
	void AnimNotify_SpawnChristmasGift(); // Function ABP_ChristmasGhost.ABP_ChristmasGhost_C.AnimNotify_SpawnChristmasGift
	void ExecuteUbergraph_ABP_ChristmasGhost(int32_t EntryPoint); // Function ABP_ChristmasGhost.ABP_ChristmasGhost_C.ExecuteUbergraph_ABP_ChristmasGhost
}; 



