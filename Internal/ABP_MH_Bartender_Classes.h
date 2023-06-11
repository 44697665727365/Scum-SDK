#pragma once 
#include <ABP_MH_Bartender_Structs.h>
 
 
 
// AnimBlueprintGeneratedClass ABP_MH_Bartender.ABP_MH_Bartender_C
// Size: 0xBED(Inherited: 0x2C0) 
struct UABP_MH_Bartender_C : public UAnimInstance
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x2C0(0x8)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_6;  // 0x2C8(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_5;  // 0x3D0(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4;  // 0x4D8(0x108)
	struct FAnimNode_Slot AnimGraphNode_Slot;  // 0x5E0(0x48)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose_2;  // 0x628(0x18)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0x640(0x20)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3;  // 0x660(0x108)
	struct FAnimNode_ModifyCurve AnimGraphNode_ModifyCurve;  // 0x768(0x58)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2;  // 0x7C0(0x108)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x8C8(0xA0)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose;  // 0x968(0x18)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone;  // 0x980(0x108)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0xA88(0x20)
	struct FAnimNode_Root AnimGraphNode_Root;  // 0xAA8(0x30)
	char pad_2776[8];  // 0xAD8(0x8)
	struct FTransform NeckTransform;  // 0xAE0(0x30)
	struct FTransform HeadTransform;  // 0xB10(0x30)
	struct FTransform RibcageTransform;  // 0xB40(0x30)
	struct FTransform ClavicleLTransform;  // 0xB70(0x30)
	struct FTransform ClavicleRTransform;  // 0xBA0(0x30)
	struct FRotator Rotation;  // 0xBD0(0xC)
	struct FVector HeadScale;  // 0xBDC(0xC)
	float Time;  // 0xBE8(0x4)
	char pad_3052_1 : 7;  // 0xBEC(0x1)
	bool ShouldApplyTransforms : 1;  // 0xBEC(0x1)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_MH_Bartender.ABP_MH_Bartender_C.AnimGraph
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MH_Bartender_AnimGraphNode_ModifyBone_FB5C22D7482F2DE72FAE4583DC815696(); // Function ABP_MH_Bartender.ABP_MH_Bartender_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MH_Bartender_AnimGraphNode_ModifyBone_FB5C22D7482F2DE72FAE4583DC815696
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MH_Bartender_AnimGraphNode_ModifyBone_06437ED14B426507792A2CBB9DE21751(); // Function ABP_MH_Bartender.ABP_MH_Bartender_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MH_Bartender_AnimGraphNode_ModifyBone_06437ED14B426507792A2CBB9DE21751
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MH_Bartender_AnimGraphNode_ModifyBone_D75B794C4E7059949303CCB8F87AE862(); // Function ABP_MH_Bartender.ABP_MH_Bartender_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MH_Bartender_AnimGraphNode_ModifyBone_D75B794C4E7059949303CCB8F87AE862
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MH_Bartender_AnimGraphNode_ModifyBone_320860884E826E5BDB70C9B88B1041AF(); // Function ABP_MH_Bartender.ABP_MH_Bartender_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MH_Bartender_AnimGraphNode_ModifyBone_320860884E826E5BDB70C9B88B1041AF
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MH_Bartender_AnimGraphNode_ModifyBone_D353C17B4BA426D88C1AAA9921F5D449(); // Function ABP_MH_Bartender.ABP_MH_Bartender_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MH_Bartender_AnimGraphNode_ModifyBone_D353C17B4BA426D88C1AAA9921F5D449
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP_MH_Bartender.ABP_MH_Bartender_C.BlueprintUpdateAnimation
	void ExecuteUbergraph_ABP_MH_Bartender(int32_t EntryPoint); // Function ABP_MH_Bartender.ABP_MH_Bartender_C.ExecuteUbergraph_ABP_MH_Bartender
}; 



