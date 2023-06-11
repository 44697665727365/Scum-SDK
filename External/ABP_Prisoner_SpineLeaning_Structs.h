#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FExecuteUbergraph_ABP_Prisoner_SpineLeaning
{
public:
	FExecuteUbergraph_ABP_Prisoner_SpineLeaning(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetEntryPoint() {
		return memory.read<int32_t>(m_addr + 0);
	}
	float GetCallFunc_Abs_ReturnValue() {
		return memory.read<float>(m_addr + 4);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue() {
		return memory.read<float>(m_addr + 8);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_2() {
		return memory.read<float>(m_addr + 12);
	}
	struct FVector GetCallFunc_MakeVector_ReturnValue() {
		return memory.read<struct FVector>(m_addr + 16);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_3() {
		return memory.read<float>(m_addr + 28);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_4() {
		return memory.read<float>(m_addr + 32);
	}
	struct FRotator GetCallFunc_MakeRotator_ReturnValue() {
		return memory.read<struct FRotator>(m_addr + 36);
	}
	struct FRotator GetCallFunc_MakeRotator_ReturnValue_2() {
		return memory.read<struct FRotator>(m_addr + 48);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_5() {
		return memory.read<float>(m_addr + 60);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_6() {
		return memory.read<float>(m_addr + 64);
	}
	struct FRotator GetCallFunc_MakeRotator_ReturnValue_3() {
		return memory.read<struct FRotator>(m_addr + 68);
	}
	struct FRotator GetCallFunc_MakeRotator_ReturnValue_4() {
		return memory.read<struct FRotator>(m_addr + 80);
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