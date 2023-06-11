#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FExecuteUbergraph_UI_TooltipOverviewTextElement
{
public:
	FExecuteUbergraph_UI_TooltipOverviewTextElement(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetEntryPoint() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FText GetK2Node_Event_value_2() {
		return memory.read<struct FText>(m_addr + 8);
	}
	bool GetK2Node_Event_IsDesignTime() {
		return memory.read<bool>(m_addr + 32);
	}
	float GetK2Node_Event_value() {
		return memory.read<float>(m_addr + 36);
	}
	float GetCallFunc_Abs_ReturnValue() {
		return memory.read<float>(m_addr + 40);
	}
	struct FFormatArgumentData GetK2Node_MakeStruct_FormatArgumentData() {
		return memory.read<struct FFormatArgumentData>(m_addr + 48);
	}
	struct FText GetCallFunc_ColorToHex_text() {
		return memory.read<struct FText>(m_addr + 112);
	}
	struct FText GetCallFunc_ColorToHex_text_2() {
		return memory.read<struct FText>(m_addr + 136);
	}
	struct FFormatArgumentData GetK2Node_MakeStruct_FormatArgumentData_2() {
		return memory.read<struct FFormatArgumentData>(m_addr + 160);
	}
	struct FFormatArgumentData GetK2Node_MakeStruct_FormatArgumentData_3() {
		return memory.read<struct FFormatArgumentData>(m_addr + 224);
	}
	struct TArray<struct FFormatArgumentData> GetK2Node_MakeArray_Array() {
		return memory.read<struct TArray<struct FFormatArgumentData>>(m_addr + 288);
	}
	struct FText GetCallFunc_Format_ReturnValue() {
		return memory.read<struct FText>(m_addr + 304);
	}
	struct FText GetCallFunc_Conv_FloatToText_ReturnValue() {
		return memory.read<struct FText>(m_addr + 328);
	}
	struct FFormatArgumentData GetK2Node_MakeStruct_FormatArgumentData_4() {
		return memory.read<struct FFormatArgumentData>(m_addr + 352);
	}
	struct TArray<struct FFormatArgumentData> GetK2Node_MakeArray_Array_2() {
		return memory.read<struct TArray<struct FFormatArgumentData>>(m_addr + 416);
	}
	struct FText GetCallFunc_Format_ReturnValue_2() {
		return memory.read<struct FText>(m_addr + 432);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnTextDataChanged
{
public:
	FOnTextDataChanged(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetValue() {
		return memory.read<struct FText>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnNumberDataChanged
{
public:
	FOnNumberDataChanged(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FPreConstruct
{
public:
	FPreConstruct(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetIsDesignTime() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};