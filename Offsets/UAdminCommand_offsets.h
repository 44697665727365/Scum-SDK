namespace offsets
{
	namespace UAdminCommand
	{
			constexpr auto _verb = 0x28; // Size: 16, Type: struct FString
			constexpr auto _argumentDescriptions = 0x38; // Size: 16, Type: struct TArray<struct FAdminCommandArgumentDescription>
			constexpr auto _numberOfRequiredArguments = 0x48; // Size: 4, Type: int32_t
			constexpr auto _numberOfRepeatingArguments = 0x4c; // Size: 4, Type: int32_t
			constexpr auto _isEnabled = 0x50; // Size: 1, Type: bool
			constexpr auto _isEnabledInShippingBuild = 0x51; // Size: 1, Type: bool
			constexpr auto _isAdminStatusRequired = 0x52; // Size: 1, Type: bool
			constexpr auto _isDeveloperStatusRequired = 0x53; // Size: 1, Type: bool
			constexpr auto _shouldExecuteOnServer = 0x54; // Size: 1, Type: bool
			constexpr auto _shouldExecuteOnClient = 0x55; // Size: 1, Type: bool
			constexpr auto _shouldDisableSingleplayerAchievementsIfExecuted = 0x56; // Size: 1, Type: bool
			constexpr auto _description = 0x58; // Size: 24, Type: struct FText
	}
} 
