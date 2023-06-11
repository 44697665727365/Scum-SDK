#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FOnMouseMove
{
public:
	FOnMouseMove(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGeometry GetMyGeometry() {
		return memory.read<struct FGeometry>(m_addr + 0);
	}
	struct FPointerEvent GetMouseEvent() {
		return memory.read<struct FPointerEvent>(m_addr + 56);
	}
	struct FEventReply GetReturnValue() {
		return memory.read<struct FEventReply>(m_addr + 168);
	}
	struct FEventReply GetK2Node_MakeStruct_EventReply() {
		return memory.read<struct FEventReply>(m_addr + 352);
	}

private:
	std::uint64_t m_addr = 0;
};class FExecuteUbergraph_UI_GameEventScoreboardWidget
{
public:
	FExecuteUbergraph_UI_GameEventScoreboardWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetEntryPoint() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetTemp_int_Array_Index_Variable() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetCallFunc_Add_IntInt_ReturnValue() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetTemp_int_Loop_Counter_Variable() {
		return memory.read<int32_t>(m_addr + 12);
	}
	int32_t GetCallFunc_Add_IntInt_ReturnValue_2() {
		return memory.read<int32_t>(m_addr + 16);
	}
	struct UGameEventRoundInfoWidget GetCallFunc_Create_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct UGameEventRoundInfoWidget(ptr_addr);
	}
	bool GetCallFunc_IsValidClass_ReturnValue() {
		return memory.read<bool>(m_addr + 32);
	}
	struct UPanelSlot GetCallFunc_AddChild_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UPanelSlot(ptr_addr);
	}
	struct UUI_GameEventTeamInfoWidget_C GetCallFunc_Array_Get_Item() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UUI_GameEventTeamInfoWidget_C(ptr_addr);
	}
	int32_t GetCallFunc_Array_Length_ReturnValue() {
		return memory.read<int32_t>(m_addr + 56);
	}
	bool GetCallFunc_Less_IntInt_ReturnValue() {
		return memory.read<bool>(m_addr + 60);
	}

private:
	std::uint64_t m_addr = 0;
};class FUpdateInfoCard
{
public:
	FUpdateInfoCard(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetCallFunc_GetSelectedIndex_ReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct ACharacter GetCallFunc_GetPlayerCharacter_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct ACharacter(ptr_addr);
	}
	struct ABP_Prisoner_C GetK2Node_DynamicCast_AsBP_Prisoner() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct ABP_Prisoner_C(ptr_addr);
	}
	bool GetK2Node_DynamicCast_bSuccess() {
		return memory.read<bool>(m_addr + 24);
	}
	struct TArray<struct FGameEventParticipantInfo> GetCallFunc_GetParticipantInfo_ReturnValue() {
		return memory.read<struct TArray<struct FGameEventParticipantInfo>>(m_addr + 32);
	}
	bool GetCallFunc_Array_IsValidIndex_ReturnValue() {
		return memory.read<bool>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FArrangeTeams
{
public:
	FArrangeTeams(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetTemp_int_Array_Index_Variable() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetTemp_int_Loop_Counter_Variable() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetCallFunc_Add_IntInt_ReturnValue() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetCallFunc_Array_Length_ReturnValue() {
		return memory.read<int32_t>(m_addr + 12);
	}
	struct UGameEventParticipantStatsWidget GetCallFunc_Array_Get_Item() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UGameEventParticipantStatsWidget(ptr_addr);
	}
	bool GetCallFunc_Less_IntInt_ReturnValue() {
		return memory.read<bool>(m_addr + 24);
	}
	struct UPanelWidget GetCallFunc_GetParent_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return struct UPanelWidget(ptr_addr);
	}
	int32_t GetCallFunc_GetTeamIndex_ReturnValue() {
		return memory.read<int32_t>(m_addr + 40);
	}
	int32_t GetCallFunc_Subtract_IntInt_ReturnValue() {
		return memory.read<int32_t>(m_addr + 44);
	}
	int32_t GetCallFunc_Max_ReturnValue() {
		return memory.read<int32_t>(m_addr + 48);
	}
	bool GetCallFunc_Array_IsValidIndex_ReturnValue() {
		return memory.read<bool>(m_addr + 52);
	}
	struct UUI_GameEventTeamInfoWidget_C GetCallFunc_Array_Get_Item_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct UUI_GameEventTeamInfoWidget_C(ptr_addr);
	}
	bool GetCallFunc_NotEqual_ObjectObject_ReturnValue() {
		return memory.read<bool>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FInitTeamInfoWidgets
{
public:
	FInitTeamInfoWidgets(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetTemp_int_Variable() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetCallFunc_Percent_IntInt_ReturnValue() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetCallFunc_Divide_IntInt_ReturnValue() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetCallFunc_Add_IntInt_ReturnValue() {
		return memory.read<int32_t>(m_addr + 12);
	}
	bool GetK2Node_SwitchInteger_CmpSuccess() {
		return memory.read<bool>(m_addr + 16);
	}
	int32_t GetCallFunc_Add_IntInt_ReturnValue_2() {
		return memory.read<int32_t>(m_addr + 20);
	}
	struct FMargin GetK2Node_MakeStruct_Margin() {
		return memory.read<struct FMargin>(m_addr + 24);
	}
	struct FMargin GetK2Node_MakeStruct_Margin_2() {
		return memory.read<struct FMargin>(m_addr + 40);
	}
	struct UUI_GameEventTeamInfoWidget_C GetCallFunc_Create_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct UUI_GameEventTeamInfoWidget_C(ptr_addr);
	}
	int32_t GetTemp_int_Variable_2() {
		return memory.read<int32_t>(m_addr + 64);
	}
	struct FMargin GetK2Node_Select_Default() {
		return memory.read<struct FMargin>(m_addr + 68);
	}
	int32_t GetCallFunc_Array_Add_ReturnValue() {
		return memory.read<int32_t>(m_addr + 84);
	}
	struct UGameEventTeamHeaderWidget GetCallFunc_Create_ReturnValue_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 88);
		return struct UGameEventTeamHeaderWidget(ptr_addr);
	}
	bool GetCallFunc_IsValidClass_ReturnValue() {
		return memory.read<bool>(m_addr + 96);
	}
	struct UUI_GameEventTeamHeaderWidget_C GetK2Node_DynamicCast_AsUI_Game_Event_Team_Header_Widget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 104);
		return struct UUI_GameEventTeamHeaderWidget_C(ptr_addr);
	}
	bool GetK2Node_DynamicCast_bSuccess() {
		return memory.read<bool>(m_addr + 112);
	}
	bool GetTemp_bool_Variable() {
		return memory.read<bool>(m_addr + 113);
	}
	struct UUniformGridSlot GetCallFunc_AddChildToUniformGrid_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 120);
		return struct UUniformGridSlot(ptr_addr);
	}
	int32_t GetCallFunc_GetNumberOfTeams_ReturnValue() {
		return memory.read<int32_t>(m_addr + 128);
	}
	bool GetCallFunc_Greater_IntInt_ReturnValue() {
		return memory.read<bool>(m_addr + 132);
	}
	int32_t GetCallFunc_Subtract_IntInt_ReturnValue() {
		return memory.read<int32_t>(m_addr + 136);
	}
	int32_t GetCallFunc_Max_ReturnValue() {
		return memory.read<int32_t>(m_addr + 140);
	}
	struct FGameEventTeamColours GetK2Node_Select_Default_2() {
		return memory.read<struct FGameEventTeamColours>(m_addr + 144);
	}
	bool GetCallFunc_LessEqual_IntInt_ReturnValue() {
		return memory.read<bool>(m_addr + 240);
	}

private:
	std::uint64_t m_addr = 0;
};class FUpdateTeamScore
{
public:
	FUpdateTeamScore(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UUI_GameEventTeamInfoWidget_C GetTeamInfoWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UUI_GameEventTeamInfoWidget_C(ptr_addr);
	}
	int32_t GetTeamIndex() {
		return memory.read<int32_t>(m_addr + 8);
	}
	float GetCallFunc_GetTeamScore_ReturnValue() {
		return memory.read<float>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FUpdateWinCounters
{
public:
	FUpdateWinCounters(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UUI_GameEventTeamInfoWidget_C GetTeamInfoWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UUI_GameEventTeamInfoWidget_C(ptr_addr);
	}
	int32_t GetTeamIndex() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetTemp_int_Array_Index_Variable() {
		return memory.read<int32_t>(m_addr + 12);
	}
	int32_t GetTemp_int_Loop_Counter_Variable() {
		return memory.read<int32_t>(m_addr + 16);
	}
	int32_t GetCallFunc_Add_IntInt_ReturnValue() {
		return memory.read<int32_t>(m_addr + 20);
	}
	struct TArray<int32_t> GetCallFunc_GetWinningTeamsPerRound_ReturnValue() {
		return memory.read<struct TArray<int32_t>>(m_addr + 24);
	}
	int32_t GetCallFunc_Array_Length_ReturnValue() {
		return memory.read<int32_t>(m_addr + 40);
	}
	int32_t GetCallFunc_Array_Get_Item() {
		return memory.read<int32_t>(m_addr + 44);
	}
	bool GetCallFunc_Less_IntInt_ReturnValue() {
		return memory.read<bool>(m_addr + 48);
	}
	bool GetCallFunc_EqualEqual_IntInt_ReturnValue() {
		return memory.read<bool>(m_addr + 49);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTogglePromptVisibility
{
public:
	FGetTogglePromptVisibility(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint8_t  GetReturnValue() {
		return memory.read<uint8_t >(m_addr + 0);
	}
	bool GetTemp_bool_Variable() {
		return memory.read<bool>(m_addr + 1);
	}
	uint8_t  GetTemp_byte_Variable() {
		return memory.read<uint8_t >(m_addr + 2);
	}
	uint8_t  GetTemp_byte_Variable_2() {
		return memory.read<uint8_t >(m_addr + 3);
	}
	uint8_t  GetCallFunc_GetEventState_ReturnValue() {
		return memory.read<uint8_t >(m_addr + 4);
	}
	bool GetCallFunc_IsValid_ReturnValue() {
		return memory.read<bool>(m_addr + 5);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue() {
		return memory.read<bool>(m_addr + 6);
	}
	uint8_t  GetK2Node_Select_Default() {
		return memory.read<uint8_t >(m_addr + 7);
	}

private:
	std::uint64_t m_addr = 0;
};