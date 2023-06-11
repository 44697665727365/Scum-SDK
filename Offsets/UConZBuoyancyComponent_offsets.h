namespace offsets
{
	namespace UConZBuoyancyComponent
	{
			constexpr auto TestPoints = 0xb0; // Size: 16, Type: struct TArray<struct FBuoyancyTestPoint>
			constexpr auto NumTestPointGroups = 0xc0; // Size: 4, Type: int32_t
			constexpr auto VelocityDamper = 0xc4; // Size: 12, Type: struct FVector
			constexpr auto FluidLinearDamping = 0xd0; // Size: 4, Type: float
			constexpr auto FluidAngularDamping = 0xd4; // Size: 4, Type: float
			constexpr auto ClampMaxVelocity = 0xd8; // Size: 1, Type: bool
			constexpr auto MaxUnderwaterVelocity = 0xdc; // Size: 4, Type: float
			constexpr auto ShouldApplyWaterVelocity = 0xe0; // Size: 1, Type: bool
			constexpr auto WaterVelocityMultiplier = 0xe4; // Size: 4, Type: float
			constexpr auto bDrawDebug = 0xe8; // Size: 1, Type: bool
			constexpr auto _isUnderwater = 0xe9; // Size: 1, Type: bool
			constexpr auto _densityMultiplier = 0xec; // Size: 4, Type: float
	}
} 
