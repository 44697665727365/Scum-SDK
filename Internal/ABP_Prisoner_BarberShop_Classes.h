#pragma once 
#include <ABP_Prisoner_BarberShop_Structs.h>
 
 
 
// AnimBlueprintGeneratedClass ABP_Prisoner_BarberShop.ABP_Prisoner_BarberShop_C
// Size: 0x3E0(Inherited: 0x2E0) 
struct UABP_Prisoner_BarberShop_C : public UPrisonerAnimInstance_PrisonerCreation
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x2E0(0x8)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x2E8(0x80)
	struct FAnimNode_Root AnimGraphNode_Root;  // 0x368(0x30)
	struct FAnimNode_Slot AnimGraphNode_Slot;  // 0x398(0x48)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_Prisoner_BarberShop.ABP_Prisoner_BarberShop_C.AnimGraph
	void ExecuteUbergraph_ABP_Prisoner_BarberShop(int32_t EntryPoint); // Function ABP_Prisoner_BarberShop.ABP_Prisoner_BarberShop_C.ExecuteUbergraph_ABP_Prisoner_BarberShop
}; 



