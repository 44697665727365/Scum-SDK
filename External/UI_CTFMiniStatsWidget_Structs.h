#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FExecuteUbergraph_UI_CTFMiniStatsWidget
{
public:
	FExecuteUbergraph_UI_CTFMiniStatsWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetEntryPoint() {
		return memory.read<int32_t>(m_addr + 0);
	}
	bool GetTemp_bool_Variable() {
		return memory.read<bool>(m_addr + 4);
	}
	struct AGameEventBase GetCallFunc_GetGameEvent_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AGameEventBase(ptr_addr);
	}
	int32_t GetCallFunc_GetCurrentRound_ReturnValue() {
		return memory.read<int32_t>(m_addr + 16);
	}
	struct TArray<struct FGameEventParticipantInfo> GetCallFunc_GetParticipantInfo_ReturnValue() {
		return memory.read<struct TArray<struct FGameEventParticipantInfo>>(m_addr + 24);
	}
	bool GetCallFunc_GreaterEqual_IntInt_ReturnValue() {
		return memory.read<bool>(m_addr + 40);
	}
	int32_t GetCallFunc_GetIndex_ReturnValue() {
		return memory.read<int32_t>(m_addr + 44);
	}
	bool GetCallFunc_IsValid_ReturnValue() {
		return memory.read<bool>(m_addr + 48);
	}
	struct UGameEventParticipantStats GetCallFunc_Array_Get_Item() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct UGameEventParticipantStats(ptr_addr);
	}
	bool GetCallFunc_Array_IsValidIndex_ReturnValue() {
		return memory.read<bool>(m_addr + 64);
	}
	struct FText GetCallFunc_Conv_StringToText_ReturnValue() {
		return memory.read<struct FText>(m_addr + 72);
	}
	struct UGameEventParticipantStats GetK2Node_Select_Default() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 96);
		return struct UGameEventParticipantStats(ptr_addr);
	}
	struct UCTFParticipantStats GetK2Node_DynamicCast_AsCTFParticipant_Stats() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 104);
		return struct UCTFParticipantStats(ptr_addr);
	}
	bool GetK2Node_DynamicCast_bSuccess() {
		return memory.read<bool>(m_addr + 112);
	}
	float GetCallFunc_GetScore_ReturnValue() {
		return memory.read<float>(m_addr + 116);
	}
	int32_t GetCallFunc_GetEnemyKills_ReturnValue() {
		return memory.read<int32_t>(m_addr + 120);
	}
	struct FText GetCallFunc_Conv_FloatToText_ReturnValue() {
		return memory.read<struct FText>(m_addr + 128);
	}
	struct FText GetCallFunc_Conv_IntToText_ReturnValue() {
		return memory.read<struct FText>(m_addr + 152);
	}
	int32_t GetCallFunc_GetDeaths_ReturnValue() {
		return memory.read<int32_t>(m_addr + 176);
	}
	struct FText GetCallFunc_Conv_IntToText_ReturnValue_2() {
		return memory.read<struct FText>(m_addr + 184);
	}
	struct FText GetCallFunc_Conv_IntToText_ReturnValue_3() {
		return memory.read<struct FText>(m_addr + 208);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetColor
{
public:
	FGetColor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLinearColor GetReturnValue() {
		return memory.read<struct FLinearColor>(m_addr + 0);
	}
	struct FLinearColor GetK2Node_MakeStruct_LinearColor() {
		return memory.read<struct FLinearColor>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};