namespace offsets
{
	namespace AGameEventLocationMarker
	{
			constexpr auto LocationName = 0x220; // Size: 24, Type: struct FText
			constexpr auto LocationImage = 0x238; // Size: 8, Type: struct UTexture2D*
			constexpr auto LocationImageGrayscale = 0x240; // Size: 8, Type: struct UTexture2D*
			constexpr auto EligibleForRandomPick = 0x248; // Size: 1, Type: bool
			constexpr auto GameEventClass = 0x250; // Size: 8, Type: AGameEventBase*
			constexpr auto GameEventParameters = 0x258; // Size: 392, Type: struct FGameEventParameters
			constexpr auto BorderClass = 0x3e0; // Size: 8, Type: AGameEventBorder*
			constexpr auto AreaCenterOffset = 0x3e8; // Size: 12, Type: struct FVector
			constexpr auto Radius = 0x3f4; // Size: 4, Type: float
			constexpr auto SpawnAreas = 0x3f8; // Size: 16, Type: struct TArray<struct FSpawnArea>
			constexpr auto Sphere = 0x408; // Size: 8, Type: struct USphereComponent*
			constexpr auto Sprite = 0x410; // Size: 8, Type: struct UBillboardComponent*
	}
} 
