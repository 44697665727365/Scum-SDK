#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FExecuteUbergraph_BP_MenuPlayerController
{
public:
	FExecuteUbergraph_BP_MenuPlayerController(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetEntryPoint() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct APawn GetCallFunc_K2_GetPawn_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct APawn(ptr_addr);
	}
	bool GetCallFunc_IsValid_ReturnValue() {
		return memory.read<bool>(m_addr + 16);
	}
	float GetK2Node_Event_DeltaSeconds() {
		return memory.read<float>(m_addr + 20);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue() {
		return memory.read<float>(m_addr + 24);
	}
	float GetCallFunc_GetInputMouseDelta_DeltaX() {
		return memory.read<float>(m_addr + 28);
	}
	float GetCallFunc_GetInputMouseDelta_DeltaY() {
		return memory.read<float>(m_addr + 32);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_2() {
		return memory.read<float>(m_addr + 36);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_3() {
		return memory.read<float>(m_addr + 40);
	}
	struct FRotator GetCallFunc_MakeRotator_ReturnValue() {
		return memory.read<struct FRotator>(m_addr + 44);
	}
	struct FHitResult GetCallFunc_K2_AddActorWorldRotation_SweepHitResult() {
		return memory.read<struct FHitResult>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FReceiveTick
{
public:
	FReceiveTick(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetDeltaSeconds() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};