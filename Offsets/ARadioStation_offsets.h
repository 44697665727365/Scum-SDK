namespace offsets
{
	namespace ARadioStation
	{
			constexpr auto _stationName = 0x250; // Size: 8, Type: struct FName
			constexpr auto _programsData = 0x258; // Size: 16, Type: struct TArray<struct FRadioProgramData>
			constexpr auto _maxTracksToQueue = 0x268; // Size: 4, Type: int32_t
			constexpr auto _currentIndex = 0x26c; // Size: 4, Type: int32_t
			constexpr auto _playlist = 0x270; // Size: 16, Type: struct TArray<struct URadioTrack*>
			constexpr auto _elapsedTime = 0x280; // Size: 4, Type: float
	}
} 
