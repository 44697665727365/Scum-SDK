#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FExecuteUbergraph_UI_CTFRoundInfoWidget
{
public:
	FExecuteUbergraph_UI_CTFRoundInfoWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetEntryPoint() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct AGameEventBase GetK2Node_Event_gameEvent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AGameEventBase(ptr_addr);
	}
	struct ABP_CTFGameEvent_C GetK2Node_DynamicCast_AsBP_CTFGame_Event() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct ABP_CTFGameEvent_C(ptr_addr);
	}
	bool GetK2Node_DynamicCast_bSuccess() {
		return memory.read<bool>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetGameEvent
{
public:
	FSetGameEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AGameEventBase GetgameEvent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AGameEventBase(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTimeLeftText
{
public:
	FGetTimeLeftText(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetReturnValue() {
		return memory.read<struct FText>(m_addr + 0);
	}
	float GetCallFunc_GetStatusTime_ReturnValue() {
		return memory.read<float>(m_addr + 24);
	}
	bool GetCallFunc_IsValid_ReturnValue() {
		return memory.read<bool>(m_addr + 28);
	}
	float GetCallFunc_Abs_ReturnValue() {
		return memory.read<float>(m_addr + 32);
	}
	int32_t GetCallFunc_FCeil_ReturnValue() {
		return memory.read<int32_t>(m_addr + 36);
	}
	int32_t GetCallFunc_Divide_IntInt_ReturnValue() {
		return memory.read<int32_t>(m_addr + 40);
	}
	int32_t GetCallFunc_Percent_IntInt_ReturnValue() {
		return memory.read<int32_t>(m_addr + 44);
	}
	struct FText GetCallFunc_Conv_IntToText_ReturnValue() {
		return memory.read<struct FText>(m_addr + 48);
	}
	struct FText GetCallFunc_Conv_IntToText_ReturnValue_2() {
		return memory.read<struct FText>(m_addr + 72);
	}
	struct FString GetCallFunc_Conv_TextToString_ReturnValue() {
		return memory.read<struct FString>(m_addr + 96);
	}
	struct FString GetCallFunc_Conv_TextToString_ReturnValue_2() {
		return memory.read<struct FString>(m_addr + 112);
	}
	struct FString GetCallFunc_Concat_StrStr_ReturnValue() {
		return memory.read<struct FString>(m_addr + 128);
	}
	struct FString GetCallFunc_Concat_StrStr_ReturnValue_2() {
		return memory.read<struct FString>(m_addr + 144);
	}
	struct FText GetCallFunc_Conv_StringToText_ReturnValue() {
		return memory.read<struct FText>(m_addr + 160);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTimeLeftBoxVisibility
{
public:
	FGetTimeLeftBoxVisibility(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint8_t  GetReturnValue() {
		return memory.read<uint8_t >(m_addr + 0);
	}
	bool GetCallFunc_IsValid_ReturnValue() {
		return memory.read<bool>(m_addr + 1);
	}
	uint8_t  GetCallFunc_GetEventState_ReturnValue() {
		return memory.read<uint8_t >(m_addr + 2);
	}
	bool GetK2Node_SwitchEnum_CmpSuccess() {
		return memory.read<bool>(m_addr + 3);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTimeLeftDescriptionText
{
public:
	FGetTimeLeftDescriptionText(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetReturnValue() {
		return memory.read<struct FText>(m_addr + 0);
	}
	bool GetCallFunc_IsValid_ReturnValue() {
		return memory.read<bool>(m_addr + 24);
	}
	struct FGameEventParameters GetCallFunc_GetParameters_ReturnValue() {
		return memory.read<struct FGameEventParameters>(m_addr + 32);
	}
	int32_t GetCallFunc_GetCurrentRound_ReturnValue() {
		return memory.read<int32_t>(m_addr + 424);
	}
	uint8_t  GetCallFunc_GetEventState_ReturnValue() {
		return memory.read<uint8_t >(m_addr + 428);
	}
	int32_t GetCallFunc_Add_IntInt_ReturnValue() {
		return memory.read<int32_t>(m_addr + 432);
	}
	bool GetK2Node_SwitchEnum_CmpSuccess() {
		return memory.read<bool>(m_addr + 436);
	}
	bool GetCallFunc_EqualEqual_IntInt_ReturnValue() {
		return memory.read<bool>(m_addr + 437);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetRoundStatus
{
public:
	FGetRoundStatus(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetReturnValue() {
		return memory.read<struct FText>(m_addr + 0);
	}
	struct FText GetCallFunc_MakeLiteralText_ReturnValue() {
		return memory.read<struct FText>(m_addr + 24);
	}
	bool GetCallFunc_IsValid_ReturnValue() {
		return memory.read<bool>(m_addr + 48);
	}
	struct FString GetCallFunc_Conv_TextToString_ReturnValue() {
		return memory.read<struct FString>(m_addr + 56);
	}
	int32_t GetCallFunc_GetCurrentRound_ReturnValue() {
		return memory.read<int32_t>(m_addr + 72);
	}
	struct FGameEventParameters GetCallFunc_GetParameters_ReturnValue() {
		return memory.read<struct FGameEventParameters>(m_addr + 80);
	}
	int32_t GetCallFunc_Add_IntInt_ReturnValue() {
		return memory.read<int32_t>(m_addr + 472);
	}
	struct FString GetCallFunc_Conv_IntToString_ReturnValue() {
		return memory.read<struct FString>(m_addr + 480);
	}
	struct FString GetCallFunc_Conv_IntToString_ReturnValue_2() {
		return memory.read<struct FString>(m_addr + 496);
	}
	struct FString GetCallFunc_Concat_StrStr_ReturnValue() {
		return memory.read<struct FString>(m_addr + 512);
	}
	bool GetCallFunc_Greater_IntInt_ReturnValue() {
		return memory.read<bool>(m_addr + 528);
	}
	struct FString GetCallFunc_Concat_StrStr_ReturnValue_2() {
		return memory.read<struct FString>(m_addr + 536);
	}
	struct FString GetCallFunc_Concat_StrStr_ReturnValue_3() {
		return memory.read<struct FString>(m_addr + 552);
	}
	struct FText GetCallFunc_Conv_StringToText_ReturnValue() {
		return memory.read<struct FText>(m_addr + 568);
	}

private:
	std::uint64_t m_addr = 0;
};