namespace offsets
{
	namespace AGameEventBorder
	{
			constexpr auto Mesh = 0x220; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto Material = 0x228; // Size: 8, Type: struct UMaterialInstanceDynamic*
			constexpr auto SoundSpline = 0x230; // Size: 8, Type: struct UChildActorComponent*
			constexpr auto AudioEvent = 0x238; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _state = 0x240; // Size: 1, Type: uint8_t 
			constexpr auto _desiredRadius = 0x244; // Size: 4, Type: float
			constexpr auto _desiredOffset = 0x24c; // Size: 12, Type: struct FVector
			constexpr auto _desiredHeat = 0x264; // Size: 4, Type: float
			constexpr auto _radiusChangeSpeed = 0x26c; // Size: 4, Type: float
			constexpr auto _offsetChangeSpeed = 0x270; // Size: 4, Type: float
			constexpr auto _heatChangeSpeed = 0x274; // Size: 4, Type: float
			constexpr auto _collisionEnabled = 0x278; // Size: 1, Type: bool
			constexpr auto _blockPawns = 0x279; // Size: 1, Type: bool
	}
} 
