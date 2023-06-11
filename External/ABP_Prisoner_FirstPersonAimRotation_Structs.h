#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FExecuteUbergraph_ABP_Prisoner_FirstPersonAimRotation
{
public:
	FExecuteUbergraph_ABP_Prisoner_FirstPersonAimRotation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetEntryPoint() {
		return memory.read<int32_t>(m_addr + 0);
	}
	float GetCallFunc_Divide_FloatFloat_ReturnValue() {
		return memory.read<float>(m_addr + 4);
	}
	float GetCallFunc_Divide_FloatFloat_ReturnValue_2() {
		return memory.read<float>(m_addr + 8);
	}
	struct FRotator GetCallFunc_MakeRotator_ReturnValue() {
		return memory.read<struct FRotator>(m_addr + 12);
	}
	struct FRotator GetCallFunc_MakeRotator_ReturnValue_2() {
		return memory.read<struct FRotator>(m_addr + 24);
	}
	struct FRotator GetCallFunc_MakeRotator_ReturnValue_3() {
		return memory.read<struct FRotator>(m_addr + 36);
	}
	float GetCallFunc_Divide_FloatFloat_ReturnValue_3() {
		return memory.read<float>(m_addr + 48);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue() {
		return memory.read<bool>(m_addr + 52);
	}
	float GetCallFunc_FClamp_ReturnValue() {
		return memory.read<float>(m_addr + 56);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue() {
		return memory.read<float>(m_addr + 60);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_2() {
		return memory.read<float>(m_addr + 64);
	}
	struct FVector GetCallFunc_MakeVector_ReturnValue() {
		return memory.read<struct FVector>(m_addr + 68);
	}
	struct FVector GetCallFunc_MakeVector_ReturnValue_2() {
		return memory.read<struct FVector>(m_addr + 80);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_3() {
		return memory.read<float>(m_addr + 92);
	}
	struct FVector GetCallFunc_SelectVector_ReturnValue() {
		return memory.read<struct FVector>(m_addr + 96);
	}
	struct FVector GetCallFunc_MakeVector_ReturnValue_3() {
		return memory.read<struct FVector>(m_addr + 108);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_2() {
		return memory.read<bool>(m_addr + 120);
	}
	struct FVector GetCallFunc_SelectVector_ReturnValue_2() {
		return memory.read<struct FVector>(m_addr + 124);
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