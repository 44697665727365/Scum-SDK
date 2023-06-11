namespace offsets
{
	namespace UCharacterAction
	{
			constexpr auto PreActionsDescriptions = 0x58; // Size: 16, Type: struct TArray<struct UCharacterActionDescription*>
			constexpr auto PostActionsDescriptions = 0x68; // Size: 16, Type: struct TArray<struct UCharacterActionDescription*>
			constexpr auto ParentAction = 0x78; // Size: 8, Type: struct UCharacterAction*
			constexpr auto _preActions = 0x80; // Size: 16, Type: struct TArray<struct UCharacterAction*>
			constexpr auto _postActions = 0x90; // Size: 16, Type: struct TArray<struct UCharacterAction*>
			constexpr auto _progressWidget = 0xa0; // Size: 8, Type: struct UActionProgressWidget*
			constexpr auto _description = 0xb0; // Size: 8, Type: struct UCharacterActionDescription*
	}
} 
