#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FExecuteUbergraph_UI_GameEventLeaderboardWidget
{
public:
	FExecuteUbergraph_UI_GameEventLeaderboardWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetEntryPoint() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct UUI_GameEventLeaderboardRow_C GetCallFunc_Create_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UUI_GameEventLeaderboardRow_C(ptr_addr);
	}
	struct UVerticalBoxSlot GetCallFunc_AddChildToVerticalBox_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UVerticalBoxSlot(ptr_addr);
	}
	int32_t GetTemp_int_Variable() {
		return memory.read<int32_t>(m_addr + 24);
	}
	int32_t GetCallFunc_Add_IntInt_ReturnValue() {
		return memory.read<int32_t>(m_addr + 28);
	}
	bool GetCallFunc_GreaterEqual_IntInt_ReturnValue() {
		return memory.read<bool>(m_addr + 32);
	}
	int32_t GetCallFunc_Subtract_IntInt_ReturnValue() {
		return memory.read<int32_t>(m_addr + 36);
	}
	bool GetCallFunc_LessEqual_IntInt_ReturnValue() {
		return memory.read<bool>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FRefreshData
{
public:
	FRefreshData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint8_t  GetorderByField() {
		return memory.read<uint8_t >(m_addr + 0);
	}
	uint8_t  GetsortOrder() {
		return memory.read<uint8_t >(m_addr + 1);
	}
	bool GetCallFunc_IsStandalone_ReturnValue() {
		return memory.read<bool>(m_addr + 2);
	}

private:
	std::uint64_t m_addr = 0;
};class FUpdateList
{
public:
	FUpdateList(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FEventsRankingStatsItem> GetEventsRankingStatsItems() {
		return memory.read<struct TArray<struct FEventsRankingStatsItem>>(m_addr + 0);
	}
	struct UVerticalBox GetTargetWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UVerticalBox(ptr_addr);
	}
	int32_t GetCount() {
		return memory.read<int32_t>(m_addr + 24);
	}
	int32_t GetTemp_int_Variable() {
		return memory.read<int32_t>(m_addr + 28);
	}
	int32_t GetCallFunc_GetChildrenCount_ReturnValue() {
		return memory.read<int32_t>(m_addr + 32);
	}
	bool GetCallFunc_Array_IsValidIndex_ReturnValue() {
		return memory.read<bool>(m_addr + 36);
	}
	int32_t GetCallFunc_Subtract_IntInt_ReturnValue() {
		return memory.read<int32_t>(m_addr + 40);
	}
	bool GetCallFunc_LessEqual_IntInt_ReturnValue() {
		return memory.read<bool>(m_addr + 44);
	}
	struct UWidget GetCallFunc_GetChildAt_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UWidget(ptr_addr);
	}
	struct UUI_GameEventLeaderboardRow_C GetK2Node_DynamicCast_AsUI_Game_Event_Leaderboard_Row() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct UUI_GameEventLeaderboardRow_C(ptr_addr);
	}
	bool GetK2Node_DynamicCast_bSuccess() {
		return memory.read<bool>(m_addr + 64);
	}
	int32_t GetCallFunc_Add_IntInt_ReturnValue() {
		return memory.read<int32_t>(m_addr + 68);
	}
	int32_t GetCallFunc_Array_Length_ReturnValue() {
		return memory.read<int32_t>(m_addr + 72);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetTopShownCount
{
public:
	FSetTopShownCount(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetCount() {
		return memory.read<int32_t>(m_addr + 0);
	}
	bool GetTemp_bool_Variable() {
		return memory.read<bool>(m_addr + 4);
	}
	uint8_t  GetTemp_byte_Variable() {
		return memory.read<uint8_t >(m_addr + 5);
	}
	uint8_t  GetTemp_byte_Variable_2() {
		return memory.read<uint8_t >(m_addr + 6);
	}
	int32_t GetTemp_int_Variable() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetCallFunc_Add_IntInt_ReturnValue() {
		return memory.read<int32_t>(m_addr + 12);
	}
	bool GetCallFunc_Less_IntInt_ReturnValue() {
		return memory.read<bool>(m_addr + 16);
	}
	int32_t GetCallFunc_Add_IntInt_ReturnValue_2() {
		return memory.read<int32_t>(m_addr + 20);
	}
	uint8_t  GetK2Node_Select_Default() {
		return memory.read<uint8_t >(m_addr + 24);
	}
	int32_t GetCallFunc_Array_Length_ReturnValue() {
		return memory.read<int32_t>(m_addr + 28);
	}
	struct UWidget GetCallFunc_GetChildAt_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return struct UWidget(ptr_addr);
	}
	struct UUI_GameEventLeaderboardRow_C GetK2Node_DynamicCast_AsUI_Game_Event_Leaderboard_Row() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UUI_GameEventLeaderboardRow_C(ptr_addr);
	}
	bool GetK2Node_DynamicCast_bSuccess() {
		return memory.read<bool>(m_addr + 48);
	}
	int32_t GetCallFunc_GetChildrenCount_ReturnValue() {
		return memory.read<int32_t>(m_addr + 52);
	}
	int32_t GetCallFunc_Min_ReturnValue() {
		return memory.read<int32_t>(m_addr + 56);
	}
	int32_t GetCallFunc_Subtract_IntInt_ReturnValue() {
		return memory.read<int32_t>(m_addr + 60);
	}
	bool GetCallFunc_LessEqual_IntInt_ReturnValue() {
		return memory.read<bool>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FUpdateRankingList
{
public:
	FUpdateRankingList(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetRank() {
		return memory.read<int32_t>(m_addr + 0);
	}
	bool GetTemp_bool_Variable() {
		return memory.read<bool>(m_addr + 4);
	}
	uint8_t  GetTemp_byte_Variable() {
		return memory.read<uint8_t >(m_addr + 5);
	}
	uint8_t  GetTemp_byte_Variable_2() {
		return memory.read<uint8_t >(m_addr + 6);
	}
	bool GetCallFunc_Less_IntInt_ReturnValue() {
		return memory.read<bool>(m_addr + 7);
	}
	int32_t GetTemp_int_Variable() {
		return memory.read<int32_t>(m_addr + 8);
	}
	uint8_t  GetK2Node_Select_Default() {
		return memory.read<uint8_t >(m_addr + 12);
	}
	int32_t GetCallFunc_Add_IntInt_ReturnValue() {
		return memory.read<int32_t>(m_addr + 16);
	}
	int32_t GetCallFunc_GetChildrenCount_ReturnValue() {
		return memory.read<int32_t>(m_addr + 20);
	}
	struct UWidget GetCallFunc_GetChildAt_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct UWidget(ptr_addr);
	}
	int32_t GetCallFunc_Subtract_IntInt_ReturnValue() {
		return memory.read<int32_t>(m_addr + 32);
	}
	struct UUI_GameEventLeaderboardRow_C GetK2Node_DynamicCast_AsUI_Game_Event_Leaderboard_Row() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UUI_GameEventLeaderboardRow_C(ptr_addr);
	}
	bool GetK2Node_DynamicCast_bSuccess() {
		return memory.read<bool>(m_addr + 48);
	}
	bool GetCallFunc_LessEqual_IntInt_ReturnValue() {
		return memory.read<bool>(m_addr + 49);
	}

private:
	std::uint64_t m_addr = 0;
};class FAssignRowColor
{
public:
	FAssignRowColor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UUI_GameEventLeaderboardRow_C Getrow() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UUI_GameEventLeaderboardRow_C(ptr_addr);
	}
	int32_t GetRank() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetCallFunc_Percent_IntInt_ReturnValue() {
		return memory.read<int32_t>(m_addr + 12);
	}
	bool GetCallFunc_EqualEqual_IntInt_ReturnValue() {
		return memory.read<bool>(m_addr + 16);
	}
	bool GetCallFunc_EqualEqual_IntInt_ReturnValue_2() {
		return memory.read<bool>(m_addr + 17);
	}

private:
	std::uint64_t m_addr = 0;
};class FUpdateTopList
{
public:
	FUpdateTopList(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetTemp_int_Variable() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetCallFunc_GetChildrenCount_ReturnValue() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetCallFunc_Add_IntInt_ReturnValue() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetCallFunc_Subtract_IntInt_ReturnValue() {
		return memory.read<int32_t>(m_addr + 12);
	}
	struct UWidget GetCallFunc_GetChildAt_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UWidget(ptr_addr);
	}
	bool GetCallFunc_LessEqual_IntInt_ReturnValue() {
		return memory.read<bool>(m_addr + 24);
	}
	struct UUI_GameEventLeaderboardRow_C GetK2Node_DynamicCast_AsUI_Game_Event_Leaderboard_Row() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return struct UUI_GameEventLeaderboardRow_C(ptr_addr);
	}
	bool GetK2Node_DynamicCast_bSuccess() {
		return memory.read<bool>(m_addr + 40);
	}
	int32_t GetCallFunc_Add_IntInt_ReturnValue_2() {
		return memory.read<int32_t>(m_addr + 44);
	}

private:
	std::uint64_t m_addr = 0;
};