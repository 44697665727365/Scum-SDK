namespace offsets
{
	namespace UVehicleWheel
	{
			constexpr auto CollisionMesh = 0x28; // Size: 8, Type: struct UStaticMesh*
			constexpr auto bDontCreateShape = 0x30; // Size: 1, Type: bool
			constexpr auto bAutoAdjustCollisionSize = 0x31; // Size: 1, Type: bool
			constexpr auto Offset = 0x34; // Size: 12, Type: struct FVector
			constexpr auto ShapeRadius = 0x40; // Size: 4, Type: float
			constexpr auto ShapeWidth = 0x44; // Size: 4, Type: float
			constexpr auto Mass = 0x48; // Size: 4, Type: float
			constexpr auto DampingRate = 0x4c; // Size: 4, Type: float
			constexpr auto SteerAngle = 0x50; // Size: 4, Type: float
			constexpr auto bAffectedByHandbrake = 0x54; // Size: 1, Type: bool
			constexpr auto TireType = 0x58; // Size: 8, Type: struct UTireType*
			constexpr auto TireConfig = 0x60; // Size: 8, Type: struct UTireConfig*
			constexpr auto LatStiffMaxLoad = 0x68; // Size: 4, Type: float
			constexpr auto LatStiffValue = 0x6c; // Size: 4, Type: float
			constexpr auto LongStiffValue = 0x70; // Size: 4, Type: float
			constexpr auto SuspensionForceOffset = 0x74; // Size: 4, Type: float
			constexpr auto SuspensionMaxRaise = 0x78; // Size: 4, Type: float
			constexpr auto SuspensionMaxDrop = 0x7c; // Size: 4, Type: float
			constexpr auto SuspensionNaturalFrequency = 0x80; // Size: 4, Type: float
			constexpr auto SuspensionDampingRatio = 0x84; // Size: 4, Type: float
			constexpr auto SweepType = 0x88; // Size: 1, Type: char EWheelSweepType
			constexpr auto MaxBrakeTorque = 0x8c; // Size: 4, Type: float
			constexpr auto MaxHandBrakeTorque = 0x90; // Size: 4, Type: float
			constexpr auto VehicleSim = 0x98; // Size: 8, Type: struct UWheeledVehicleMovementComponent*
			constexpr auto WheelIndex = 0xa0; // Size: 4, Type: int32_t
			constexpr auto DebugLongSlip = 0xa4; // Size: 4, Type: float
			constexpr auto DebugLatSlip = 0xa8; // Size: 4, Type: float
			constexpr auto DebugNormalizedTireLoad = 0xac; // Size: 4, Type: float
			constexpr auto DebugWheelTorque = 0xb4; // Size: 4, Type: float
			constexpr auto DebugLongForce = 0xb8; // Size: 4, Type: float
			constexpr auto DebugLatForce = 0xbc; // Size: 4, Type: float
			constexpr auto Location = 0xc0; // Size: 12, Type: struct FVector
			constexpr auto OldLocation = 0xcc; // Size: 12, Type: struct FVector
			constexpr auto Velocity = 0xd8; // Size: 12, Type: struct FVector
	}
} 
