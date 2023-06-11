#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FUpdateWinCounters
{
public:
	FUpdateWinCounters(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetTemp_int_Loop_Counter_Variable() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetCallFunc_Add_IntInt_ReturnValue() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetTemp_int_Array_Index_Variable() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetTemp_int_Variable() {
		return memory.read<int32_t>(m_addr + 12);
	}
	int32_t GetCallFunc_Add_IntInt_ReturnValue_2() {
		return memory.read<int32_t>(m_addr + 16);
	}
	int32_t GetCallFunc_GetChildrenCount_ReturnValue() {
		return memory.read<int32_t>(m_addr + 20);
	}
	struct TArray<int32_t> GetCallFunc_GetWinningTeamsPerRound_ReturnValue() {
		return memory.read<struct TArray<int32_t>>(m_addr + 24);
	}
	bool GetCallFunc_LessEqual_IntInt_ReturnValue() {
		return memory.read<bool>(m_addr + 40);
	}
	int32_t GetCallFunc_Array_Get_Item() {
		return memory.read<int32_t>(m_addr + 44);
	}
	int32_t GetCallFunc_Subtract_IntInt_ReturnValue() {
		return memory.read<int32_t>(m_addr + 48);
	}
	int32_t GetCallFunc_Array_Length_ReturnValue() {
		return memory.read<int32_t>(m_addr + 52);
	}
	struct UWidget GetCallFunc_GetChildAt_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct UWidget(ptr_addr);
	}
	bool GetCallFunc_Less_IntInt_ReturnValue() {
		return memory.read<bool>(m_addr + 64);
	}
	struct UUI_CTFTeamHeaderWidget_C GetK2Node_DynamicCast_AsUI_CTFTeam_Header_Widget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 72);
		return struct UUI_CTFTeamHeaderWidget_C(ptr_addr);
	}
	bool GetK2Node_DynamicCast_bSuccess() {
		return memory.read<bool>(m_addr + 80);
	}
	struct UWidget GetCallFunc_GetChildAt_ReturnValue_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 88);
		return struct UWidget(ptr_addr);
	}
	struct UUI_CTFTeamHeaderWidget_C GetK2Node_DynamicCast_AsUI_CTFTeam_Header_Widget_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 96);
		return struct UUI_CTFTeamHeaderWidget_C(ptr_addr);
	}
	bool GetK2Node_DynamicCast_bSuccess_2() {
		return memory.read<bool>(m_addr + 104);
	}

private:
	std::uint64_t m_addr = 0;
};class FExecuteUbergraph_UI_GameEventMiniScoreboardWidget
{
public:
	FExecuteUbergraph_UI_GameEventMiniScoreboardWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetEntryPoint() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetTemp_int_Array_Index_Variable() {
		return memory.read<int32_t>(m_addr + 4);
	}
	struct UGameEventParticipantStatsWidget GetCallFunc_Create_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UGameEventParticipantStatsWidget(ptr_addr);
	}
	bool GetCallFunc_IsValidClass_ReturnValue() {
		return memory.read<bool>(m_addr + 16);
	}
	struct UPanelSlot GetCallFunc_AddChild_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct UPanelSlot(ptr_addr);
	}
	struct UGameEventParticipantStatsWidget GetCallFunc_Array_Get_Item() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return struct UGameEventParticipantStatsWidget(ptr_addr);
	}
	struct UPanelWidget GetCallFunc_GetParent_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UPanelWidget(ptr_addr);
	}
	struct UPanelSlot GetCallFunc_AddChild_ReturnValue_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UPanelSlot(ptr_addr);
	}
	bool GetCallFunc_IsValid_ReturnValue() {
		return memory.read<bool>(m_addr + 56);
	}
	int32_t GetCallFunc_GetTeamIndex_ReturnValue() {
		return memory.read<int32_t>(m_addr + 60);
	}
	bool GetCallFunc_Greater_IntInt_ReturnValue() {
		return memory.read<bool>(m_addr + 64);
	}
	int32_t GetCallFunc_Array_Length_ReturnValue() {
		return memory.read<int32_t>(m_addr + 68);
	}
	int32_t GetTemp_int_Loop_Counter_Variable() {
		return memory.read<int32_t>(m_addr + 72);
	}
	bool GetCallFunc_Less_IntInt_ReturnValue() {
		return memory.read<bool>(m_addr + 76);
	}
	int32_t GetCallFunc_Add_IntInt_ReturnValue() {
		return memory.read<int32_t>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};class FEmptyMessage
{
public:
	FEmptyMessage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint8_t  GetReturnValue() {
		return memory.read<uint8_t >(m_addr + 0);
	}
	int32_t GetCallFunc_GetChildrenCount_ReturnValue() {
		return memory.read<int32_t>(m_addr + 4);
	}
	bool GetCallFunc_Greater_IntInt_ReturnValue() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FInitInfo
{
public:
	FInitInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UGameEventTeamHeaderWidget GetCallFunc_Create_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UGameEventTeamHeaderWidget(ptr_addr);
	}
	int32_t GetCallFunc_GetNumberOfTeams_ReturnValue() {
		return memory.read<int32_t>(m_addr + 8);
	}
	struct UUI_GameEventTeamHeaderWidget_C GetK2Node_DynamicCast_AsUI_Game_Event_Team_Header_Widget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UUI_GameEventTeamHeaderWidget_C(ptr_addr);
	}
	bool GetK2Node_DynamicCast_bSuccess() {
		return memory.read<bool>(m_addr + 24);
	}
	int32_t GetCallFunc_Subtract_IntInt_ReturnValue() {
		return memory.read<int32_t>(m_addr + 28);
	}
	int32_t GetCallFunc_Max_ReturnValue() {
		return memory.read<int32_t>(m_addr + 32);
	}
	struct UUniformGridSlot GetCallFunc_AddChildToUniformGrid_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UUniformGridSlot(ptr_addr);
	}
	int32_t GetTemp_int_Variable() {
		return memory.read<int32_t>(m_addr + 48);
	}
	bool GetK2Node_SwitchInteger_CmpSuccess() {
		return memory.read<bool>(m_addr + 52);
	}
	int32_t GetCallFunc_Add_IntInt_ReturnValue() {
		return memory.read<int32_t>(m_addr + 56);
	}
	int32_t GetCallFunc_Divide_IntInt_ReturnValue() {
		return memory.read<int32_t>(m_addr + 60);
	}
	int32_t GetCallFunc_Percent_IntInt_ReturnValue() {
		return memory.read<int32_t>(m_addr + 64);
	}
	bool GetCallFunc_LessEqual_IntInt_ReturnValue() {
		return memory.read<bool>(m_addr + 68);
	}
	int32_t GetCallFunc_Add_IntInt_ReturnValue_2() {
		return memory.read<int32_t>(m_addr + 72);
	}
	bool GetCallFunc_IsValidClass_ReturnValue() {
		return memory.read<bool>(m_addr + 76);
	}

private:
	std::uint64_t m_addr = 0;
};class FUpdateTeamScores
{
public:
	FUpdateTeamScores(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetTemp_int_Variable() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetCallFunc_Add_IntInt_ReturnValue() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetCallFunc_GetChildrenCount_ReturnValue() {
		return memory.read<int32_t>(m_addr + 8);
	}
	struct UWidget GetCallFunc_GetChildAt_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UWidget(ptr_addr);
	}
	bool GetCallFunc_LessEqual_IntInt_ReturnValue() {
		return memory.read<bool>(m_addr + 24);
	}
	struct UUI_GameEventTeamHeaderWidget_C GetK2Node_DynamicCast_AsUI_Game_Event_Team_Header_Widget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return struct UUI_GameEventTeamHeaderWidget_C(ptr_addr);
	}
	bool GetK2Node_DynamicCast_bSuccess() {
		return memory.read<bool>(m_addr + 40);
	}
	int32_t GetCallFunc_Add_IntInt_ReturnValue_2() {
		return memory.read<int32_t>(m_addr + 44);
	}
	float GetCallFunc_GetTeamScore_ReturnValue() {
		return memory.read<float>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};