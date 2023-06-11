namespace offsets
{
	namespace ABuilding
	{
			constexpr auto _ladderMarkers = 0x230; // Size: 16, Type: struct TArray<struct FLadderMarker>
			constexpr auto _windowMarkers = 0x250; // Size: 16, Type: struct TArray<struct FWindowMarker>
			constexpr auto _windowMarkersDynamic = 0x260; // Size: 16, Type: struct TArray<struct FWindowMarker>
			constexpr auto _windowMarkerModifiers = 0x270; // Size: 16, Type: struct TArray<struct FWindowMarkerModifier>
			constexpr auto _isCleared = 0x280; // Size: 1, Type: bool
			constexpr auto _isClaimable = 0x281; // Size: 1, Type: bool
			constexpr auto _doors = 0x288; // Size: 80, Type: struct TMap<struct FString, struct ADoor*>
			constexpr auto _fortifications = 0x2d8; // Size: 16, Type: struct TArray<struct UFortificationComponent*>
	}
} 
