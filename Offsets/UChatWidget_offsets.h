namespace offsets
{
	namespace UChatWidget
	{
			constexpr auto _muteButton = 0x260; // Size: 8, Type: struct UButton*
			constexpr auto _muteText = 0x268; // Size: 8, Type: struct UTextBlock*
			constexpr auto _backgroundImage = 0x270; // Size: 8, Type: struct UImage*
			constexpr auto _chatScrollBox = 0x278; // Size: 8, Type: struct UScrollBox*
			constexpr auto _suggestionsScrollBox = 0x280; // Size: 8, Type: struct UScrollBox*
			constexpr auto _suggestionsDropDown = 0x288; // Size: 8, Type: struct UOverlay*
			constexpr auto _inputText = 0x290; // Size: 8, Type: struct UEditableTextBox*
			constexpr auto _suggestionTextBox = 0x298; // Size: 8, Type: struct UEditableTextBox*
			constexpr auto _chatTypeIndicator = 0x2a0; // Size: 8, Type: struct UTextBlock*
			constexpr auto _localChatColor = 0x2a8; // Size: 16, Type: struct FLinearColor
			constexpr auto _globalChatColor = 0x2b8; // Size: 16, Type: struct FLinearColor
			constexpr auto _squadChatColor = 0x2c8; // Size: 16, Type: struct FLinearColor
			constexpr auto _serverChatColor = 0x2d8; // Size: 16, Type: struct FLinearColor
			constexpr auto _errorChatColor = 0x2e8; // Size: 16, Type: struct FLinearColor
			constexpr auto _defaultChatColor = 0x2f8; // Size: 16, Type: struct FLinearColor
			constexpr auto _commandsOnlyChatColor = 0x308; // Size: 16, Type: struct FLinearColor
			constexpr auto _suggestionsTextColor = 0x318; // Size: 16, Type: struct FLinearColor
			constexpr auto _adminChatColor = 0x328; // Size: 16, Type: struct FLinearColor
			constexpr auto _chatSuggestionWidgetClass = 0x338; // Size: 8, Type: UChatSuggestionWidget*
			constexpr auto _adminCommandCompletionManager = 0x340; // Size: 8, Type: struct UAdminCommandCompletionManager*
	}
} 
