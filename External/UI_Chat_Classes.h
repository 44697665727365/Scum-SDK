#pragma once 
#include <UI_Chat_Structs.h>
 
 
 
class UUI_Chat_C
{
public:
	UUI_Chat_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UImage GetImage_1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 896);
		return struct UImage(ptr_addr);
	}
	struct TArray<struct FString> GetActiveSuggestions() {
		return memory.read<struct TArray<struct FString>>(m_addr + 904);
	}
	int32_t GetCurrentSuggestion() {
		return memory.read<int32_t>(m_addr + 920);
	}
	struct TArray<struct UUI_ChatSuggestion_C> GetActiveSuggestionWidgets() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 928);
		return struct TArray<struct UUI_ChatSuggestion_C>(ptr_addr);
	}
	bool GetSuggestionsUpdated() {
		return memory.read<bool>(m_addr + 944);
	}
	bool GetSuggestionSelected() {
		return memory.read<bool>(m_addr + 945);
	}
	bool GetIsInHistoryMode() {
		return memory.read<bool>(m_addr + 946);
	}

private:
	std::uint64_t m_addr = 0;
};


