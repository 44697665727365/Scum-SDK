namespace offsets
{
	namespace AWorldEventManager
	{
			constexpr auto EventTypes = 0x220; // Size: 16, Type: struct TArray<AWorldEvent*>
			constexpr auto TimeBetweenEventsMin = 0x230; // Size: 4, Type: float
			constexpr auto TimeBetweenEventsMax = 0x234; // Size: 4, Type: float
			constexpr auto _events = 0x240; // Size: 16, Type: struct TArray<struct AWorldEvent*>
	}
} 
