namespace offsets
{
	namespace AGameEventTransport
	{
			constexpr auto Sphere = 0x220; // Size: 8, Type: struct USphereComponent*
			constexpr auto PodMesh = 0x228; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto TargetMesh = 0x230; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto TravelSpeed = 0x238; // Size: 4, Type: float
			constexpr auto TravelHeight = 0x23c; // Size: 4, Type: float
			constexpr auto HoverHeight = 0x240; // Size: 4, Type: float
			constexpr auto LargerRadius = 0x244; // Size: 4, Type: float
			constexpr auto SmallerRadius = 0x248; // Size: 4, Type: float
			constexpr auto _state = 0x24c; // Size: 1, Type: uint8_t 
			constexpr auto _lastPosition = 0x250; // Size: 12, Type: struct FVector
			constexpr auto _targetPosition = 0x25c; // Size: 12, Type: struct FVector
			constexpr auto _blend = 0x268; // Size: 4, Type: float
	}
} 
