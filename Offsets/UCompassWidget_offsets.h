namespace offsets
{
	namespace UCompassWidget
	{
			constexpr auto _compassTrack = 0x268; // Size: 8, Type: struct UImage*
			constexpr auto _compassTrackNorthOnly = 0x270; // Size: 8, Type: struct UTexture2D*
			constexpr auto _compassTrackCardinalOnly = 0x278; // Size: 8, Type: struct UTexture2D*
			constexpr auto _compassTrackCardinalAndIntercardinal = 0x280; // Size: 8, Type: struct UTexture2D*
			constexpr auto _compassTrackEverything = 0x288; // Size: 8, Type: struct UTexture2D*
			constexpr auto _offset = 0x290; // Size: 8, Type: struct FVector2D
			constexpr auto _compassTrackWidthMultiplier = 0x298; // Size: 4, Type: float
	}
} 
