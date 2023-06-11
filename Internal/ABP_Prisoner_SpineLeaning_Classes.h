#pragma once 
#include <ABP_Prisoner_SpineLeaning_Structs.h>
 
 
 
// AnimBlueprintGeneratedClass ABP_Prisoner_SpineLeaning.ABP_Prisoner_SpineLeaning_C
// Size: 0x98C(Inherited: 0x2C0) 
struct UABP_Prisoner_SpineLeaning_C : public UAnimInstance
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x2C0(0x8)
	struct FAnimNode_Root AnimGraphNode_Root;  // 0x2C8(0x30)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;  // 0x2F8(0x118)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_5;  // 0x410(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4;  // 0x518(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3;  // 0x620(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2;  // 0x728(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone;  // 0x830(0x108)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x938(0x20)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0x958(0x20)
	float LeanAmount;  // 0x978(0x4)
	float Spine1LeanAngle;  // 0x97C(0x4)
	float Spine2LeanAngle;  // 0x980(0x4)
	float Spine3LeanAngle;  // 0x984(0x4)
	float RibcageLeanAngle;  // 0x988(0x4)

	void AnimGraph(struct FPoseLink InPose, struct FPoseLink& AnimGraph); // Function ABP_Prisoner_SpineLeaning.ABP_Prisoner_SpineLeaning_C.AnimGraph
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_SpineLeaning_AnimGraphNode_ModifyBone_5FAB4A1C4E652A3ACA30BB80394E75FE(); // Function ABP_Prisoner_SpineLeaning.ABP_Prisoner_SpineLeaning_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_SpineLeaning_AnimGraphNode_ModifyBone_5FAB4A1C4E652A3ACA30BB80394E75FE
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_SpineLeaning_AnimGraphNode_ModifyBone_D5F2A724426CF36597430D97858CACD2(); // Function ABP_Prisoner_SpineLeaning.ABP_Prisoner_SpineLeaning_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_SpineLeaning_AnimGraphNode_ModifyBone_D5F2A724426CF36597430D97858CACD2
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_SpineLeaning_AnimGraphNode_ModifyBone_C383BBD944F2587C3A4D5089DAF6C903(); // Function ABP_Prisoner_SpineLeaning.ABP_Prisoner_SpineLeaning_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_SpineLeaning_AnimGraphNode_ModifyBone_C383BBD944F2587C3A4D5089DAF6C903
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_SpineLeaning_AnimGraphNode_ModifyBone_5FD8259E4B3B8F00065B209AE0625CC4(); // Function ABP_Prisoner_SpineLeaning.ABP_Prisoner_SpineLeaning_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_SpineLeaning_AnimGraphNode_ModifyBone_5FD8259E4B3B8F00065B209AE0625CC4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_SpineLeaning_AnimGraphNode_ModifyBone_64A56C344D3C0A2EFC816D8AF1FEDA04(); // Function ABP_Prisoner_SpineLeaning.ABP_Prisoner_SpineLeaning_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_SpineLeaning_AnimGraphNode_ModifyBone_64A56C344D3C0A2EFC816D8AF1FEDA04
	void ExecuteUbergraph_ABP_Prisoner_SpineLeaning(int32_t EntryPoint); // Function ABP_Prisoner_SpineLeaning.ABP_Prisoner_SpineLeaning_C.ExecuteUbergraph_ABP_Prisoner_SpineLeaning
}; 



