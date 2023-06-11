namespace offsets
{
	namespace UCableComponent
	{
			constexpr auto bAttachStart = 0x478; // Size: 1, Type: bool
			constexpr auto bAttachEnd = 0x479; // Size: 1, Type: bool
			constexpr auto AttachEndTo = 0x480; // Size: 40, Type: struct FComponentReference
			constexpr auto AttachEndToSocketName = 0x4a8; // Size: 8, Type: struct FName
			constexpr auto EndLocation = 0x4b0; // Size: 12, Type: struct FVector
			constexpr auto CableLength = 0x4bc; // Size: 4, Type: float
			constexpr auto NumSegments = 0x4c0; // Size: 4, Type: int32_t
			constexpr auto SubstepTime = 0x4c4; // Size: 4, Type: float
			constexpr auto SolverIterations = 0x4c8; // Size: 4, Type: int32_t
			constexpr auto bEnableStiffness = 0x4cc; // Size: 1, Type: bool
			constexpr auto bUseSubstepping = 0x4cd; // Size: 1, Type: bool
			constexpr auto bSkipCableUpdateWhenNotVisible = 0x4ce; // Size: 1, Type: bool
			constexpr auto bSkipCableUpdateWhenNotOwnerRecentlyRendered = 0x4cf; // Size: 1, Type: bool
			constexpr auto bEnableCollision = 0x4d0; // Size: 1, Type: bool
			constexpr auto CollisionFriction = 0x4d4; // Size: 4, Type: float
			constexpr auto CableForce = 0x4d8; // Size: 12, Type: struct FVector
			constexpr auto CableGravityScale = 0x4e4; // Size: 4, Type: float
			constexpr auto CableWidth = 0x4e8; // Size: 4, Type: float
			constexpr auto NumSides = 0x4ec; // Size: 4, Type: int32_t
			constexpr auto TileMaterial = 0x4f0; // Size: 4, Type: float
	}
} 
