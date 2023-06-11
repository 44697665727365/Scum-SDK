namespace offsets
{
	namespace UUI_Chat_C
	{
			constexpr auto Image_1 = 0x380; // Size: 8, Type: struct UImage*
			constexpr auto ActiveSuggestions = 0x388; // Size: 16, Type: struct TArray<struct FString>
			constexpr auto CurrentSuggestion = 0x398; // Size: 4, Type: int32_t
			constexpr auto ActiveSuggestionWidgets = 0x3a0; // Size: 16, Type: struct TArray<struct UUI_ChatSuggestion_C*>
			constexpr auto SuggestionsUpdated = 0x3b0; // Size: 1, Type: bool
			constexpr auto SuggestionSelected = 0x3b1; // Size: 1, Type: bool
			constexpr auto IsInHistoryMode = 0x3b2; // Size: 1, Type: bool
	}
} 
