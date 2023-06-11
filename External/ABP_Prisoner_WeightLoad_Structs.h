#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FExecuteUbergraph_ABP_Prisoner_WeightLoad
{
public:
	FExecuteUbergraph_ABP_Prisoner_WeightLoad(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetEntryPoint() {
		return memory.read<int32_t>(m_addr + 0);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue() {
		return memory.read<float>(m_addr + 4);
	}
	float GetCallFunc_Lerp_ReturnValue() {
		return memory.read<float>(m_addr + 8);
	}
	struct FRotator GetCallFunc_MakeRotator_ReturnValue() {
		return memory.read<struct FRotator>(m_addr + 12);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_2() {
		return memory.read<float>(m_addr + 24);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_3() {
		return memory.read<float>(m_addr + 28);
	}
	struct FRotator GetCallFunc_MakeRotator_ReturnValue_2() {
		return memory.read<struct FRotator>(m_addr + 32);
	}
	struct FRotator GetCallFunc_MakeRotator_ReturnValue_3() {
		return memory.read<struct FRotator>(m_addr + 44);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_4() {
		return memory.read<float>(m_addr + 56);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_5() {
		return memory.read<float>(m_addr + 60);
	}
	struct FRotator GetCallFunc_MakeRotator_ReturnValue_4() {
		return memory.read<struct FRotator>(m_addr + 64);
	}
	struct FRotator GetCallFunc_MakeRotator_ReturnValue_5() {
		return memory.read<struct FRotator>(m_addr + 76);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_6() {
		return memory.read<float>(m_addr + 88);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_7() {
		return memory.read<float>(m_addr + 92);
	}
	struct FRotator GetCallFunc_MakeRotator_ReturnValue_6() {
		return memory.read<struct FRotator>(m_addr + 96);
	}
	struct FRotator GetCallFunc_MakeRotator_ReturnValue_7() {
		return memory.read<struct FRotator>(m_addr + 108);
	}

private:
	std::uint64_t m_addr = 0;
};class FAnimGraph
{
public:
	FAnimGraph(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPoseLink GetInPose() {
		return memory.read<struct FPoseLink>(m_addr + 0);
	}
	struct FPoseLink GetAnimGraph() {
		return memory.read<struct FPoseLink>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};