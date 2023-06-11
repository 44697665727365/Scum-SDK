#pragma once 
#include <ABP_Prisoner_FemaleCorrections_TPV_Structs.h>
 
 
 
// AnimBlueprintGeneratedClass ABP_Prisoner_FemaleCorrections_TPV.ABP_Prisoner_FemaleCorrections_TPV_C
// Size: 0xEB0(Inherited: 0x2D0) 
struct UABP_Prisoner_FemaleCorrections_TPV_C : public UPrisonerAnimInstance_FemaleCorrections
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x2D0(0x8)
	struct FAnimNode_Root AnimGraphNode_Root;  // 0x2D8(0x30)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;  // 0x308(0x118)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x420(0x20)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0x440(0x20)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_10;  // 0x460(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_9;  // 0x568(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_8;  // 0x670(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_7;  // 0x778(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_6;  // 0x880(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_5;  // 0x988(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4;  // 0xA90(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3;  // 0xB98(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2;  // 0xCA0(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone;  // 0xDA8(0x108)

	void AnimGraph(struct FPoseLink InPose, struct FPoseLink& AnimGraph); // Function ABP_Prisoner_FemaleCorrections_TPV.ABP_Prisoner_FemaleCorrections_TPV_C.AnimGraph
	void ExecuteUbergraph_ABP_Prisoner_FemaleCorrections_TPV(int32_t EntryPoint); // Function ABP_Prisoner_FemaleCorrections_TPV.ABP_Prisoner_FemaleCorrections_TPV_C.ExecuteUbergraph_ABP_Prisoner_FemaleCorrections_TPV
}; 



