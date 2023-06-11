namespace offsets
{
	namespace UDcxVehicleWheelsComponent
	{
			constexpr auto ChassisMass = 0x170; // Size: 4, Type: float
			constexpr auto InertiaTensorScale = 0x174; // Size: 12, Type: struct FVector
			constexpr auto WheelConfigurations = 0x180; // Size: 16, Type: struct TArray<struct FDcxVehicleWheelConfiguration>
			constexpr auto TireLoadFilter = 0x190; // Size: 16, Type: struct FDcxVehicleTireLoadFilterData
			constexpr auto bUseAvoidance = 0x1a0; // Size: 1, Type: bool
			constexpr auto AvoidanceWeight = 0x1a4; // Size: 4, Type: float
			constexpr auto AvoidanceUID = 0x1a8; // Size: 4, Type: int32_t
			constexpr auto AvoidanceGroup = 0x1ac; // Size: 4, Type: struct FNavAvoidanceMask
			constexpr auto GroupsToAvoid = 0x1b0; // Size: 4, Type: struct FNavAvoidanceMask
			constexpr auto GroupsToIgnore = 0x1b4; // Size: 4, Type: struct FNavAvoidanceMask
			constexpr auto ThresholdLongitudinalSpeed = 0x1b8; // Size: 4, Type: float
			constexpr auto LowForwardSpeedSubStepCount = 0x1bc; // Size: 4, Type: int32_t
			constexpr auto HighForwardSpeedSubStepCount = 0x1c0; // Size: 4, Type: int32_t
			constexpr auto DragCoefficient = 0x1c4; // Size: 4, Type: float
			constexpr auto DragArea = 0x1c8; // Size: 4, Type: float
			constexpr auto ThrottleRate = 0x1cc; // Size: 8, Type: struct FDcxVehicleDriveInputRate
			constexpr auto BrakeRate = 0x1d4; // Size: 8, Type: struct FDcxVehicleDriveInputRate
			constexpr auto HandbrakeRate = 0x1dc; // Size: 8, Type: struct FDcxVehicleDriveInputRate
			constexpr auto SteerRate = 0x1e4; // Size: 8, Type: struct FDcxVehicleDriveInputRate
			constexpr auto AvoidanceRadius = 0x1ec; // Size: 4, Type: float
			constexpr auto AvoidanceHeight = 0x1f0; // Size: 4, Type: float
			constexpr auto AvoidanceConsiderationRadius = 0x1f4; // Size: 4, Type: float
			constexpr auto AvoidanceThrottleStep = 0x1f8; // Size: 4, Type: float
			constexpr auto AvoidanceBrakeStep = 0x1fc; // Size: 4, Type: float
			constexpr auto AvoidanceSteerStep = 0x200; // Size: 4, Type: float
			constexpr auto bRecreateRequired = 0x204; // Size: 1, Type: bool
			constexpr auto RawInput = 0x208; // Size: 8, Type: struct UDcxVehicleWheelsRawInput*
			constexpr auto SmoothAnalogControls = 0x210; // Size: 16, Type: struct TArray<float>
			constexpr auto ReplicatedState = 0x220; // Size: 24, Type: struct FDcxVehicleDriveState
			constexpr auto bWasAvoidanceUpdated = 0x238; // Size: 1, Type: bool
			constexpr auto AvoidanceVelocity = 0x23c; // Size: 12, Type: struct FVector
			constexpr auto AvoidanceLockVelocity = 0x248; // Size: 12, Type: struct FVector
			constexpr auto AvoidanceLockTimer = 0x254; // Size: 4, Type: float
	}
} 
