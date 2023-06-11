namespace offsets
{
	namespace ADistantLevel
	{
			constexpr auto _previewMeshComponent = 0x220; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto _streamingLevelName = 0x228; // Size: 16, Type: struct FString
			constexpr auto _meshStreamingBehavior = 0x238; // Size: 1, Type: uint8_t 
			constexpr auto _maxDrawDistance = 0x23c; // Size: 4, Type: float
			constexpr auto _neverDistanceCull = 0x240; // Size: 1, Type: bool
			constexpr auto _meshBounds = 0x244; // Size: 28, Type: struct FBoxSphereBounds
			constexpr auto _collisionMesh = 0x260; // Size: 40, Type: struct TSoftObjectPtr<UStaticMesh>
			constexpr auto _meshLODs = 0x288; // Size: 16, Type: struct TArray<struct TSoftObjectPtr<UStaticMesh>>
	}
} 
