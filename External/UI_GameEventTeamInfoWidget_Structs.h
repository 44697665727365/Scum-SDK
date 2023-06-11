#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FRemoveStatWidget
{
public:
	FRemoveStatWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UGameEventParticipantStatsWidget GetWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UGameEventParticipantStatsWidget(ptr_addr);
	}
	bool GetCallFunc_HasChild_ReturnValue() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FExecuteUbergraph_UI_GameEventTeamInfoWidget
{
public:
	FExecuteUbergraph_UI_GameEventTeamInfoWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetEntryPoint() {
		return memory.read<int32_t>(m_addr + 0);
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

private:
	std::uint64_t m_addr = 0;
};class FClearWinCounters
{
public:
	FClearWinCounters(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetCallFunc_IsValid_ReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddHeader
{
public:
	FAddHeader(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UUI_GameEventTeamHeaderWidget_C GetHeader() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UUI_GameEventTeamHeaderWidget_C(ptr_addr);
	}
	struct UPanelSlot GetCallFunc_AddChild_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UPanelSlot(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddWinCounter
{
public:
	FAddWinCounter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetCallFunc_IsValid_ReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddStatWidget
{
public:
	FAddStatWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UGameEventParticipantStatsWidget GetWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UGameEventParticipantStatsWidget(ptr_addr);
	}
	struct UPanelSlot GetCallFunc_AddChild_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UPanelSlot(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetTeamScore
{
public:
	FSetTeamScore(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetScore() {
		return memory.read<float>(m_addr + 0);
	}
	bool GetCallFunc_IsValid_ReturnValue() {
		return memory.read<bool>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetStatWidget
{
public:
	FGetStatWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct UGameEventParticipantStatsWidget GetWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UGameEventParticipantStatsWidget(ptr_addr);
	}
	struct UWidget GetCallFunc_GetChildAt_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UWidget(ptr_addr);
	}
	struct UGameEventParticipantStatsWidget GetK2Node_DynamicCast_AsGame_Event_Participant_Stats_Widget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct UGameEventParticipantStatsWidget(ptr_addr);
	}
	bool GetK2Node_DynamicCast_bSuccess() {
		return memory.read<bool>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetStatWidgetCount
{
public:
	FGetStatWidgetCount(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetCount() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetCallFunc_GetChildrenCount_ReturnValue() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};