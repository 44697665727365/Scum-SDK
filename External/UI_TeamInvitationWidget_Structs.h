#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FExecuteUbergraph_UI_TeamInvitationWidget
{
public:
	FExecuteUbergraph_UI_TeamInvitationWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetEntryPoint() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FDelegate GetK2Node_CreateDelegate_OutputDelegate() {
		return memory.read<struct FDelegate>(m_addr + 4);
	}
	struct AConZSquad GetCallFunc_GetSquad_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct AConZSquad(ptr_addr);
	}
	struct AConZSquad GetCallFunc_GetSquad_ReturnValue_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return struct AConZSquad(ptr_addr);
	}
	float GetK2Node_Event_timeout() {
		return memory.read<float>(m_addr + 40);
	}
	struct FGeometry GetK2Node_Event_MyGeometry() {
		return memory.read<struct FGeometry>(m_addr + 44);
	}
	float GetK2Node_Event_InDeltaTime() {
		return memory.read<float>(m_addr + 100);
	}
	struct FTimerHandle GetCallFunc_K2_SetTimerDelegate_ReturnValue() {
		return memory.read<struct FTimerHandle>(m_addr + 104);
	}
	float GetCallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue() {
		return memory.read<float>(m_addr + 112);
	}
	int32_t GetCallFunc_FTrunc_ReturnValue() {
		return memory.read<int32_t>(m_addr + 116);
	}
	struct FString GetCallFunc_BuildString_Int_ReturnValue() {
		return memory.read<struct FString>(m_addr + 120);
	}
	bool GetCallFunc_IsValid_ReturnValue() {
		return memory.read<bool>(m_addr + 136);
	}
	struct FText GetCallFunc_Conv_StringToText_ReturnValue() {
		return memory.read<struct FText>(m_addr + 144);
	}
	bool GetCallFunc_IsSquadInvitationReceived_ReturnValue() {
		return memory.read<bool>(m_addr + 168);
	}

private:
	std::uint64_t m_addr = 0;
};class FStartTimer
{
public:
	FStartTimer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetTimeout() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FTick
{
public:
	FTick(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGeometry GetMyGeometry() {
		return memory.read<struct FGeometry>(m_addr + 0);
	}
	float GetInDeltaTime() {
		return memory.read<float>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};