#pragma once 
#include <Face_PostProcess_AnimBP_Structs.h>
 
 
 
// AnimBlueprintGeneratedClass Face_PostProcess_AnimBP.Face_PostProcess_AnimBP_C
// Size: 0x784(Inherited: 0x2C0) 
struct UFace_PostProcess_AnimBP_C : public UAnimInstance
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x2C0(0x8)
	struct FAnimNode_Root AnimGraphNode_Root;  // 0x2C8(0x30)
	struct FAnimNode_ControlRig AnimGraphNode_ControlRig;  // 0x2F8(0x368)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;  // 0x660(0x118)
	float __CustomProperty_neckCorrMultD_6FBAF1324FF64F750C4E209554793C48;  // 0x778(0x4)
	float __CustomProperty_neckCorrMultM_6FBAF1324FF64F750C4E209554793C48;  // 0x77C(0x4)
	float __CustomProperty_neckCorrMultU_6FBAF1324FF64F750C4E209554793C48;  // 0x780(0x4)

	void AnimGraph(struct FPoseLink InPose, struct FPoseLink& AnimGraph); // Function Face_PostProcess_AnimBP.Face_PostProcess_AnimBP_C.AnimGraph
	void ExecuteUbergraph_Face_PostProcess_AnimBP(int32_t EntryPoint); // Function Face_PostProcess_AnimBP.Face_PostProcess_AnimBP_C.ExecuteUbergraph_Face_PostProcess_AnimBP
}; 



