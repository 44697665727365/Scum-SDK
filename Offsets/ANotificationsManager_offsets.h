namespace offsets
{
	namespace ANotificationsManager
	{
			constexpr auto _queuedNotifications = 0x220; // Size: 80, Type: struct TMap<struct FDbIntegerId, struct UNotificationDescription*>
			constexpr auto _queuedNotificationChains = 0x270; // Size: 16, Type: struct TArray<struct UNotificationChain*>
			constexpr auto _notificationTimeout = 0x2d0; // Size: 8, Type: int64_t
	}
} 
