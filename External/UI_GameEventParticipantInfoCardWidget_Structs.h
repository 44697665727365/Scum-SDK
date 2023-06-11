#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FExecuteUbergraph_UI_GameEventParticipantInfoCardWidget
{
public:
	FExecuteUbergraph_UI_GameEventParticipantInfoCardWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetEntryPoint() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FText GetCallFunc_Conv_IntToText_ReturnValue() {
		return memory.read<struct FText>(m_addr + 8);
	}
	struct FString GetCallFunc_GetUserActiveName_ReturnValue() {
		return memory.read<struct FString>(m_addr + 32);
	}
	struct FText GetCallFunc_Conv_StringToText_ReturnValue() {
		return memory.read<struct FText>(m_addr + 48);
	}
	struct FText GetCallFunc_Conv_IntToText_ReturnValue_2() {
		return memory.read<struct FText>(m_addr + 72);
	}
	struct FText GetCallFunc_Conv_IntToText_ReturnValue_3() {
		return memory.read<struct FText>(m_addr + 96);
	}
	struct FText GetCallFunc_Conv_IntToText_ReturnValue_4() {
		return memory.read<struct FText>(m_addr + 120);
	}
	struct FText GetCallFunc_Conv_IntToText_ReturnValue_5() {
		return memory.read<struct FText>(m_addr + 144);
	}
	struct APrisoner GetK2Node_Event_prisoner() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 168);
		return struct APrisoner(ptr_addr);
	}
	struct ABP_Prisoner_C GetK2Node_DynamicCast_AsBP_Prisoner() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 176);
		return struct ABP_Prisoner_C(ptr_addr);
	}
	bool GetK2Node_DynamicCast_bSuccess() {
		return memory.read<bool>(m_addr + 184);
	}
	struct FText GetCallFunc_Conv_ByteToText_ReturnValue() {
		return memory.read<struct FText>(m_addr + 192);
	}

private:
	std::uint64_t m_addr = 0;
};class FUpdateStats
{
public:
	FUpdateStats(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct APrisoner GetPrisoner() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct APrisoner(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};