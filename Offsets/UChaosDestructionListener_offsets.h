namespace offsets
{
	namespace UChaosDestructionListener
	{
			constexpr auto bIsCollisionEventListeningEnabled = 0x1f8; // Size: 1, Type: char
			constexpr auto bIsBreakingEventListeningEnabled = 0x1f8; // Size: 1, Type: char
			constexpr auto bIsTrailingEventListeningEnabled = 0x1f8; // Size: 1, Type: char
			constexpr auto CollisionEventRequestSettings = 0x1fc; // Size: 24, Type: struct FChaosCollisionEventRequestSettings
			constexpr auto BreakingEventRequestSettings = 0x214; // Size: 24, Type: struct FChaosBreakingEventRequestSettings
			constexpr auto TrailingEventRequestSettings = 0x22c; // Size: 24, Type: struct FChaosTrailingEventRequestSettings
			constexpr auto ChaosSolverActors = 0x248; // Size: 80, Type: struct TSet<struct AChaosSolverActor*>
			constexpr auto GeometryCollectionActors = 0x298; // Size: 80, Type: struct TSet<struct AGeometryCollectionActor*>
			constexpr auto OnCollisionEvents = 0x2e8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnBreakingEvents = 0x2f8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnTrailingEvents = 0x308; // Size: 16, Type: struct FMulticastInlineDelegate
	}
} 
