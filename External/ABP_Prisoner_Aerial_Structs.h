#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FExecuteUbergraph_ABP_Prisoner_Aerial
{
public:
	FExecuteUbergraph_ABP_Prisoner_Aerial(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetEntryPoint() {
		return memory.read<int32_t>(m_addr + 0);
	}
	bool GetCallFunc_GreaterEqual_FloatFloat_ReturnValue() {
		return memory.read<bool>(m_addr + 4);
	}
	float GetCallFunc_Subtract_FloatFloat_ReturnValue() {
		return memory.read<float>(m_addr + 8);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue() {
		return memory.read<float>(m_addr + 12);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_2() {
		return memory.read<float>(m_addr + 16);
	}
	bool GetCallFunc_GreaterEqual_FloatFloat_ReturnValue_2() {
		return memory.read<bool>(m_addr + 20);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_3() {
		return memory.read<float>(m_addr + 24);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_4() {
		return memory.read<float>(m_addr + 28);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_5() {
		return memory.read<float>(m_addr + 32);
	}
	bool GetCallFunc_GreaterEqual_FloatFloat_ReturnValue_3() {
		return memory.read<bool>(m_addr + 36);
	}
	float GetCallFunc_Subtract_FloatFloat_ReturnValue_2() {
		return memory.read<float>(m_addr + 40);
	}
	bool GetCallFunc_NotEqual_ObjectObject_ReturnValue() {
		return memory.read<bool>(m_addr + 44);
	}
	float GetCallFunc_SelectFloat_ReturnValue() {
		return memory.read<float>(m_addr + 48);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_6() {
		return memory.read<float>(m_addr + 52);
	}
	bool GetCallFunc_GreaterEqual_FloatFloat_ReturnValue_4() {
		return memory.read<bool>(m_addr + 56);
	}
	bool GetCallFunc_GreaterEqual_FloatFloat_ReturnValue_5() {
		return memory.read<bool>(m_addr + 57);
	}
	bool GetCallFunc_GreaterEqual_FloatFloat_ReturnValue_6() {
		return memory.read<bool>(m_addr + 58);
	}
	float GetCallFunc_Conv_BoolToFloat_ReturnValue() {
		return memory.read<float>(m_addr + 60);
	}
	float GetCallFunc_Conv_BoolToFloat_ReturnValue_2() {
		return memory.read<float>(m_addr + 64);
	}
	float GetCallFunc_FindJumpTime_ReturnValue() {
		return memory.read<float>(m_addr + 68);
	}
	float GetCallFunc_FindJumpTime_ReturnValue_2() {
		return memory.read<float>(m_addr + 72);
	}
	float GetCallFunc_FindJumpTime_ReturnValue_3() {
		return memory.read<float>(m_addr + 76);
	}
	float GetCallFunc_FindJumpTime_ReturnValue_4() {
		return memory.read<float>(m_addr + 80);
	}
	float GetCallFunc_FindJumpTime_ReturnValue_5() {
		return memory.read<float>(m_addr + 84);
	}
	float GetCallFunc_FindJumpTime_ReturnValue_6() {
		return memory.read<float>(m_addr + 88);
	}
	float GetCallFunc_FindJumpTime_ReturnValue_7() {
		return memory.read<float>(m_addr + 92);
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