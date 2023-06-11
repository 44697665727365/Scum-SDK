#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FExecuteUbergraph_ABP_ChristmasGhost
{
public:
	FExecuteUbergraph_ABP_ChristmasGhost(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetEntryPoint() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct AActor GetCallFunc_GetOwningActor_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AActor(ptr_addr);
	}
	struct ABP_ChristmasGhost_C GetK2Node_DynamicCast_AsBP_Christmas_Ghost() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct ABP_ChristmasGhost_C(ptr_addr);
	}
	bool GetK2Node_DynamicCast_bSuccess() {
		return memory.read<bool>(m_addr + 24);
	}
	struct FVector GetCallFunc_K2_GetActorLocation_ReturnValue() {
		return memory.read<struct FVector>(m_addr + 28);
	}
	struct FVector GetCallFunc_GetActorForwardVector_ReturnValue() {
		return memory.read<struct FVector>(m_addr + 40);
	}
	struct FVector GetCallFunc_GetActorUpVector_ReturnValue() {
		return memory.read<struct FVector>(m_addr + 52);
	}
	struct FVector GetCallFunc_Multiply_VectorFloat_ReturnValue() {
		return memory.read<struct FVector>(m_addr + 64);
	}
	struct FVector GetCallFunc_Multiply_VectorFloat_ReturnValue_2() {
		return memory.read<struct FVector>(m_addr + 76);
	}
	struct FVector GetCallFunc_Add_VectorVector_ReturnValue() {
		return memory.read<struct FVector>(m_addr + 88);
	}
	struct FVector GetCallFunc_Add_VectorVector_ReturnValue_2() {
		return memory.read<struct FVector>(m_addr + 100);
	}
	struct FTransform GetCallFunc_MakeTransform_ReturnValue() {
		return memory.read<struct FTransform>(m_addr + 112);
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