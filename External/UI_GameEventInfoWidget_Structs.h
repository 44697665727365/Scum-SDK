#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FExecuteUbergraph_UI_GameEventInfoWidget
{
public:
	FExecuteUbergraph_UI_GameEventInfoWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetEntryPoint() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FText GetCallFunc_MakeLiteralText_ReturnValue() {
		return memory.read<struct FText>(m_addr + 8);
	}
	struct FString GetCallFunc_Conv_TextToString_ReturnValue() {
		return memory.read<struct FString>(m_addr + 32);
	}
	struct AGameEventBase GetK2Node_Event__gameEvent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct AGameEventBase(ptr_addr);
	}
	int32_t GetCallFunc_GetNumberOfTeams_ReturnValue() {
		return memory.read<int32_t>(m_addr + 56);
	}
	struct FGameEventParameters GetCallFunc_GetParameters_ReturnValue() {
		return memory.read<struct FGameEventParameters>(m_addr + 64);
	}
	struct FText GetCallFunc_Conv_IntToText_ReturnValue() {
		return memory.read<struct FText>(m_addr + 456);
	}
	struct FText GetCallFunc_Conv_IntToText_ReturnValue_2() {
		return memory.read<struct FText>(m_addr + 480);
	}
	struct FText GetCallFunc_Conv_FloatToText_ReturnValue() {
		return memory.read<struct FText>(m_addr + 504);
	}
	struct FString GetCallFunc_Conv_TextToString_ReturnValue_2() {
		return memory.read<struct FString>(m_addr + 528);
	}
	struct FString GetCallFunc_Concat_StrStr_ReturnValue() {
		return memory.read<struct FString>(m_addr + 544);
	}
	struct FString GetCallFunc_Concat_StrStr_ReturnValue_2() {
		return memory.read<struct FString>(m_addr + 560);
	}
	struct FText GetCallFunc_Conv_StringToText_ReturnValue() {
		return memory.read<struct FText>(m_addr + 576);
	}

private:
	std::uint64_t m_addr = 0;
};class FUpdateStats
{
public:
	FUpdateStats(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AGameEventBase Get_gameEvent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AGameEventBase(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};