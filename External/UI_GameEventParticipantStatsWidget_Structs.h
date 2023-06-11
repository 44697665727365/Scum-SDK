#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FGetInactiveOverlayVisibility
{
public:
	FGetInactiveOverlayVisibility(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint8_t  GetReturnValue() {
		return memory.read<uint8_t >(m_addr + 0);
	}
	bool GetCallFunc_IsValid_ReturnValue() {
		return memory.read<bool>(m_addr + 1);
	}
	int32_t GetCallFunc_GetIndex_ReturnValue() {
		return memory.read<int32_t>(m_addr + 4);
	}
	struct AGameEventBase GetCallFunc_GetGameEvent_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AGameEventBase(ptr_addr);
	}
	struct TArray<struct FGameEventParticipantInfo> GetCallFunc_GetParticipantInfo_ReturnValue() {
		return memory.read<struct TArray<struct FGameEventParticipantInfo>>(m_addr + 16);
	}
	bool GetCallFunc_NotEqual_ByteByte_ReturnValue() {
		return memory.read<bool>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnMouseEnter
{
public:
	FOnMouseEnter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGeometry GetMyGeometry() {
		return memory.read<struct FGeometry>(m_addr + 0);
	}
	struct FPointerEvent GetMouseEvent() {
		return memory.read<struct FPointerEvent>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FExecuteUbergraph_UI_GameEventParticipantStatsWidget
{
public:
	FExecuteUbergraph_UI_GameEventParticipantStatsWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetEntryPoint() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FGeometry GetK2Node_Event_MyGeometry() {
		return memory.read<struct FGeometry>(m_addr + 4);
	}
	struct FPointerEvent GetK2Node_Event_MouseEvent_2() {
		return memory.read<struct FPointerEvent>(m_addr + 64);
	}
	bool GetCallFunc_IsValid_ReturnValue() {
		return memory.read<bool>(m_addr + 176);
	}
	struct FPointerEvent GetK2Node_Event_MouseEvent() {
		return memory.read<struct FPointerEvent>(m_addr + 184);
	}
	bool GetCallFunc_IsValid_ReturnValue_2() {
		return memory.read<bool>(m_addr + 296);
	}
	struct UGameEventScoreboardWidget GetCallFunc_GetScoreboard_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 304);
		return struct UGameEventScoreboardWidget(ptr_addr);
	}
	int32_t GetCallFunc_GetIndex_ReturnValue() {
		return memory.read<int32_t>(m_addr + 312);
	}
	struct UGameEventScoreboardWidget GetCallFunc_GetScoreboard_ReturnValue_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 320);
		return struct UGameEventScoreboardWidget(ptr_addr);
	}
	struct FGameEventTeamColours GetK2Node_Event_colours() {
		return memory.read<struct FGameEventTeamColours>(m_addr + 328);
	}
	bool GetCallFunc_IsValid_ReturnValue_3() {
		return memory.read<bool>(m_addr + 424);
	}
	struct UGameEventScoreboardWidget GetCallFunc_GetScoreboard_ReturnValue_3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 432);
		return struct UGameEventScoreboardWidget(ptr_addr);
	}
	struct AGameEventBase GetCallFunc_GetGameEvent_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 440);
		return struct AGameEventBase(ptr_addr);
	}
	bool GetCallFunc_IsValid_ReturnValue_4() {
		return memory.read<bool>(m_addr + 448);
	}
	int32_t GetCallFunc_GetNumberOfTeams_ReturnValue() {
		return memory.read<int32_t>(m_addr + 452);
	}
	bool GetCallFunc_BooleanAND_ReturnValue() {
		return memory.read<bool>(m_addr + 456);
	}
	bool GetCallFunc_Greater_IntInt_ReturnValue() {
		return memory.read<bool>(m_addr + 457);
	}
	struct TArray<struct FGameEventParticipantInfo> GetCallFunc_GetParticipantInfo_ReturnValue() {
		return memory.read<struct TArray<struct FGameEventParticipantInfo>>(m_addr + 464);
	}
	int32_t GetCallFunc_GetIndex_ReturnValue_2() {
		return memory.read<int32_t>(m_addr + 480);
	}
	bool GetCallFunc_Array_IsValidIndex_ReturnValue() {
		return memory.read<bool>(m_addr + 484);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_2() {
		return memory.read<bool>(m_addr + 485);
	}
	int32_t GetCallFunc_Max_ReturnValue() {
		return memory.read<int32_t>(m_addr + 488);
	}
	bool GetCallFunc_NotEqual_IntInt_ReturnValue() {
		return memory.read<bool>(m_addr + 492);
	}
	struct AGameEventBase GetCallFunc_GetGameEvent_ReturnValue_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 496);
		return struct AGameEventBase(ptr_addr);
	}
	struct TArray<struct FGameEventParticipantInfo> GetCallFunc_GetParticipantInfo_ReturnValue_2() {
		return memory.read<struct TArray<struct FGameEventParticipantInfo>>(m_addr + 504);
	}
	int32_t GetCallFunc_GetIndex_ReturnValue_3() {
		return memory.read<int32_t>(m_addr + 520);
	}
	struct AGameEventBase GetCallFunc_GetGameEvent_ReturnValue_3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 528);
		return struct AGameEventBase(ptr_addr);
	}
	bool GetCallFunc_Array_IsValidIndex_ReturnValue_2() {
		return memory.read<bool>(m_addr + 536);
	}
	bool GetCallFunc_IsValid_ReturnValue_5() {
		return memory.read<bool>(m_addr + 537);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetColours
{
public:
	FSetColours(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGameEventTeamColours Getcolours() {
		return memory.read<struct FGameEventTeamColours>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnMouseLeave
{
public:
	FOnMouseLeave(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerEvent GetMouseEvent() {
		return memory.read<struct FPointerEvent>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSelectedOverlayVisiblity
{
public:
	FGetSelectedOverlayVisiblity(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint8_t  GetReturnValue() {
		return memory.read<uint8_t >(m_addr + 0);
	}
	bool GetCallFunc_IsOwning_ReturnValue() {
		return memory.read<bool>(m_addr + 1);
	}
	bool GetCallFunc_IsValid_ReturnValue() {
		return memory.read<bool>(m_addr + 2);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsOwning
{
public:
	FIsOwning(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}
	bool GetCallFunc_IsValid_ReturnValue() {
		return memory.read<bool>(m_addr + 1);
	}
	int32_t GetCallFunc_GetIndex_ReturnValue() {
		return memory.read<int32_t>(m_addr + 4);
	}
	struct ACharacter GetCallFunc_GetPlayerCharacter_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct ACharacter(ptr_addr);
	}
	struct AGameEventBase GetCallFunc_GetGameEvent_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct AGameEventBase(ptr_addr);
	}
	struct TArray<struct FGameEventParticipantInfo> GetCallFunc_GetParticipantInfo_ReturnValue() {
		return memory.read<struct TArray<struct FGameEventParticipantInfo>>(m_addr + 24);
	}
	bool GetCallFunc_EqualEqual_ObjectObject_ReturnValue() {
		return memory.read<bool>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FUpdateNumber
{
public:
	FUpdateNumber(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetReturnValue() {
		return memory.read<struct FText>(m_addr + 0);
	}
	struct UPanelWidget GetCallFunc_GetParent_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct UPanelWidget(ptr_addr);
	}
	bool GetCallFunc_IsValid_ReturnValue() {
		return memory.read<bool>(m_addr + 32);
	}
	bool GetCallFunc_IsValid_ReturnValue_2() {
		return memory.read<bool>(m_addr + 33);
	}
	int32_t GetCallFunc_GetChildIndex_ReturnValue() {
		return memory.read<int32_t>(m_addr + 36);
	}
	int32_t GetCallFunc_Add_IntInt_ReturnValue() {
		return memory.read<int32_t>(m_addr + 40);
	}
	struct FText GetCallFunc_Conv_IntToText_ReturnValue() {
		return memory.read<struct FText>(m_addr + 48);
	}
	int32_t GetCallFunc_Percent_IntInt_ReturnValue() {
		return memory.read<int32_t>(m_addr + 72);
	}
	bool GetCallFunc_NotEqual_IntInt_ReturnValue() {
		return memory.read<bool>(m_addr + 76);
	}

private:
	std::uint64_t m_addr = 0;
};class FUpdateTeamColor
{
public:
	FUpdateTeamColor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetTeamIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct UGameEventScoreboardWidget GetCallFunc_GetScoreboard_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UGameEventScoreboardWidget(ptr_addr);
	}
	struct UGameEventScoreboardWidget GetCallFunc_GetScoreboard_ReturnValue_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UGameEventScoreboardWidget(ptr_addr);
	}
	struct UUI_GameEventMiniScoreboardWidget_C GetK2Node_DynamicCast_AsUI_Game_Event_Mini_Scoreboard_Widget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct UUI_GameEventMiniScoreboardWidget_C(ptr_addr);
	}
	bool GetK2Node_DynamicCast_bSuccess() {
		return memory.read<bool>(m_addr + 32);
	}
	struct UUI_GameEventScoreboardWidget_C GetK2Node_DynamicCast_AsUI_Game_Event_Scoreboard_Widget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UUI_GameEventScoreboardWidget_C(ptr_addr);
	}
	bool GetK2Node_DynamicCast_bSuccess_2() {
		return memory.read<bool>(m_addr + 48);
	}
	bool GetCallFunc_Array_IsValidIndex_ReturnValue() {
		return memory.read<bool>(m_addr + 49);
	}
	bool GetCallFunc_Array_IsValidIndex_ReturnValue_2() {
		return memory.read<bool>(m_addr + 50);
	}

private:
	std::uint64_t m_addr = 0;
};