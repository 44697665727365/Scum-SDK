namespace offsets
{
	namespace AGameEventManager
	{
			constexpr auto EventHistoryLimit = 0x220; // Size: 4, Type: int32_t
			constexpr auto _announcedGameEvents = 0x228; // Size: 16, Type: struct TArray<struct AGameEventBase*>
			constexpr auto _currentGameEvents = 0x238; // Size: 16, Type: struct TArray<struct AGameEventBase*>
			constexpr auto _endedGameEvents = 0x248; // Size: 16, Type: struct TArray<struct AGameEventBase*>
	}
} 
