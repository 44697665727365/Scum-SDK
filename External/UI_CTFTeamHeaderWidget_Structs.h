#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FExecuteUbergraph_UI_CTFTeamHeaderWidget
{
public:
	FExecuteUbergraph_UI_CTFTeamHeaderWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetEntryPoint() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FGameEventTeamColours GetK2Node_Event_colours() {
		return memory.read<struct FGameEventTeamColours>(m_addr + 4);
	}
	struct UUI_WinCounter_C GetCallFunc_Create_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 104);
		return struct UUI_WinCounter_C(ptr_addr);
	}
	struct FSlateColor GetK2Node_MakeStruct_SlateColor() {
		return memory.read<struct FSlateColor>(m_addr + 112);
	}
	struct FText GetK2Node_Event_name() {
		return memory.read<struct FText>(m_addr + 152);
	}
	struct AGameEventBase GetK2Node_Event_gameEvent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 176);
		return struct AGameEventBase(ptr_addr);
	}
	struct ABP_CTFGameEvent_C GetK2Node_DynamicCast_AsBP_CTFGame_Event() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 184);
		return struct ABP_CTFGameEvent_C(ptr_addr);
	}
	bool GetK2Node_DynamicCast_bSuccess() {
		return memory.read<bool>(m_addr + 192);
	}
	struct UHorizontalBoxSlot GetCallFunc_AddChildToHorizontalBox_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 200);
		return struct UHorizontalBoxSlot(ptr_addr);
	}
	struct UUI_WinCounter_C GetCallFunc_Create_ReturnValue_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 208);
		return struct UUI_WinCounter_C(ptr_addr);
	}
	struct UHorizontalBoxSlot GetCallFunc_AddChildToHorizontalBox_ReturnValue_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 216);
		return struct UHorizontalBoxSlot(ptr_addr);
	}
	float GetK2Node_Event_Score() {
		return memory.read<float>(m_addr + 224);
	}
	struct FText GetCallFunc_Conv_FloatToText_ReturnValue() {
		return memory.read<struct FText>(m_addr + 232);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetTeamColours
{
public:
	FSetTeamColours(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGameEventTeamColours Getcolours() {
		return memory.read<struct FGameEventTeamColours>(m_addr + 0);
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
};class FSetTeamName
{
public:
	FSetTeamName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetName() {
		return memory.read<struct FText>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPlayerText
{
public:
	FGetPlayerText(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetReturnValue() {
		return memory.read<struct FText>(m_addr + 0);
	}
	struct TArray<struct FFormatArgumentData> GetK2Node_MakeArray_Array() {
		return memory.read<struct TArray<struct FFormatArgumentData>>(m_addr + 24);
	}
	struct TArray<struct FFormatArgumentData> GetK2Node_MakeArray_Array_2() {
		return memory.read<struct TArray<struct FFormatArgumentData>>(m_addr + 40);
	}
	struct FText GetCallFunc_Format_ReturnValue() {
		return memory.read<struct FText>(m_addr + 56);
	}
	struct FText GetCallFunc_Format_ReturnValue_2() {
		return memory.read<struct FText>(m_addr + 80);
	}
	int32_t GetTemp_int_Variable() {
		return memory.read<int32_t>(m_addr + 104);
	}
	int32_t GetCallFunc_GetTeamMemberCount_ReturnValue() {
		return memory.read<int32_t>(m_addr + 108);
	}
	bool GetCallFunc_IsValid_ReturnValue() {
		return memory.read<bool>(m_addr + 112);
	}
	struct FFormatArgumentData GetK2Node_MakeStruct_FormatArgumentData() {
		return memory.read<struct FFormatArgumentData>(m_addr + 120);
	}
	struct TArray<struct FFormatArgumentData> GetK2Node_MakeArray_Array_3() {
		return memory.read<struct TArray<struct FFormatArgumentData>>(m_addr + 184);
	}
	int32_t GetCallFunc_Min_ReturnValue() {
		return memory.read<int32_t>(m_addr + 200);
	}
	struct FText GetCallFunc_Format_ReturnValue_3() {
		return memory.read<struct FText>(m_addr + 208);
	}
	struct FText GetK2Node_Select_Default() {
		return memory.read<struct FText>(m_addr + 232);
	}

private:
	std::uint64_t m_addr = 0;
};