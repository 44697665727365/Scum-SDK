#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FBlueprintUpdateAnimation
{
public:
	FBlueprintUpdateAnimation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetDeltaTimeX() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FExecuteUbergraph_ABP_MH_Bartender
{
public:
	FExecuteUbergraph_ABP_MH_Bartender(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetEntryPoint() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FVector GetCallFunc_BreakTransform_Location() {
		return memory.read<struct FVector>(m_addr + 4);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation() {
		return memory.read<struct FRotator>(m_addr + 16);
	}
	struct FVector GetCallFunc_BreakTransform_Scale() {
		return memory.read<struct FVector>(m_addr + 28);
	}
	struct FVector GetCallFunc_BreakTransform_Location_2() {
		return memory.read<struct FVector>(m_addr + 40);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_2() {
		return memory.read<struct FRotator>(m_addr + 52);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_2() {
		return memory.read<struct FVector>(m_addr + 64);
	}
	struct FVector GetCallFunc_BreakTransform_Location_3() {
		return memory.read<struct FVector>(m_addr + 76);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_3() {
		return memory.read<struct FRotator>(m_addr + 88);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_3() {
		return memory.read<struct FVector>(m_addr + 100);
	}
	struct FVector GetCallFunc_BreakTransform_Location_4() {
		return memory.read<struct FVector>(m_addr + 112);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_4() {
		return memory.read<struct FRotator>(m_addr + 124);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_4() {
		return memory.read<struct FVector>(m_addr + 136);
	}
	float GetK2Node_Event_DeltaTimeX() {
		return memory.read<float>(m_addr + 148);
	}
	struct APawn GetCallFunc_TryGetPawnOwner_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 152);
		return struct APawn(ptr_addr);
	}
	struct ACharacter GetK2Node_DynamicCast_AsCharacter() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 160);
		return struct ACharacter(ptr_addr);
	}
	bool GetK2Node_DynamicCast_bSuccess() {
		return memory.read<bool>(m_addr + 168);
	}
	struct ACharacter GetCallFunc_GetPlayerCharacter_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 176);
		return struct ACharacter(ptr_addr);
	}
	bool GetCallFunc_IsValid_ReturnValue() {
		return memory.read<bool>(m_addr + 184);
	}
	struct FTransform GetCallFunc_GetSocketTransform_ReturnValue() {
		return memory.read<struct FTransform>(m_addr + 192);
	}
	struct FTransform GetCallFunc_InvertTransform_ReturnValue() {
		return memory.read<struct FTransform>(m_addr + 240);
	}
	struct FVector GetCallFunc_GetActorEyesViewPoint_OutLocation() {
		return memory.read<struct FVector>(m_addr + 288);
	}
	struct FRotator GetCallFunc_GetActorEyesViewPoint_OutRotation() {
		return memory.read<struct FRotator>(m_addr + 300);
	}
	struct FVector GetCallFunc_TransformLocation_ReturnValue() {
		return memory.read<struct FVector>(m_addr + 312);
	}
	struct FTransform GetCallFunc_GetSocketTransform_ReturnValue_2() {
		return memory.read<struct FTransform>(m_addr + 336);
	}
	float GetCallFunc_BreakVector_X() {
		return memory.read<float>(m_addr + 384);
	}
	float GetCallFunc_BreakVector_Y() {
		return memory.read<float>(m_addr + 388);
	}
	float GetCallFunc_BreakVector_Z() {
		return memory.read<float>(m_addr + 392);
	}
	struct FVector GetCallFunc_MakeVector_ReturnValue() {
		return memory.read<struct FVector>(m_addr + 396);
	}
	float GetCallFunc_Subtract_FloatFloat_ReturnValue() {
		return memory.read<float>(m_addr + 408);
	}
	struct FVector GetCallFunc_Normal_ReturnValue() {
		return memory.read<struct FVector>(m_addr + 412);
	}
	struct FVector GetCallFunc_MakeVector_ReturnValue_2() {
		return memory.read<struct FVector>(m_addr + 424);
	}
	struct FTransform GetCallFunc_GetSocketTransform_ReturnValue_3() {
		return memory.read<struct FTransform>(m_addr + 448);
	}
	struct FVector GetCallFunc_Normal_ReturnValue_2() {
		return memory.read<struct FVector>(m_addr + 496);
	}
	struct FTransform GetCallFunc_GetSocketTransform_ReturnValue_4() {
		return memory.read<struct FTransform>(m_addr + 512);
	}
	struct FTransform GetCallFunc_GetSocketTransform_ReturnValue_5() {
		return memory.read<struct FTransform>(m_addr + 560);
	}
	struct FTransform GetCallFunc_GetSocketTransform_ReturnValue_6() {
		return memory.read<struct FTransform>(m_addr + 608);
	}
	struct FVector GetCallFunc_BreakTransform_Location_5() {
		return memory.read<struct FVector>(m_addr + 656);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_5() {
		return memory.read<struct FRotator>(m_addr + 668);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_5() {
		return memory.read<struct FVector>(m_addr + 680);
	}
	struct FVector GetCallFunc_MakeVector_ReturnValue_3() {
		return memory.read<struct FVector>(m_addr + 692);
	}
	struct FVector GetCallFunc_MakeVector_ReturnValue_4() {
		return memory.read<struct FVector>(m_addr + 704);
	}
	float GetCallFunc_Dot_VectorVector_ReturnValue() {
		return memory.read<float>(m_addr + 716);
	}
	float GetCallFunc_Dot_VectorVector_ReturnValue_2() {
		return memory.read<float>(m_addr + 720);
	}
	float GetCallFunc_DegAcos_ReturnValue() {
		return memory.read<float>(m_addr + 724);
	}
	float GetCallFunc_SignOfFloat_ReturnValue() {
		return memory.read<float>(m_addr + 728);
	}
	struct FVector GetCallFunc_MakeVector_ReturnValue_5() {
		return memory.read<struct FVector>(m_addr + 732);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue() {
		return memory.read<float>(m_addr + 744);
	}
	float GetCallFunc_Dot_VectorVector_ReturnValue_3() {
		return memory.read<float>(m_addr + 748);
	}
	float GetCallFunc_FClamp_ReturnValue() {
		return memory.read<float>(m_addr + 752);
	}
	float GetCallFunc_DegAcos_ReturnValue_2() {
		return memory.read<float>(m_addr + 756);
	}
	struct FRotator GetCallFunc_MakeRotator_ReturnValue() {
		return memory.read<struct FRotator>(m_addr + 760);
	}
	struct FString GetCallFunc_Conv_FloatToString_ReturnValue() {
		return memory.read<struct FString>(m_addr + 776);
	}
	struct FVector GetCallFunc_MakeVector_ReturnValue_6() {
		return memory.read<struct FVector>(m_addr + 792);
	}
	float GetCallFunc_Dot_VectorVector_ReturnValue_4() {
		return memory.read<float>(m_addr + 804);
	}
	float GetCallFunc_GetGameTimeInSeconds_ReturnValue() {
		return memory.read<float>(m_addr + 808);
	}
	float GetCallFunc_SignOfFloat_ReturnValue_2() {
		return memory.read<float>(m_addr + 812);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_2() {
		return memory.read<float>(m_addr + 816);
	}
	float GetCallFunc_FClamp_ReturnValue_2() {
		return memory.read<float>(m_addr + 820);
	}
	struct FRotator GetCallFunc_MakeRotator_ReturnValue_2() {
		return memory.read<struct FRotator>(m_addr + 824);
	}
	struct FString GetCallFunc_Conv_FloatToString_ReturnValue_2() {
		return memory.read<struct FString>(m_addr + 840);
	}
	struct FRotator GetCallFunc_ComposeRotators_ReturnValue() {
		return memory.read<struct FRotator>(m_addr + 856);
	}

private:
	std::uint64_t m_addr = 0;
};class FAnimGraph
{
public:
	FAnimGraph(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPoseLink GetAnimGraph() {
		return memory.read<struct FPoseLink>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};