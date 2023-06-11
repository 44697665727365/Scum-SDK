namespace offsets
{
	namespace ADcxBike
	{
			constexpr auto _shouldApplyStabilization = 0xd64; // Size: 1, Type: bool
			constexpr auto _centerOfMassOffset = 0xd68; // Size: 12, Type: struct FVector
			constexpr auto _centerOfMassOffsetNotMounted = 0xd74; // Size: 12, Type: struct FVector
			constexpr auto _angVelXDamping = 0xd80; // Size: 4, Type: float
			constexpr auto _angVelYDamping = 0xd84; // Size: 4, Type: float
			constexpr auto _angVelZDamping = 0xd88; // Size: 4, Type: float
			constexpr auto _bicycleDriftAmount = 0xd90; // Size: 4, Type: float
			constexpr auto _bicycleDriftLeanAmount = 0xd94; // Size: 4, Type: float
			constexpr auto _impactSpeedForUnmount = 0xd98; // Size: 4, Type: float
	}
} 
