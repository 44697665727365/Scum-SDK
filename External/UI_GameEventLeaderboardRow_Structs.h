#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FGet_Background_BrushColor
{
public:
	FGet_Background_BrushColor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLinearColor GetReturnValue() {
		return memory.read<struct FLinearColor>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetStats
{
public:
	FSetStats(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetcharacterName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FEventsRankingStats GetCharacterStats() {
		return memory.read<struct FEventsRankingStats>(m_addr + 16);
	}
	struct FText GetCallFunc_Conv_IntToText_ReturnValue() {
		return memory.read<struct FText>(m_addr + 64);
	}
	bool GetCallFunc_EqualEqual_IntInt_ReturnValue() {
		return memory.read<bool>(m_addr + 88);
	}
	float GetCallFunc_Conv_IntToFloat_ReturnValue() {
		return memory.read<float>(m_addr + 92);
	}
	struct FText GetCallFunc_Conv_IntToText_ReturnValue_2() {
		return memory.read<struct FText>(m_addr + 96);
	}
	float GetCallFunc_Conv_IntToFloat_ReturnValue_2() {
		return memory.read<float>(m_addr + 120);
	}
	struct FText GetCallFunc_Conv_IntToText_ReturnValue_3() {
		return memory.read<struct FText>(m_addr + 128);
	}
	float GetCallFunc_Divide_FloatFloat_ReturnValue() {
		return memory.read<float>(m_addr + 152);
	}
	struct FText GetCallFunc_Conv_FloatToText_ReturnValue() {
		return memory.read<struct FText>(m_addr + 160);
	}
	struct FText GetCallFunc_Conv_FloatToText_ReturnValue_2() {
		return memory.read<struct FText>(m_addr + 184);
	}
	int32_t GetCallFunc_FTrunc_ReturnValue() {
		return memory.read<int32_t>(m_addr + 208);
	}
	struct FString GetCallFunc_Left_ReturnValue() {
		return memory.read<struct FString>(m_addr + 216);
	}
	struct FText GetCallFunc_Conv_IntToText_ReturnValue_4() {
		return memory.read<struct FText>(m_addr + 232);
	}
	struct FText GetCallFunc_Conv_StringToText_ReturnValue() {
		return memory.read<struct FText>(m_addr + 256);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetRank
{
public:
	FSetRank(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetRank() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FText GetCallFunc_Conv_IntToText_ReturnValue() {
		return memory.read<struct FText>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};