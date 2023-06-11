namespace offsets
{
	namespace AItemContainer
	{
			constexpr auto _rootComponent = 0x250; // Size: 8, Type: struct USceneComponent*
			constexpr auto _canBeForceUnlocked = 0x258; // Size: 1, Type: bool
			constexpr auto _forceUnlockTime = 0x25c; // Size: 4, Type: float
			constexpr auto _forceUnlockMovementAcceptanceRadius = 0x260; // Size: 4, Type: float
			constexpr auto _unlockPositionMarker = 0x270; // Size: 48, Type: struct FUnlockLocation
			constexpr auto _upgradeItemsClasses = 0x2a8; // Size: 16, Type: struct TArray<UObject*>
			constexpr auto _lockData = 0x2b8; // Size: 16, Type: struct TArray<struct ULockData*>
			constexpr auto _originalUpgradeItemClasses = 0x2d8; // Size: 16, Type: struct TArray<UObject*>
			constexpr auto _originalLockData = 0x2e8; // Size: 16, Type: struct TArray<struct ULockData*>
			constexpr auto _ignoreServerSettings = 0x2f8; // Size: 1, Type: bool
			constexpr auto _disableSerialization = 0x321; // Size: 1, Type: bool
			constexpr auto _shouldBeResetOnNewSession = 0x322; // Size: 1, Type: bool
			constexpr auto _famePointAwardTag = 0x324; // Size: 8, Type: struct FGameplayTag
	}
} 
