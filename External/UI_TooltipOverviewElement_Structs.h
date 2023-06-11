#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FOnNumberDataChanged
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
};class FExecuteUbergraph_UI_TooltipOverviewElement
{
public:
	FExecuteUbergraph_UI_TooltipOverviewElement(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetEntryPoint() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FText GetCallFunc_ColorToHex_text() {
		return memory.read<struct FText>(m_addr + 8);
	}
	bool GetK2Node_Event_IsDesignTime() {
		return memory.read<bool>(m_addr + 32);
	}
	struct FFormatArgumentData GetK2Node_MakeStruct_FormatArgumentData() {
		return memory.read<struct FFormatArgumentData>(m_addr + 40);
	}
	struct TArray<struct FFormatArgumentData> GetK2Node_MakeArray_Array() {
		return memory.read<struct TArray<struct FFormatArgumentData>>(m_addr + 104);
	}
	float GetK2Node_Event_value_2() {
		return memory.read<float>(m_addr + 120);
	}
	struct FText GetCallFunc_Conv_FloatToText_ReturnValue() {
		return memory.read<struct FText>(m_addr + 128);
	}
	struct FText GetK2Node_Event_value() {
		return memory.read<struct FText>(m_addr + 152);
	}
	struct FFormatArgumentData GetK2Node_MakeStruct_FormatArgumentData_2() {
		return memory.read<struct FFormatArgumentData>(m_addr + 176);
	}
	struct FText GetCallFunc_Format_ReturnValue() {
		return memory.read<struct FText>(m_addr + 240);
	}
	struct TArray<struct FFormatArgumentData> GetK2Node_MakeArray_Array_2() {
		return memory.read<struct TArray<struct FFormatArgumentData>>(m_addr + 264);
	}
	struct FText GetCallFunc_Format_ReturnValue_2() {
		return memory.read<struct FText>(m_addr + 280);
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