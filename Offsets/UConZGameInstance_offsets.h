namespace offsets
{
	namespace UConZGameInstance
	{
			constexpr auto CommonMaps = 0x1a8; // Size: 120, Type: struct FCommonMaps
			constexpr auto CharacterCreationMenuContext = 0x220; // Size: 48, Type: struct FCharacterCreationMenuContext
			constexpr auto NetworkFailed = 0x250; // Size: 1, Type: bool
			constexpr auto WasKickedFromGameSession = 0x251; // Size: 1, Type: bool
			constexpr auto GameplayLogLogin = 0x268; // Size: 8, Type: struct UGameplayLog*
			constexpr auto GameplayLogAdmin = 0x270; // Size: 8, Type: struct UGameplayLog*
			constexpr auto GameplayLogEventKill = 0x278; // Size: 8, Type: struct UGameplayLog*
			constexpr auto GameplayLogKill = 0x280; // Size: 8, Type: struct UGameplayLog*
			constexpr auto GameplayLogViolations = 0x288; // Size: 8, Type: struct UGameplayLog*
			constexpr auto GameplayLogChat = 0x290; // Size: 8, Type: struct UGameplayLog*
			constexpr auto GameplayLogEconomy = 0x298; // Size: 8, Type: struct UGameplayLog*
			constexpr auto GameplayLogMiscellanious = 0x2a0; // Size: 8, Type: struct UGameplayLog*
			constexpr auto GameplayLogFamePoints = 0x2a8; // Size: 8, Type: struct UGameplayLog*
			constexpr auto _databaseConnections = 0x2e8; // Size: 80, Type: struct TMap<uint32_t, struct UDbConnection*>
			constexpr auto _dedicatedServerRequest = 0x370; // Size: 8, Type: struct UDedicatedServerRequest*
			constexpr auto _userManager = 0x378; // Size: 8, Type: struct UUserManager*
			constexpr auto _currentUser = 0x380; // Size: 8, Type: struct UUser*
			constexpr auto _currentUserProfile = 0x388; // Size: 8, Type: struct UUserProfile*
			constexpr auto _entitySystemClass = 0x390; // Size: 8, Type: UEntitySystem*
			constexpr auto _entitySystem = 0x398; // Size: 8, Type: struct UEntitySystem*
			constexpr auto _loadingScreenTexture = 0x3f0; // Size: 8, Type: struct UTexture2D*
			constexpr auto _loadingScreen = 0x3f8; // Size: 8, Type: struct ULoadingScreen*
			constexpr auto _adminCommandRegistry = 0x488; // Size: 8, Type: struct UAdminCommandRegistry*
	}
} 
